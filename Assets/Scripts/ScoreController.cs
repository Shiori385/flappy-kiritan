using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreController : MonoBehaviour
{

    #region Var_ScoreCollider
    [Header("アイテムの移動速度")]
    [SerializeField] float itemMoveSpeed = 1f;
    #endregion

    #region Var_Internal
    Rigidbody2D itemRB;
    GameManager gameManager;
    PlayerController playerController;
    PlayerFlagManager playerFlagManager;
    #endregion

    // Start is called before the first frame update
    void Start()
    {
        itemRB = GetComponent<Rigidbody2D>(); //アイテムのRigidbody2Dを取得
        playerController = GameObject.FindWithTag(Variables.tag_Player).GetComponent<PlayerController>(); //PlayerControllerを取得
        playerFlagManager = GameObject.FindWithTag(Variables.tag_PlayerFlagManager).GetComponent<PlayerFlagManager>(); //PlayerFlagManagerを取得
        gameManager = GameObject.FindWithTag(Variables.tag_GameManager).GetComponent<GameManager>(); //GameManagerを取得
    }

    void Update()
    {
        if(PipeController.isAllPipeMoving)
        {
            ItemMove();
        }
        else
        {
            itemRB.velocity = Vector2.zero;
        }
    }

    void ItemMove()
    {
        itemRB.velocity = new Vector2(-itemMoveSpeed, Variables.zero);
    }

}
