using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoalController : MonoBehaviour
{
    #region Var_Goal
    //[Header("ゴールの移動する速度")]
    //[SerializeField] public float goalMoveSpeed = 1f;

    [Header("ゴールと接触した時の効果音")]
    [SerializeField] AudioClip SE_goalCollided;

    [Header("ゴールと接触した時の効果音の音量")]
    [SerializeField] float goalCollidedSEVolume = 1f;
    #endregion

    Rigidbody2D goalRB;
    [SerializeField]PipeController pipeController;
    PlayerFlagManager playerFlagManager;
    PlayerController playerController;

    // Start is called before the first frame update
    void Start()
    {
        goalRB = GetComponent<Rigidbody2D>();
        playerController = GameObject.FindGameObjectWithTag(Variables.tag_Player).GetComponent<PlayerController>();
        playerFlagManager = GameObject.FindGameObjectWithTag(Variables.tag_PlayerFlagManager)
                            .GetComponent<PlayerFlagManager>();
    }

    void Update()
    {
        if(PipeController.isAllPipeMoving)
        {
            goalMove();
        }
        else
        {
            goalRB.velocity = Vector2.zero;
        }
    }

    void goalMove()
    {
        goalRB.velocity = Vector2.left * pipeController.pipeMoveSpeed;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.CompareTag(Variables.tag_Player) && !playerFlagManager.isCollided) //土管にぶつかってゴールは不可能
        {
            AudioSource.PlayClipAtPoint(SE_goalCollided, Camera.main.transform.position, goalCollidedSEVolume); //ゴールと接触した時の効果音を再生
        
            playerFlagManager.isGoal = true; //ゴールに到達したフラグをtrueにする ずっとPlayerCleared()が呼び出されるのを防ぐ
            playerController.StartMovingToPortal();

            Debug.Log("ゴールに到達しました");
        }
    }
}
