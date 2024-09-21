using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartUIController : MonoBehaviour
{
    RectTransform childRectTransform;
    [SerializeField] float moveSpeed = 3.5f; //土管の速さと同じ

    void Start()
    {
        childRectTransform = transform.GetChild(0) as RectTransform;

        if(PlayerFlagManager.isStartUIVisible) //デフォルトはアクティブ
        {
            gameObject.SetActive(true);
        }
        else
        {
            gameObject.SetActive(false);
        }

    }

    void Update()
    {
        if(GameManager.isGameStarted) //プレイヤーが最初のジャンプをし、ゲームが始まったら
        {
            // 子要素を左に動かす
            Vector2 movement = new Vector2(-moveSpeed * UIScaleCalculator.uiToWorldRatio.x * Time.deltaTime, 0);
            childRectTransform.anchoredPosition += movement;
            //Debug.Log($"UI Position: {childRectTransform.anchoredPosition}"); // 追加したデバッグログ            
        }
    }
}
