using UnityEngine;
using UnityEngine.InputSystem;

// Converts a screen tap into a 3D raycast and forwards hits to the suspect selection controller.
public class SuspectSelectionRaycaster : MonoBehaviour
{
    [SerializeField] private Camera targetCamera;
    [SerializeField] private SuspectSelectionController selectionController;
    [SerializeField] private LayerMask raycastLayers = ~0;
    [SerializeField] private float rayDistance = 100f;

    private void Update()
    {
        if (!TryGetPointerDownPosition(out Vector2 screenPosition))
        {
            return;
        }

        Camera rayCamera = targetCamera != null ? targetCamera : Camera.main;
        if (rayCamera == null)
        {
            return;
        }

        Ray ray = rayCamera.ScreenPointToRay(screenPosition);
        if (!Physics.Raycast(ray, out RaycastHit hit, rayDistance, raycastLayers))
        {
            return;
        }

        // The collider can live on a child object, so the target component is searched up the hierarchy.
        SuspectSelectionTarget target = hit.collider.GetComponentInParent<SuspectSelectionTarget>();
        if (target == null || selectionController == null)
        {
            return;
        }

        selectionController.SelectCandidate(target.Candidate);
    }

    private static bool TryGetPointerDownPosition(out Vector2 screenPosition)
    {
        screenPosition = default;

        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
        {
            screenPosition = Touchscreen.current.primaryTouch.position.ReadValue();
            return true;
        }

        if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
        {
            screenPosition = Mouse.current.position.ReadValue();
            return true;
        }

#if ENABLE_LEGACY_INPUT_MANAGER
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == UnityEngine.TouchPhase.Began)
        {
            screenPosition = Input.GetTouch(0).position;
            return true;
        }

        if (Input.GetMouseButtonDown(0))
        {
            screenPosition = Input.mousePosition;
            return true;
        }
#endif

        return false;
    }
}
