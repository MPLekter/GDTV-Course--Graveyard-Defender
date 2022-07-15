using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMover : MonoBehaviour
{
    [SerializeField] List<Waypoint> path = new List<Waypoint>();
    [SerializeField] [Range(0f, 5f)] float speed = 1f;

   // [SerializeField] float xOffset = -0f;
   // [SerializeField] float waitTime = 1f;



    void Start()
    {
        StartCoroutine(FollowPath());   
        
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

            //not smooth movement down here
            //transform.position = waypoint.transform.position; 
            //SetXOffset();
            //yield return new WaitForSeconds(waitTime);
        }
    }

    //void SetXOffset()
    //{
       // transform.position += new Vector3(xOffset, 0f, 0f);
        //transform.Translate(new Vector3(-5f, 0f, 0f)); //this also works.
    //}
}


