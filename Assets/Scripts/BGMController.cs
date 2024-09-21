using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGMController : MonoBehaviour
{

    [SerializeField] AudioSource BGM_audioSource;
    [SerializeField] PlayerFlagManager playerFlagManager;
    bool isRePlaying = false;


    // Start is called before the first frame update
    void Start()
    {
        BGM_audioSource = GetComponent<AudioSource>();
        BGM_audioSource.Play();
    }

    // Update is called once per frame
    void Update()
    {
        if (playerFlagManager.isIrisOutStart || !PipeController.isAllPipeMoving) //アイリスアウトが始まるか、空腹ゲームオーバーで土管が止まった時
        {
            if(!isRePlaying)
            {
                BGM_audioSource.Stop();
            }

            if (GameManager.isGameOver && !isRePlaying) //空腹ゲームオーバーで土管が止まっても、ゲームオーバーが表示されたらまた再開
            {
                BGM_audioSource.Play();
                isRePlaying = true;
            }
        }
    }
}
