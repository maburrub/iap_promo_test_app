#if UNITY_ANDROID || UNITY_IPHONE || UNITY_STANDALONE_OSX || UNITY_TVOS
// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("w8j2YSdCBqqCIo8zOfRVySJE9vdvVDjIYyEIexjUNccqMotUMiqbdsBy8dLA/fb52na4dgf98fHx9fDzUyEP0OKtQagYKFFEoQeNrjhTcUty8f/wwHLx+vJy8fHwdPPj16bL/vo+UtCrZVMrD7+XgZnazXbiaxY+ha7XQxNy7GvbxCEp9IEp7T+1IR7OJolsMEwgHRPgC9NNKyf7oIHEDexsY4Fpb/+vyNLWOFTtXxq3YzpjcfOjlX4CVfIJjPJ3DRo7JVWcmV0VPGmZq+HzlWOhBTStCMe62nQJMIwooBBJFC3o8OSRkG7QrVKRZa8ukAgn0L/oJlZvhkPdiv2s0PFjCDAKXlRwN5n/Qdwo6vCHGrJWqRuM2uR/sYplWC0CKfLz8fDx");
        private static int[] order = new int[] { 3,12,3,7,12,12,13,12,12,12,10,12,13,13,14 };
        private static int key = 240;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
#endif
