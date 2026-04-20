using UnityEngine;

[CreateAssetMenu(fileName = "NewEvidence", menuName = "수사/증거물 데이터")]
public class EvidenceData : ScriptableObject
{
    public string evidenceName; // evidence name
    public Sprite icon;         // evidence image shown on invoentory

    [TextArea(3, 5)]
    public string description;  // evidence description
}