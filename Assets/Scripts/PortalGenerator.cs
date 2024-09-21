using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalGenerator : MonoBehaviour
{

    #region Var_PortalGenerator
    [Header("ポータルのプレハブ")]
    [SerializeField] private GameObject portalPrefab;
    #endregion

    [Header("ゴール生成を検知するためのアタッチ")]
    [SerializeField] GoalGenerator goalGenerator;

    Rigidbody2D portalRB;
    bool portalGenerated = false;


    // Start is called before the first frame update
    void Start()
    {
        portalRB = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        if (goalGenerator.goalGenerated && !portalGenerated)
        {
            GeneratePortal();
        }
    }

    void GeneratePortal()
    {
        Vector2 portalPosition = new Vector2(transform.position.x, 0); //ポータルの位置を設定して
        Instantiate(portalPrefab, portalPosition, Quaternion.identity); //ポータルを生成
        portalGenerated = true; //ポータル生成フラグをtrueにし、それ以上生成されないようにする
    }
}
