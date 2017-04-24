using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlowerStalkSelector : MonoBehaviour
{
    public GameObject[] stalks;

	// Use this for initialization
	void Start ()
    {
        stalks[Random.Range(0, stalks.Length)].SetActive(true);
	}
}
