using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    public GameObject[] objectsToSpawn;
    public bool useObjectHeight = false;
    public bool spawnOnStart = false;

    public float minInterval;
    public float maxInterval;
    public float minHeight;
    public float maxHeight;

    private float _currentInterval;
    private float _elapsedTime;

	// Use this for initialization
	void Start ()
    {
        ResetInterval();

        if (spawnOnStart)
            _elapsedTime = _currentInterval;
	}

    private void ResetInterval()
    {
        _elapsedTime = 0.0f;
        _currentInterval = Random.Range(minInterval, maxInterval);
    }
	
	// Update is called once per frame
	void Update ()
    {
        if (!ScrollManager.Instance.ScrollingStopped())
        {
            _elapsedTime += Time.deltaTime;

            if (_elapsedTime >= _currentInterval)
            {
                ResetInterval();
                Vector2 pos = this.transform.position;
                GameObject obj = objectsToSpawn[Random.Range(0, objectsToSpawn.Length)];

                if (minHeight != maxHeight)
                    pos.y = Random.Range(minHeight, maxHeight);
                if (useObjectHeight)
                    pos.y = obj.transform.position.y;



                Instantiate(obj, pos, obj.transform.rotation);
            }
        }
	}
}
