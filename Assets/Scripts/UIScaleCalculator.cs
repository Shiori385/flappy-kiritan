using UnityEngine;

public class UIScaleCalculator : MonoBehaviour
{
    [SerializeField] private Canvas targetCanvas;
    private Camera mainCamera;
    private Vector2 lastScreenSize;
    public static Vector2 uiToWorldRatio;

    void Start()
    {
        if (targetCanvas == null)
        {
            targetCanvas = FindObjectOfType<Canvas>();
        }
        mainCamera = Camera.main;
        lastScreenSize = new Vector2(Screen.width, Screen.height);
        CalculateUIToWorldRatio();
    }

    void Update()
    {
        // 画面サイズが変更された場合、再計算を行う
        if (Screen.width != lastScreenSize.x || Screen.height != lastScreenSize.y)
        {
            lastScreenSize = new Vector2(Screen.width, Screen.height);
            CalculateUIToWorldRatio();
        }
    }

    void CalculateUIToWorldRatio()
    {
        // キャンバスのサイズを取得
        Rect canvasRect = targetCanvas.GetComponent<RectTransform>().rect;
        Vector2 canvasSize = new Vector2(canvasRect.width, canvasRect.height);

        // 直交投影カメラのビューサイズを計算
        float cameraHeight = 2f * mainCamera.orthographicSize;
        float cameraWidth = cameraHeight * mainCamera.aspect;
        Vector2 cameraSize = new Vector2(cameraWidth, cameraHeight);

        // 比率を計算
        Vector2 ratio = new Vector2(canvasSize.x / cameraSize.x, canvasSize.y / cameraSize.y);
        Debug.Log($"UI to World Ratio - X: {ratio.x}, Y: {ratio.y}");

        // GameSettingsクラスに比率を保存（オプション）
        uiToWorldRatio = ratio;
    }
}