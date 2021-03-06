using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using TMPro;
using UnityEditor.SceneManagement; //needed for bug fix with prefabs renamed to 0,0 


[ExecuteAlways]
[RequireComponent(typeof(TextMeshPro))]
public class CoordinateLabeller : MonoBehaviour
{
    [SerializeField] Color defaultColor = Color.yellow;
    [SerializeField] Color blockedColor = Color.gray;

    TextMeshPro coordinateLabel;
    Vector2Int coordinates = new Vector2Int();

    Waypoint waypoint; 

    void Awake()
    {
        coordinateLabel = GetComponent<TextMeshPro>();
        coordinateLabel.enabled = true;
        waypoint = GetComponentInParent<Waypoint>(); //remember waypoints are in tiles. tiles are parents of text (labeller)
        DisplayCoordinates(); //just once while playing game
    }

    void Update()
    {
        if (!Application.isPlaying && PrefabStageUtility.GetPrefabStage(gameObject) == null)
        {
            DisplayCoordinates(); //all the time in editor
            UpdateObjectName();
        }

        SetCoordinateLabelColor();
        ToggleLabels();
    }
    void ToggleLabels()
    {
        if (Input.GetKeyDown(KeyCode.C))
        {
            coordinateLabel.enabled = !coordinateLabel.enabled;
        }
    }
    void SetCoordinateLabelColor()
    {
       if (waypoint.IsPlaceable)
        {
            coordinateLabel.color = defaultColor;
        }
       else
        {
            coordinateLabel.color = blockedColor; 
        }
    }

    void DisplayCoordinates()
    {
        coordinates.x = Mathf.RoundToInt(transform.parent.position.x / UnityEditor.EditorSnapSettings.move.x);
        coordinates.y = Mathf.RoundToInt(transform.parent.position.z / UnityEditor.EditorSnapSettings.move.z); //X-Z PLANE! IMPORTANT!

        coordinateLabel.text = coordinates.x + "," + coordinates.y;
    }

    void UpdateObjectName()
    {
        transform.parent.name = coordinates.ToString();
    }
}
