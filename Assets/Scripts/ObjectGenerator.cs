using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectGenerator : MonoBehaviour
{
    [Header("PlayerFlagManager")]
    [SerializeField] PlayerFlagManager playerFlagManager;

    [Header("アイテム(ずんだ餅)のスケール")]
    [SerializeField] float minItemScale = 0.7f;
    [SerializeField] float maxItemScale = 1.3f;

    #region Var_Pipes
    [Header("生成する土管オブジェクト：↑")]
    [SerializeField] GameObject pipe_Top;
    [Header("生成する土管オブジェクト：↓")]
    [SerializeField] GameObject pipe_Bottom;
    [Header("土管の角度：↑")]
    [SerializeField] float pipeAngle_Top =180f;
    [Header("確保する隙間")]
    [SerializeField] float pipeGap = 3f;
    [Header("土管生成時の下限値：↑の土管")]
    [SerializeField] float topLowerLimit= 1f;
    [Header("上の土管生成位置を下方向へ微調整する値")]
    [SerializeField] float pipeSpawnPosCorrect = 1f;
    #endregion

    #region Var_Item
    [Header("アイテムオブジェクト")]
    [SerializeField] GameObject Item;
    [Header("アイテム生成の縦の上限値")]
    [SerializeField] float genItemUpperLimit = 1f;
    [Header("アイテム生成の縦の下限値")]
    [SerializeField] float genItemLowerLimit = 1f;
    [Header("アイテム生成の横の出現位置")]
    [SerializeField] float genItemHorizontalGap = 4f;
    #endregion

    #region Var_PipeGenerate
    [Header("オブジェクトの初回作成間隔（秒）")]
    [SerializeField] float genObjectFirst = 0.8f;
    [Header("オブジェクトの二回目以降の作成間隔（秒）")]
    [SerializeField] float genObjectAfterSecond = 1f;
    #endregion

    [Header("ゴール生成を検知するためのアタッチ")]
    [SerializeField] GoalGenerator goalGenerator;

    Vector2 screenMin, screenMax; //画面サイズ取得の最小・最大   
    public bool isObjectGenerated = false;
    public float itemScale;

    // Start is called before the first frame update
    void Start()
    {
        GetScreenSize();
    }


    void Update()
    {
        if(GameManager.isGameStarted && !isObjectGenerated && !goalGenerator.goalGenerated)
        {
            InvokeRepeating(nameof(ObjectGenerate), genObjectFirst, genObjectAfterSecond);
            isObjectGenerated = true;
        }
    }

    void GetScreenSize()
    {
        screenMin = Camera.main.ViewportToWorldPoint(Vector2.zero);
        screenMax = Camera.main.ViewportToWorldPoint(Vector2.one);
    }

    void ObjectGenerate()
    {
        float _topPipeGeneratePoint = Random.Range(screenMax.y - pipeSpawnPosCorrect, topLowerLimit);
        float _itemGeneratePoint = Random.Range(screenMax.y - genItemUpperLimit, screenMin.y + genItemLowerLimit);


        if(goalGenerator.goalGenerated)
        {
            CancelInvoke(nameof(ObjectGenerate));
            return;
        }

        Instantiate(pipe_Top,

                    new Vector3(transform.position.x, _topPipeGeneratePoint, -1), //単にtransformと指定した場合、このスクリプトがアタッチされているオブジェクトのそれを指す

                    Quaternion.Euler(Variables.zero, 180f, pipeAngle_Top));

        Instantiate(pipe_Bottom,
        
                    new Vector3(transform.position.x, _topPipeGeneratePoint - pipeGap, -1),

                    Quaternion.identity);


        GameObject _item = Instantiate(Item,

                    new Vector3(transform.position.x + genItemHorizontalGap, _itemGeneratePoint, -1), //ObjectGeneratorの少し右側に出現　遅れて出現させるイメージ

                    Quaternion.identity);


        itemScale = Random.Range(minItemScale, maxItemScale);

        // インスタンス化したオブジェクトにランダムなスケールを適用
        _item.transform.localScale = new Vector2(itemScale, itemScale * 1.0f/0.9f);                    
    }
}
