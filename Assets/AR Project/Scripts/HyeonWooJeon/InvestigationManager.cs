using UnityEngine;
using UnityEngine.EventSystems;

public enum ToolType 
{ 
    None,               
    MagnifyingGlass,    
    Brush               
}
public class InvestigationManager : MonoBehaviour
{
    public ToolType currentTool = ToolType.None;

    public void SelectMagnifyingGlass()
    {
        currentTool = ToolType.MagnifyingGlass;
        Debug.Log("Magnifying Glass");
    }

    public void SelectBrush()
    {
        currentTool = ToolType.Brush;
        Debug.Log("Brush");
    }

    void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            if (EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)) return;

            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                EvidenceObject evidence = hit.collider.GetComponent<EvidenceObject>();

                if (evidence != null)
                {
                    evidence.InteractWithTool(currentTool);
                }
            }
        }
    }
}