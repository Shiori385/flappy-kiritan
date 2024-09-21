using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class PlayAgainSound : MonoBehaviour
{
    public AudioClip retrySound;
    private AudioSource audioSource;
    [SerializeField] float volume = 0.5f;
    [SerializeField] PlayerController playerController;
    [SerializeField] PlayerFlagManager playerFlagManager;
    [SerializeField] ClearCV clearCV;
    bool isPlayingRetry = false;

    private void Awake()
    {
        audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.clip = retrySound;
        audioSource.volume = volume;

    }

    public void RetryScene() //Play Againボタンを呼ばれるとこれがまず呼ばれる
    {
        StartCoroutine(PlaySoundAndRetry());
    }

    IEnumerator PlaySoundAndRetry()
    {
        clearCV.audioSource_Clear.enabled = false;
        PlayRetrySound(); //リトライ時のSEを鳴らしてから
        yield return new WaitForSeconds(retrySound.length); //この秒数だけ待ってから
        PlayerFlagManager.isAlwaysUIActive = true;
        PlayAgain(); //ゲームをリトライする
    }

    public void PlayRetrySound()
    {
        if (!isPlayingRetry)
        {
            audioSource.Play();
            isPlayingRetry = true;
        }

    }

    void PlayAgain() //ゲームをリトライする
    {
        playerController.PlayerOperable(); //プレイヤーを操作可能にする
        PlayerFlagManager.isStartUIVisible = false; //ゲーム開始のUIを非表示にするフラグ(static変数)をfalseにする
        Time.timeScale = GameManager.gamePauseContinue; //ゲーム内時間を等倍にする
        //GameManager.UI_GameOver.SetActive(false); //ゲームオーバーのUIを非表示にする
        SceneManager.LoadScene(SceneManager.GetActiveScene().name); //ゲームを再始動する
        // リトライしてもそれまでにコース中で得たスコア（＝カロリー）は維持する
    }    
}