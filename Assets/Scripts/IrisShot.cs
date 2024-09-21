using UnityEngine;
using DG.Tweening;
using System.Collections;  //コルーチンを使うために必要
using UnityEngine.UI; 

public class IrisShot : MonoBehaviour //シーン上のGameObjectにアタッチ　常にアクティブ
{
    [SerializeField] RectTransform unmask;
    [SerializeField] PlayerFlagManager playerFlagManager;
    readonly Vector2 IRIS_IN_SCALE = new Vector2(30, 30);
    readonly float SCALE_DURATION = 1;


    [Header("アイリスの効果音")]
    [SerializeField] AudioClip SE_iris;
    [Header("アイリスの効果音の音量")]
    [SerializeField] float irisSEVolume = 1f;
    bool isIrisSEStart = false;

    void Start()
    {
        isIrisSEStart = false;
    }

    void Update()
    {
        if (playerFlagManager.isInPortal && !isIrisSEStart)
        {
            StartCoroutine(StartIrisOut());
            isIrisSEStart = true;
        }
        // IrisShotをアタッチしているGameObjectはずっとアクティブなので、
        // ここでisIrisSEStart = true;してしまうとifの条件が満たされず、SEは再生されない
    }


    IEnumerator StartIrisOut()
    {
        yield return new WaitForSeconds(2f);
        IrisOut();
        playerFlagManager.isIrisOutStart = true;
    }

    public void IrisOut()
    {
        unmask.DOScale(new Vector3(0, 0, 0), SCALE_DURATION)
            .SetEase(Ease.OutCubic)
            .OnComplete(() =>
            {   
                playerFlagManager.isIrisOutEnd = true;
                //Debug.Log("アイリスアウト完了");
            });
        playerFlagManager.isInPortal = false;
        AudioSource.PlayClipAtPoint(SE_iris, Camera.main.transform.position, irisSEVolume); //アイリスの効果音を再生

    }





}


