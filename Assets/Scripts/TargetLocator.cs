using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetLocator : MonoBehaviour
{
    [SerializeField] Transform weapon;
    [SerializeField] Transform target;
    [SerializeField] float range = 15f; // a tile and a half.
    [SerializeField] ParticleSystem projectileParticles;

    void Update()
    {
        FindClosestTarget();
        AimWeapon();        
    }

    void FindClosestTarget()
    {
        Enemy[] enemies = FindObjectsOfType<Enemy>();
        Transform closestTarget = null;
        float maxDistance = Mathf.Infinity; //this is a bit weird but we need a big number initially.

        foreach(Enemy enemy in enemies)
        {
            float targetDistance = Vector3.Distance(transform.position, enemy.transform.position);

            if (targetDistance < maxDistance)
            {
                closestTarget = enemy.transform; //first you just pick any enemy
                maxDistance = targetDistance; //then you cut the big number into some more imaginable distance
            }
        }

        target = closestTarget; //so you have looped through all and if you cannot find one thats closer than itself, however silly that sounds, you have found the closest!
    }

    void AimWeapon()
    {
        float targetDistance = Vector3.Distance(transform.position, target.transform.position);
        if (targetDistance < range)
        {
            Attack(true);
            weapon.LookAt(target);
        }
        else
        {
            Attack(false);
        }
    }

    void Attack(bool isActive)
    {
        var emissionModule = projectileParticles.emission;
        emissionModule.enabled = isActive;
    }
}
