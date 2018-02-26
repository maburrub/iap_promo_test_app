To setup promo testing, follow the steps below...

1. Clone this unity project as it is ready for promo

2. To update the IAP and Ads sdks. You may copy them from:
   https://drive.google.com/drive/u/1/folders/1CAsTVqu5Biupqihmpkl9C7J-6BE44vSR

3. The test plan can be found here:
   https://confluence.hq.unity3d.com/display/UnityAds/IAP+Promo+Test+Plan#IAPPromoTestPlan-IAPPlugin(IAPSDK)andAdsSDK

4. For iOS, add the following key/value pair to pinfo.list file
   UADSWebviewBranch : feature/purchasing-api
   
5. In iOS, if you want to build for simulator, Change target SDK in Unity iOS player settings
6. Events sent:

   Impression:
   https://events-iap.staging.unityads.unity3d.com/events/v1/impression
   http://tracking-stg.internal.unity3d.com/impression

   Complete:
   https://events-iap.staging.unityads.unity3d.com/events/v1/complete
   http://tracking-stg.internal.unity3d.com/operative

   Click:
   https://events-iap.staging.unityads.unity3d.com/events/v1/click
   http://tracking-stg.internal.unity3d.com/operative

   Purchase:
   https://events-iap.staging.unityads.unity3d.com/events/v1/purchase
   http://tracking-stg.internal.unity3d.com/operative
   
7. Dashboard on stage:
   https://dashboard-iap.staging.unityads.unity3d.com/
8. To configure a test app from the scratch:
   https://confluence.hq.unity3d.com/display/UnityAds/Configuring+IAP+Promo+apps+to+use+the+staging+environment
   
9. To get iOS and Android game ids:
   https://operate.staging.dashboard.unity3d.com
   
10. You need to create a product catalog using window/iap/catalog. Create a common id for example coins. Provide store id overrides.
11. Go to dashboard, make sure you have a services project, upload catalog, create placements and promotions.
