using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndingSceneController : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] private TMP_Text endingTitleText;
    [SerializeField] private TMP_Text endingBodyText;

    [Header("Scene Flow")]
    [SerializeField] private string restartSceneName = "CrimeScene";
    [SerializeField] private string mainMenuSceneName = "MainMenu";
    [SerializeField] private SuspectCandidate correctCandidate = SuspectCandidate.SuspectC;

    [Header("Messages")]
    [SerializeField] private string trueEndingTitle = "TRUE ENDING";
    [SerializeField] private string trueEndingBody = "You found the real culprit. The case is closed.";
    [SerializeField] private string badEndingTitle = "BAD ENDING";
    [SerializeField] private string badEndingBody = "The wrong suspect was chosen. Review the evidence and try again.";

    private void Start()
    {
        bool isCorrect = CaseOutcomeState.SelectedCandidate == correctCandidate;

        if (endingTitleText != null)
        {
            endingTitleText.text = isCorrect ? trueEndingTitle : badEndingTitle;
        }

        if (endingBodyText != null)
        {
            endingBodyText.text = isCorrect ? trueEndingBody : badEndingBody;
        }

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayBgm(isCorrect ? BgmCue.TrueEnding : BgmCue.BadEnding, true);
        }
    }

    public void RestartCase()
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        if (!string.IsNullOrWhiteSpace(restartSceneName))
        {
            SceneManager.LoadScene(restartSceneName);
        }
    }

    public void ReturnToMainMenu()
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        if (!string.IsNullOrWhiteSpace(mainMenuSceneName))
        {
            SceneManager.LoadScene(mainMenuSceneName);
        }
    }
}
