using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using unityroom.Api;

public class PlayerController : MonoBehaviour
{
    [Header("PlayerFlagManager")]
    [SerializeField] PlayerFlagManager playerFlagManager;
    [Header("ゲーム開始のUI")]
    [SerializeField] GameObject UI_GameStart;
    [Header("スコアのUI")]
    [SerializeField] public TMP_Text UI_ScoreNum;
    [Header("スコアの差分のUI")]
    [SerializeField] public TMP_Text UI_ScoreDifference;

    [Header("アイテム取得のSE")]
    [SerializeField] AudioClip SE_GetScore;
    [Header("SEの音量")]
    [SerializeField] float SEVolume = 0.1f;
    [Header("アイテムのスコア（カロリー）")]
    [SerializeField] float itemCalory = 41f;
    [Header("カロリーのオフセット")]
    [SerializeField] float caloryOffset = 0.3f;
    [Header("いま獲得したスコアを表示したかのフラグ")]
    [HideInInspector]public bool isScoreGotNowShowed = false;

    [Header("ジャンプ時のパーティクルのプレハブ")]
    [SerializeField] GameObject particlePrefab;
    [Header("パーティクルの生成位置のオフセット")]
    [SerializeField] Vector3 particleOffset = new Vector3(0, 0, 0);

    [Header("ObjectGenerator")]
    [SerializeField] ObjectGenerator objectGenerator;

    #region Var_Jump&respawn
    [Header("プレイヤーのジャンプ力")]
    [SerializeField] float jumpPower = 1f;

    [Header("プレイヤーの復活地点")]
    [SerializeField] GameObject playerRespawnPos;
    #endregion

    #region Var_Inoperable
    [Header("失敗時の右への加速度")]
    [SerializeField] float fallSpeed = 1f;
    [Header("失敗時の右への回転速度（負なら時計回り）")]
    [SerializeField] float rotateSpeed = -1f;
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
    [Header("満腹度ゲージの最大値")]
    [SerializeField] float gaugeMax = 100f;
    [Header("満腹度ゲージの最小値")]
    [SerializeField] float gaugeMin = 0f;
    [Header("満腹度ゲージを減少させるための内部の値 毎フレーム加算")]
    [SerializeField] float gaugeCount; 
    [Header("↑この値がこの値に達したら、")] 
    [SerializeField] int gaugeDecreaseCount = 20;
    [Header("満腹度ゲージがこれだけ減少する")]
    [SerializeField] float gaugeDecreaseValue = 1f;

    [Header("満腹度ゲージのジャンプでの減少値")]
    [SerializeField] float gaugeDecreaseValue_Jump = 0.3f;
    [Header("満腹度ゲージの回復量")]
    [SerializeField] float gaugeHealValue = 10f;
    [Header("満腹度ゲージのアイテムでの回復量の補正値（指数）")]
    [SerializeField] float healValueOffset = 2.0f; 

    #endregion


    #region Falling_Effect
        [Header("落下時の拡大する速さ")]
        [SerializeField] float growthRate = 0.1f;
        [Header("落下時の最大サイズ")]
        [SerializeField] float maxScale = 2.5f;
        private Color originalColor;
        [Header("落下時の暗くなる速度")]
        [SerializeField] float darkeningRate = 0.5f;
        [Header("落下時の最小の明るさ")]
        [SerializeField] float minBrightness = 0.2f;
    #endregion

    #region Var_Goal
        [Header("ゴール後の移動位置＝ポータルの位置")]
        [SerializeField] private Vector2 finalPosition = new Vector2(0,0);
        [Header("ゴール後の最小速度")]
        [SerializeField] private float minSpeed = 0.01f;
        private float initialToPortalSpeed; //ポータルへ向かう初速度
        [Header("プレイヤーの加速度（減速させるので負の値を入れよ）")]
        [SerializeField] private float deceleration = 0.5f;
        float currentSpeed; //現在のポータルへ向かう速度
        float elapsedTime; //経過時間
    #endregion

    [Header("土管と同速でクリア後ポータルに向かわせるためのアタッチ")]
    [SerializeField]PipeController pipeController;

    #region Var_Internal
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

    #region Var_ClearEffect
        [Header("クリア時の縮小にかかる時間（秒）")]
        [SerializeField] float shrinkDuration = 4f; // 縮小にかかる時間（秒）
        [Header("クリア時の最小サイズ")]
        [SerializeField] float minSize = 0f;
        [Header("クリア時の回転速度（負なら時計回り）")]
        [SerializeField] private float currentRotationSpeed = 360f; //クリア時の回転速度
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

        PipeController.isAllPipeMoving = true;

        satietyGauge.maxValue = gaugeMax; //スライダーの最大値を既定の100に設定
        satietyGauge.minValue = gaugeMin; //スライダーの最小値を既定の0に設定
        satietyGauge.value = PlayerStatus.gaugeCurrentValue; //スライダーの値を既定の100に設定
        satietyGaugeText.SetText(PlayerStatus.gaugeCurrentValue.ToString("f1")); //スライダーの値を既定の100に設定

        if(PlayerStatus.gaugeCurrentValue == 100) //PlayAgainで呼び出されないようにする
        {
            PlayerStatus.gaugeCurrentValue = satietyGauge.value; //gaugeCurrentValueはstatic変数、シーンが変わっても持ち越されうる値
        }

    }

    // Update is called once per frame
    void Update()
    {
        // 初回のジャンプがまだなら最初のフレームは以下の処理だけ行う
        // 最初のジャンプの待機中に満腹度を減らさせないため
        if (!GameManager.isGameStarted) 
        {

            if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0))
            {
                Jump();
            }
            return;
        }

        if(playerFlagManager.isInPortal)
        {
            RotateInPortal();
            StartCoroutine(ShrinkPlayer());
        }
        //ジャンプさせたくない状況一覧は
        // 土管衝突時、ゴール時、ポーズ画面、ゲームオーバー画面、満腹度０になった瞬間
        if(!playerFlagManager.isCollided && !playerFlagManager.isGoal && !GameManager.isGamePause && !GameManager.isGameOver && !isHungerStart)
        {
            if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0))
            {
                Jump();
            }
        }
        else if(playerFlagManager.isCollided)
        {
            PlayerInoperable();
        }
        else if(playerFlagManager.isGoal) //isGoalがtrueのとき
        {
            MoveToPortal();

            // クリア回数の加算
            if(!hasScoreSent)
            {
                PlayerStatus.clearCount++;  
                UnityroomApiClient.Instance.SendScore(2, PlayerStatus.clearCount, ScoreboardWriteMode.HighScoreDesc);
                hasScoreSent = true;
            }
        }


        if(!playerFlagManager.isGoal && !playerFlagManager.isCollided)
        {
            gaugeCount++;  //満腹度ゲージを減少させるための内部の値 毎フレーム加算
        }

        if(gaugeCount > gaugeDecreaseCount) //gaugeCountがこの閾値を上回ったら満腹度ゲージを減少
        {
            SatietyGaugeDecrease(gaugeDecreaseValue); //gaugeDecreaseValueの値だけ満腹度ゲージを減らす
            SatietyGaugeUpdate();
            gaugeCount = (int)Variables.zero;
        }

        if(PlayerStatus.gaugeCurrentValue <= gaugeMin) //満腹度が0になったら
        {
            PlayerInOperableByHunger(); //満腹度が0になったときに呼ばれ、ゲームオーバーに
            isHungerStart = true;
        }
        
    }

    public void Jump()
    {
        GameObject particleEffect = Instantiate(particlePrefab, transform.position + particleOffset, Quaternion.identity);
        Destroy(particleEffect, 1.0f);

        if(!GameManager.isGameStarted) //初回ジャンプは「isGameStartedをtrueにして、重力を通常にし、SayYellCVさせない」という分岐
        {
            GameManager.isGameStarted = true; //ゲーム開始フラグがtrueになる
            PlayerFlagManager.isAlwaysUIActive = true;
            playerRB.gravityScale = usualGravityScale; //重力が既定の値になる
            audioSource_Departure.PlayOneShot(CV_Departure);

            playerRB.velocity = Vector2.up * jumpPower;

            SatietyGaugeDecrease(gaugeDecreaseValue_Jump); //満腹度の減少
            SatietyGaugeUpdate(); //満腹度の更新
            return; //SayYellCVは言わせない

        }

        SayYellCV(audioSource_Yell, CV_Yell);
        playerRB.velocity = Vector2.up * jumpPower;

        SatietyGaugeDecrease(gaugeDecreaseValue_Jump); //満腹度の減少
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
        playerImage.sprite = image_Damaged; //負傷画像に変更
        playerCollider.isTrigger = true; //isTriggerをオンにし、失敗時に土管をすり抜けるようにする
        playerFlagManager.isGoal = false; //ぶつかったらゴールできなくする
        playerRB.AddForce(Vector2.right * fallSpeed);
        playerRB.AddTorque(rotateSpeed); //失敗時に右に回転する
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
    satietyGauge.maxValue = gaugeMax;
    satietyGauge.minValue = gaugeMin;
    satietyGauge.value = gaugeMax;
    satietyGaugeText.SetText(gaugeMax.ToString());
    PlayerStatus.gaugeCurrentValue = satietyGauge.value; //gaugeCurrentValueはstatic変数、シーンが変わっても持ち越されうる値
}

void SatietyGaugeDecrease(float decreaseValue) //満腹度の減少
{
    if(GameManager.isGamePause) //isGamePauseはstatic変数
    {
        return;
    }
    PlayerStatus.gaugeCurrentValue -= decreaseValue;
}

void SatietyGaugeUpdate() //満腹度の更新
{
    // 現在のゲージの値が最大値を超えた場合
    if (PlayerStatus.gaugeCurrentValue > gaugeMax)
    {
        // 現在のゲージの値を最大値にする
        PlayerStatus.gaugeCurrentValue = gaugeMax;
    }
    // 現在のゲージの値が最小値より小さい場合
    else if (PlayerStatus.gaugeCurrentValue < gaugeMin)
    {
        // 現在のゲージの値を最小値にする
        PlayerStatus.gaugeCurrentValue = gaugeMin;
    }

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

                AudioSource.PlayClipAtPoint(SE_GetScore, Camera.main.transform.position, SEVolume); //SEを鳴らす

                SatietyGaugeHeal(itemScale); //満腹度ゲージを回復 すぐ下に定義


                ShowCaloryGotNow(); //今取得したスコア（カロリー）を表示する

                Destroy(collision.gameObject); //アイテムを削除する

            }
        }
    }


void AddScore(float itemScale) //アイテムをとるたびにスコアを加算する
{
    scoreDifference = itemCalory * Mathf.Pow(itemScale + caloryOffset, healValueOffset); //スコアを加算する 41*(0.7~1.3 +0.3)^2
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
    PlayerStatus.gaugeCurrentValue += gaugeHealValue * Mathf.Pow(itemScale, healValueOffset); //0.7~1.3の二乗を掛ける
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
    float distanceToFinal = Vector2.Distance(currentPosition, finalPosition);

    // ポータルの最終地点に十分近づいたら停止
    if (distanceToFinal == 0.0f)
    {
        playerRB.velocity = Vector2.zero;
        return; //isInPortalをtrueにするのはPortalControllerで行なってもらってる
    }

    // 経過時間を更新
    elapsedTime += Time.deltaTime;

    // 減速を適用
    currentSpeed = Mathf.Max(initialToPortalSpeed + deceleration * elapsedTime, minSpeed);

    // 現在位置から最終位置への方向ベクトルを計算
    Vector2 direction = (finalPosition - currentPosition).normalized;

    // 新しい速度を設定
    playerRB.velocity = direction * currentSpeed;

    //Debug.Log($"Current position: {currentPosition}, Speed: {currentSpeed}");
}

#region クリア時の演出 isInPortalがtrueのときに発火

    void RotateInPortal()
    {       
        // フレームレートに依存しない回転速度を計算
        float rotationThisFrame = currentRotationSpeed * Time.deltaTime;
    
        // 回転を適用
        playerRB.AddTorque(rotationThisFrame);
    }

    IEnumerator ShrinkPlayer() //クリア時に徐々に小さくする　吸い込まれるイメージ
    {

        Vector3 initialScale = transform.localScale;
        Vector3 targetScale = Vector3.one * minSize;
        float elapsedTime = 0f;

        while (elapsedTime < shrinkDuration)
        {
            elapsedTime += Time.deltaTime;
            float t = elapsedTime / shrinkDuration;
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
        while (transform.localScale.x < maxScale)
        {
            float newScale = transform.localScale.x + growthRate * Time.deltaTime;
            newScale = Mathf.Min(newScale, maxScale);
            transform.localScale = new Vector2(newScale, newScale);
            yield return null;
        }
    }

    IEnumerator DarkenCharacter() //土管にぶつかって落ちていくとき、だんだん暗くする
    {
        while (playerImage.color.r > minBrightness)
        {
            Color newColor = playerImage.color;

            float darkenAmount = darkeningRate * Time.deltaTime;
            newColor = new Color(
                Mathf.Max(newColor.r - darkenAmount, minBrightness),
                Mathf.Max(newColor.g - darkenAmount, minBrightness),
                Mathf.Max(newColor.b - darkenAmount, minBrightness),
                newColor.a
            );

            playerImage.color = newColor;
            yield return null;
        }
    }
#endregion

#endregion
}