#if UNITY_ANDROID || UNITY_IPHONE || UNITY_STANDALONE_OSX || UNITY_TVOS
// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class AppleTangle
    {
        private static byte[] data = System.Convert.FromBase64String("wm242YxDGXhvKAeDbwaCJoPEuzW9LIJrx+CRVYNgPdn29/X09Vd29YCcm4adgI3F4sTg8veh8Pfn+bWEdODfJJ2zYIL9CgCfedq0UgOzuYvatFIDs7mL/KrE6/L3oenX8OzE4qaRmJ2VmpeR1Jua1ICcnYfUl5GG0sTQ8veh8P/n6bWEhJiR1LeRhoDBxsXAxMfCruP5x8HExsTNxsXAxOtlL+qzpB/xGaqNcNkfwlajuKEY8sT78veh6ef19Qvw8cT39fULxOlcKIrWwT7RIS37Ip8gVtDX5QNVWHb19PL93nK8cgOXkPH1xHUGxN7y1JWakNSXkYaAnZKdl5WAnZua1ISGlZeAnZeR1IeAlYCRmZGagIfaxPny/d5yvHID+fX18fH093b19fSo0BYfJUOEK/uxFdM+BZmMGRNB4+NfV4Vms6ehNVvbtUcMDxeEORJXuI3UlYeHgZmRh9SVl5eRhICVmpeRx8KuxJbF/8T98veh8PLn9qGnxec97YYBqfohi6tvBtH3TqF7uan5BUPvSWe20ObeM/vpQrloqpc8v3TjgJ2SnZeVgJHUlo3UlZqN1ISVhoCDg9qVhISYkdqXm5nblYSEmJGXlfMYic13f6fUJ8wwRUtuu/6fC98I1JuS1ICckdSAnJGa1JWEhJidl5XJ0pPUfseeA/l2OyofV9sNp56vkPyqxHb15fL3oenU8Hb1/MR29fDEf+19Kg2/mAHzX9bE9hzsygyk/SfY1JeRhoCdkp2XlYCR1ISbmJ2Xja1T8f2I47Si5eqAJ0N/18+zVyGbjsR29YLE+vL3oen79fUL8PD39vWEmJHUppubgNS3tcTq4/nEwsTAxrGK67ifpGK1fTCAlv/kd7Vzx351LcKLNXOhLVNtTca2DywhhWqKVabUt7XEdvXWxPny/d5yvHID+fX19cTl8veh8P7n/rWEhJiR1L2al9rF3nK8cgP59fXx8fTElsX/xP3y96FFxKwYrvDGeJxHe+kqkYcLk6qRSMR28E/EdvdXVPf29fb29fbE+fL963F3ce9tybPDBl1vtHrYIEVk5iyQwdfhv+Gt6UdgAwJoajukTjWspEoAh28aJpD7P427wCxWyg2MC5884sTg8veh8Pfn+bWEhJiR1Kabm4A0l8eDA87z2KIfLvvV+i5Oh+27QfDy5/ahp8XnxOXy96Hw/uf+tYSEe4d1lDLvr/3bZkYMsLwElMxq4QFBzlkA+/r0Zv9F1eLagCHI+S+W4tvEdTfy/N/y9fHx8/b2xHVC7nVHmJHUvZqX2sXSxNDy96Hw/+fptYSLtVxsDSU+kmjQn+UkV08Q79436/zf8vXx8fP29eLqnICAhIfO29uDhJiR1LeRhoCdkp2XlYCdm5rUtYGWmJHUh4CVmpCVhpDUgJGGmYfUlZqQ1JebmpCdgJ2bmofUm5LUgYeR8veh6frw4vDg3ySds2CC/QoAn3mTe/xA1AM/WNjUm4RCy/XEeEO3O/H093b1+/TEdvX+9nb19fQQZV39YWqO+FCzf68g4sPHPzD7uTrgnSWdkp2XlYCdm5rUtYGAnJuGnYCNxftpyQffvdzuPAo6QU36LaroIj/JpF5+IS4QCCT988NEgYHV");
        private static int[] order = new int[] { 48,27,5,32,31,38,10,7,15,29,54,34,45,46,47,53,24,40,53,19,59,39,36,51,41,56,33,41,44,52,44,54,56,58,46,52,41,58,48,49,59,50,45,57,48,55,51,58,56,59,52,54,55,57,56,59,58,57,58,59,60 };
        private static int key = 244;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
#endif
