using TMPro;
using UnityEngine;

public class EndingSceneController : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] private TMP_Text endingResultText;
    [SerializeField] private TMP_Text endingTitleText;
    [SerializeField] private TMP_Text endingBodyText;

    [Header("Scene Flow")]
    [SerializeField] private SuspectCandidate correctCandidate = SuspectCandidate.Detective;

    [Header("Messages")]
    [TextArea(3, 8)]
    [SerializeField] private string trueEndingMessage = "TRUE ENDING";
    [TextArea(3, 8)]
    [SerializeField] private string badEndingMessage = "BAD ENDING";

    private void Start()
    {
        bool isCorrect = CaseOutcomeState.SelectedCandidate == correctCandidate;
        string message = isCorrect ? trueEndingMessage : badEndingMessage;

        if (endingResultText != null)
        {
            endingResultText.text = message;
        }

        if (endingTitleText != null)
        {
            endingTitleText.text = string.Empty;
        }

        if (endingBodyText != null)
        {
            endingBodyText.text = string.Empty;
        }

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayBgm(isCorrect ? BgmCue.TrueEnding : BgmCue.BadEnding, true);
        }
    }
}
