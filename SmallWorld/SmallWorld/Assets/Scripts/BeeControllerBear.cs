using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BeeControllerBear : MonoBehaviour
{
    public float flyingForce;
    public float diveSpeed;
    public float diveTime;
    public float deathTime = 15.0f;
    public AnimationCurve curve;
    public Transform ground;
    public Transform ceiling;

    private float _elapsedDeath = 0.0f;
    private float _elapsedDive = 0.0f;
    private Rigidbody2D rgdBdy;
    private bool addForce = false;
    private const float MAX_VELOCITY = 8.0f;
    private DamageEffect _dmgEffect;
    private Animator _animator;
    private bool _diveBomb = false;
    private bool _addImpulse = false;
    private Vector2 _impulseForce = new Vector2();
    private bool _dying = false;
    private bool _dead = false;

    // Use this for initialization
    void Start()
    {
        rgdBdy = GetComponent<Rigidbody2D>();
        ScrollManager.Instance.StopScroll();
        _dmgEffect = gameObject.GetComponent<DamageEffect>();
        _animator = gameObject.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (_dead)
            return;

        addForce = false;

        if (_dying)
        {
            _elapsedDeath += Time.deltaTime;
            if(_elapsedDeath >= deathTime)
            {
                ScrollManager.Instance.StopScroll();
                _dying = false;
                _dead = true;
                _animator.SetTrigger("Dead");
                GameManager.Instance.StopAudio();
            }
        }

        if (Input.GetKeyDown(KeyCode.Space) && !_dying)
        {
            _diveBomb = true;
            SetDiveParams();
        }

        if (Input.GetKey(KeyCode.W) && !_diveBomb)
        {
            addForce = true;
        }
        
        if(_diveBomb)
        {
            _elapsedDive += Time.deltaTime;
            if(_elapsedDive >= diveTime)
            {
                ResetDiveParams();
            }
        }
        if(!_diveBomb)
            transform.eulerAngles = new Vector3(0f, 0f, Mathf.LerpUnclamped(-35.0f, 35.0f, (rgdBdy.velocity.y + MAX_VELOCITY) / (MAX_VELOCITY * 2.0f)));

        // Lock x, very important
        Vector2 pos = transform.position;
        pos.x = -2.73f;
        transform.position = pos;
    }

    public void Die()
    {
        _dying = true;
        _animator.SetTrigger("LoseStinger");
    }

    private void ResetDiveParams()
    {
        transform.eulerAngles = Vector3.zero;
        transform.localScale = Vector2.one;
        _diveBomb = false;
        _elapsedDive = 0.0f;
    }

    private void SetDiveParams()
    {
        transform.eulerAngles = new Vector3(0f, 0f, 125f);
        transform.localScale = new Vector2(1f, -1f);
    }

    private void FixedUpdate()
    {
        if (_dead)
            return;

        float force = flyingForce;

        if(_dying)
        {
            if (transform.position.y > Mathf.Lerp(ceiling.position.y, ground.position.y, _elapsedDeath / deathTime))
                force = 0.0f;
            //force = Mathf.Lerp(4.5f, flyingForce, curve.Evaluate(_elapsedDeath/deathTime));
            
        }
        if (addForce)
        {
            rgdBdy.AddForce(Vector2.up * force);
        }

        if(_diveBomb)
        {
            rgdBdy.velocity = Vector2.down * diveSpeed;
        }

        if(_addImpulse && !_dying)
        {
            rgdBdy.AddForce(_impulseForce, ForceMode2D.Impulse);
            _addImpulse = false;
        }
        if(!_diveBomb)
            rgdBdy.velocity = Vector3.ClampMagnitude(rgdBdy.velocity, MAX_VELOCITY);
    }

    public void OnCollisionEnter2D(Collision2D collision)
    {


        if(_diveBomb && collision.gameObject.CompareTag("Bear") && collision.otherCollider.GetType() == typeof(BoxCollider2D))
        {
            collision.gameObject.SendMessage("Hit");
        }

        if (_diveBomb)
        {
            ResetDiveParams();
        }

        if (collision.transform.position.y > transform.position.y)
        {
            _addImpulse = true;
            _impulseForce = Vector2.down * 2.0f;
        }
        else
        {
            _addImpulse = true;
            _impulseForce = Vector2.up * 2.0f;
        }
    }

    public void OnTriggerEnter2D(Collider2D collision)
    {
        
    }
}
