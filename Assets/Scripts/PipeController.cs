using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PipeController : MonoBehaviour
{
    PlayerFlagManager playerFlagManager;

    [Header("パーティクルの位置オフセット")]
    [SerializeField] Vector3 particleOffset = new Vector3(-0.5f, 0f, -2f);

    [Header("パーティクルのプレハブ")]
    [SerializeField] GameObject particlePrefab;

    #region Var_Pipe
    [Header("土管の移動する速度")]
    [SerializeField] public float pipeMoveSpeed = 3.5f;

    [Header("土管と接触した時の効果音")]
    [SerializeField] AudioClip SE_pipeCollided;

    [Header("土管と接触した時の効果音の音量")]
    [SerializeField] float pipeCollidedSEVolume = 1f;

    [Header("衝突時のスローモーション演出")]
    [SerializeField] private float slowMotionTimeScale = 0.3f; // スローモーション時の時間スケール
    [SerializeField] private float slowMotionDuration = 0.4f; // スローモーションの持続時間

    public static bool isAllPipeMoving = true;
    
    Rigidbody2D pipeRB;
    #endregion


    // Start is called before the first frame update
    void Start()
    {
        pipeRB = GetComponent<Rigidbody2D>();
        playerFlagManager = GameObject.FindGameObjectWithTag(Variables.tag_PlayerFlagManager)
                            .GetComponent<PlayerFlagManager>();
    }

    void Update()
    {
        if(isAllPipeMoving)
        {
            pipeMove();
        }
        else
        {
            pipeRB.velocity = Vector2.zero;
        }
    }

    void pipeMove()
    {
        pipeRB.velocity = Vector2.left * pipeMoveSpeed;
    }

    public static void StopAllPipeMovement()
    {
        isAllPipeMoving = false;
        
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {

        if(collision.gameObject.CompareTag(Variables.tag_Player))
        {
            playerFlagManager.isCollided = true; //土管とプレイヤーの接触フラグをtrueにする
            AudioSource.PlayClipAtPoint(SE_pipeCollided, Camera.main.transform.position, pipeCollidedSEVolume); //土管と接触した時の効果音を再生
            // パーティクルの生成
            Vector3 collisionPoint = collision.contacts[0].point; //位置を指定して
            GameObject particleEffect = Instantiate(particlePrefab, collisionPoint + particleOffset, Quaternion.identity);
            
            Destroy(particleEffect, 0.5f); // 0.5秒後に破棄

            StartCoroutine(SlowMotion());
        }
    }

    IEnumerator SlowMotion()
    {
      // 現在の時間スケールを保存
        float originalTimeScale = Time.timeScale;

        // 時間スケールをスローモーション用に設定
        Time.timeScale = slowMotionTimeScale;

        // 指定された時間だけ待機
        yield return new WaitForSecondsRealtime(slowMotionDuration);

        // 時間スケールを元に戻す
        Time.timeScale = originalTimeScale;

    }

}
