using UnityEngine;

public class EvidenceTouchHandler : MonoBehaviour
{
    private int evidenceIndex;

    public void Init(int index)
    {
        evidenceIndex = index;
    }

    void Update()
    {
        if (Input.touchCount == 0) return;

        Touch touch = Input.GetTouch(0);
        if (touch.phase != TouchPhase.Began) return;

        Ray ray = Camera.main.ScreenPointToRay(touch.position);

        if (Physics.Raycast(ray, out RaycastHit hit))
        {
            if (hit.transform == transform)
            {
                Debug.Log($"[증거물 #{evidenceIndex}] 터치됨! 위치: {transform.position}");
            }
        }
    }
}