using System.Collections;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using unityroom.Api;

public class PlayerController : MonoBehaviour
{
    [Header("PlayerMasterData")]
    [SerializeField] PlayerMasterData playerMasterData;

    [Header("PlayerFlagManager")]
    [SerializeField] PlayerFlagManager playerFlagManager;

    [Header("スコアのUI")]
    [SerializeField] public TMP_Text UI_ScoreNum;
    [Header("スコアの差分のUI")]
    [SerializeField] public TMP_Text UI_ScoreDifference;

    [Header("アイテム取得のSE")]
    [SerializeField] AudioClip SE_GetScore;
    [Header("いま獲得したスコアを表示したかのフラグ")]
    [HideInInspector]public bool isScoreGotNowShowed = false;

    [Header("ジャンプ時のパーティクルのプレハブ")]
    [SerializeField] GameObject particlePrefab;

    #region Var_respawn
    [Header("プレイヤーの復活地点")]
    [SerializeField] GameObject playerRespawnPos;
    #endregion

    #region Var_Image
    [Header("プレイヤーの画像：通常")]
    [SerializeField] Sprite image_Normal;
    [Header("プレイヤーの画像：負傷")]
    [SerializeField] Sprite image_Damaged;
    [Header("プレイヤーの画像：クリア")]
    [SerializeField] Sprite image_Cleared;
    [Header("プレイヤーの画像：満腹度が0になったとき")]
    [SerializeField] Sprite image_Hunger;
    #endregion

    #region Var_CV
    [Header("オーディオソース: 負傷用")]
    [SerializeField] AudioSource audioSource_Hurt;
    [Header("オーディオソース: 掛け声用")]
    [SerializeField] AudioSource audioSource_Yell;
    [Header("オーディオソース: ポータル吸い込まれ用")]
    public AudioSource audioSource_Portal;
    [Header("オーディオソース: 出発用")]
    [SerializeField] AudioSource audioSource_Departure;
    [Header("オーディオソース: 空腹時")]
    [SerializeField] AudioSource audioSource_Hunger;
    [Header("オーディオソース: フェードアウト用")]
    [SerializeField] AudioSource audioSource_FadeOut;
    [Header("セリフ: 負傷")]
    [SerializeField] AudioClip[] CV_Hurt;
    [Header("セリフ: 掛け声")]
    [SerializeField] AudioClip[] CV_Yell;
    [Header("セリフ: ポータル吸い込まれ")]
    public AudioClip[] CV_Portal;
    [Header("セリフ: 出発")]
    [SerializeField] AudioClip CV_Departure;
    [Header("セリフ: 空腹時")]
    [SerializeField] AudioClip CV_Hunger;
    [Header("SE：空腹時のフェードアウト用")]
    [SerializeField] AudioClip SE_FadeOut;
    private int currentClipIndex = 0; //AudioClipのインデックス
    #endregion

    #region SatietyGauge
    [Header("満腹度ゲージ")]
    [SerializeField] Slider satietyGauge;
    [Header("満腹度ゲージ：数値")]
    [SerializeField] TMP_Text satietyGaugeText;
    #endregion

    #region Var_Goal
        private float initialToPortalSpeed; //ポータルへ向かう初速度
        float currentSpeed; //現在のポータルへ向かう速度
        float elapsedTime; //経過時間
    #endregion

    [Header("土管と同速でクリア後ポータルに向かわせるためのアタッチ")]
    [SerializeField]PipeController pipeController;

    #region Var_Internal
        Color originalColor;
        Rigidbody2D playerRB;
        Collider2D playerCollider;
        float usualGravityScale = 1.35f; //重力加速度
        bool isSayCollided = false; //負傷時のセリフの再生フラグ
        bool isSayHunger = false; //満腹度が0になったときのセリフの再生フラグ
        bool isHungerStart = false; //満腹度０になった瞬間のフラグ
        SpriteRenderer playerImage;
        private float originalScale; //プレイヤーの画像の大きさの元に戻すための変数
        bool hasScoreSent = false; //スコアを送信したかどうかのフラグ
        bool hasFadeOutSEPlayed = false; //フェードアウト用のSEを再生したかどうかのフラグ
        float scoreDifference = 0f; //スコアの差分
    #endregion


#region ゴール前の関数
    // Start is called before the first frame update
    void Start()
    {
        Application.targetFrameRate = 60; //開発中のフレームレートを60に固定
        playerRB = GetComponent<Rigidbody2D>();
        playerCollider = GetComponent<Collider2D>();
        playerImage = GetComponent<SpriteRenderer>();
        playerRB.gravityScale = 0f;
        originalScale = transform.localScale.x;
        originalColor = playerImage.color;
        playerFlagManager.isGoal = false;
        playerFlagManager.isGameEnd = false;

        PipeController.isAllPipeMoving = true;

        satietyGauge.maxValue = playerMasterData.gaugeMax; //スライダーの最大値を既定の100に設定
        satietyGauge.minValue = playerMasterData.gaugeMin; //スライダーの最小値を既定の0に設定
        satietyGauge.value = PlayerStatus.gaugeCurrentValue; //スライダーの値を既定の100に設定
        satietyGaugeText.SetText(PlayerStatus.gaugeCurrentValue.ToString("f1")); //スライダーの値を既定の100に設定

        if(PlayerStatus.gaugeCurrentValue == 100) //PlayAgainで呼び出されないようにする
        {
            PlayerStatus.gaugeCurrentValue = satietyGauge.value; //gaugeCurrentValueはstatic変数、シーンが変わっても持ち越されうる値
        }

        // イベントの購読
        // 別のクラスで定義されたイベントを購読させるのはこういう感じにやります
        // こうすることで、イベントが発生したときに、このクラスのメソッドが呼ばれるようになります
        // なんとなくこういう手段を知りたがっていた気がしたので実験的にやってますが、そんなにデバッグしてないので色々見てみてください
        playerFlagManager.deathColliderEvent += PlayerInoperable;
        // ここにゴール用/ポータル用のイベントも追加できそうな気がしますよね（なんとなく）
        // playerFlagManager.goalColliderEve... 的な
    }

    // ★:入力系の処理はこちらに書くといいかもです
    void Update()
    {
        // ★：こちらは常に処理するので、Updateの最初に書いてますね、分かりやすいです
        // 初回のジャンプがまだなら最初のフレームは以下の処理だけ行う
        // 最初のジャンプの待機中に満腹度を減らさせないため

        // ジャンプ条件チェック && 入力情報チェック
        if (IsCanJump() && Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0))
        {
            Jump();
        }

        // ★：ガード節を使うといい感じに見通しがよくなります
        if (!GameManager.isGameStarted) return;
        
        // これ以降もなにか処理がある可能性があるので、ガード節は残しておきます
    }

    /// <summary>
    /// ★:計算系の処理はこちらに書く感じで
    /// [///] とやるとサマリーコメントが記述できます、これは他クラスからもマウスオーバーで確認出来たりして便利です
    /// </summary>
    private void FixedUpdate() {

        // ★：ガード節を使うといい感じに見通しがよくなります
        if (!GameManager.isGameStarted) return;

        if (playerFlagManager.isInPortal) {
            RotateInPortal();
            StartCoroutine(ShrinkPlayer());
        }

        if (playerFlagManager.isGoal) //isGoalがtrueのとき
        {
            MoveToPortal();

            // クリア回数の加算
            if (!hasScoreSent) {
                PlayerStatus.clearCount++;
                // ★：UnityRoomAPI???　これでランキング作ってたんですね、すばらしいです
                UnityroomApiClient.Instance.SendScore(2, PlayerStatus.clearCount, ScoreboardWriteMode.HighScoreDesc);
                hasScoreSent = true;
            }
        }

        //　★二つのフラグを見るのが大変そうなので、ゲーム終了という定義を作ってみます
        // 本当はEnumかIntでStateNumber（ゲーム進行状態ナンバー）とかを作るとよさそうですが、いったんBoolで
        if (!playerFlagManager.isGameEnd) {
            playerMasterData.gaugeCount++;  //満腹度ゲージを減少させるための内部の値 毎フレーム加算
        }

        if (playerMasterData.gaugeCount > playerMasterData.gaugeDecreaseCount) //gaugeCountがこの閾値を上回ったら満腹度ゲージを減少
        {
            SatietyGaugeDecrease(playerMasterData.gaugeDecreaseValue); //gaugeDecreaseValueの値だけ満腹度ゲージを減らす
            SatietyGaugeUpdate();
            playerMasterData.gaugeCount = (int)Variables.zero;
        }
    }

    // ジャンプさせたくない状況取得
    // ★：ここに追記していくと良いと思います（この先多分増えますよね

    private bool IsCanJump()
    {
        // 土管衝突時
        // ゴール時
        // ポーズ画面
        // ゲームオーバー画面
        // 満腹度0になった瞬間
        return
            !playerFlagManager.isCollided &&
            !playerFlagManager.isGoal && 
            !GameManager.isGamePause &&
            !GameManager.isGameOver &&
            !isHungerStart;
    }

    public void Jump()
    {
        GameObject particleEffect = Instantiate(particlePrefab, transform.position + playerMasterData.particleOffset, Quaternion.identity);
        Destroy(particleEffect, 1.0f);

        if(!GameManager.isGameStarted) //初回ジャンプは「isGameStartedをtrueにして、重力を通常にし、SayYellCVさせない」という分岐
        {
            GameManager.isGameStarted = true; //ゲーム開始フラグがtrueになる
            PlayerFlagManager.isAlwaysUIActive = true;
            playerRB.gravityScale = usualGravityScale; //重力が既定の値になる
            audioSource_Departure.PlayOneShot(CV_Departure);

            playerRB.velocity = Vector2.up * playerMasterData.jumpPower;

            SatietyGaugeDecrease(playerMasterData.gaugeDecreaseValue_Jump); //満腹度の減少
            SatietyGaugeUpdate(); //満腹度の更新
            return; //SayYellCVは言わせない

        }

        SayYellCV(audioSource_Yell, CV_Yell);
        playerRB.velocity = Vector2.up * playerMasterData.jumpPower;

        SatietyGaugeDecrease(playerMasterData.gaugeDecreaseValue_Jump); //満腹度の減少
        SatietyGaugeUpdate(); //満腹度の更新
    }

#region Operable/Inoperable系

    public void PlayerOperable() //ゲームをリトライしたときに呼ばれる
    {
        playerFlagManager.isCollided = false; //土管との接触フラグをふたたびデフォルトのfalseに
        isSayCollided = false; //負傷時のセリフの再生フラグをデフォルトのfalseに
        GameManager.isGameStarted = false; //ゲーム開始フラグをデフォルトのfalseに
        playerFlagManager.isInPortal = false; //ポータルに入ったフラグをデフォルトのfalseに
        transform.position = playerRespawnPos.transform.position; //復活地点へ移動
        transform.rotation = Quaternion.identity; //回転をリセット
        playerCollider.isTrigger = false; //isTriggerをオフにする
        playerImage.sprite = image_Normal; //通常画像に戻す
        gameObject.SetActive(true); //プレイヤーをアクティブにする
        transform.localScale = new Vector2(originalScale, originalScale); //プレイヤーの画像の大きさを元に戻す
        playerImage.color = originalColor; //プレイヤーの画像の色味を元に戻す
        currentClipIndex = 0; // yellボイスのインデックスをリセット
        hasScoreSent = false; //スコアを送信したかどうかのフラグをデフォルトのfalseに
        hasFadeOutSEPlayed = false; //フェードアウト用のSEを再生したかどうかのフラグをデフォルトのfalseに
    }

    public void PlayerInoperable() //土管とデストロイヤエリアにぶつかったときに呼ばれる
    {
        // ★：アクティブじゃないときは実行しない
        if (!gameObject.activeInHierarchy) return;

        playerImage.sprite = image_Damaged; //負傷画像に変更
        playerCollider.isTrigger = true; //isTriggerをオンにし、失敗時に土管をすり抜けるようにする
        playerFlagManager.isGoal = false; //ぶつかったらゴールできなくする
        playerRB.AddForce(Vector2.right * playerMasterData.fallSpeed);
        playerRB.AddTorque(playerMasterData.rotateSpeed); //失敗時に右に回転する
        StartCoroutine(GrowCharacter());  //土管にぶつかって落ちていくとき、だんだん大きくする
        StartCoroutine(DarkenCharacter()); //土管にぶつかって落ちていくとき、だんだん暗くする

        if(!isSayCollided) //負傷時のセリフの再生フラグがfalseのとき Updateで呼ばれてるから重複しないように
        {
            SayHurtCV(audioSource_Hurt, CV_Hurt); //負傷時のセリフを再生
            isSayCollided = true; //負傷時のセリフの再生フラグをtrueに
        }
    }

    public void PlayerInOperableByHunger() //満腹度が0になったときに呼ばれる
    {
        playerImage.sprite = image_Hunger; //満腹度が0になったときの画像に変更
        playerRB.gravityScale = 0f; //重力を0にする
        playerRB.velocity = Vector2.zero; //速度を0にする

        //背景・土管を止めるとこから次スタート
        playerCollider.isTrigger = true; //isTriggerをオンにし、土管をすり抜けるようにする
        playerFlagManager.isGoal = false; //ぶつかったらゴールできなくする

        PipeController.StopAllPipeMovement();

        StartCoroutine(FadeOutCharacter());  //徐々に消えていく
        StartCoroutine(FadeOutSEPlay()); //フェードアウト用のSEを再生

        if(!isSayHunger) //満腹度が0になったときのセリフの再生フラグがfalseのとき
        {
            SayHungerCV(audioSource_Hunger, CV_Hunger); //満腹度が0になったときのセリフを再生
            isSayHunger = true; //満腹度が0になったときのセリフの再生フラグをtrueに
        }
    }

#endregion

#region 空腹時Fadeout演出
    IEnumerator FadeOutCharacter() //徐々に消えていく
    {
        float fadeTime = 2f; // フェードアウトにかかる時間
        float elapsedTime = 0f;

        while (elapsedTime < fadeTime)
        {
            elapsedTime += Time.deltaTime;
            float alpha = Mathf.Lerp(1f, 0f, elapsedTime / fadeTime);
            playerImage.color = new Color(playerImage.color.r, playerImage.color.g, playerImage.color.b, alpha);
            yield return null;
        }

        GameManager.isGameOver = true;
    }

    IEnumerator FadeOutSEPlay() //フェードアウト用のSEを再生
    {
        yield return new WaitForSeconds(1.5f);
        if(!hasFadeOutSEPlayed)
        {
            audioSource_FadeOut.PlayOneShot(SE_FadeOut);
            hasFadeOutSEPlayed = true;
        }
    }
#endregion

#region セリフ関連
    void SayYellCV(AudioSource audioSource, AudioClip[] clip)
    {
        if (clip != null && clip.Length > 0)
        {
            // 現在再生中の音声を停止
            audioSource.Stop();

            // 現在のクリップを設定
            audioSource.clip = clip[currentClipIndex];

            // クリップを再生
            audioSource.Play();

            // デバッグログを追加
            Debug.Log($"Playing Yell clip at index {currentClipIndex}: {audioSource.clip.name}");

            // インデックスを次に進める
            currentClipIndex = (currentClipIndex + 1) % clip.Length;
        }
    }

    void SayHurtCV(AudioSource audioSource, AudioClip[] clip)
    {

        audioSource_Yell.Stop();

        if (clip != null && clip.Length > 0)
        {
            int randomIndex = Random.Range(0, clip.Length);
            audioSource.clip = clip[randomIndex];
            audioSource.Play();
        }   

    }

    void SayHungerCV(AudioSource audioSource, AudioClip clip)
    {
        audioSource_Yell.Stop();

        if (clip != null)
        {
            audioSource.clip = clip;
            audioSource.Play();
        }
    }
#endregion


#region SatietyGauge_Function 満腹度関連
public void SatietyGaugeInit() //満腹度の初期化
{
    satietyGauge.maxValue = playerMasterData.gaugeMax;
    satietyGauge.minValue = playerMasterData.gaugeMin;
    satietyGauge.value = playerMasterData.gaugeMax;
    satietyGaugeText.SetText(playerMasterData.gaugeMax.ToString());
    PlayerStatus.gaugeCurrentValue = satietyGauge.value; //gaugeCurrentValueはstatic変数、シーンが変わっても持ち越されうる値
}

void SatietyGaugeDecrease(float decreaseValue) //満腹度の減少
{
    if(GameManager.isGamePause) //isGamePauseはstatic変数
    {
        return;
    }
    PlayerStatus.gaugeCurrentValue -= decreaseValue;


    if (PlayerStatus.gaugeCurrentValue <= playerMasterData.gaugeMin) //満腹度が0になったら
    {
        PlayerInOperableByHunger(); //満腹度が0になったときに呼ばれ、ゲームオーバーに
        isHungerStart = true;
    }
}

void SatietyGaugeUpdate() //満腹度の更新
{
    // ★値制限処理はこんな風にClampをつかうとよいかもです
    // それに伴う処理がある場合は、以前の処理に戻していただけますと
    //満腹度の値を最小値と最大値の間に制限する
    PlayerStatus.gaugeCurrentValue = Mathf.Clamp(PlayerStatus.gaugeCurrentValue, playerMasterData.gaugeMin, playerMasterData.gaugeMax); 

    // ★常時更新なので、変化があった時だけ変更のほうが良いかも？
    satietyGauge.value = PlayerStatus.gaugeCurrentValue;
    satietyGaugeText.SetText(PlayerStatus.gaugeCurrentValue.ToString("f1"));
}

#endregion

#region アイテム関連

void OnTriggerEnter2D(Collider2D collision) //アイテムとぶつかったら呼ばれるイベント関数
    {
        if(collision.CompareTag(Variables.tag_Item))
        {
            if(!playerFlagManager.isCollided) //土管にぶつかってから消えるまでの間はアイテムはとれない
            {
                float itemScale = collision.gameObject.transform.localScale.x;
                AddScore(itemScale); //スコア加算処理をする　（カロリー）

                AudioSource.PlayClipAtPoint(SE_GetScore, Camera.main.transform.position, playerMasterData.SEVolume); //SEを鳴らす

                SatietyGaugeHeal(itemScale); //満腹度ゲージを回復 すぐ下に定義


                ShowCaloryGotNow(); //今取得したスコア（カロリー）を表示する

                Destroy(collision.gameObject); //アイテムを削除する

            }
        }
    }


void AddScore(float itemScale) //アイテムをとるたびにスコアを加算する
{
    scoreDifference = playerMasterData.itemCalory * Mathf.Pow(itemScale + playerMasterData.caloryOffset, playerMasterData.healValueOffset); //スコアを加算する 41*(0.7~1.3 +0.3)^2
    PlayerStatus.score += scoreDifference; //スコアを加算する
    UpdateScoreUI(); //スコアをUIに表示する
}

void ShowCaloryGotNow() //今、得たスコア（カロリー）の表示
{
    UI_ScoreDifference.SetText("+ " + scoreDifference.ToString("f1"));
    isScoreGotNowShowed = true; //ScoreGotNowBounce.csへ移動
}

void SatietyGaugeHeal(float itemScale) //満腹度ゲージの回復
{
    PlayerStatus.gaugeCurrentValue += playerMasterData.gaugeHealValue * Mathf.Pow(itemScale, playerMasterData.healValueOffset); //0.7~1.3の二乗を掛ける
    SatietyGaugeUpdate();
}

public void UpdateScoreUI() //スコアをUIに表示する
{
    UI_ScoreNum.SetText(PlayerStatus.score.ToString("f1")); //スコアをUIに表示する
}

#endregion

#endregion
#region ゴール後の関数
public void StartMovingToPortal()
{
    currentClipIndex = 0; //セリフのインデックスをリセット
    initialToPortalSpeed = pipeController.pipeMoveSpeed; //ポータルへ向かう初速度
    currentSpeed = initialToPortalSpeed;

    elapsedTime = 0f;
    playerRB.gravityScale = 0f; //重力を0にする
    playerRB.velocity = Vector2.zero; //速度を0にする
}

void MoveToPortal()
{
    Vector2 currentPosition = transform.position;
    float distanceToFinal = Vector2.Distance(currentPosition, playerMasterData.finalPosition);

    // ポータルの最終地点に十分近づいたら停止
    if (distanceToFinal == 0.0f)
    {
        playerRB.velocity = Vector2.zero;
        return; //isInPortalをtrueにするのはPortalControllerで行なってもらってる
    }

    // 経過時間を更新
    elapsedTime += Time.deltaTime;

    // 減速を適用
    currentSpeed = Mathf.Max(initialToPortalSpeed + playerMasterData.deceleration * elapsedTime, playerMasterData.minSpeed);

    // 現在位置から最終位置への方向ベクトルを計算
    Vector2 direction = (playerMasterData.finalPosition - currentPosition).normalized;

    // 新しい速度を設定
    playerRB.velocity = direction * currentSpeed;

    //Debug.Log($"Current position: {currentPosition}, Speed: {currentSpeed}");
}

#region クリア時の演出 isInPortalがtrueのときに発火

    void RotateInPortal()
    {       
        // フレームレートに依存しない回転速度を計算
        float rotationThisFrame = playerMasterData.currentRotationSpeed * Time.deltaTime;
    
        // 回転を適用
        playerRB.AddTorque(rotationThisFrame);
    }

    IEnumerator ShrinkPlayer() //クリア時に徐々に小さくする　吸い込まれるイメージ
    {

        Vector3 initialScale = transform.localScale;
        Vector3 targetScale = Vector3.one * playerMasterData.minSize;
        float elapsedTime = 0f;

        while (elapsedTime < playerMasterData.shrinkDuration)
        {
            elapsedTime += Time.deltaTime;
            float t = elapsedTime / playerMasterData.shrinkDuration;
            transform.localScale = Vector3.Lerp(initialScale, targetScale, t);
            yield return null;
        }

        transform.localScale = targetScale; // 最終的なサイズを確実に設定
    }

    public void SayPortalCV(AudioSource audioSource, AudioClip[] clip)
    {
        if (clip != null && clip.Length > 0)
        {
            int randomIndex = Random.Range(0, clip.Length);
            audioSource.clip = clip[randomIndex];
            audioSource.Play();
        }   
    }


#endregion

#region 落下演出
    IEnumerator GrowCharacter() //土管にぶつかって落ちていくとき、だんだん大きくする
    {
        while (transform.localScale.x < playerMasterData.maxScale)
        {
            float newScale = transform.localScale.x + playerMasterData.growthRate * Time.deltaTime;
            newScale = Mathf.Min(newScale, playerMasterData.maxScale);
            transform.localScale = new Vector2(newScale, newScale);
            yield return null;
        }
    }

    IEnumerator DarkenCharacter() //土管にぶつかって落ちていくとき、だんだん暗くする
    {
        while (playerImage.color.r > playerMasterData.minBrightness)
        {
            Color newColor = playerImage.color;

            float darkenAmount = playerMasterData.darkeningRate * Time.deltaTime;
            newColor = new Color(
                Mathf.Max(newColor.r - darkenAmount, playerMasterData.minBrightness),
                Mathf.Max(newColor.g - darkenAmount, playerMasterData.minBrightness),
                Mathf.Max(newColor.b - darkenAmount, playerMasterData.minBrightness),
                newColor.a
            );

            playerImage.color = newColor;
            yield return null;
        }
    }
#endregion

#endregion
}