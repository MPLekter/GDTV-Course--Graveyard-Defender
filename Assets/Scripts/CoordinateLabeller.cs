using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

[ExecuteAlways]
public class CoordinateLabeller : MonoBehaviour
{
    TextMeshPro coordinateLabel;
    Vector2Int coordinates = new Vector2Int();

    void Awake()
    {
        coordinateLabel = GetComponent<TextMeshPro>();
        DisplayCoordinates(); //just once while playing game
    }

    void Update()
    {
    if (!Application.isPlaying)
        {
            DisplayCoordinates(); //all the time in editor
            UpdateObjectName();
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
