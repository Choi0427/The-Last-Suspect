using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

// Shows a paged ending message and advances each page on tap, similar to the story dialogue flow.
public class EndingSceneController : MonoBehaviour
{
    // Authors can insert this token inside the inspector text to split the ending into tap-by-tap pages.
    private const string PageDelimiter = "\n---\n";

    [Header("UI")]
    [SerializeField] private TMP_Text endingResultText;

    [Header("Input")]
    [SerializeField] private bool tapAnywhereToAdvance = true;
    [SerializeField] private float minimumAdvanceInterval = 0.15f;

    [Header("Scene Flow")]
    [SerializeField] private SuspectCandidate correctCandidate = SuspectCandidate.Detective;

    [Header("Messages")]
    [TextArea(3, 8)]
    [SerializeField] private string trueEndingMessage = "TRUE ENDING";
    [TextArea(3, 8)]
    [SerializeField] private string badEndingMessage = "BAD ENDING";

    private string[] endingPages = System.Array.Empty<string>();
    private int currentPageIndex;
    private float lastAdvanceTime = -999f;
    private bool completed;

    private void Start()
    {
        // The ending branch is resolved from the suspect choice stored before entering this scene.
        bool isCorrect = CaseOutcomeState.SelectedCandidate == correctCandidate;
        string message = isCorrect ? trueEndingMessage : badEndingMessage;
        endingPages = BuildPages(message);
        currentPageIndex = 0;
        RefreshCurrentPage();

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayBgm(isCorrect ? BgmCue.TrueEnding : BgmCue.BadEnding);
        }
    }

    private void Update()
    {
        if (!tapAnywhereToAdvance || completed)
        {
            return;
        }

        if (Time.unscaledTime - lastAdvanceTime < minimumAdvanceInterval)
        {
            return;
        }

        if (IsAdvancePressed())
        {
            AdvancePage();
        }
    }

    public void AdvancePage()
    {
        if (completed || Time.unscaledTime - lastAdvanceTime < minimumAdvanceInterval)
        {
            return;
        }

        lastAdvanceTime = Time.unscaledTime;

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        if (endingPages.Length == 0)
        {
            completed = true;
            return;
        }

        if (currentPageIndex >= endingPages.Length - 1)
        {
            // The scene currently stops on the last page instead of auto-loading somewhere else.
            completed = true;
            return;
        }

        currentPageIndex++;
        RefreshCurrentPage();
    }

    private void RefreshCurrentPage()
    {
        if (endingResultText != null)
        {
            endingResultText.text = endingPages.Length > 0
                ? endingPages[Mathf.Clamp(currentPageIndex, 0, endingPages.Length - 1)]
                : string.Empty;
        }
    }

    private static string[] BuildPages(string message)
    {
        if (string.IsNullOrWhiteSpace(message))
        {
            return System.Array.Empty<string>();
        }

        string normalized = message.Replace("\r\n", "\n");
        string[] rawPages = normalized.Split(new[] { PageDelimiter }, System.StringSplitOptions.None);

        for (int i = 0; i < rawPages.Length; i++)
        {
            rawPages[i] = rawPages[i].Trim();
        }

        return rawPages;
    }

    private static bool IsAdvancePressed()
    {
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
        {
            return true;
        }

        if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
        {
            return true;
        }

        return false;
    }
}
