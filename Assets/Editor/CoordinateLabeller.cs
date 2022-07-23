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
    [SerializeField] Color exploredColor = Color.black;
    [SerializeField] Color pathColor = Color.cyan;

    TextMeshPro coordinateLabel;
    Vector2Int coordinates = new Vector2Int();

    GridManager gridManager;

    void Awake()
    {
        gridManager = FindObjectOfType<GridManager>();

        coordinateLabel = GetComponent<TextMeshPro>();
        coordinateLabel.enabled = true;
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
       if(gridManager == null) { return; } //wont work without gridManager

        Node node = gridManager.GetNode(coordinates);

        if(node == null) { return; } //also wont work without a node.

        if(!node.isWalkable)
        {
            coordinateLabel.color = blockedColor;
        }
        else if(node.isPath)
        {
            coordinateLabel.color = pathColor;
        }
        else if(node.isExplored)
        {
            coordinateLabel.color = exploredColor;
        }
        else
        {
            coordinateLabel.color = defaultColor;
        }
    }

    void DisplayCoordinates()
    {
        if(gridManager == null) { return; }

        coordinates.x = Mathf.RoundToInt(transform.parent.position.x / gridManager.UnityGridSize);
        coordinates.y = Mathf.RoundToInt(transform.parent.position.z / gridManager.UnityGridSize); 

        coordinateLabel.text = coordinates.x + "," + coordinates.y;
    }

    void UpdateObjectName()
    {
        transform.parent.name = coordinates.ToString();
    }
}
