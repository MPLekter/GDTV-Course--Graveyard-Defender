using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyHealth : MonoBehaviour
{
    [SerializeField] int maxHP = 3;
    int currentHP = 0;

    void Start()
    {
        currentHP = maxHP; 
    }

    void OnParticleCollision(GameObject other) //only works if Particle system has SEND COLLISION MESSAGES triggered on. 
    {
        ProcessHit();    
    }

    void ProcessHit()
    {
        ReduceHP();
        if (currentHP <= 0)
        {
            Destroy(gameObject);
        }
    }

    void ReduceHP()
    {
       currentHP -= 1;
    }

}