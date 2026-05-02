using UnityEngine;

// [CreateAssetMenu(fileName = "NewEvidence", menuName = "evidence data")]
public class EvidenceData : ScriptableObject
{
    public string evidenceName; // evidence name
    public Sprite icon;         // evidence image shown on invoentory

    [TextArea(3, 5)]
    public string description;  // evidence description
}