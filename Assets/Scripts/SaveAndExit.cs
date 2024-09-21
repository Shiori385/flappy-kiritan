using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using unityroom.Api;

public class SaveAndExit : MonoBehaviour
{
    [SerializeField] GameManager gameManager;
    [SerializeField] AudioSource audioSource;
    [SerializeField] AudioClip[] ExitVoice;
    [SerializeField] ClearCV clearCV;
    private void Start()
    {
        audioSource = gameObject.AddComponent<AudioSource>();
    }

    public void SaveExit()
    {
        UnityroomApiClient.Instance.SendScore(1, PlayerStatus.score, ScoreboardWriteMode.HighScoreDesc);

        clearCV.audioSource_Clear.enabled = false;
        SayExitCV(audioSource, ExitVoice); //ボイス再生

        StartCoroutine(WaitAndRetry()); //ボイス再生　数秒待ってからリトライ
    }

    IEnumerator WaitAndRetry()
    {
        yield return new WaitForSeconds(ExitVoice.Length); //ボイスの長さ分だけ待つ
        gameManager.GameRetry(); //リトライ
    }


    void SayExitCV(AudioSource audioSource, AudioClip[] clip)
    {

        if (clip != null && clip.Length > 0)
        {
            int randomIndex = Random.Range(0, clip.Length);
            //audioSource.clip = clip[randomIndex];
            audioSource.PlayOneShot(clip[randomIndex], 0.2f);
        }   

    }






}

