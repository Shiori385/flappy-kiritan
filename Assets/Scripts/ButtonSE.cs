using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonSE : MonoBehaviour
{
    [SerializeField] AudioSource audioSource_Button;
    [SerializeField] AudioClip[] SE_Button;

    public void PlayPlayAgainButton()
    {
        if(SE_Button != null && SE_Button.Length > 0)
        {
            //audioSource_Button.clip = SE_Button[0];
            audioSource_Button.PlayOneShot(SE_Button[0]);
        }
    }
}
