using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BeeController : MonoBehaviour
{
    public float flyingForce;
    public float maxNectar;
    public float nectarPerSecond;
    public GameObject pollenParticles;
    public AudioSource flower;
    public AudioSource bird;

    private Rigidbody2D rgdBdy;
    private bool addForce = false;
    private const float MAX_VELOCITY = 8.0f;
    private float harvestTime = 2.0f;
    private float harvestElapsed = 0.0f;
    private bool harvesting = false;
    private bool firstAction = true;
    private Collider2D harvestingCollider;
    private bool moveToHive = false;
    private Transform hiveLocation;
    private float _currentNectar = 0.0f;
    private DamageEffect _dmgEffect;
    private bool _justHit = false;
    private Animator _animator;

	// Use this for initialization
	void Start ()
    {
        rgdBdy = GetComponent<Rigidbody2D>();
        rgdBdy.gravityScale = 0.0f;
        ScrollManager.Instance.StopScroll();
        _dmgEffect = gameObject.GetComponent<DamageEffect>();
        _animator = gameObject.GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (GameManager.Instance.Pause)
        {
            this.rgdBdy.gravityScale = 0.0f;
            this.rgdBdy.velocity = Vector2.zero;
            return;
        }

        addForce = false;
        if (!moveToHive)
        {
            if (!harvesting && !_dmgEffect.Invincible())
            {
                if (Input.GetKey(KeyCode.W))
                {
                    addForce = true;

                    if (firstAction)
                    {
                        firstAction = false;
                        TimeOfDayManager.Instance.StartDay();
                        ScrollManager.Instance.ResumeScroll();
                        rgdBdy.gravityScale = 1.0f;
                    }
                }
            }
            else if(harvesting)
            {
                harvestElapsed += Time.deltaTime;
                _currentNectar = Mathf.Clamp(_currentNectar + Time.deltaTime * nectarPerSecond, 0f, maxNectar);
                if (harvestElapsed >= harvestTime)
                {
                    ScrollManager.Instance.ResumeScroll();
                    rgdBdy.gravityScale = 1.0f;
                    rgdBdy.AddForce(Vector2.up * 5.0f, ForceMode2D.Impulse);
                    harvesting = false;
                    harvestElapsed = 0.0f;
                    _animator.SetBool("Eating", false);
                }
            }
        }

        transform.eulerAngles = new Vector3(0f, 0f, Mathf.LerpUnclamped(-35.0f, 35.0f, (rgdBdy.velocity.y + MAX_VELOCITY) / (MAX_VELOCITY * 2.0f)));
    }

    private void FixedUpdate()
    {
        if (GameManager.Instance.Pause)
            return;
        if (moveToHive)
        {
            this.transform.position = Vector2.MoveTowards(this.transform.position, hiveLocation.position, MAX_VELOCITY * Time.deltaTime);
            if(transform.position == hiveLocation.position)
            {
                GameManager.Instance.AddNectar(_currentNectar);
                GameManager.Instance.State = 1;
                SceneManager.LoadScene("NextDay");
            }
            return;
        }

        if (_justHit)
        {
            _justHit = false;
            rgdBdy.velocity = Vector2.zero;
        }
        else if (addForce && !harvesting)
        {
            rgdBdy.AddForce(Vector2.up * flyingForce);
        }
        else if (harvesting)
        {
            rgdBdy.velocity = Vector2.zero;
        }

        rgdBdy.velocity = Vector3.ClampMagnitude(rgdBdy.velocity, MAX_VELOCITY);
    }

    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (GameManager.Instance.Pause)
            return;

        if (!harvesting && (collision.gameObject.transform.position - this.transform.position).sqrMagnitude <= 1.0f && collision.gameObject.CompareTag("Flower"))
        {
            harvestingCollider = collision;
            harvestingCollider.enabled = false;
            harvesting = true;
            ScrollManager.Instance.StopScroll();
            rgdBdy.gravityScale = 0.0f;
            _animator.SetBool("Eating", true);
            GameObject particles = Instantiate(pollenParticles, this.transform.position, Quaternion.identity);
            Destroy(particles, particles.GetComponent<ParticleSystem>().main.duration);
            flower.Play();
        }

        if(!harvesting && !_dmgEffect.Invincible() && collision.gameObject.CompareTag("Bird"))
        {
            _currentNectar = Mathf.Max(0f, _currentNectar - 6.0f);
            _dmgEffect.MakeInvincible();
            _justHit = true;
            bird.Play();
        }

        if(collision.gameObject.CompareTag("Tree"))
        {
            moveToHive = true;
            hiveLocation = collision.gameObject.GetComponentInChildren<Hive>().GetLocation();
            ScrollManager.Instance.StopScroll();
            rgdBdy.gravityScale = 0.0f;
            rgdBdy.velocity = Vector2.zero;
        }
    }

    public float NectarPercentage()
    {
        return _currentNectar / maxNectar;
    }
}
