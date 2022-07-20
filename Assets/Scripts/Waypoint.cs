using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Waypoint : MonoBehaviour
{
    [SerializeField] Tower towerPrefab;
    [SerializeField] bool isPlaceable;

    public bool IsPlaceable {  get { return isPlaceable;  } }
    void OnMouseDown()
    {
        if (isPlaceable)
        {
            bool isPlaced = towerPrefab.CreateTower(towerPrefab, transform.position); //this works because towerPrefab.CreateTower is a public bool (not a void!) and returns true/false.
            isPlaceable = !isPlaced; //is placed = true? then is placeable = false.
        }
    }
}
