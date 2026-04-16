using UnityEngine;

public class SuspectSelectionStageLayout : MonoBehaviour
{
    [Header("Camera Anchor")]
    [SerializeField] private Transform cameraTransform;

    [Header("Character Roots")]
    [SerializeField] private Transform suspectA;
    [SerializeField] private Transform suspectB;
    [SerializeField] private Transform suspectC;
    [SerializeField] private Transform detective;

    [Header("Layout")]
    [SerializeField] private float suspectDistance = 2f;
    [SerializeField] private float detectiveDistance = 2.3f;
    [SerializeField] private float characterHeightOffset = -1.2f;
    [SerializeField] private float suspectSpreadAngle = 18f;
    [SerializeField] private float detectiveAngle = 75f;
    [SerializeField] private bool faceCameraOnSpawn = true;

    private void Start()
    {
        Transform anchor = cameraTransform != null ? cameraTransform : Camera.main != null ? Camera.main.transform : null;
        if (anchor == null)
        {
            return;
        }

        PlaceCharacter(suspectA, anchor, -suspectSpreadAngle, suspectDistance);
        PlaceCharacter(suspectB, anchor, 0f, suspectDistance);
        PlaceCharacter(suspectC, anchor, suspectSpreadAngle, suspectDistance);
        PlaceCharacter(detective, anchor, detectiveAngle, detectiveDistance);
    }

    private void PlaceCharacter(Transform characterRoot, Transform anchor, float yawOffset, float distance)
    {
        if (characterRoot == null)
        {
            return;
        }

        Vector3 forward = anchor.forward;
        forward.y = 0f;
        forward = forward.sqrMagnitude < 0.001f ? Vector3.forward : forward.normalized;

        Quaternion rotationOffset = Quaternion.AngleAxis(yawOffset, Vector3.up);
        Vector3 direction = rotationOffset * forward;

        Vector3 position = anchor.position + direction * distance;
        position.y += characterHeightOffset;
        characterRoot.position = position;

        if (faceCameraOnSpawn)
        {
            Vector3 lookDirection = anchor.position - characterRoot.position;
            lookDirection.y = 0f;

            if (lookDirection.sqrMagnitude > 0.001f)
            {
                characterRoot.rotation = Quaternion.LookRotation(lookDirection.normalized, Vector3.up);
            }
        }
    }
}
