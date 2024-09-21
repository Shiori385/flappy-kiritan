using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextScoreNumberSlideIn : MonoBehaviour
{
    public Animator animator;
    [SerializeField] PlayerFlagManager playerFlagManager;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        animator.enabled = false;
    }

    void Update()
    {
        if (playerFlagManager.isScoreNumberSlideInStart) //スコア点数のスライドが終わったら呼び出し
        {
            playerFlagManager.isScoreNumberSlideInStart = false; //このifの条件をfalseにして
            playerFlagManager.isTextBounceEnd = false; //isTextBounceEndをfalseにする
            Debug.Log("isTextBounceEndがfalseになりました");
        }

        if (playerFlagManager.isTextBounceEnd) 
        {   
            animator.enabled = true;
            ScoreNumberSlideInAnime();
        }
    }

    // コースクリア時に呼び出すメソッド
    void ScoreNumberSlideInAnime()
    {
        // "SlideIn_Score" というトリガーを設定
        animator.SetTrigger("SlideIn_ScoreNumber"); //animatorコンポーネントのSlideIn＿ScoreNumberというトリガーをアクティブにする
        // スコア点数がのスライドが終わったフラグをtrueにする
        // isTextBounceEndをfalseにするために。
        // 上のUpdate関数に戻って、これらをfalseに戻す
        playerFlagManager.isScoreNumberSlideInStart = true; 

    }
    
}
