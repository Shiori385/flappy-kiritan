using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreGotNowBounce : MonoBehaviour
{

    [Header("PlayerController")]
    [SerializeField] PlayerController playerController;

    [Header("重力加速度")]
    [SerializeField] float gravity = 9.8f;
    [Header("初速度")]
    [SerializeField] float initialVelocity = 5f;
    [Header("反発係数")]
    [SerializeField] float bounceFactor = 0.3f;
    [Header("この回数地面についたらバウンド終了")]
    [SerializeField] int bounceCount = 2;

    private RectTransform rectTransform;
    private float initialY;
    private float velocity;
    private int currentBounce = 0;

    [Header("スコアのバウンド演出が終了したかのフラグ")]
    [HideInInspector] public bool isScoreBounceEnd = false;

    [Header("スコアのテキスト")]
    [SerializeField] TMP_Text textComponent;

    void Start()
    {
        rectTransform = GetComponent<RectTransform>();
        initialY = rectTransform.anchoredPosition.y;
    }

    void Update()
    {
        if(playerController.isScoreGotNowShowed)
        {
            //スコアを表示する
            StartCoroutine(BounceAnimation());
            return;
        }

        if(isScoreBounceEnd)
        {
            StartCoroutine(DisappearScore());
        }   
    }

    IEnumerator BounceAnimation()
    {
        velocity = initialVelocity;
        playerController.isScoreGotNowShowed = false;

        while (currentBounce < bounceCount)
        {
            float deltaTime = Time.deltaTime;
            velocity -= gravity * deltaTime;

            Vector2 position = rectTransform.anchoredPosition;
            position.y += velocity * deltaTime;

            if (position.y < initialY)
            {
                position.y = initialY;
                velocity = -velocity * bounceFactor;
                currentBounce++;
            }

            rectTransform.anchoredPosition = position;

            yield return null;
        }

        isScoreBounceEnd = true;
        currentBounce = 0;
    }

    IEnumerator DisappearScore()
    {
        yield return new WaitForSeconds(0.3f);
        textComponent.text = "";
        isScoreBounceEnd = false;
    }
}
