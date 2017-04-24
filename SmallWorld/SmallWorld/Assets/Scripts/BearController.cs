using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BearController : MonoBehaviour
{
    public Transform hivePos;
    public GameObject beeHive;
    public GameObject bee;
    public GameObject thing;

    private Vector2 _position;
    private float _speed = 0.0f;
    private float _frequency = 8f;
    private float _magnitude = 0.15f;
    private bool _moveToHive = false;
    private bool _walkingAway = false;
    private Animator _anim;
    private bool _pausing = false;
    private bool _interactable = false;
    private int _hitCount = 0;

	// Use this for initialization
	void Start ()
    {
        _position = this.transform.position;
        _anim = gameObject.GetComponent<Animator>();
        StartCoroutine(BearStart());
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (GameManager.Instance.Pause)
            return;

        if (_moveToHive)
        {
            _position += Vector2.left * Time.deltaTime * (ScrollManager.Instance.GetScrollSpeed() + _speed);
            transform.position = _position + Vector2.up * Mathf.Sin(Time.time * _frequency) * _magnitude;

            if(transform.position.x <= hivePos.position.x)
            {
                _position.x = hivePos.position.x;
                transform.position = _position;
                _moveToHive = false;
                StartCoroutine(BearEatHoney());
            }
        }

        if(_walkingAway)
        {
            _position += Vector2.left * Time.deltaTime * (ScrollManager.Instance.GetScrollSpeed() + _speed);
            transform.position = _position + Vector2.up * Mathf.Sin(Time.time * _frequency) * _magnitude;
        }

    }

    public void Hit()
    {
        if (!_pausing && _interactable)
        {
            _hitCount++;

            if(_hitCount != 4)
                StartCoroutine(Pause());
            else
            {
                _anim.SetTrigger("Roar");
                _interactable = false;
                _speed = -6.0f;
                bee.SendMessage("Die");
                thing.SetActive(true);
                Destroy(this, 30.0f);
            }
        }
    }

    IEnumerator Pause()
    {
        _pausing = true;
        _speed = 0.0f;
        _anim.SetTrigger("Roar");
        yield return new WaitForSeconds(1.2f);
        _speed = -2.0f;
        _pausing = false;
        yield return null;
    }

    IEnumerator BearStart()
    {
        _anim.SetTrigger("Roar");
        yield return new WaitForSeconds(2f);
        _moveToHive = true;
        _speed = 1.0f;
        yield return null;
    }

    IEnumerator BearEatHoney()
    {
        _anim.SetTrigger("Roar");
        yield return new WaitForSeconds(2f);
        _anim.SetTrigger("KnockDown");
        yield return new WaitForSeconds(2.5f);
        beeHive.SendMessage("Activate");
        _walkingAway = true;
        _speed = -2.0f;
        yield return new WaitForSeconds(1.75f);
        _walkingAway = false;
        _anim.SetTrigger("Eat");
        yield return new WaitForSeconds(6f);
        ScrollManager.Instance.ResumeScroll();
        _walkingAway = true;
        _speed = -2.0f;
        this.transform.localScale = new Vector2(-1f, 1f);
        _interactable = true;
        yield return null;
    }


}
