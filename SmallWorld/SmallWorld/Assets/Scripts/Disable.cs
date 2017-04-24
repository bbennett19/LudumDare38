using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Disable : MonoBehaviour {
    public float time;

    private float elapse;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        elapse += Time.deltaTime;

        if (elapse >= time)
            this.gameObject.SetActive(false);
	}
}
