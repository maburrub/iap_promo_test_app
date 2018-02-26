using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;


public class PromoButton : MonoBehaviour
{
	[SerializeField] private string placementID;

	private Button button;
	private Text text;

	private void Awake()
	{
		this.button = GetComponent<Button>();
		this.text = GetComponentInChildren<Text>();
	}

	private void Start()
	{
		this.button.onClick.AddListener(this.ShowPromotion);
		StartCoroutine("checkPlacement");
	}

	private IEnumerator checkPlacement()
	{
		while (true)
		{
			if (!Advertisement.isInitialized || !Advertisement.IsReady(this.placementID))
			{
				this.text.fontStyle = FontStyle.Normal;
			} else {
				this.text.fontStyle = FontStyle.Bold;
			}

			yield return new WaitForSeconds(1);
		}
	}

	public void ShowPromotion()
	{
		Advertisement.Show(this.placementID);
	}
}