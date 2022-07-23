using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMover : MonoBehaviour
{
    [SerializeField] [Range(0f, 5f)] float speed = 1f;

    List<Node> path = new List<Node>();
    
    Enemy enemy;
    GridManager gridManager;
    Pathfinder pathfinder;


   // [SerializeField] float xOffset = -0f;
   // [SerializeField] float waitTime = 1f;



    void OnEnable()
    {
        ReturnToStart();
        RecalculatePath(true);
   
    }

    void Awake()
    {
        enemy = GetComponent<Enemy>();
        gridManager = FindObjectOfType<GridManager>();
        pathfinder = FindObjectOfType<Pathfinder>();
    }
    void RecalculatePath(bool resetPath)
    {
        //make a decision what coords to use
        Vector2Int coordinates = new Vector2Int();

        if(resetPath)
        {
            coordinates = pathfinder.StartCoordinates;
        }
        else
        {
            coordinates = gridManager.GetCoordinatesFromPosition(transform.position);
        }

        StopAllCoroutines();
        path.Clear(); //clears instead of building up a long long path.
        path = pathfinder.GetNewPath(coordinates);
        StartCoroutine(FollowPath());
    }

    void ReturnToStart() //in case enemy spawns somewhere different than path[0], this method moves it to path[0]'s transform pos.
    {
        transform.position = gridManager.GetPositionFromCoordinates(pathfinder.StartCoordinates);
    }
    void FinishPath()
    {
        enemy.StealGold();
        gameObject.SetActive(false);
    }
    IEnumerator FollowPath()
    {
        for(int i = 1; i < path.Count; i++)
        {
            //smooth movement here
            Vector3 startPos = transform.position;
            Vector3 endPos = gridManager.GetPositionFromCoordinates(path[i].coordinates);
            float travelPercent = 0f;

            transform.LookAt(endPos);

            //update travelPercent
            while(travelPercent < 1f)
            {
                travelPercent += Time.deltaTime * speed;
                transform.position = Vector3.Lerp(startPos, endPos, travelPercent);
                yield return new WaitForEndOfFrame();
            }

        }
        FinishPath();
    }

    //void SetXOffset()
    //{
       // transform.position += new Vector3(xOffset, 0f, 0f);
        //transform.Translate(new Vector3(-5f, 0f, 0f)); //this also works.
    //}
}


