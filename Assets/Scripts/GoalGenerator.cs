using UnityEngine;

public class GoalGenerator : MonoBehaviour
{
    #region Var_GoalGenerator
    [Header("ゴールポールのプレハブ")]
    [SerializeField] private GameObject goalPrefab;
    [Header("ゴールまでの距離")]
    [SerializeField] private float distanceToGoal = 100f;
    [Header("ゴールポールの高さ")]
    [SerializeField] private float goalHeight = 5f;
    #endregion

    // なぜpublicにしたか？→循環参照を防ぐため　（のちにそうでもなくなった）
    [HideInInspector]public bool goalGenerated = false; //objectGenaratorで参照しているのでpublic
    float distanceTraveled = 0f;
    [SerializeField]PipeController pipeController;
    [SerializeField] ObjectGenerator objectGenerator;

    private void Update()
    {
        //土管が生成されてないか、ゴールが生成されたか、ゲームが開始されてないときは以下の処理は実行されない
        if (!objectGenerator.isObjectGenerated || goalGenerated || !GameManager.isGameStarted) 
        {
            return;
        }
            
        // プレイヤーの移動距離を計算
        distanceTraveled += Time.deltaTime * pipeController.pipeMoveSpeed;

        if (distanceTraveled >= distanceToGoal)
        {
            GenerateGoal();
        }
    }

     void GenerateGoal()
    {
        // ゴールポールを生成
        // このtransformは空のGameObject（GoalGenerator）の座標を指す
        Vector2 goalPosition = new Vector2(transform.position.x, 0); 

        GameObject goal = Instantiate(goalPrefab, goalPosition, Quaternion.identity);

        // ゴールポールの高さを設定
        goal.transform.localScale = new Vector2(goal.transform.localScale.x, goalHeight);

        goalGenerated = true;
    }

}