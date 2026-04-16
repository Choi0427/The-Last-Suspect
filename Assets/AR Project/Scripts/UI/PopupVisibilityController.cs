using UnityEngine;

public class PopupVisibilityController : MonoBehaviour
{
    [SerializeField] private GameObject target;
    [SerializeField] private bool hideOnStart = true;

    private void Start()
    {
        if (hideOnStart)
        {
            SetVisible(false);
        }
    }

    public void Open()
    {
        SetVisible(true);
    }

    public void Close()
    {
        SetVisible(false);
    }

    public void Toggle()
    {
        GameObject popup = target != null ? target : gameObject;
        popup.SetActive(!popup.activeSelf);
    }

    private void SetVisible(bool shouldShow)
    {
        GameObject popup = target != null ? target : gameObject;
        popup.SetActive(shouldShow);
    }
}
