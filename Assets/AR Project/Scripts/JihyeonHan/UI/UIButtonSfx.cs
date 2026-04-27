using UnityEngine;
using UnityEngine.EventSystems;

// Plays a lightweight UI sound when the attached button is clicked through the EventSystem.
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
