using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalController : MonoBehaviour
{

    Rigidbody2D portalRB;
    PlayerFlagManager playerFlagManager;
    PlayerController playerController; //ポータル吸い込まれCVの再生用
    [SerializeField]PipeController pipeController;
    GameObject player;

    [Header("ポータルの加速度（減速させるので負の値を入れよ）")]
    [SerializeField] private float deceleration = -0.1f;
    [Header("ポータルの最小速度")]
    [SerializeField] private float minSpeed = 0.01f;
    [Header("ポータルの最終位置")]
    [SerializeField] private Vector2 finalPosition = new Vector2(0,0);

    [Header("ポータルに吸い込まれる時の効果音")]
    [SerializeField] AudioSource SE_portalCollided;

    private Vector2 velocity;
    private float currentSpeed; //現在の速度 初速度は土管の速さ
    private float elapsedTime; //経過時間



    // Start is called before the first frame update
    void Start()
    {
        playerController = GameObject.FindGameObjectWithTag(Variables.tag_Player)
                            .GetComponent<PlayerController>();
        portalRB = GetComponent<Rigidbody2D>();
        //player = GameObject.FindGameObjectWithTag(Variables.tag_Player);
        currentSpeed = pipeController.pipeMoveSpeed;
        elapsedTime = 0f;
        playerFlagManager = GameObject.FindGameObjectWithTag(Variables.tag_PlayerFlagManager)
                            .GetComponent<PlayerFlagManager>();
    }

    void Update()
    {
        if(PipeController.isAllPipeMoving)
        {
            portalMove();
        }
        else
        {
            portalRB.velocity = Vector2.zero;
        }
        
        // isInPortalがtrue → IrisShotのIrisOutが2秒後に始まり、その際にisInPortalがfalseになる
        if(!playerFlagManager.isInPortal)
        {
            SE_portalCollided.Stop();
        }
    }

    void portalMove()
    {

        if (transform.position.x <= finalPosition.x)
        {
            portalRB.velocity = Vector2.zero;
            return;
        }

        if (playerFlagManager.isGoal)
        {
            //減速していく
            elapsedTime += Time.deltaTime;
            currentSpeed = Mathf.Max(pipeController.pipeMoveSpeed + deceleration * elapsedTime, minSpeed); // v=v0-at
            portalRB.velocity = Vector2.left * currentSpeed;
            
        }
        else
        {
            portalRB.velocity = Vector2.left * pipeController.pipeMoveSpeed;
        }
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.CompareTag(Variables.tag_Player)  && !playerFlagManager.isCollided)
        {
                    
            playerFlagManager.isInPortal = true; //ポータルに入ったフラグをtrueにする
            playerFlagManager.isGameEnd = true;
            // isInPortalがtrue → IrisShotのIrisOutが2秒後に始まり、その際にisInPortalがfalseになる
            SE_portalCollided.Play();
            StartCoroutine(StartSayPortalCV());
        }

    }

    IEnumerator StartSayPortalCV()
    {
        yield return new WaitForSeconds(1f);
        playerController.SayPortalCV(playerController.audioSource_Portal, playerController.CV_Portal);
    }
}
