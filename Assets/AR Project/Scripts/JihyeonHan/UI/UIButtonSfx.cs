using UnityEngine;
using UnityEngine.EventSystems;

public class UIButtonSfx : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private AudioCue clickCue = AudioCue.UiClick;

    public void OnPointerClick(PointerEventData eventData)
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlaySfx(clickCue);
        }
    }
}
