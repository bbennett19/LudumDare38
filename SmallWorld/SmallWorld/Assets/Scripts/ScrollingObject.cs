using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollingObject : MonoBehaviour
{
    
	// Use this for initialization
	void Start ()
    {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
        this.transform.position = this.transform.position + (Vector3.left * ScrollManager.Instance.GetScrollSpeed() * Time.deltaTime);
	}
}
