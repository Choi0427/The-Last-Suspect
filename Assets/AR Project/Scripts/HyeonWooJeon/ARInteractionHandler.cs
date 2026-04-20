using UnityEngine;
using UnityEngine.EventSystems; 

public class ARInteractionHandler : MonoBehaviour
{
    [Header("setting")]
    public float maxDistance = 5.0f; 
    public LayerMask evidenceLayer; 

    void Update()
    {
        // touch check
        if (GetInputDown())
        {
            // ignore interactions when UI is clicked
            if (IsPointerOverUI()) return;

            // create ray
            Ray ray = Camera.main.ScreenPointToRay(GetInputPosition());
            RaycastHit hit;

            // shoot ray
            if (Physics.Raycast(ray, out hit, maxDistance, evidenceLayer))
            {
                Debug.Log($"collider: {hit.collider.name}");

                EvidenceObject evidence = hit.collider.GetComponent<EvidenceObject>();
                if (evidence != null)
                {
                    evidence.OnEvidenceTapped();
                }
            }
        }
    }

    // both mobile touch/mouse click
    private bool GetInputDown()
    {
        return Input.GetMouseButtonDown(0) || (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began);
    }

    private Vector3 GetInputPosition()
    {
        if (Input.touchCount > 0) return Input.GetTouch(0).position;
        return Input.mousePosition;
    }

    // prevent touching objects behine the UI
    private bool IsPointerOverUI()
    {
        if (EventSystem.current == null) return false;
        if (Input.touchCount > 0)
            return EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId);
        return EventSystem.current.IsPointerOverGameObject();
    }
}