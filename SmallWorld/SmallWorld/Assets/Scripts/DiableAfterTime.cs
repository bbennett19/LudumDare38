using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiableAfterTime : MonoBehaviour
{
    float time = 4.0f;
    float elapsed = 0.0f;
	// Use this for initialization
	void Start ()
    {
        ScrollManager.Instance.StopScroll();
        GameManager.Instance.Pause = true;
	}
	
	// Update is called once per frame
	void Update ()
    {
        elapsed += Time.deltaTime;

        if (elapsed >= time)
        {
            GameManager.Instance.Pause = false;
            this.gameObject.SetActive(false);
        }
	}
}
