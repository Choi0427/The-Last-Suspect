using UnityEngine;

// 💡 유니티 우클릭 메뉴에서 증거물 데이터를 뚝딱 생성할 수 있게 해주는 마법의 코드
[CreateAssetMenu(fileName = "NewEvidence", menuName = "수사/증거물 데이터")]
public class EvidenceData : ScriptableObject
{
    public string evidenceName; // 증거물 이름 (예: 피 묻은 권총)
    public Sprite icon;         // 인벤토리에 뜰 네모난 이미지

    [TextArea(3, 5)]
    public string description;  // 증거물 상세 설명 (여러 줄 입력 가능)
}