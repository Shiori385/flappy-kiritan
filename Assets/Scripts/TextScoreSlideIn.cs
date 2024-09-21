using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextScoreSlideIn : MonoBehaviour
{
    public Animator animator;
    [SerializeField] PlayerFlagManager playerFlagManager;
    [SerializeField] AudioSource scoreSlideInSE;
    bool isScoreSlideInEnd = false;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        animator.enabled = false;
        scoreSlideInSE = GetComponent<AudioSource>();
    }

    void Update()
    {
        if (playerFlagManager.isTextBounceEnd && !isScoreSlideInEnd) //ClearTextBounceでisTextBounceEndがtrueになったらこのスクリプトをアタッチしているテキストがアクティブになるので、その時点で呼び出し
        {   
            scoreSlideInSE.Play();
            animator.enabled = true;
            ScoreSlideInAnime();
            isScoreSlideInEnd = true;
        }
    }

    // コースクリア時に呼び出すメソッド
    void ScoreSlideInAnime()
    {
        // "SlideIn_Kiritan" というトリガーを設定
        animator.SetTrigger("SlideIn_Score"); //animatorコンポーネントのSlideIn＿Scoreというトリガーをアクティブにする
    }
    
}
