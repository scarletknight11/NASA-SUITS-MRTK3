﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"


// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<System.Net.ServicePointManager/SPKey>
struct IEqualityComparer_1_t7DEF6A7F733A12BFAF629D0D430AE07F50CCD72D;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<UnityEngine.Events.UnityEvent>
struct Segment_t673FC502775C34DD19BB90838D68CE160F01EC18;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Type,System.Runtime.Serialization.SerializationEvents>
struct Tables_tCB63226BA2EFBE0D669C362CD19286690447301B;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Type,System.Type>
struct Tables_t33DE1B7508C6FBE7BCA91D0F285B76FD5F466DA1;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>
struct Tables_t112810F270DDBE5F8CE7B4EE8DB706CB5AAF0359;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct Tables_tA4EED5C769DBB50C98B0D2CB16445489E2D4B333;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Runtime.Serialization.SerializationEvents>[]
struct KeyValuePair_2U5BU5D_t30DA52B66CCE40D610CC977859079EFD69FB5654;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Type>[]
struct KeyValuePair_2U5BU5D_t89BDB5F8E689502435DA4BF31060C173010D88AC;
// System.Collections.Generic.KeyValuePair`2<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>[]
struct KeyValuePair_2U5BU5D_t086EEED0D2682527F9E275FA2D0AA1336633ACAB;
// System.Collections.Generic.KeyValuePair`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>[]
struct KeyValuePair_2U5BU5D_t3A196B8FA26BCF9E3162B52E6068AB53F964E297;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Type>>
struct NOVTABLE IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43(IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Runtime.Serialization.SerializationEvents>
struct ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tCB63226BA2EFBE0D669C362CD19286690447301B* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t30DA52B66CCE40D610CC977859079EFD69FB5654* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Type>
struct ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t33DE1B7508C6FBE7BCA91D0F285B76FD5F466DA1* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t89BDB5F8E689502435DA4BF31060C173010D88AC* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>
struct ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t112810F270DDBE5F8CE7B4EE8DB706CB5AAF0359* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t086EEED0D2682527F9E275FA2D0AA1336633ACAB* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tA4EED5C769DBB50C98B0D2CB16445489E2D4B333* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t3A196B8FA26BCF9E3162B52E6068AB53F964E297* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentQueue`1<UnityEngine.Events.UnityEvent>
struct ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB  : public RuntimeObject
{
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject* ____crossSegmentLock_0;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t673FC502775C34DD19BB90838D68CE160F01EC18* ____tail_1;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t673FC502775C34DD19BB90838D68CE160F01EC18* ____head_2;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Net.HttpWebRequest,Mono.Http.NtlmSession>
struct ConditionalWeakTable_2_t8C60960CD7830601390A47E0673223EC1560C638  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>
struct ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Threading.OSSpecificSynchronizationContext>
struct ConditionalWeakTable_2_t1D0EE5E7FDE926182D4FDB4F0197BEC94BD2BF42  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
// Windows.Foundation.Collections.IMapView`2<System.Type,System.Type>
struct NOVTABLE IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96(Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8(Il2CppWindowsRuntimeTypeName ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___first0, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Type,System.Type>
struct NOVTABLE IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484(Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5(Il2CppWindowsRuntimeTypeName ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF(Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6(Il2CppWindowsRuntimeTypeName ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8() = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___key0);
il2cpp_hresult_t IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___first0, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___second1);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);



// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Runtime.Serialization.SerializationEvents>
struct ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Type>
struct ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper>, IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A, IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2
{
	inline ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A::IID;
		interfaceIds[1] = IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484(Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5(Il2CppWindowsRuntimeTypeName ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF(Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6(Il2CppWindowsRuntimeTypeName ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43(IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96(Il2CppWindowsRuntimeTypeName ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8(Il2CppWindowsRuntimeTypeName ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___first0, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>
struct ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentQueue`1<UnityEngine.Events.UnityEvent>
struct ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Net.HttpWebRequest,Mono.Http.NtlmSession>
struct ConditionalWeakTable_2_t8C60960CD7830601390A47E0673223EC1560C638_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t8C60960CD7830601390A47E0673223EC1560C638_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConditionalWeakTable_2_t8C60960CD7830601390A47E0673223EC1560C638_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t8C60960CD7830601390A47E0673223EC1560C638_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConditionalWeakTable_2_t8C60960CD7830601390A47E0673223EC1560C638(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConditionalWeakTable_2_t8C60960CD7830601390A47E0673223EC1560C638_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConditionalWeakTable_2_t8C60960CD7830601390A47E0673223EC1560C638_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>
struct ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Threading.OSSpecificSynchronizationContext>
struct ConditionalWeakTable_2_t1D0EE5E7FDE926182D4FDB4F0197BEC94BD2BF42_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t1D0EE5E7FDE926182D4FDB4F0197BEC94BD2BF42_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConditionalWeakTable_2_t1D0EE5E7FDE926182D4FDB4F0197BEC94BD2BF42_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t1D0EE5E7FDE926182D4FDB4F0197BEC94BD2BF42_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConditionalWeakTable_2_t1D0EE5E7FDE926182D4FDB4F0197BEC94BD2BF42(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConditionalWeakTable_2_t1D0EE5E7FDE926182D4FDB4F0197BEC94BD2BF42_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConditionalWeakTable_2_t1D0EE5E7FDE926182D4FDB4F0197BEC94BD2BF42_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F_ComCallableWrapper(obj));
}
