using System.Collections;
using UnityEngine;

//★：すごいざっくり作ったので、実際のゲームではもっと細かい設定が必要かもしれません
// またオーディオソースがひとつしかないので、複数の音を同時に再生するor複数の音の音量や設定が異なる場合は別途対応が必要です
public class AudioManager : MonoBehaviour {
    // シングルトンインスタンス
    public static AudioManager Instance { get; private set; }

    // メインのオーディオソース
    private AudioSource audioSource;

    // シングルトンの初期化
    private void Awake() {
        // 他のインスタンスが存在する場合、このインスタンスを破棄
        if (Instance != null && Instance != this) {
            Destroy(this.gameObject);
        }
        else {
            Instance = this;
            // シーンが変わってもオーディオマネージャーを破棄しない
            DontDestroyOnLoad(this.gameObject);
        }

        // このオブジェクトにAudioSourceがアタッチされていない場合、自動で追加
        if (audioSource == null) {
            audioSource = gameObject.AddComponent<AudioSource>();
        }
    }

    // オーディオを再生するためのメソッド
    public void PlaySound(AudioClip clip, float volume = 1.0f) {
        audioSource.Stop();
        audioSource.clip = clip;
        audioSource.volume = volume;
        audioSource.Play();
    }

    // オーディオを停止するためのメソッド
    public void StopSound() {
        if (audioSource.isPlaying) {
            audioSource.Stop();
        }
    }

    // フェードアウトするメソッド（オプション）
    public IEnumerator FadeOut(float fadeTime) {
        float startVolume = audioSource.volume;

        while (audioSource.volume > 0) {
            audioSource.volume -= startVolume * Time.deltaTime / fadeTime;
            yield return null;
        }

        audioSource.Stop();
        audioSource.volume = startVolume;
    }
}
