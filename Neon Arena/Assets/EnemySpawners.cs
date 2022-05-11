using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//followed spawner tutorial at https://www.youtube.com/watch?v=tVc3NnzKZ4E

public class EnemySpawners : MonoBehaviour
{
    public GameObject[] spawners;
    public GameObject enemy;
    public float spawnCooldown = 3.0f;
    private float numSeconds = 0.0f;

    // Start is called before the first frame update
    void Start()
    {
        spawners = new GameObject[4];

        for(int i = 0; i < spawners.Length; i++)
        {
            spawners[i] = transform.GetChild(i).gameObject;
        }
    }


    private void SpawnEnemy()
    {
        int spawnerID = Random.Range(0, spawners.Length); //randomly select a spawner
        Instantiate(enemy, spawners[spawnerID].transform.position, spawners[spawnerID].transform.rotation);
    }

    // Update is called once per frame
    void Update()
    {
        numSeconds += Time.deltaTime;

        if(numSeconds > spawnCooldown)
        {
            numSeconds = 0.0f;

            SpawnEnemy();
        }
    }
}
