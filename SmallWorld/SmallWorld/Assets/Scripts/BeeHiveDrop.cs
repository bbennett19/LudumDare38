using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeeHiveDrop : MonoBehaviour
{
    public Transform dropLocation;
    public float speed;

    private bool _active = false;
    
    public void Activate()
    {
        _active = true;
    }
	
	// Update is called once per frame
	void Update ()
    {
	    if(_active)
        {
            transform.position = Vector2.MoveTowards(transform.position, dropLocation.position, speed * Time.deltaTime);
        }
	}
}
