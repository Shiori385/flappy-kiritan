using UnityEngine;
using System.Collections;

public class ClearTextBounce : MonoBehaviour
{
    [Header("PlayerFlagManager")]
    [SerializeField] PlayerFlagManager playerFlagManager;
    [Header("PlayAgainとExitボタン")]
    [SerializeField] GameObject ButtonPanel; //ButtonPanelをテキストバウンドの数秒後に表示するため
    [Header("テキストバウンドのSE")]
    [SerializeField] AudioSource textBounceSE;

    [Header("CLEAR画面のBGMオーディオソース")]
    [SerializeField] AudioSource BGM_Clear;


    [SerializeField] float gravity = 9.8f;
    [SerializeField] float initialVelocity = 5f;
    [SerializeField] float bounceFactor = 0.3f;
    [SerializeField] int bounceCount = 2;

    private RectTransform rectTransform;
    private float initialY;
    private float velocity;
    private int currentBounce = 0;

    //GameManagerでisIrisOutEndがtrueになったら
    //このスクリプトをアタッチしているテキストがアクティブになるので、その時点で呼び出し

    void OnEnable()
    {
        rectTransform = GetComponent<RectTransform>();
        initialY = rectTransform.anchoredPosition.y;
    }


    void Start() 
    {
        textBounceSE.Play();
        StartCoroutine(BounceAnimation());
        Debug.Log("BounceAnimationがスタート！"); //これは呼ばれてた
        BGM_Clear.Play();
    }

    IEnumerator BounceAnimation()
    {
        velocity = initialVelocity;
        currentBounce = 0;

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
            Debug.Log("bounceCount:" + currentBounce);

            yield return null;

        }

        playerFlagManager.isTextBounceEnd = true;
        Debug.Log("BounceAnimationが終了！");
    }

    void Update()
    {
        if (playerFlagManager.isTextBounceEnd) //BounceAnimationが終了したら
        {
            StartCoroutine(ButtonPanelActive()); //ButtonPanelを0.5秒後にアクティブにするコルーチン
        }
    }

    IEnumerator ButtonPanelActive() //ButtonPanelを0.5秒後にアクティブにする
    {
        yield return new WaitForSeconds(0.5f); //0.5秒（スコアのアニメーションにかかる時間）待つ
        ButtonPanel.SetActive(true); //ButtonPanelをアクティブにする
    }
}