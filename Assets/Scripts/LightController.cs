using UnityEngine;
using UnityEngine.Rendering.Universal;

public class LightController : MonoBehaviour
{
    public Light2D targetLight;  // インスペクターでLight 2Dコンポーネントを割り当てる
    PlayerFlagManager playerFlagManager;

    private void Start() //プレイヤーが一定距離を進んでゴールテープが生成されたらPlayerFlagManagerを取得
    {
        playerFlagManager = GameObject.FindGameObjectWithTag("PlayerFlagManager")
                            .GetComponent<PlayerFlagManager>();
    }

    private void Update()
    {
        // ゴールするまでは光らせない
        if (!playerFlagManager.isGoal)
        {
            targetLight.enabled = false;
        }
        // ゴールした瞬間に光る
        else if (playerFlagManager.isGoal)
        {
            targetLight.enabled = true;
        }
    }
}