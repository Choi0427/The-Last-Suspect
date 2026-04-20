using UnityEngine;

public class SuspectObject : MonoBehaviour
{
    [Header("suspect setting")]
    public string suspectName;
    public bool isCulprit; // 이 인물이 진범인지 체크

    [Header("result message")]
    [TextArea] public string successMessage = "Correct! Nice job!";
    [TextArea] public string failMessage = "No, he is not. Think again, buddy";

    public void OnSelectSuspect()
    {
        // 현재 게임 상태가 '용의자 지목' 단계일 때만 작동하도록 방어 로직
        if (GameManager.Instance.currentState != GameManager.GameState.Accusation)
        {
            Debug.Log("You cannot choose the suspects now");
            return;
        }

        if (isCulprit)
        {
            Debug.Log($"[correct!]");
            GameManager.Instance.EndGame(true); // 승리 판정
        }
        else
        {
            Debug.Log($"[incorrect!] {suspectName}is not the culprit.");
            GameManager.Instance.EndGame(false); // 패배 판정 혹은 기회 차감
        }
    }
}