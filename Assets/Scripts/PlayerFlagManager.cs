using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerFlagManager : MonoBehaviour
{
    [HideInInspector]public static bool isStartUIVisible = true; //ゲーム開始のUIを非表示にするフラグ(static変数) デフォはアクティブ
    [HideInInspector]public static bool isAlwaysUIActive = false; //満腹度やスコアのUIを非表示にするフラグ(static変数) デフォはアクティブ
    [HideInInspector]public bool isCollided = false; //土管との接触フラグ
    [HideInInspector]public bool isGoal = false; //ゴールフラグ
    [HideInInspector]public bool isInPortal = false; //ポータルに入ったフラグ
    [HideInInspector]public bool isIrisOutStart = false; //アイリスのSE再生フラグ
    [HideInInspector]public bool isIrisOutEnd = false; //クリアアニメーション終了フラグ
    [HideInInspector]public bool isTextBounceEnd = false; //テキストバウンド終了フラグ
    [HideInInspector]public bool isScoreNumberSlideInStart = false; //スコア点数のスライド開始フラグ
}
