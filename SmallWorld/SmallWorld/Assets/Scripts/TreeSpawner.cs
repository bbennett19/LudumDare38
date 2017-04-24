using UnityEngine;

public class TreeSpawner : MonoBehaviour
{
    public GameObject tree;
	
    private bool _spawnOnce = false;
	// Update is called once per frame
	void Update ()
    {
        if (!_spawnOnce && TimeOfDayManager.Instance.DayCompletePercentage() > 0.99f)
        {
            GameObject t = Instantiate(tree, this.transform.position, Quaternion.identity);
            t.transform.localScale = new Vector3(-1f, 1f);
            _spawnOnce = true;
        }
	}
}
