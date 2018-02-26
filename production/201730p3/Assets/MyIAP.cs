using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Events;
using UnityEngine.Purchasing;
using UnityEngine.UI;

public class MyIAP : MonoBehaviour, IStoreListener
{
	[SerializeField] private string iosGameId = "1320533";
	[SerializeField] private string androidGameId = "1320532";
	[SerializeField] private bool useStagingUrls = false;
	[SerializeField] private string configUrl = "http://adserver.unityads.unity3d.com";
	[SerializeField] private string serverUrl = "https://auction.unityads.unity3d.com";

	[SerializeField] private bool testMode = false;

	private IStoreController controller;

	private void Start()
	{
		StandardPurchasingModule module = StandardPurchasingModule.Instance();
		ProductCatalog catalog = ProductCatalog.LoadDefaultCatalog();
		ConfigurationBuilder builder = ConfigurationBuilder.Instance(module);
		IAPConfigurationHelper.PopulateConfigurationBuilder(ref builder, catalog);
		UnityPurchasing.Initialize(this, builder);

		string gameId = null;

		if (Application.platform == RuntimePlatform.IPhonePlayer)
		{
			gameId = this.iosGameId;
		}
		else if (Application.platform == RuntimePlatform.Android)
		{
			gameId = this.androidGameId;
		}

		if (!Advertisement.isSupported || Advertisement.isInitialized)
		{
			return;
		}

		if(this.useStagingUrls)
		{
			Debug.Log("Using staging URLs:\n" +
				"\tConfig URL: " + this.configUrl + "\n" +
				"\tServer URL: " + this.serverUrl);
			MetaData metaDataObj = new MetaData("test");
			metaDataObj.Set("configUrl", this.configUrl);
			metaDataObj.Set("serverUrl", this.serverUrl);
			Advertisement.SetMetaData(metaDataObj);
		}
		Debug.Log("Advertisement initializing with: gameId=" + gameId + ", testMode=" + testMode);
		Advertisement.Initialize(gameId, this.testMode);
	}

	public void OnPurchaseComplete(Product item)
	{
		Debug.Log("OnPurchaseComplete: " + item);
	}

	public void OnPurchaseFailed(Product item, PurchaseFailureReason r)
	{
		Debug.Log("OnPurchaseFailed: " + item + ", " + r);
	}

	public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
	{
		Debug.Log("OnInitialized: " + controller + ", " + extensions);
		this.controller = controller;
	}

	public void OnInitializeFailed(InitializationFailureReason error)
	{
		Debug.Log("OnInitializeFailed: " + error);
	}

	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
	{
		Debug.Log("ProcessPurchase: " + e);
		return PurchaseProcessingResult.Complete;
	}

	public void OnPurchaseClicked(string productId) {
		Debug.Log("OnPurchaseClicked: " + productId);
		this.controller.InitiatePurchase(productId);
	}
}