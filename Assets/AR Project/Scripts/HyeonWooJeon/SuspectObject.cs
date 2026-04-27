using UnityEngine;
// THIS SCRIPT WILL BE LEFT UNUSED. PLEASE IGNORE THIS SCRIPT BELOW INCLUDING COMMENTS
    public class SuspectObject : MonoBehaviour
{
    [Header("suspect setting")]
    public string suspectName;
    public bool isCulprit; 

    [Header("result message")]
    [TextArea] public string successMessage = "Correct! Nice job!";
    [TextArea] public string failMessage = "No, he is not. Think again, buddy";

    public void OnSelectSuspect()
    {
        if (GameManager.Instance.currentState != GameManager.GameState.Accusation)
        {
            Debug.Log("You cannot choose the suspects now");
            return;
        }

        if (isCulprit)
        {
            Debug.Log($"[correct!]");
            GameManager.Instance.EndGame(true); 
        }
        else
        {
            Debug.Log($"[incorrect!] {suspectName}is not the culprit.");
            GameManager.Instance.EndGame(false); 
        }
    }
}