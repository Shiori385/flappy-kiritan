using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDestroyer : MonoBehaviour
{
    #region Var_ObjectDestroyer
    PlayerController playerController;
    [SerializeField] PlayerFlagManager playerFlagManager;
    #endregion

    void Start()
    {
        playerController = GameObject.FindGameObjectWithTag(Variables.tag_Player).GetComponent<PlayerController>();
        playerFlagManager = GameObject.FindGameObjectWithTag(Variables.tag_PlayerFlagManager)
                            .GetComponent<PlayerFlagManager>();
    }

    void OnTriggerEnter2D(Collider2D collision)  //DestroyAreaにアタッチ
    {
        if (collision.CompareTag(Variables.tag_Player)) //ぶつかったのがプレイヤーの場合は
        {
            collision.gameObject.SetActive(false); //接触したオブジェクトを非アクティブにする
            playerFlagManager.isCollided = false; //プレイヤーの土管との接触フラグをfalseにする
            playerController.PlayerInoperable(); //プレイヤーを操作不能にする
            GameManager.isGameOver = true; //ゲームオーバーのフラグをtrueにする　　　　　　　　→色々書いてるが、要はゲームオーバーのUIを出す
        }
        else                               //土管の場合は
        {
            Destroy(collision.gameObject); //土管を消す
        }
    }
}
