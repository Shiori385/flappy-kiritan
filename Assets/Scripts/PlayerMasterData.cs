using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
// ★：プレイヤーの固定データをここに集約してみる
// 固定データ ＝ プレイ中に変動しないデータ
// 純粋なデータ類・コンポーネント系や機能類は含めない
public class PlayerMasterData : ScriptableObject {

    [Header("バランス調整")]
    [Header("プレイヤーのジャンプ力")]
    [SerializeField] public float jumpPower = 1f;

    [Header("アイテムのスコア（カロリー）")]
    [SerializeField] public float itemCalory = 41f;
    [Header("カロリーのオフセット")]
    [SerializeField] public float caloryOffset = 0.3f;

    [Header("満腹度ゲージの最大値")]
    [SerializeField] public float gaugeMax = 100f;
    [Header("満腹度ゲージの最小値")]
    [SerializeField] public float gaugeMin = 0f;
    [Header("満腹度ゲージを減少させるための内部の値 毎フレーム加算")]
    [SerializeField] public float gaugeCount;
    [Header("↑この値がこの値に達したら、")]
    [SerializeField] public int gaugeDecreaseCount = 20;
    [Header("満腹度ゲージがこれだけ減少する")]
    [SerializeField] public float gaugeDecreaseValue = 1f;

    [Header("満腹度ゲージのジャンプでの減少値")]
    [SerializeField] public float gaugeDecreaseValue_Jump = 0.3f;
    [Header("満腹度ゲージの回復量")]
    [SerializeField] public float gaugeHealValue = 10f;
    [Header("満腹度ゲージのアイテムでの回復量の補正値（指数）")]
    [SerializeField] public float healValueOffset = 2.0f;


    [Space]

    [Header("演出調整")]
    [Header("SEの音量")]
    [SerializeField] public float SEVolume = 0.1f;

    [Header("失敗時の右への加速度")]
    [SerializeField] public float fallSpeed = 1f;
    [Header("失敗時の右への回転速度（負なら時計回り）")]
    [SerializeField] public float rotateSpeed = -1f;

    [Header("ジャンプ時パーティクルの生成位置のオフセット")]
    [SerializeField] public Vector3 particleOffset = new Vector3(0, 0, 0);

    [Header("落下時の拡大する速さ")]
    [SerializeField] public float growthRate = 0.1f;
    [Header("落下時の最大サイズ")]
    [SerializeField] public float maxScale = 2.5f;
    [Header("落下時の暗くなる速度")]
    [SerializeField] public float darkeningRate = 0.5f;
    [Header("落下時の最小の明るさ")]
    [SerializeField] public float minBrightness = 0.2f;

    [Header("クリア時の縮小にかかる時間（秒）")]
    [SerializeField] public float shrinkDuration = 4f; // 縮小にかかる時間（秒）
    [Header("クリア時の最小サイズ")]
    [SerializeField] public float minSize = 0f;
    [Header("クリア時の回転速度（負なら時計回り）")]
    [SerializeField] public float currentRotationSpeed = 360f; //クリア時の回転速度

    [Header("ゴール後の移動位置＝ポータルの位置")]
    [SerializeField] public Vector2 finalPosition = new Vector2(0, 0);
    [Header("ゴール後の最小速度")]
    [SerializeField] public float minSpeed = 0.01f;
    [Header("プレイヤーの加速度（減速させるので負の値を入れよ）")]
    [SerializeField] public float deceleration = 0.5f;

}
