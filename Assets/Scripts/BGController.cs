using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGController : MonoBehaviour
{

    #region Var_Scroll
    [Header("背景のスクロールするスピード")]
    [SerializeField] float scrollSpeed = 1f;
    [Header("背景移動：横")]
    [SerializeField] scrollDirection_X direction_X;
    [Header("背景移動：縦")]
    [SerializeField] scrollDirection_Y direction_Y;
    #endregion

    #region Var-FollowTargetObject
    [Header("追従するオブジェクト")]
    [SerializeField] GameObject followObject;
    [Header("指定のオブジェクトの動きを追従する")]
    [SerializeField] bool objectFollow = false;
    [Header("指定のオブジェクトの動きを追従する割合")]
    [SerializeField] float objectFollowRate = 1f;
    #endregion

    #region Var_Internal
    const float scrollMax = 1f;
    Vector2 offset;
    Renderer materialRenderer;
    PlayerFlagManager playerFlagManager;

    enum scrollDirection_X 
    {
        NoMove = 0, LeftToRight = -1, RightToLeft =1
    };

    enum scrollDirection_Y
    {
        NoMove = 0, UpToDown = -1, DownToUp = 1
    };
    #endregion


    // Start is called before the first frame update
    void Start()
    {
        materialRenderer = GetComponent<Renderer>();
        playerFlagManager = GameObject.FindGameObjectWithTag(Variables.tag_PlayerFlagManager).GetComponent<PlayerFlagManager>();

        if(followObject == null) //追従するGameObjectがまだないなら
        {
            //Playerタグを持つGameObjectを格納
            followObject = GameObject.FindWithTag(Variables.tag_Player); 
        }

        if (!objectFollow) //Playerを追従するフラグがfalseになったら背景のスクロールを止める
        {
            objectFollowRate = Variables.zero;
        }
    }

    // Update is called once per frame
    void Update()
    {

        if(playerFlagManager.isGoal || !PipeController.isAllPipeMoving)
        {
            return;
        }   

        float scrollX = Mathf.Repeat(Time.time * scrollSpeed * (int)direction_X, scrollMax);
        float scrollY = Mathf.Repeat(Time.time * scrollSpeed * (int)direction_Y, scrollMax);

        float movePointX = followObject.transform.position.x,
              movePointY = followObject.transform.position.y;

        offset = new Vector2(scrollX + movePointX * -objectFollowRate, 
                             scrollY + movePointY * -objectFollowRate);

        materialRenderer.sharedMaterial.SetTextureOffset(Variables.mainTex, offset);
    }
}
