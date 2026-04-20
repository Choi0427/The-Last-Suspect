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
    [SerializeField] private string trueEndingMessage = "TRUE ENDING\n\n선임 형사의 반응이 어딘가 수상했습니다. 끝까지 의심한 끝에, 당신은 사건의 진실에 도달했습니다.";
    [TextArea(3, 8)]
    [SerializeField] private string badEndingMessage = "BAD ENDING\n\n선택은 틀렸습니다. 진범은 아직 당신을 지켜보고 있습니다. 증거를 다시 검토해보세요.";

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
