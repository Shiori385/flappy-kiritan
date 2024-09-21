using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopUpSE : MonoBehaviour
{
    [SerializeField] AudioSource audioSourcePopUp;
    [SerializeField] AudioSource audioSourceCancel;

    public void PlayPopUpSE()
    {
        audioSourcePopUp.Play();
    }

    public void PlayCancelSE()
    {
        audioSourceCancel.Play();
    }
}
