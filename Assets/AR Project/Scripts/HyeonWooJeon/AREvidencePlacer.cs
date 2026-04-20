using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class AREvidencePlacer : MonoBehaviour
{
    public ARRaycastManager raycastManager;
    public GameObject evidencePrefab; // evidence prefabs to place
    static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            if (raycastManager.Raycast(Input.GetTouch(0).position, hits, TrackableType.PlaneWithinPolygon))
            {
                var hitPose = hits[0].pose;
                Instantiate(evidencePrefab, hitPose.position, hitPose.rotation);
            }
        }
    }
}