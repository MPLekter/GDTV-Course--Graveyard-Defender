using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Node
{
    //pathfinding variables
    public Vector2Int coordinates;
    public bool isWalkable;
    public bool isExplored;
    public bool isPath;
    public Node connectedTo;

    //constructor
    public Node(Vector2Int coordinates, bool isWalkable)
    {
        this.coordinates = coordinates; //a way of using the same names
        this.isWalkable = isWalkable;
    }

}