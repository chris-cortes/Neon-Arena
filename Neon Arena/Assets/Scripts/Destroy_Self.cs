using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroy_Self : MonoBehaviour
{
    public float time_before_destroy;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        time_before_destroy -= Time.deltaTime;
        if(time_before_destroy <= 0.0f)
        {
            Destroy(gameObject);
        }
    }
}
