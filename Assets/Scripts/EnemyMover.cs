using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMover : MonoBehaviour
{
    [SerializeField] List<Waypoint> path = new List<Waypoint>();
    [SerializeField] float xOffset = -0f;
    [SerializeField] float waitTime = 1f;



    void Start()
    {
        StartCoroutine(FollowPath());   
        
    }

    IEnumerator FollowPath()
    {
        foreach (Waypoint waypoint in path)
        {
            transform.position = waypoint.transform.position; 
            SetXOffset();
            yield return new WaitForSeconds(waitTime);
        }
    }

    void SetXOffset()
    {
        transform.position += new Vector3(xOffset, 0f, 0f);
        //transform.Translate(new Vector3(-5f, 0f, 0f)); //this also works.
    }
}


