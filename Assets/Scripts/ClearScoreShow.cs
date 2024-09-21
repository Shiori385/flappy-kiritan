using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ClearScoreShow : MonoBehaviour //スコアのText_ScoreNumberオブジェクトにアタッチ
{

    [SerializeField] GameManager gameManager;
    [SerializeField] PlayerFlagManager playerFlagManager;
    TextMeshProUGUI scoreNumber;

    // Start is called before the first frame update
    void Start()
    {
        scoreNumber = GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    void Update()
    {

        scoreNumber.text = gameManager.UI_ScoreNum.text;
    }
}
