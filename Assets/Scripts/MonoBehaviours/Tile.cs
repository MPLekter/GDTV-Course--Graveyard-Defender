using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    [SerializeField] Tower towerPrefab;
    [SerializeField] bool isPlaceable;

    public bool IsPlaceable {  get { return isPlaceable;  } }

    GridManager gridManager;
    Pathfinder pathfinder;
    Vector2Int coordinates = new Vector2Int();

    private void Awake()
    {
        gridManager = FindObjectOfType<GridManager>();
        pathfinder = FindObjectOfType<Pathfinder>();
    }

    private void Start()
    {
        coordinates = gridManager.GetCoordinatesFromPosition(transform.position);
        if(!isPlaceable)
        {
            gridManager.SetUnwalkable(coordinates);
        }
    }
    void OnMouseDown()
    {
        if (gridManager.GetNode(coordinates).isWalkable && !pathfinder.WillBlockPath(coordinates))
        {
            bool isPlaced = towerPrefab.CreateTower(towerPrefab, transform.position); //this works because towerPrefab.CreateTower is a public bool (not a void!) and returns true/false.
            isPlaceable = !isPlaced; //is placed = true? then is placeable = false.
            gridManager.SetUnwalkable(coordinates);
        }
    }
}
