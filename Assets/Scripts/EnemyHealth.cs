using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Enemy))]

public class EnemyHealth : MonoBehaviour
{
    [SerializeField] int maxHP = 3;
    int currentHP = 0;
    [Tooltip("Adds this amount to maxHP on death")]
    [SerializeField] int boostHP = 1;

    Enemy enemy;

    void OnEnable()
    {
        currentHP = maxHP; //3 first and then + boost on every death.
    }

    void Start()
    {
        enemy = GetComponent<Enemy>();   
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
            //Destroy(gameObject);
            enemy.RewardGold();
            maxHP += boostHP;
            gameObject.SetActive(false);
        }
    }

    void ReduceHP()
    {
       currentHP -= 1;
    }

}
