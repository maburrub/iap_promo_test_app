#if UNITY_ANDROID || UNITY_IPHONE || UNITY_STANDALONE_OSX || UNITY_TVOS
// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("Hp6Rc5udDV06ICTKph+t6EWRyJF3XCWx4YAemSk209sGc9sfzUfT7PispoLFaw2zLtoYAnXoQKRb6X4oCMygIlmXodn9TWVzayg/hBCZ5Myh0/0iEF+zWurao7ZT9X9cyqGDuefOm2tZEwFnkVP3xl/6NUgohvvCgAMNAjKAAwgAgAMDAoYBESVUOQydpso6kdP6ieomxzXYwHmmwNhphDKAAyAyDwQLKIRKhPUPAwMDBwIBYvrVIk0a1KSddLEveA9eIgOR+sKDAVFnjPCnAPt+AIX/6MnXp25rr37aUuK75t8aAhZjYpwiX6Bjl13cPNR7nsK+0u/hEvkhv9nVCVJzNv8xOgST1bD0WHDQfcHLBqc70LYEBRaNQ3iXqt/w2wABAwID");
        private static int[] order = new int[] { 2,13,11,4,7,10,13,12,11,13,11,13,13,13,14 };
        private static int key = 2;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
#endif
