using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMover : MonoBehaviour
{
    [SerializeField] List<Waypoint> path = new List<Waypoint>();
    [SerializeField] [Range(0f, 5f)] float speed = 1f;

    Enemy enemy;

   // [SerializeField] float xOffset = -0f;
   // [SerializeField] float waitTime = 1f;



    void OnEnable()
    {
        FindPath();
        ReturnToStart();
        StartCoroutine(FollowPath());   
    }

    void Start()
    {
        enemy = GetComponent<Enemy>();
    }
    void FindPath()
    {
        path.Clear(); //clears instead of building up a long long path.

        GameObject pathParent = GameObject.FindGameObjectWithTag("Path");

        foreach(Transform pathTile in pathParent.transform)
        {
            Waypoint waypoint = pathTile.GetComponent<Waypoint>();
            if(waypoint != null)
            {
            path.Add(waypoint);
            }
        }
    }

    void ReturnToStart() //in case enemy spawns somewhere different than path[0], this method moves it to path[0]'s transform pos.
    {
        transform.position = path[0].transform.position;
    }
    void FinishPath()
    {
        enemy.StealGold();
        gameObject.SetActive(false);
    }
    IEnumerator FollowPath()
    {
        foreach (Waypoint waypoint in path)
        {
            //smooth movement here
            Vector3 startPos = transform.position;
            Vector3 endPos = waypoint.transform.position;
            float travelPercent = 0f;

            transform.LookAt(endPos);

            //update travelPercent
            while(travelPercent < 1f)
            {
                travelPercent += Time.deltaTime *speed;
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


