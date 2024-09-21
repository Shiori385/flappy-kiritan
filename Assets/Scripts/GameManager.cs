using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class GameManager : MonoBehaviour
{

    [Header("AlwaysOnDisplayなUI")]
    [SerializeField] GameObject UI_AlwaysOnDisplay;

    [Header("ゲームオーバーのUI")]
    [SerializeField] GameObject UI_GameOver;

    [Header("一時中断のUI")]
    [SerializeField] GameObject UI_GamePause;

    [Header("スコア加算のUI")]
    [SerializeField] public TMP_Text UI_ScoreNum;

    [Header("クリアアニメーションのUI")]
    [SerializeField] GameObject UI_Clear;

    [Header("セーブと終了のUI")]
    [SerializeField] GameObject UI_SaveAndExit;

    [Header("ポップアップのSEを待つ時間")]
    [SerializeField] float waitTimeForPopUpSE = 0.3f;

    [Header("ポップアップを閉じるSEを待つ時間")]
    [SerializeField] float waitTimeForCancelSE = 0.3f;

    [SerializeField] ObjectGenerator objectGenerator;
    PlayerController playerController;
    PlayerFlagManager playerFlagManager;
    //public static bool isStartUIVisible = false; はPlayerFlagManagerにあるよ
    public static bool isGameStarted = false;
    public static bool isGamePause = false;
    public static bool isGameOver = false;
    public const float gamePause = 0;
    public const float gamePauseContinue = 1;
    


    // Start is called before the first frame update
    void Start()
    {
        playerController = GameObject.FindGameObjectWithTag(Variables.tag_Player)
                            .GetComponent<PlayerController>();
        playerFlagManager = GameObject.FindGameObjectWithTag(Variables.tag_PlayerFlagManager)
        .GetComponent<PlayerFlagManager>();
        playerController.UpdateScoreUI(); //リトライ時に見かけ上のスコアがリセットされないようにする
    }

    // Update is called once per frame
    void Update()
    {


        if(PlayerFlagManager.isAlwaysUIActive) //ステータスのUIを表示するフラグがtrueのとき
        {
            UI_AlwaysOnDisplay.SetActive(true);
        }



        if(isGameOver) //ゲームオーバーになったら
        {
            HiddenUI_GamePause();
            GameOver(); //ゲームオーバーのUIを表示する

            if(Input.GetKeyDown(KeyCode.Space)) //そのときにスペースキーを押したら
            {
                GameRetry(); //ゲームをリトライする

            }
        }
        else //ゲームオーバーになっていないとき（プレイ中に）
        {
            if(!isGamePause && !playerFlagManager.isGoal) //一時中断になっていないときに

            {
                if(Input.GetKeyDown(KeyCode.LeftShift)) //シフトキーを押したら
                {
                    GamePause(); //ゲームの一時中断に入る
                }
            }
            else //すでに一時中断になっているときに
            {
                if(Input.GetKeyDown(KeyCode.LeftShift)) //シフトキーを押したら
                {
                    GamePauseContinue(); //ゲームの一時中断から抜けて再開する
                }
            }
        }

        if(playerFlagManager.isIrisOutEnd) //クリアアニメーションが終了したら
        {
            GameClear(); //ゲームクリアのUIを表示する
            playerController.gameObject.SetActive(false);
        }


        if (Input.GetKeyDown(KeyCode.Q))
        {
            GameQuit();
        }
    }

    public void GamePause() //ゲームの一時中断に入る
    {
        isGamePause = true; //一時中断フラグをtrueにする
        
        Time.timeScale = gamePause; //ゲーム内時間を止める

        VisibleUI_GamePause(); //一時中断のUIを表示する

    }

    public void GamePauseContinue() //ゲームの一時中断から抜けて再開する
    {
        Debug.Log("GamePauseContinue called");

        isGamePause = false; //一時中断フラグをfalseにする

        Time.timeScale = gamePauseContinue; //ゲーム内時間を等倍にして再始動する

        HiddenUI_GamePause(); //一時中断のUIを非表示にする
    }

    void VisibleUI_GamePause() //一時中断のUIを表示する
    {
        UI_GamePause.SetActive(true); //一時中断のUIを表示する
    }

    void HiddenUI_GamePause() //一時中断のUIを非表示にする
    {
        UI_GamePause.SetActive(false); //一時中断のUIを非表示にする
    }

    void GameOver() //ゲームオーバーになる
    {
        Time.timeScale = gamePause; //ゲーム内時間を止める

        VisibleUI_GameOver(); //ゲームオーバーのUIを表示する
    }

    void VisibleUI_GameOver() //ゲームオーバーのUIを表示する
    {
        UI_GameOver.SetActive(true); //ゲームオーバーのUIを表示する
    }

    public void GameRetry() //ゲームをリトライする PlayAgainではまた別の関数が呼び出される
    {
        isGameOver = false; //ゲームオーバーフラグをfalseにする
        isGamePause = false; //一時中断フラグをfalseにする
        PlayerFlagManager.isStartUIVisible = true; //ゲーム開始のUIを表示にするフラグ(static変数)をtrueにする ←多分書かなくていい
        PlayerFlagManager.isAlwaysUIActive = false; //ステータスのUIを非表示にするフラグ(static変数)をfalseにする
        playerController.PlayerOperable(); //プレイヤーを操作可能にする
        Time.timeScale = gamePauseContinue; //ゲーム内時間を等倍にする
        UI_GameOver.SetActive(false); //ゲームオーバーのUIを非表示にする
        PlayerStatus.score = 0; //スコアを0にする
        playerController.SatietyGaugeInit(); //満腹度の初期化
        SceneManager.LoadScene(SceneManager.GetActiveScene().name); //ゲームを再始動する
    }

    void GameClear() //ゲームクリアのUIを表示する
    {
        UI_Clear.SetActive(true); //ゲームクリアのUIを表示する
        StartCoroutine(SetIrisOutEndTrue());
    }

    IEnumerator SetIrisOutEndTrue()
    {
        yield return new WaitForSeconds(1.0f); // 短い遅延を設定
        playerFlagManager.isIrisOutEnd = true; //クリアアニメーションが終了したフラグをtrueにする
    }

    public void GameQuit() //ゲームを終了する　将来的にはコースシーンからステージ選択シーンへの遷移にする　　　　　　　　　　　　　　　　　　　　　
    {
        Application.Quit(); //ゲームを終了する
        Debug.Log("ゲームを終了します");
    }

    public void PopUpSaveAndExit() //ゲームを終了する
    {
        StartCoroutine(PopUpSaveAndExitCoroutine());
    }

    IEnumerator PopUpSaveAndExitCoroutine()
    {
        yield return new WaitForSeconds(waitTimeForPopUpSE);
        UI_SaveAndExit.SetActive(true);
    }

    public void HiddenSaveAndExit() //ポップアップを閉じる
    {
        StartCoroutine(HiddenSaveAndExitCoroutine());
    }

    IEnumerator HiddenSaveAndExitCoroutine()
    {
        yield return new WaitForSeconds(waitTimeForCancelSE);
        UI_SaveAndExit.SetActive(false);
    }
}
