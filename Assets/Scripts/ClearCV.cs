using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClearCV : MonoBehaviour
{

    //bool isSlideInFinished = false;

    [SerializeField] public AudioSource audioSource_Clear;
    [Header("クリア時のCV")]
    [SerializeField] public AudioClip[] CV_Clear;

    public void SlideInFinished()
    {
        //isSlideInFinished = true;

        SayClearCV(audioSource_Clear, CV_Clear);
    }

    void SayClearCV(AudioSource audioSource, AudioClip[] clip)
    {
        if (clip != null && clip.Length > 0)
        {
            int randomIndex = Random.Range(0, clip.Length);
            audioSource.clip = clip[randomIndex];
            audioSource.Play();
        }   
    }

}
