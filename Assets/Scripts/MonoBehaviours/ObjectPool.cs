using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPool : MonoBehaviour
{
    [SerializeField] GameObject enemyPrefab;
    [SerializeField] [Range(0, 40)] int poolSize = 5;
    [SerializeField] [Range(0.1f, 29f)] float spawnTimer = 1f;

    GameObject[] pool;

    void Awake()
    {
        PopulatePool();
    }

    void Start()
    {
        StartCoroutine(SpawnEnemy());
    }
    void PopulatePool()
    {
        pool = new GameObject[poolSize]; //poolSize must be positive. 

        for (int i = 0; i < pool.Length; i++)
        {
            pool[i] = Instantiate(enemyPrefab, transform); // here I looked for Instantiate with just two arguments - the thing and its position (related to parent - ObjectPool)
            pool[i].SetActive(false);
        }
    }


    void EnableObjectInPool()
    {
        for (int i = 0; i < pool.Length; i++ )
        {
            if (pool[i].activeInHierarchy == false)
            {
                pool[i].SetActive(true);
                return;
            }
        }
    }
    IEnumerator SpawnEnemy()
    {
        while(true) //danger! infinite loop here. spawnTimer must be positive, not 0, not negative.
        {
            EnableObjectInPool();
            yield return new WaitForSeconds(spawnTimer);
        }
    }
}
