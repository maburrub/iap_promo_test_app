#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.ChannelPurchase.PurchaseForwardCallback
struct PurchaseForwardCallback_t271572524;
// UnityEngine.ChannelPurchase.IPurchaseListener
struct IPurchaseListener_t2965295489;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t367980205;
// System.String
struct String_t;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t1031492314;
// System.Object[]
struct ObjectU5BU5D_t765054781;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t507776188;
// System.Char[]
struct CharU5BU5D_t4096704925;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t3043111335;
// System.Void
struct Void_t4262074757;

extern RuntimeClass* AndroidJavaProxy_t367980205_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral921080997;
extern const uint32_t PurchaseForwardCallback__ctor_m520303018_MetadataUsageId;
extern RuntimeClass* PurchaseForwardCallback_t271572524_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t765054781_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaObject_t1031492314_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* PurchaseService_t2640368659_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AndroidJavaObject_Set_TisString_t_m1332152651_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral1884972006;
extern Il2CppCodeGenString* _stringLiteral2452608790;
extern Il2CppCodeGenString* _stringLiteral4225643879;
extern Il2CppCodeGenString* _stringLiteral3525959198;
extern Il2CppCodeGenString* _stringLiteral4102417426;
extern const uint32_t PurchaseService_Purchase_m86091098_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3490391066;
extern const uint32_t PurchaseService_ValidateReceipt_m553159648_MetadataUsageId;
extern RuntimeClass* AndroidJavaClass_t507776188_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3080203485;
extern const uint32_t PurchaseService__cctor_m2749871695_MetadataUsageId;

struct ObjectU5BU5D_t765054781;


#ifndef U3CMODULEU3E_T257275540_H
#define U3CMODULEU3E_T257275540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t257275540 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T257275540_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t4096704925* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t4096704925* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t4096704925** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t4096704925* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef PURCHASESERVICE_T2640368659_H
#define PURCHASESERVICE_T2640368659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ChannelPurchase.PurchaseService
struct  PurchaseService_t2640368659  : public RuntimeObject
{
public:

public:
};

struct PurchaseService_t2640368659_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.ChannelPurchase.PurchaseService::serviceClass
	AndroidJavaClass_t507776188 * ___serviceClass_0;

public:
	inline static int32_t get_offset_of_serviceClass_0() { return static_cast<int32_t>(offsetof(PurchaseService_t2640368659_StaticFields, ___serviceClass_0)); }
	inline AndroidJavaClass_t507776188 * get_serviceClass_0() const { return ___serviceClass_0; }
	inline AndroidJavaClass_t507776188 ** get_address_of_serviceClass_0() { return &___serviceClass_0; }
	inline void set_serviceClass_0(AndroidJavaClass_t507776188 * value)
	{
		___serviceClass_0 = value;
		Il2CppCodeGenWriteBarrier((&___serviceClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASESERVICE_T2640368659_H
#ifndef ANDROIDJAVAOBJECT_T1031492314_H
#define ANDROIDJAVAOBJECT_T1031492314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t1031492314  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t3043111335 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t3043111335 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t1031492314, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t3043111335 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t3043111335 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t3043111335 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_jobject_1), value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t1031492314, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t3043111335 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t3043111335 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t3043111335 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_jclass_2), value);
	}
};

struct AndroidJavaObject_t1031492314_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::s_JavaLangClass
	AndroidJavaClass_t507776188 * ___s_JavaLangClass_3;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t1031492314_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}

	inline static int32_t get_offset_of_s_JavaLangClass_3() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t1031492314_StaticFields, ___s_JavaLangClass_3)); }
	inline AndroidJavaClass_t507776188 * get_s_JavaLangClass_3() const { return ___s_JavaLangClass_3; }
	inline AndroidJavaClass_t507776188 ** get_address_of_s_JavaLangClass_3() { return &___s_JavaLangClass_3; }
	inline void set_s_JavaLangClass_3(AndroidJavaClass_t507776188 * value)
	{
		___s_JavaLangClass_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangClass_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T1031492314_H
#ifndef VALUETYPE_T1635885057_H
#define VALUETYPE_T1635885057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1635885057  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1635885057_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1635885057_marshaled_com
{
};
#endif // VALUETYPE_T1635885057_H
#ifndef VOID_T4262074757_H
#define VOID_T4262074757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t4262074757 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T4262074757_H
#ifndef BOOLEAN_T3956119107_H
#define BOOLEAN_T3956119107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3956119107 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3956119107, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3956119107_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3956119107_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3956119107_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3956119107_H
#ifndef ANDROIDJAVACLASS_T507776188_H
#define ANDROIDJAVACLASS_T507776188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t507776188  : public AndroidJavaObject_t1031492314
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_T507776188_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ANDROIDJAVAPROXY_T367980205_H
#define ANDROIDJAVAPROXY_T367980205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t367980205  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t507776188 * ___javaInterface_0;
	// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::proxyObject
	AndroidJavaObject_t1031492314 * ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t367980205, ___javaInterface_0)); }
	inline AndroidJavaClass_t507776188 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t507776188 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t507776188 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((&___javaInterface_0), value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t367980205, ___proxyObject_1)); }
	inline AndroidJavaObject_t1031492314 * get_proxyObject_1() const { return ___proxyObject_1; }
	inline AndroidJavaObject_t1031492314 ** get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(AndroidJavaObject_t1031492314 * value)
	{
		___proxyObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___proxyObject_1), value);
	}
};

struct AndroidJavaProxy_t367980205_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t3043111335 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	IntPtr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t367980205_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t3043111335 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t3043111335 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t3043111335 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangSystemClass_2), value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t367980205_StaticFields, ___s_HashCodeMethodID_3)); }
	inline IntPtr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline IntPtr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(IntPtr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAPROXY_T367980205_H
#ifndef PURCHASEFORWARDCALLBACK_T271572524_H
#define PURCHASEFORWARDCALLBACK_T271572524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ChannelPurchase.PurchaseForwardCallback
struct  PurchaseForwardCallback_t271572524  : public AndroidJavaProxy_t367980205
{
public:
	// UnityEngine.ChannelPurchase.IPurchaseListener UnityEngine.ChannelPurchase.PurchaseForwardCallback::purchaseListener
	RuntimeObject* ___purchaseListener_4;

public:
	inline static int32_t get_offset_of_purchaseListener_4() { return static_cast<int32_t>(offsetof(PurchaseForwardCallback_t271572524, ___purchaseListener_4)); }
	inline RuntimeObject* get_purchaseListener_4() const { return ___purchaseListener_4; }
	inline RuntimeObject** get_address_of_purchaseListener_4() { return &___purchaseListener_4; }
	inline void set_purchaseListener_4(RuntimeObject* value)
	{
		___purchaseListener_4 = value;
		Il2CppCodeGenWriteBarrier((&___purchaseListener_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASEFORWARDCALLBACK_T271572524_H
// System.Object[]
struct ObjectU5BU5D_t765054781  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,!!0)
extern "C"  void AndroidJavaObject_Set_TisRuntimeObject_m4052707166_gshared (AndroidJavaObject_t1031492314 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
extern "C"  void AndroidJavaProxy__ctor_m1237911378 (AndroidJavaProxy_t367980205 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ChannelPurchase.PurchaseForwardCallback::.ctor(UnityEngine.ChannelPurchase.IPurchaseListener)
extern "C"  void PurchaseForwardCallback__ctor_m520303018 (PurchaseForwardCallback_t271572524 * __this, RuntimeObject* ___purchaseListener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
extern "C"  void AndroidJavaObject__ctor_m1427799699 (AndroidJavaObject_t1031492314 * __this, String_t* p0, ObjectU5BU5D_t765054781* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,!!0)
#define AndroidJavaObject_Set_TisString_t_m1332152651(__this, p0, p1, method) ((  void (*) (AndroidJavaObject_t1031492314 *, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m4052707166_gshared)(__this, p0, p1, method)
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2077479838 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
extern "C"  void AndroidJavaObject_CallStatic_m3682667119 (AndroidJavaObject_t1031492314 * __this, String_t* p0, ObjectU5BU5D_t765054781* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C"  void AndroidJavaClass__ctor_m1659393852 (AndroidJavaClass_t507776188 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ChannelPurchase.PurchaseForwardCallback::.ctor(UnityEngine.ChannelPurchase.IPurchaseListener)
extern "C"  void PurchaseForwardCallback__ctor_m520303018 (PurchaseForwardCallback_t271572524 * __this, RuntimeObject* ___purchaseListener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseForwardCallback__ctor_m520303018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t367980205_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1237911378(__this, _stringLiteral921080997, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___purchaseListener0;
		__this->set_purchaseListener_4(L_0);
		return;
	}
}
// System.Void UnityEngine.ChannelPurchase.PurchaseService::Purchase(System.String,System.String,UnityEngine.ChannelPurchase.IPurchaseListener,System.String)
extern "C"  void PurchaseService_Purchase_m86091098 (RuntimeObject * __this /* static, unused */, String_t* ___productCode0, String_t* ___gameOrderId1, RuntimeObject* ___listener2, String_t* ___developerPayload3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseService_Purchase_m86091098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PurchaseForwardCallback_t271572524 * V_0 = NULL;
	AndroidJavaObject_t1031492314 * V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___listener2;
		PurchaseForwardCallback_t271572524 * L_1 = (PurchaseForwardCallback_t271572524 *)il2cpp_codegen_object_new(PurchaseForwardCallback_t271572524_il2cpp_TypeInfo_var);
		PurchaseForwardCallback__ctor_m520303018(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AndroidJavaObject_t1031492314 * L_2 = (AndroidJavaObject_t1031492314 *)il2cpp_codegen_object_new(AndroidJavaObject_t1031492314_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m1427799699(L_2, _stringLiteral1884972006, ((ObjectU5BU5D_t765054781*)SZArrayNew(ObjectU5BU5D_t765054781_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_1 = L_2;
		AndroidJavaObject_t1031492314 * L_3 = V_1;
		String_t* L_4 = ___productCode0;
		NullCheck(L_3);
		AndroidJavaObject_Set_TisString_t_m1332152651(L_3, _stringLiteral2452608790, L_4, /*hidden argument*/AndroidJavaObject_Set_TisString_t_m1332152651_RuntimeMethod_var);
		AndroidJavaObject_t1031492314 * L_5 = V_1;
		String_t* L_6 = ___gameOrderId1;
		NullCheck(L_5);
		AndroidJavaObject_Set_TisString_t_m1332152651(L_5, _stringLiteral4225643879, L_6, /*hidden argument*/AndroidJavaObject_Set_TisString_t_m1332152651_RuntimeMethod_var);
		String_t* L_7 = ___developerPayload3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_IsNullOrEmpty_m2077479838(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		AndroidJavaObject_t1031492314 * L_10 = V_1;
		String_t* L_11 = ___developerPayload3;
		NullCheck(L_10);
		AndroidJavaObject_Set_TisString_t_m1332152651(L_10, _stringLiteral3525959198, L_11, /*hidden argument*/AndroidJavaObject_Set_TisString_t_m1332152651_RuntimeMethod_var);
	}

IL_004f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PurchaseService_t2640368659_il2cpp_TypeInfo_var);
		AndroidJavaClass_t507776188 * L_12 = ((PurchaseService_t2640368659_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t2640368659_il2cpp_TypeInfo_var))->get_serviceClass_0();
		ObjectU5BU5D_t765054781* L_13 = ((ObjectU5BU5D_t765054781*)SZArrayNew(ObjectU5BU5D_t765054781_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t1031492314 * L_14 = V_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_t765054781* L_15 = L_13;
		PurchaseForwardCallback_t271572524 * L_16 = V_0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		NullCheck(L_12);
		AndroidJavaObject_CallStatic_m3682667119(L_12, _stringLiteral4102417426, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ChannelPurchase.PurchaseService::ValidateReceipt(System.String,UnityEngine.ChannelPurchase.IPurchaseListener)
extern "C"  void PurchaseService_ValidateReceipt_m553159648 (RuntimeObject * __this /* static, unused */, String_t* ___gameOrderId0, RuntimeObject* ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseService_ValidateReceipt_m553159648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PurchaseForwardCallback_t271572524 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener1;
		PurchaseForwardCallback_t271572524 * L_1 = (PurchaseForwardCallback_t271572524 *)il2cpp_codegen_object_new(PurchaseForwardCallback_t271572524_il2cpp_TypeInfo_var);
		PurchaseForwardCallback__ctor_m520303018(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(PurchaseService_t2640368659_il2cpp_TypeInfo_var);
		AndroidJavaClass_t507776188 * L_2 = ((PurchaseService_t2640368659_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t2640368659_il2cpp_TypeInfo_var))->get_serviceClass_0();
		ObjectU5BU5D_t765054781* L_3 = ((ObjectU5BU5D_t765054781*)SZArrayNew(ObjectU5BU5D_t765054781_il2cpp_TypeInfo_var, (uint32_t)2));
		String_t* L_4 = ___gameOrderId0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t765054781* L_5 = L_3;
		PurchaseForwardCallback_t271572524 * L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_m3682667119(L_2, _stringLiteral3490391066, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ChannelPurchase.PurchaseService::.cctor()
extern "C"  void PurchaseService__cctor_m2749871695 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseService__cctor_m2749871695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t507776188 * L_0 = (AndroidJavaClass_t507776188 *)il2cpp_codegen_object_new(AndroidJavaClass_t507776188_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m1659393852(L_0, _stringLiteral3080203485, /*hidden argument*/NULL);
		((PurchaseService_t2640368659_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t2640368659_il2cpp_TypeInfo_var))->set_serviceClass_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
