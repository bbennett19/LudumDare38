using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeOfDayArrow : MonoBehaviour
{
    public float startRotation;
    public float endRotation;

	// Use this for initialization
	void Start ()
    {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
        this.transform.eulerAngles = new Vector3(0f, 0f, Mathf.Lerp(startRotation, endRotation, TimeOfDayManager.Instance.DayCompletePercentage()));	
	}
}
