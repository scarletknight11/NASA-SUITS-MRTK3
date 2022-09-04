#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Int32Enum>
struct AsyncOperationCompletedHandler_1_t4FE670EEBA8A8DA91E598F5C92818885102709F4;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6;
// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78;
// System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>
struct CallSite_1_t090407B87180D16DC10D1D5C668A4B01E3266230;
// System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>
struct CallSite_1_tAE0C20B82A89B7BB706AC7FB6A61D843B1E0550C;
// System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>
struct ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33;
// System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>
struct ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E;
// System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>
struct ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>
struct ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>
struct ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object>
struct ConcurrentDictionary_2_t315170742663659D92605BE8E5D5455EC9805755;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.String>
struct ConcurrentDictionary_2_tE0296B741D9F887264D805ED46C4249B8F5EFC9C;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Func`2<System.Object[],System.Object>>
struct ConcurrentDictionary_2_t20B5CA15C5056FE527664A35E5CD67638EDDD99A;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct ConcurrentDictionary_2_t421F761E5F7000F25374ACA7F13932BC7DAD49EA;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct ConcurrentDictionary_2_t9F2024F9B290406C9129D78931CF9D0B9DFD9FD8;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Object>
struct ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Newtonsoft.Json.Utilities.ReflectionObject>
struct ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Runtime.Serialization.SerializationEvents>
struct ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Type>
struct ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>
struct ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6;
// System.Collections.Concurrent.ConcurrentQueue`1<UnityEngine.Events.UnityEvent>
struct ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB;
// System.Func`2<System.Object[],System.Object>
struct Func_2_tDF54C067A76CC031380FDC1CAD2344D51038CC7A;
// System.Func`2<Newtonsoft.Json.Linq.JObject,System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>>
struct Func_2_tE0388C2BDA6FA046D1478E2F755F52DD5B3DED9A;
// System.Func`2<Newtonsoft.Json.Schema.JsonSchemaModel,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_t2D71099510753EB6C3744A8549E60E80ECAF5C8D;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>>
struct Func_2_tDE55B5EF823AB1C768E5EAF557272CC0AEAD6E1A;
// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_t8F0140ED42CD7FE65163556030DCD1A4854DA9D4;
// System.Linq.Lookup`2/Grouping<System.String,System.Reflection.MemberInfo>
struct Grouping_t9361378B621DCE2D88F1697AB906AE7FBD104E77;
// System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<System.Linq.Expressions.LabelTarget,System.Linq.Expressions.Interpreter.LabelInfo>
struct HybridReferenceDictionary_2_t7A87D042741A1E0D8B04071F3D2626E8F7E8E200;
// System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariables/VariableScope>
struct HybridReferenceDictionary_2_tBA70675C8DC268BA62B7BB7A3AABDCCC23EBEC84;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>
struct IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
// Windows.Foundation.IAsyncOperation`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct IAsyncOperation_1_t320CEDD73D1B6148F89E466592AD388D4E4C032C;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
// Windows.Foundation.IAsyncOperation`1<System.Int32Enum>
struct IAsyncOperation_1_tA3AA2059B7FFA1D46AAD4B7C68A3A0B621CFD416;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_t4952BAC5E8EEE4D1A7F5C9E77985BC56BAA008F7;
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct IAsyncOperation_1_t6BCAA33302C9428BAC78372227CDB4F9436628DE;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JObject>
struct IEnumerable_1_tF311EB58E6F783BA2EB642AA85E30F3277839761;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerable_1_tF4128BC7B1616BB3AC4032BFE4ADB2D80CFB26CE;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchema>
struct IEnumerable_1_tB44B02614851D26318F25B64B02F9A088A4737E3;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IEnumerable_1_tF86BAC523F811C549D4289A86E6A4050544BF24D;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct IEnumerable_1_t93A09989A63F2A38252F43C12F27F50C4B1C21C7;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SystemType>
struct IEnumerable_1_t0D57DCE71BEC6C18AE9219727D5D8D6B30F060BA;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputManager/AvailableDevice>
struct IEnumerable_1_tF08D3A63D90701633A3CEF86F391B53FE4FAAF66;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding>
struct IEnumerable_1_t7B40E5C3A65287BFE4E95C3914513EDB0DCFF576;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t067D943FA808557FBA1FBED8EA4E9A1BFCB791B8;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JObject>
struct IEnumerator_1_t126D302F7BA5E086796467722D98A493BD61FCAC;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerator_1_t388F68C3FAFD69B78023018CE6D6C91521690509;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t0632E50BDC15D0ABBB866944CAA2D6DB854B9641;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Schema.JsonSchema>
struct IEnumerator_1_t222D116E4093D82AEB73789DF6AEB9C3F56A4D4C;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IEnumerator_1_tBB5AF07631C178557B755C7BC5128B0B9F002EF5;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct IEnumerator_1_tFEBB478E9461B900D9750EFA73BDA630C3186683;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SystemType>
struct IEnumerator_1_t6974FD793011BBEACE76557A4D2AEE2E09D68ED5;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputManager/AvailableDevice>
struct IEnumerator_1_t8A121F5E0F39BDB489820E5FAE4A6A44B5AFCA0A;
// System.Collections.Generic.IEnumerator`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding>
struct IEnumerator_1_t148B41AEA45B6606BD47DB29E71686F4AA069035;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t84CD58C3582484C691B22BB0E534C8ADD9B22966;
// System.Collections.Generic.IEqualityComparer`1<Newtonsoft.Json.Schema.JsonSchema>
struct IEqualityComparer_1_t0EC263FE3CE3F7CE764AB6D6AE507356C3162942;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct IEqualityComparer_1_t105FD43F3489D81B33F69E24E52777E234AA63F0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.SystemType>
struct IEqualityComparer_1_tA96AAEA9A1708E2919E77F5C35D21B46731C42A7;
// System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>
struct IGrouping_2_t67FFAFEEADC6063801C91E5569E355E7B86F337C;
// System.IObserver`1<UnityEngine.AsyncOperation>
struct IObserver_1_t9E27C3BD8603E40BDA3F802B9C27E1582DB382F6;
// System.IObserver`1<System.Boolean>
struct IObserver_1_t13B7A1F29887551144ADB3A244B44BF20C022DB5;
// System.IObserver`1<System.Net.HttpWebResponse>
struct IObserver_1_tA21BE6FA63710813513530DC3D7F7A19C95CA09F;
// System.IObserver`1<System.IO.Stream>
struct IObserver_1_tF1AE16D7977F9FF5F4F89297F4EE411DCD1E563A;
// System.IObserver`1<UniRx.Unit>
struct IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D;
// System.IObserver`1<System.Net.WebResponse>
struct IObserver_1_tE8113DAA5DDC7C4A630B6C7B8991E3204812548F;
// System.IProgress`1<System.Single>
struct IProgress_1_tBF15937991EA6286BA610BEEBB96909B99F4A1C9;
// System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.Expression>
struct ListProvider_1_t0A3FE801D5542C587D26CB7BA5BDE19F7F696E1C;
// System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.ParameterExpression>
struct ListProvider_1_t200095D29CAB7169D28BF19BA126F44CDA8EF7C0;
// System.Linq.Lookup`2<System.String,System.Reflection.MemberInfo>
struct Lookup_2_t2DCDD7E2B3903567D767A41D0B0222FC2EB8C4C1;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>
struct Node_t27454880F6EA7B4F9AFE6A78DE18B7EE9187AEEC;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>
struct Node_t026D05D192ABB0E7322A354157B1D2DC64E5E63E;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>
struct Node_tD2AD8B22DE509ED94E4F81F3131D77E256C312CC;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct Node_t4542EA22E45A39AF4B43C29AE4402B1C066D0A64;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>
struct Node_t72D9C0ED13DF2AE5DBE0938245A3C4C2DBC41533;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>
struct Node_tFB56F0B56C710743D31CDD139CA6EB411367FE1D;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.Object>
struct Node_tACF3610DBC64B838B005551A43F342DC09F08E35;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.String>
struct Node_tADE605864D33495155ACC3C2BBBAE65F85C97B5A;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Func`2<System.Object[],System.Object>>
struct Node_tE01033DB453F2A351A186F8E81F8A42E1D81CF91;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct Node_t686598AB020D8ED9B8C03931D80CEABB1DBF5E9A;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct Node_t303D22755297167406B6E6A3E4686B4C4037E5A6;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Object>
struct Node_t275FEE23E0F1784D62714B28D90342AD18D10EDD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,Newtonsoft.Json.Utilities.ReflectionObject>
struct Node_t5F2A6519A65881C0BDABDB267DA06F117975F140;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Runtime.Serialization.SerializationEvents>
struct Node_t0F73121DD833728764ACE29E5C22B8E936851F70;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Type>
struct Node_t62C8BC61A68CDAC1896211BA436D69E70B5E5785;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>
struct Node_t740139511F607F7BDA83D737AD45EF9339DC6B35;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct Node_t1DD497D7FB3074D93E2DA08CDE49BF5CF5A4828F;
// System.Linq.OrderedEnumerable`1<UnityEngine.TextCore.Text.Character>
struct OrderedEnumerable_1_t4BFCF365460BA97A7367F0A0C7293ADC5CB50D15;
// System.Linq.OrderedEnumerable`1<UnityEngine.TextCore.Glyph>
struct OrderedEnumerable_1_tBC6036400EE46CB1DB4F05CE2BF53CE9A2D89ECF;
// System.Linq.OrderedEnumerable`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA;
// System.Linq.OrderedEnumerable`1<InterfaceAnmElement>
struct OrderedEnumerable_1_t1A00A62BC8EB0357911676EEBEA1A2622DC684F9;
// System.Linq.OrderedEnumerable`1<Newtonsoft.Json.Serialization.JsonProperty>
struct OrderedEnumerable_1_t561EE2A16FDB8DB09C41B3F566D0C851162FC886;
// System.Linq.OrderedEnumerable`1<TMPro.KerningPair>
struct OrderedEnumerable_1_tE535AA1A039CC25AFC6B85F1A655E15ECDBC5D80;
// System.Linq.OrderedEnumerable`1<UnityEngine.XR.OpenXR.Features.OpenXRFeature>
struct OrderedEnumerable_1_tD32691835511D233EDD4B7A74324138B16AED24D;
// System.Linq.OrderedEnumerable`1<UnityEngine.Resolution>
struct OrderedEnumerable_1_t06883285E33A84D7964B74131299B3581AAD4E43;
// System.Linq.OrderedEnumerable`1<UnityEngine.TextCore.Text.SpriteCharacter>
struct OrderedEnumerable_1_t8F388C808CD91F25F061CD37FC292A4F1CFAA71F;
// System.Linq.OrderedEnumerable`1<UnityEngine.TextCore.Text.SpriteGlyph>
struct OrderedEnumerable_1_t15974BBCF572B028332E901DD9AF80B5DB6DBD1B;
// System.Linq.OrderedEnumerable`1<System.String>
struct OrderedEnumerable_1_t2D804A2992DDB7361D4CB4860D68FC1A3F671212;
// System.Linq.OrderedEnumerable`1<TMPro.TMP_Character>
struct OrderedEnumerable_1_tC5ADDDA28F50783D874B378CEFDF8D1E3001A1F6;
// System.Linq.OrderedEnumerable`1<TMPro.TMP_GlyphPairAdjustmentRecord>
struct OrderedEnumerable_1_tB859BDBC1C7333C1BF109574C0CFE5C9D1EA47FF;
// System.Linq.OrderedEnumerable`1<TMPro.TMP_SpriteCharacter>
struct OrderedEnumerable_1_tDEA6AEFC796656289161CEB31F0A73723736982B;
// System.Linq.OrderedEnumerable`1<TMPro.TMP_SpriteGlyph>
struct OrderedEnumerable_1_t57486EDA17DF98C85669ECB0831BE73CC9AFCC2E;
// System.Linq.OrderedEnumerable`1<UnityEngine.Vector2>
struct OrderedEnumerable_1_t2A839D56030A5BF16B67D5ECEA66459EBD766265;
// System.Linq.OrderedEnumerable`1<UnityEngine.Vector3>
struct OrderedEnumerable_1_tF6C515E2C22591C0A6DC4876461EF20B7E50E024;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<UnityEngine.Events.UnityEvent>
struct Segment_t673FC502775C34DD19BB90838D68CE160F01EC18;
// System.Linq.Set`1<System.Char>
struct Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F;
// System.Linq.Set`1<Newtonsoft.Json.Schema.JsonSchema>
struct Set_1_t783D732641E2A77DCB7784BDAEDE769B0E6C7E77;
// System.Linq.Set`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct Set_1_tE2C3040FB34B8268FAFB0A373A1A5A9C87C67DB2;
// System.Linq.Set`1<System.String>
struct Set_1_tCACBEC9A52BCCD32D0592CBC790495D711735698;
// System.Linq.Set`1<Microsoft.MixedReality.Toolkit.SystemType>
struct Set_1_t8D32895A00D9EE5A347969DD0D2282B873AAF7DD;
// System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>
struct Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>[]
struct NodeU5BU5D_tC98EE270110C16860732A47C70BF26F6F98195F2;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>[]
struct NodeU5BU5D_t9450A332798603EC71011A35BB493849D8A376B1;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>[]
struct NodeU5BU5D_t8B34587D76E942D38C84013249A41D81E4FCCD18;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>[]
struct NodeU5BU5D_t6D96DA6A58241967E9762173E04F244E01511C94;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>[]
struct NodeU5BU5D_tD3C361BC54FEDF7745E3BB9D568BFA4E9508ED5E;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>[]
struct NodeU5BU5D_tE5D68C7065E4F77898C796BF7641DDFCFCA9093F;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.Object>[]
struct NodeU5BU5D_tCCA8B187E0102F0F46CF179D9C236440333D10C4;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.String>[]
struct NodeU5BU5D_tD5F26912C4F7EA453ABA6570E943FD979094ABE8;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Func`2<System.Object[],System.Object>>[]
struct NodeU5BU5D_t0061F77A5D840D7E03DBDE9079D5D11B0495D345;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>[]
struct NodeU5BU5D_t578358395EAC8C9CF093CF44B7EC8F346A1619F2;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,Newtonsoft.Json.Serialization.JsonContract>[]
struct NodeU5BU5D_tB7DBA374201DAAE25F40D21709F44554319E4189;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Object>[]
struct NodeU5BU5D_tAC8D3A65F7C34AA3413DA284ABB5B60FCAF3D3EA;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,Newtonsoft.Json.Utilities.ReflectionObject>[]
struct NodeU5BU5D_t5F087CBA0A9E52B7DC56AD11E2284651AA985593;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Runtime.Serialization.SerializationEvents>[]
struct NodeU5BU5D_tC3EDB1B54EF3B06632B8B4BD502FC39546FD2148;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,System.Type>[]
struct NodeU5BU5D_tC8FCEEB45E4B48F7B6CEFFDC72B621F3E8A718D5;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>[]
struct NodeU5BU5D_t07810C38C39BA19F3429300F9A612FDC4BC98511;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>[]
struct NodeU5BU5D_t6333260CBA8FDF0E4090E1AE00354338AD22653C;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.TextCore.Text.Character[]
struct CharacterU5BU5D_t788CB8410BB51EC68ED6233EC1547FBA435B997B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.TextCore.Glyph[]
struct GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5;
// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[]
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// InterfaceAnmElement[]
struct InterfaceAnmElementU5BU5D_tACCF3984F1ACDE1D59C69FB297CA9897DF0FA022;
// Newtonsoft.Json.Serialization.JsonProperty[]
struct JsonPropertyU5BU5D_t10C88F15FC6BA5C5F99848D555A2946AB5585919;
// TMPro.KerningPair[]
struct KerningPairU5BU5D_tE32FE368326412A1A7114990D32488E0D6EF8425;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
// UnityEngine.TextCore.Text.SpriteCharacter[]
struct SpriteCharacterU5BU5D_tF4060931C4A985100FE1C44BF53084E1630E96CA;
// UnityEngine.TextCore.Text.SpriteGlyph[]
struct SpriteGlyphU5BU5D_t628B3F367E1869FF22ADA59DF190B5B8EE7BFC34;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_Character[]
struct TMP_CharacterU5BU5D_tC0FE7802A3B867FC94F352EF3978AD82C258AA0F;
// TMPro.TMP_GlyphPairAdjustmentRecord[]
struct TMP_GlyphPairAdjustmentRecordU5BU5D_t3BB4A5EE76A8B0B0080982C0C9CC1B9C2F020FEB;
// TMPro.TMP_SpriteCharacter[]
struct TMP_SpriteCharacterU5BU5D_t95867998753219562445A616BE72C0CD4C4399EF;
// TMPro.TMP_SpriteGlyph[]
struct TMP_SpriteGlyphU5BU5D_t362051C8167B288E431AA69E115DD4E4F9DDA356;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.TextCore.Text.Character
struct Character_t9B671B493FAC8D43638C69AF6AE92CBD103D80EC;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UniRx.CoroutineAsyncBridge
struct CoroutineAsyncBridge_tFED4A14B2414A933385B48F3585078E555764BCB;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73;
// System.ComponentModel.DefaultValueAttribute
struct DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86;
// Newtonsoft.Json.Utilities.EnumInfo
struct EnumInfo_t786CA2C24EE84B1EC2F48E8448A3A0AC6F842571;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.TextCore.Glyph
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.MixedReality.Toolkit.Input.IInteractionModeDetector
struct IInteractionModeDetector_t6C259879346B54553AC63BE913BBD848D487405B;
// System.Runtime.Serialization.IgnoreDataMemberAttribute
struct IgnoreDataMemberAttribute_tC1AC455123E5BF654B22396F3E5CB1C514D86777;
// InterfaceAnmElement
struct InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.JsonContainerAttribute
struct JsonContainerAttribute_t84168DEA2B41EB84D4BF6C3AF04D6075F4CEB1C7;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_tE6A7D4E99E3396B56718606824E99F870FCCF4BA;
// Newtonsoft.Json.JsonExtensionDataAttribute
struct JsonExtensionDataAttribute_tF492B4EC51E6325C4CA761F373861202B4F9035E;
// Newtonsoft.Json.JsonIgnoreAttribute
struct JsonIgnoreAttribute_t9C194C4132F31C3496A2B7C90C9050BA47A34850;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3;
// Newtonsoft.Json.JsonPropertyAttribute
struct JsonPropertyAttribute_t5EC81C65E10178A674A16272B2FF70C7AC200F48;
// Newtonsoft.Json.JsonRequiredAttribute
struct JsonRequiredAttribute_t1F633B359DFF6D3F0F45370D6E32B635C424F647;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t5C01341D5179E59C06CA91638D4DAF86199EBDB6;
// TMPro.KerningPair
struct KerningPair_tC8E09DC4C7DA41551F1BCC9DDABF4AE44938D481;
// System.Linq.Expressions.Interpreter.LabelInfo
struct LabelInfo_t40537451CCC388A64123156309E35BA78DADE7CF;
// System.Linq.Expressions.LabelTarget
struct LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5;
// System.Runtime.Serialization.MemberHolder
struct MemberHolder_t96ECF1CE10447DBB1D5E5191BCC4ADE95E55E36F;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50;
// System.NonSerializedAttribute
struct NonSerializedAttribute_t3E57D1A7E7F31DE192694AB4C8927BAE7D1BE177;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
struct OpenXRInteractionFeature_t643728BC4EB54CC2852F8D9921027BEE62E7682E;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_tBC7C0875C7434F4B89AC4948A4ECBD5CF84AE2E7;
// System.SerializableAttribute
struct SerializableAttribute_tFC886AD5E219D27EF8D36FC7335CF8676FBFF254;
// System.Runtime.Serialization.SerializationEvents
struct SerializationEvents_t9F041CF09EEDAA7862FD930BB6C6D6D366E17CB7;
// System.Net.ServicePoint
struct ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver
struct Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B;
// UnityEngine.TextCore.Text.SpriteCharacter
struct SpriteCharacter_tB3516A25DBFA0AD68DD8E1432752D503FD1F40F5;
// UnityEngine.TextCore.Text.SpriteGlyph
struct SpriteGlyph_t0BD62F6EB8D19B2C4B246BC436A8F4BF2E0ACA1A;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.SystemType
struct SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_GlyphPairAdjustmentRecord
struct TMP_GlyphPairAdjustmentRecord_t6150C3DE547DDD860AB097843D36519D818D810F;
// TMPro.TMP_SpriteCharacter
struct TMP_SpriteCharacter_t98295D0A81320909AC4AD5F2602DD69EACBB449E;
// TMPro.TMP_SpriteGlyph
struct TMP_SpriteGlyph_t03845F742ADD8467342FC94903608F97B538D2DB;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E;
// Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union
struct Union_t8F279DD277DBDE712E60D6E504D973441C824A02;
// TMPro.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC;
// System.Linq.Expressions.Interpreter.LocalVariables/VariableScope
struct VariableScope_t25C4325FFBD991BC4BAE923BD7D52023318CD513;
// System.Net.ServicePointManager/SPKey
struct SPKey_t3FD8B8DF5F452D3E34F29B5EC1AEC33370B1A6E5;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1;
struct IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t320CEDD73D1B6148F89E466592AD388D4E4C032C;
struct IAsyncOperation_1_t4952BAC5E8EEE4D1A7F5C9E77985BC56BAA008F7;
struct IAsyncOperation_1_t6BCAA33302C9428BAC78372227CDB4F9436628DE;
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95;
struct IIterator_1_t09285B597935AFCB2EC018AF5E93854CD5C9BCF5;
struct IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B;
struct IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82;
struct IIterator_1_t61E394E90ADD9DF710E54EBD34636E513D0A7ED9;
struct IIterator_1_t83441B645908CC58488ABF426B95F0FA030C5E8B;
struct IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IIterator_1_tD26AAC0C38CD0F7DB527651AB6AD69F622A9896D;
struct IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648;
struct IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8;
struct IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m78372DBE4F177F35DC3DF46F37BBEB79AF797324(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m78D1DF310E63719722F86C83A512DCF35728D4F2(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m71DB6DDEDCC8DB4230CCAF913BA6ECAAA9ABF6D4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mBCA3BB43C118936A44B20F8A8F83F1CAB59E7DB4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mD7DFCC1D0421F836CB3B4499AAEB89D5DAA229F5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>
struct NOVTABLE IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m8DCB37503DA31208AF15368FCACFA194C8D9AE5B(IAsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m8A9CB38AE91C0B3F09D7AFA431DC6AB783EFE0AE(IAsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_mF7EC950388476753A148DA642052BE46B2648DB4(IAsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m09035EE2A14433BECEA39310C75BBA625721AC95(IAsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m319C4B7D242E2D3165F4B72C813B131529CEEC64(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m144F445B49DE06124C428E1C4892BD758678D4B7(IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m7438C62D19F0A943D127BCDFF4E8D49081BA1160(IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m3E96CE9D6D9453DDA29BA2C3066BFC6018417BB7(IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mFD76F23D19D10A8CDF2C3B71590540A15597538A(IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mBF8E709760AED181E92B245F49EAD29DB1A178CB(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m9F67F4B3AA2396D2CDE6EE93B3D3B1B1F2D99685(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mA7040C532ABD06DCBC2B397B09EB32EC4A9AF5EB(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m79A0FBC05E913306F00FE582D6AEF52CB4F6F0D6(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9D9F6AE5C27EC4CEB0A3CC17C83048A39994C5F0(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m259594E576D8DE8D92DBA9A4EC9321BFA9006BCD(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct NOVTABLE IAsyncOperation_1_t320CEDD73D1B6148F89E466592AD388D4E4C032C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m67403F7455E1F2F6385648931A0A87A45C998640(IAsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m1B7E9770FFA1DA24CF18F1160957178CBEA424D0(IAsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m3863E2FC67BD2C1826DD1C54EC6A37239F86D633(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct NOVTABLE IAsyncOperation_1_t4952BAC5E8EEE4D1A7F5C9E77985BC56BAA008F7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7711B0F8CF3665147D7FC0E9D08906226BED7092(IAsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF4FA919F0C63B121B2C56D3699F182CD74BD70CD(IAsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m1E3BDE4BA894352C76FF577E39527631332EBA9E(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct NOVTABLE IAsyncOperation_1_t6BCAA33302C9428BAC78372227CDB4F9436628DE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mE867596E58CD44FA5D0C5D002B1252F1AD21A885(IAsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m3DAA4F521CCCE7C022530723A015AF90A06A4E59(IAsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mFE7F76ACB50DA13CA4C20EDCD88CB5EABA9D80B3(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct NOVTABLE IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2(IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Byte>
struct NOVTABLE IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m43CD5A34ABEF4766A062BF3BAC919E85269CA039(IIterator_1_t61E394E90ADD9DF710E54EBD34636E513D0A7ED9** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Char>
struct NOVTABLE IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3FABC5E5AEB3D250BD8B05D1BDBE039995E790A8(IIterator_1_t09285B597935AFCB2EC018AF5E93854CD5C9BCF5** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IList>
struct NOVTABLE IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m44E5686A5ECD542FD4FE1D27B138BC2CB96DFAB3(IIterator_1_tD26AAC0C38CD0F7DB527651AB6AD69F622A9896D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Specialized.INotifyCollectionChanged>
struct NOVTABLE IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7B29E4F5CAEDB776309C70A7190278406C8BFD8A(IIterator_1_t83441B645908CC58488ABF426B95F0FA030C5E8B** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Byte>
struct NOVTABLE IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m59ADAFBC7DB3F240B8CB8D8A60AB44ECD6740CC4(uint32_t ___index0, uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m62325E27C0A4D7EBB0CB00B4FA2ED93E964CA7EC(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m15AED5FF23C249DAA0403F6C95FD7C0626F926F9(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mD8EBC2B345ECF039A1438F5C63FFDCAD1CB664A4(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Byte>
struct NOVTABLE IVector_1_tC3BF786CEAAB25A1083C1962AE6A520382B1977E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2652F8A6A5E643A7E0B247CF2AC3BCC116DD8279(uint32_t ___index0, uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m35302C082F74012B21C9FF3A12270C2BD79C331F(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mCE5C05537DF4933F7AF0935DCB24FD8091EFA5CE(IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m5262411EF3E0484DD85205F0FF5F72A1B24B4474(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m7B0DAD8851CA86EB594217AAD6B34CA1F1D5AEDE(uint32_t ___index0, uint8_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA9DBE52C6D8108DE6BD17D98ECAFFFDA2FFAAB56(uint32_t ___index0, uint8_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mB7926724DE60F95F962AFEB1DBD668343374A7B9(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m754A802E88BF414D5DBFD01FAB389D78D0584253(uint8_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m483F742EE01ABAECDC1469CABFA87468A90AB555() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1629FF75DF493CD9313BDFA7A3D97118DBC7E206() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m95B930D7FAB6A4F0705C562511B0C2FE5F4D4A64(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBED1EFA49ED65A725994F80E7C417D36C806E680(uint32_t ___items0ArraySize, uint8_t* ___items0) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.Attribute>
struct U3CCastIteratorU3Ed__99_1_t24A66DD657D68251AE23CA8D8CD259F6AB2CD5BD  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.Runtime.Serialization.DataMemberAttribute>
struct U3CCastIteratorU3Ed__99_1_tF8D401BC67214FD88B07385F7B381676A413D8D3  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.ComponentModel.DefaultValueAttribute>
struct U3CCastIteratorU3Ed__99_1_t0ADE2A322A1012ED30E18546E92B629A6F44FC30  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.ComponentModel.DescriptionAttribute>
struct U3CCastIteratorU3Ed__99_1_t5A9900CCAC466458DE9B75D18A08301F39AB801C  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.Runtime.Serialization.EnumMemberAttribute>
struct U3CCastIteratorU3Ed__99_1_t0861F0F2E3BCBD5E8382B33905B8C62F47A0E438  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.Reflection.FieldInfo>
struct U3CCastIteratorU3Ed__99_1_t94E58FE181EC9776C4EE835CCAF13EC5FA135FC5  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	FieldInfo_t* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.Runtime.Serialization.IgnoreDataMemberAttribute>
struct U3CCastIteratorU3Ed__99_1_t8C3240FCA7C1EAB890D2DE203D51A2533098ACAF  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	IgnoreDataMemberAttribute_tC1AC455123E5BF654B22396F3E5CB1C514D86777* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.Linq.JProperty>
struct U3CCastIteratorU3Ed__99_1_t64A4EAD7D82C429C1FF4C85C67CBED999276ECAB  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonContainerAttribute>
struct U3CCastIteratorU3Ed__99_1_t62330600A1197CCE4976485D23414500471CA9E9  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	JsonContainerAttribute_t84168DEA2B41EB84D4BF6C3AF04D6075F4CEB1C7* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonExtensionDataAttribute>
struct U3CCastIteratorU3Ed__99_1_tF19D4084A0328650B03925BE1E9708367215521A  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	JsonExtensionDataAttribute_tF492B4EC51E6325C4CA761F373861202B4F9035E* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonIgnoreAttribute>
struct U3CCastIteratorU3Ed__99_1_t4D9409F39E9604EEB456C89C2D797972DB7EFD5B  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	JsonIgnoreAttribute_t9C194C4132F31C3496A2B7C90C9050BA47A34850* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonPropertyAttribute>
struct U3CCastIteratorU3Ed__99_1_tD4547C3887EB6A5220CA3DD3F5815E60B29FFF4D  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	JsonPropertyAttribute_t5EC81C65E10178A674A16272B2FF70C7AC200F48* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonRequiredAttribute>
struct U3CCastIteratorU3Ed__99_1_t430DF3667502813327471D9383BFC54A8C603223  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	JsonRequiredAttribute_t1F633B359DFF6D3F0F45370D6E32B635C424F647* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.NonSerializedAttribute>
struct U3CCastIteratorU3Ed__99_1_t440C6955E5E442E1FB6384E371486BD3EEF6AA02  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	NonSerializedAttribute_t3E57D1A7E7F31DE192694AB4C8927BAE7D1BE177* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<CastIterator>d__99`1<System.SerializableAttribute>
struct U3CCastIteratorU3Ed__99_1_tB5BE3C1D3CD95E60A4CE9E54B00AE7E05CA79BD7  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<CastIterator>d__99`1::<>2__current
	SerializableAttribute_tFC886AD5E219D27EF8D36FC7335CF8676FBFF254* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<CastIterator>d__99`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<CastIterator>d__99`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<DistinctIterator>d__68`1<System.String>
struct U3CDistinctIteratorU3Ed__68_1_t99ABED846E0385E8697588683BF8748A9C35F6A1  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<DistinctIterator>d__68`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<DistinctIterator>d__68`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::source
	RuntimeObject* ___source_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_6;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::<set>5__2
	Set_1_tCACBEC9A52BCCD32D0592CBC790495D711735698* ___U3CsetU3E5__2_7;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;
};

// System.Linq.Enumerable/<DistinctIterator>d__68`1<Microsoft.MixedReality.Toolkit.SystemType>
struct U3CDistinctIteratorU3Ed__68_1_t604B203C4BDF2745F901AB8A3DD9A5A53D70EAA0  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<DistinctIterator>d__68`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::<>2__current
	SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<DistinctIterator>d__68`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::source
	RuntimeObject* ___source_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_6;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::<set>5__2
	Set_1_t8D32895A00D9EE5A347969DD0D2282B873AAF7DD* ___U3CsetU3E5__2_7;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;
};

// System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28<UnityEngine.Events.UnityEvent>
struct U3CEnumerateU3Ed__28_t24AAE35EBF85F44CE0AB0FBE5D8EA892BC0825E2  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::<>2__current
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::head
	Segment_t673FC502775C34DD19BB90838D68CE160F01EC18* ___head_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::tail
	Segment_t673FC502775C34DD19BB90838D68CE160F01EC18* ___tail_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::tailTail
	int32_t ___tailTail_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::headHead
	int32_t ___headHead_5;
	// System.Collections.Concurrent.ConcurrentQueue`1<T> System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::<>4__this
	ConcurrentQueue_1_t41DB252038A1BB9A568E2DA2B04B66D2EF75DEFB* ___U3CU3E4__this_6;
	// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::<headTail>5__2
	int32_t ___U3CheadTailU3E5__2_7;
	// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::<i>5__3
	int32_t ___U3CiU3E5__3_8;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::<s>5__4
	Segment_t673FC502775C34DD19BB90838D68CE160F01EC18* ___U3CsU3E5__4_9;
	// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28::<i>5__5
	int32_t ___U3CiU3E5__5_10;
};

// System.Linq.Lookup`2/<GetEnumerator>d__12<System.String,System.Reflection.MemberInfo>
struct U3CGetEnumeratorU3Ed__12_tD9C717C5C4F8A31595B6C1EC7D9B592029093ABD  : public RuntimeObject
{
	// System.Int32 System.Linq.Lookup`2/<GetEnumerator>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::<>4__this
	Lookup_2_t2DCDD7E2B3903567D767A41D0B0222FC2EB8C4C1* ___U3CU3E4__this_2;
	// System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::<g>5__2
	Grouping_t9361378B621DCE2D88F1697AB906AE7FBD104E77* ___U3CgU3E5__2_3;
};

// System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20<System.Linq.Expressions.Expression>
struct U3CGetEnumeratorU3Ed__20_tB19D5467E7EC21FC24A3861CFA02243A024D5BF1  : public RuntimeObject
{
	// System.Int32 System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<>2__current
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CU3E2__current_1;
	// System.Dynamic.Utils.ListProvider`1<T> System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<>4__this
	ListProvider_1_t0A3FE801D5542C587D26CB7BA5BDE19F7F696E1C* ___U3CU3E4__this_2;
	// System.Int32 System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// System.Int32 System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<n>5__3
	int32_t ___U3CnU3E5__3_4;
};

// System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20<System.Linq.Expressions.ParameterExpression>
struct U3CGetEnumeratorU3Ed__20_t9BDD97D85857DCEBE74255667443CA53E106D019  : public RuntimeObject
{
	// System.Int32 System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<>2__current
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___U3CU3E2__current_1;
	// System.Dynamic.Utils.ListProvider`1<T> System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<>4__this
	ListProvider_1_t200095D29CAB7169D28BF19BA126F44CDA8EF7C0* ___U3CU3E4__this_2;
	// System.Int32 System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// System.Int32 System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20::<n>5__3
	int32_t ___U3CnU3E5__3_4;
};

// System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7<System.String,System.Reflection.MemberInfo>
struct U3CGetEnumeratorU3Ed__7_t732754A9133846FE068E8D71AE45D083DF5FC23F  : public RuntimeObject
{
	// System.Int32 System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::<>2__current
	MemberInfo_t* ___U3CU3E2__current_1;
	// System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::<>4__this
	Grouping_t9361378B621DCE2D88F1697AB906AE7FBD104E77* ___U3CU3E4__this_2;
	// System.Int32 System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// System.Linq.Enumerable/<IntersectIterator>d__74`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct U3CIntersectIteratorU3Ed__74_1_tEFAE198AD3A1318CA52953DB10E934CECA8CD8F8  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<IntersectIterator>d__74`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::<>2__current
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<IntersectIterator>d__74`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::second
	RuntimeObject* ___second_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::<>3__second
	RuntimeObject* ___U3CU3E3__second_6;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::first
	RuntimeObject* ___first_7;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::<>3__first
	RuntimeObject* ___U3CU3E3__first_8;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::<set>5__2
	Set_1_tE2C3040FB34B8268FAFB0A373A1A5A9C87C67DB2* ___U3CsetU3E5__2_9;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_10;
};

// System.Linq.Enumerable/<OfTypeIterator>d__97`1<Microsoft.MixedReality.Toolkit.Input.IInteractionModeDetector>
struct U3COfTypeIteratorU3Ed__97_1_t94973C9D27ECA193883DF29390BAAA65888EBC27  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<OfTypeIterator>d__97`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// System.Linq.Enumerable/<OfTypeIterator>d__97`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature>
struct U3COfTypeIteratorU3Ed__97_1_t9ED241477E1F16EC5FFF69B3D78FAA0024D5EF57  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>2__current
	OpenXRInteractionFeature_t643728BC4EB54CC2852F8D9921027BEE62E7682E* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IEnumerable System.Linq.Enumerable/<OfTypeIterator>d__97`1::source
	RuntimeObject* ___source_3;
	// System.Collections.IEnumerable System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// UniRx.CoroutineAsyncBridge/<Run>d__7`1<UnityEngine.Coroutine>
struct U3CRunU3Ed__7_1_tFA7961850A2D26062A62177857273500F621CC65  : public RuntimeObject
{
	// System.Int32 UniRx.CoroutineAsyncBridge/<Run>d__7`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.CoroutineAsyncBridge/<Run>d__7`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// T UniRx.CoroutineAsyncBridge/<Run>d__7`1::target
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___target_2;
	// UniRx.CoroutineAsyncBridge UniRx.CoroutineAsyncBridge/<Run>d__7`1::<>4__this
	CoroutineAsyncBridge_tFED4A14B2414A933385B48F3585078E555764BCB* ___U3CU3E4__this_3;
};

// System.Linq.Enumerable/<SelectManyIterator>d__17`2<Newtonsoft.Json.Linq.JObject,Newtonsoft.Json.Linq.JProperty>
struct U3CSelectManyIteratorU3Ed__17_2_t72941C60D2F5DC59EB509651D943BDB3500B856A  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>2__current
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::selector
	Func_2_tE0388C2BDA6FA046D1478E2F755F52DD5B3DED9A* ___selector_5;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__selector
	Func_2_tE0388C2BDA6FA046D1478E2F755F52DD5B3DED9A* ___U3CU3E3__selector_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;
};

// System.Linq.Enumerable/<SelectManyIterator>d__17`2<Newtonsoft.Json.Schema.JsonSchemaModel,System.String>
struct U3CSelectManyIteratorU3Ed__17_2_tA654806EA661C282CF0E61B9CB2D7BBFDE5F1744  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::selector
	Func_2_t2D71099510753EB6C3744A8549E60E80ECAF5C8D* ___selector_5;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__selector
	Func_2_t2D71099510753EB6C3744A8549E60E80ECAF5C8D* ___U3CU3E3__selector_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;
};

// System.Linq.Enumerable/<SelectManyIterator>d__17`2<System.Type,System.Reflection.MemberInfo>
struct U3CSelectManyIteratorU3Ed__17_2_t82D4FAF6B1207A2B84E6C9A86B35675F020D8E22  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>2__current
	MemberInfo_t* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::selector
	Func_2_tDE55B5EF823AB1C768E5EAF557272CC0AEAD6E1A* ___selector_5;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__selector
	Func_2_tDE55B5EF823AB1C768E5EAF557272CC0AEAD6E1A* ___U3CU3E3__selector_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;
};

// System.Linq.Enumerable/<SelectManyIterator>d__17`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding,System.String>
struct U3CSelectManyIteratorU3Ed__17_2_tDAF3DB32F3C5D4D4CA84A0D7312A83EDAFB57B11  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::selector
	Func_2_t8F0140ED42CD7FE65163556030DCD1A4854DA9D4* ___selector_5;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__selector
	Func_2_t8F0140ED42CD7FE65163556030DCD1A4854DA9D4* ___U3CU3E3__selector_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;
};

// System.Linq.Enumerable/<UnionIterator>d__71`1<System.Char>
struct U3CUnionIteratorU3Ed__71_1_tF738D83BD655B9F60315480F2FD641497C09D2E2  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<UnionIterator>d__71`1::<>2__current
	Il2CppChar ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::first
	RuntimeObject* ___first_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__first
	RuntimeObject* ___U3CU3E3__first_6;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::second
	RuntimeObject* ___second_7;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__second
	RuntimeObject* ___U3CU3E3__second_8;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<set>5__2
	Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* ___U3CsetU3E5__2_9;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_10;
};

// System.Linq.Enumerable/<UnionIterator>d__71`1<Newtonsoft.Json.Schema.JsonSchema>
struct U3CUnionIteratorU3Ed__71_1_tFDD43BED29E3DFEF5D6650EC0BDBE8B77864D96B  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<UnionIterator>d__71`1::<>2__current
	JsonSchema_t5C01341D5179E59C06CA91638D4DAF86199EBDB6* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::first
	RuntimeObject* ___first_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__first
	RuntimeObject* ___U3CU3E3__first_6;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::second
	RuntimeObject* ___second_7;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__second
	RuntimeObject* ___U3CU3E3__second_8;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<set>5__2
	Set_1_t783D732641E2A77DCB7784BDAEDE769B0E6C7E77* ___U3CsetU3E5__2_9;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_10;
};

// System.Linq.Enumerable/<UnionIterator>d__71`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct U3CUnionIteratorU3Ed__71_1_tB351E4A0412CD6086E3413CADD96B4F47F86F761  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<UnionIterator>d__71`1::<>2__current
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::first
	RuntimeObject* ___first_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__first
	RuntimeObject* ___U3CU3E3__first_6;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::second
	RuntimeObject* ___second_7;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__second
	RuntimeObject* ___U3CU3E3__second_8;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<set>5__2
	Set_1_tE2C3040FB34B8268FAFB0A373A1A5A9C87C67DB2* ___U3CsetU3E5__2_9;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_10;
};

// System.Linq.Enumerable/<UnionIterator>d__71`1<System.String>
struct U3CUnionIteratorU3Ed__71_1_t5FE2B6923431B59CA7E1BB5DE2875C2FD0042765  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<UnionIterator>d__71`1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::first
	RuntimeObject* ___first_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__first
	RuntimeObject* ___U3CU3E3__first_6;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::second
	RuntimeObject* ___second_7;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__second
	RuntimeObject* ___U3CU3E3__second_8;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<set>5__2
	Set_1_tCACBEC9A52BCCD32D0592CBC790495D711735698* ___U3CsetU3E5__2_9;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_10;
};

// Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<Newtonsoft.Json.Linq.JProperty,Newtonsoft.Json.Linq.JToken>
struct U3CValuesU3Ed__11_2_t214AD15E02BDFE59636FFD02EDAA93FFC93E41FB  : public RuntimeObject
{
	// System.Int32 Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// U Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>2__current
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Object Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::key
	RuntimeObject* ___key_5;
	// System.Object Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>3__key
	RuntimeObject* ___U3CU3E3__key_6;
	// System.Collections.Generic.IEnumerator`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;
};

// Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken>
struct U3CValuesU3Ed__11_2_tC27CA5EEAC201121C493CC74D0BB00723F137254  : public RuntimeObject
{
	// System.Int32 Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// U Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>2__current
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Object Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::key
	RuntimeObject* ___key_5;
	// System.Object Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>3__key
	RuntimeObject* ___U3CU3E3__key_6;
	// System.Collections.Generic.IEnumerator`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;
};

// UniRx.AsyncSubject`1<System.Net.HttpWebResponse>
struct AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB  : public RuntimeObject
{
	// System.Object UniRx.AsyncSubject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// T UniRx.AsyncSubject`1::lastValue
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___lastValue_1;
	// System.Boolean UniRx.AsyncSubject`1::hasValue
	bool ___hasValue_2;
	// System.Boolean UniRx.AsyncSubject`1::isStopped
	bool ___isStopped_3;
	// System.Boolean UniRx.AsyncSubject`1::isDisposed
	bool ___isDisposed_4;
	// System.Exception UniRx.AsyncSubject`1::lastError
	Exception_t* ___lastError_5;
	// System.IObserver`1<T> UniRx.AsyncSubject`1::outObserver
	RuntimeObject* ___outObserver_6;
};

// UniRx.Operators.OperatorObserverBase`2<System.Boolean,System.Boolean>
struct OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Net.HttpWebResponse,System.Net.HttpWebResponse>
struct OperatorObserverBase_2_t93951F8CF4655123F4A3AAF9492CCEAA80CB0EED  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.IO.Stream,System.IO.Stream>
struct OperatorObserverBase_2_t31A42878FFD65A6466A2C2EE66D7461485532AD0  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Net.WebResponse,System.Net.WebResponse>
struct OperatorObserverBase_2_t42AA8FAE586F4B561945A0609E74E8952B536E93  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// UniRx.Operators.AsObservableObservable`1/AsObservable<System.Boolean>
struct AsObservable_t254435EF4B56717F478CCBDF51D166852FB1920D  : public OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A
{
};

// UniRx.Operators.AsObservableObservable`1/AsObservable<System.Net.HttpWebResponse>
struct AsObservable_tCCDE26764C37FD5941DDDB8D05093685C2165E95  : public OperatorObserverBase_2_t93951F8CF4655123F4A3AAF9492CCEAA80CB0EED
{
};

// UniRx.Operators.AsObservableObservable`1/AsObservable<System.IO.Stream>
struct AsObservable_t8EF942955F290674C7F9B0E7A888878F67E1C9D9  : public OperatorObserverBase_2_t31A42878FFD65A6466A2C2EE66D7461485532AD0
{
};

// UniRx.Operators.AsObservableObservable`1/AsObservable<UniRx.Unit>
struct AsObservable_t4332824DC33CD4443702AD9FB635C36EB0E2EE83  : public OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A
{
};

// UniRx.Operators.AsObservableObservable`1/AsObservable<System.Net.WebResponse>
struct AsObservable_tD82CD70FEDF74BF27F960705CFFF72AD8A89318F  : public OperatorObserverBase_2_t42AA8FAE586F4B561945A0609E74E8952B536E93
{
};

// System.Linq.Buffer`1<UnityEngine.TextCore.Text.Character>
struct Buffer_1_t0D14675B33227FD97F6E105FC0786696931B7821 
{
	// TElement[] System.Linq.Buffer`1::items
	CharacterU5BU5D_t788CB8410BB51EC68ED6233EC1547FBA435B997B* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<UnityEngine.TextCore.Glyph>
struct Buffer_1_tF3EFE24CC22E910A4AB6460D0788042A3DCE7635 
{
	// TElement[] System.Linq.Buffer`1::items
	GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 
{
	// TElement[] System.Linq.Buffer`1::items
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<InterfaceAnmElement>
struct Buffer_1_tB196F65574B2C4C0E1A5197E59DBCEB988858105 
{
	// TElement[] System.Linq.Buffer`1::items
	InterfaceAnmElementU5BU5D_tACCF3984F1ACDE1D59C69FB297CA9897DF0FA022* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<Newtonsoft.Json.Serialization.JsonProperty>
struct Buffer_1_t234E3AB09518200E639758DCF17AB5A51FB87A0C 
{
	// TElement[] System.Linq.Buffer`1::items
	JsonPropertyU5BU5D_t10C88F15FC6BA5C5F99848D555A2946AB5585919* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<TMPro.KerningPair>
struct Buffer_1_tB01B06FE6F16B0C2515E2CA2442090BB095A4BB8 
{
	// TElement[] System.Linq.Buffer`1::items
	KerningPairU5BU5D_tE32FE368326412A1A7114990D32488E0D6EF8425* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<UnityEngine.XR.OpenXR.Features.OpenXRFeature>
struct Buffer_1_t08DDB3C1E8A45020D430CD4967D0D5FE02EA3C38 
{
	// TElement[] System.Linq.Buffer`1::items
	OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<UnityEngine.Resolution>
struct Buffer_1_tDA0DD68119D71CE6C027508D1F5F070442D8D81A 
{
	// TElement[] System.Linq.Buffer`1::items
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<UnityEngine.TextCore.Text.SpriteCharacter>
struct Buffer_1_tA977714642C4506D582FBE6C518A7ABF7C35CE74 
{
	// TElement[] System.Linq.Buffer`1::items
	SpriteCharacterU5BU5D_tF4060931C4A985100FE1C44BF53084E1630E96CA* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<UnityEngine.TextCore.Text.SpriteGlyph>
struct Buffer_1_t0C6D522F094A13A2EFBB6A91A5D65F4F0CB7DCE4 
{
	// TElement[] System.Linq.Buffer`1::items
	SpriteGlyphU5BU5D_t628B3F367E1869FF22ADA59DF190B5B8EE7BFC34* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<System.String>
struct Buffer_1_tAD5FDEA784FB378DF92DF17B89503937A8ABE7D3 
{
	// TElement[] System.Linq.Buffer`1::items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<TMPro.TMP_Character>
struct Buffer_1_t3D6779C13B12044D545DEBA947EC5429BFCD0632 
{
	// TElement[] System.Linq.Buffer`1::items
	TMP_CharacterU5BU5D_tC0FE7802A3B867FC94F352EF3978AD82C258AA0F* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<TMPro.TMP_GlyphPairAdjustmentRecord>
struct Buffer_1_t887F3B55356014F5F1B6111981175CDD578AF51B 
{
	// TElement[] System.Linq.Buffer`1::items
	TMP_GlyphPairAdjustmentRecordU5BU5D_t3BB4A5EE76A8B0B0080982C0C9CC1B9C2F020FEB* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<TMPro.TMP_SpriteCharacter>
struct Buffer_1_t122834B77F9AE09B0E79080733AAAE7DE15E2E26 
{
	// TElement[] System.Linq.Buffer`1::items
	TMP_SpriteCharacterU5BU5D_t95867998753219562445A616BE72C0CD4C4399EF* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<TMPro.TMP_SpriteGlyph>
struct Buffer_1_t6C180E36F7D74AD3F5355BB455AE4C419A40788C 
{
	// TElement[] System.Linq.Buffer`1::items
	TMP_SpriteGlyphU5BU5D_t362051C8167B288E431AA69E115DD4E4F9DDA356* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<UnityEngine.Vector2>
struct Buffer_1_tE9B128E74C4CE775AA381EB6E7F6C0765EFA4198 
{
	// TElement[] System.Linq.Buffer`1::items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Linq.Buffer`1<UnityEngine.Vector3>
struct Buffer_1_t3F4049DE980F84BDC7ECA1365499D226E1E8E619 
{
	// TElement[] System.Linq.Buffer`1::items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Linq.Expressions.LabelTarget,System.Linq.Expressions.Interpreter.LabelInfo>
struct KeyValuePair_2_tA176798404D82C1A01B7FD34C483E49B58424A09 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	LabelInfo_t40537451CCC388A64123156309E35BA78DADE7CF* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct KeyValuePair_2_t019E7EFA7976670F1E87F3349C1A873384B288FF 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	MemberHolder_t96ECF1CE10447DBB1D5E5191BCC4ADE95E55E36F* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariables/VariableScope>
struct KeyValuePair_2_tAEC7D718945A879C35D9E5F49758992A6D8C5AF4 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VariableScope_t25C4325FFBD991BC4BAE923BD7D52023318CD513* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>
struct KeyValuePair_2_t133D48D35C7B98A70DD4A9229864B9A6D9CE6DC9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	CallSite_1_t090407B87180D16DC10D1D5C668A4B01E3266230* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>
struct KeyValuePair_2_tB4DF9CE689CFDD4ED96A36EE03147DC395C8F4A1 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	CallSite_1_tAE0C20B82A89B7BB706AC7FB6A61D843B1E0550C* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Func`2<System.Object[],System.Object>>
struct KeyValuePair_2_tB64C5828D600B5F57F45F26B57B44A59443AD7D7 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_2_tDF54C067A76CC031380FDC1CAD2344D51038CC7A* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct KeyValuePair_2_t995259180EDCA054D1C0E11736891109975FD016 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Tuple_4_tCCB1D209C4895384DEF8914A1BC34DD94A511D36* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct KeyValuePair_2_tC10BDA88D32AFEA6A989B9C37FCF380426C948DC 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonContract_tE6A7D4E99E3396B56718606824E99F870FCCF4BA* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>
struct KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,Newtonsoft.Json.Utilities.ReflectionObject>
struct KeyValuePair_2_t3473304F8F3812691972C5747183C7C3DF439A29 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ReflectionObject_tBC7C0875C7434F4B89AC4948A4ECBD5CF84AE2E7* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Runtime.Serialization.SerializationEvents>
struct KeyValuePair_2_t19BEF7C453CD292E1C0BE0C6288CF0ECF5CEA88D 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SerializationEvents_t9F041CF09EEDAA7862FD930BB6C6D6D366E17CB7* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Type>
struct KeyValuePair_2_tEC77CF91980E5E712367BC7411495E13CD9AAD7D 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>
struct KeyValuePair_2_t336CB2C873282C2A0E2A4449358831135DDC3B11 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Union_t8F279DD277DBDE712E60D6E504D973441C824A02* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct KeyValuePair_2_t26C5D47E72C7EAF7A3DBD2C76571BF15926C7A16 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	SPKey_t3FD8B8DF5F452D3E34F29B5EC1AEC33370B1A6E5* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29* ___value_1;
};

// Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>
struct StructMultiKey_2_t6E68BC5B4E82B577ED926DDD328474297A4F65C3 
{
	// T1 Newtonsoft.Json.Utilities.StructMultiKey`2::Value1
	String_t* ___Value1_0;
	// T2 Newtonsoft.Json.Utilities.StructMultiKey`2::Value2
	String_t* ___Value2_1;
};

// Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>
struct StructMultiKey_2_t9FB148F2A8EBC3FFB18FB69FDB4EBB5E77237C2D 
{
	// T1 Newtonsoft.Json.Utilities.StructMultiKey`2::Value1
	Type_t* ___Value1_0;
	// T2 Newtonsoft.Json.Utilities.StructMultiKey`2::Value2
	NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___Value2_1;
};

// Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>
struct StructMultiKey_2_t976DA9C5BBF0BD9567BAFE22C1E741F8E238D5F5 
{
	// T1 Newtonsoft.Json.Utilities.StructMultiKey`2::Value1
	Type_t* ___Value1_0;
	// T2 Newtonsoft.Json.Utilities.StructMultiKey`2::Value2
	Type_t* ___Value2_1;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// TMPro.FloatTween
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE 
{
	// TMPro.FloatTween/FloatTweenCallback TMPro.FloatTween::m_Target
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target_0;
	// System.Single TMPro.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single TMPro.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single TMPro.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean TMPro.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;
};
// Native definition for P/Invoke marshalling of TMPro.FloatTween
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshaled_pinvoke
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of TMPro.FloatTween
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshaled_com
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A 
{
	// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshaled_pinvoke
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshaled_com
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.TextCore.LowLevel.GlyphValueRecord
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XPlacement
	float ___m_XPlacement_0;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YPlacement
	float ___m_YPlacement_1;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XAdvance
	float ___m_XAdvance_2;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YAdvance
	float ___m_YAdvance_3;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1<UnityEngine.AsyncOperation>
struct U3CAsObservableCoreU3Ed__2_1_t600E8DEA6157749CF1C3B6EF843454570B202ADB  : public RuntimeObject
{
	// System.Int32 UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// T UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1::asyncOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___asyncOperation_2;
	// System.IObserver`1<T> UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1::observer
	RuntimeObject* ___observer_3;
	// System.IProgress`1<System.Single> UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1::reportProgress
	RuntimeObject* ___reportProgress_4;
	// System.Threading.CancellationToken UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1::cancel
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancel_5;
	// System.Exception UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1::<ex>5__1
	Exception_t* ___U3CexU3E5__1_6;
	// System.Exception UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1::<ex>5__2
	Exception_t* ___U3CexU3E5__2_7;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Text.Character>
struct U3CGetEnumeratorU3Ed__1_t5840ED1E29EC73621F183A4DD7FFF26D96E7AA77  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	Character_t9B671B493FAC8D43638C69AF6AE92CBD103D80EC* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t4BFCF365460BA97A7367F0A0C7293ADC5CB50D15* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t0D14675B33227FD97F6E105FC0786696931B7821 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Glyph>
struct U3CGetEnumeratorU3Ed__1_t34DEC42F0C24C43EEE7D2C0A5225525DE7B84C35  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tBC6036400EE46CB1DB4F05CE2BF53CE9A2D89ECF* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_tF3EFE24CC22E910A4AB6460D0788042A3DCE7635 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<InterfaceAnmElement>
struct U3CGetEnumeratorU3Ed__1_tE412CEF7DC955D16D97AB90B11950324E0338DD9  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t1A00A62BC8EB0357911676EEBEA1A2622DC684F9* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_tB196F65574B2C4C0E1A5197E59DBCEB988858105 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<Newtonsoft.Json.Serialization.JsonProperty>
struct U3CGetEnumeratorU3Ed__1_tE2CD841643696846443D9067421A2D7DD81D3158  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t561EE2A16FDB8DB09C41B3F566D0C851162FC886* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t234E3AB09518200E639758DCF17AB5A51FB87A0C ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.KerningPair>
struct U3CGetEnumeratorU3Ed__1_t050D1B69ABA15BD7FAB1924EECF24E8AA82D3AC2  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	KerningPair_tC8E09DC4C7DA41551F1BCC9DDABF4AE44938D481* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tE535AA1A039CC25AFC6B85F1A655E15ECDBC5D80* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_tB01B06FE6F16B0C2515E2CA2442090BB095A4BB8 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.XR.OpenXR.Features.OpenXRFeature>
struct U3CGetEnumeratorU3Ed__1_tDA6F5F520EA5C781AC99542FCEB33D249AC3C9B2  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tD32691835511D233EDD4B7A74324138B16AED24D* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t08DDB3C1E8A45020D430CD4967D0D5FE02EA3C38 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.Resolution>
struct U3CGetEnumeratorU3Ed__1_t46D7AE48C705C2FF9006AB9A82CA95F4BDEF2037  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t06883285E33A84D7964B74131299B3581AAD4E43* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_tDA0DD68119D71CE6C027508D1F5F070442D8D81A ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Text.SpriteCharacter>
struct U3CGetEnumeratorU3Ed__1_t369E83F7F7D63D7C4B76A473E5ED9C8634D6D8EC  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	SpriteCharacter_tB3516A25DBFA0AD68DD8E1432752D503FD1F40F5* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t8F388C808CD91F25F061CD37FC292A4F1CFAA71F* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_tA977714642C4506D582FBE6C518A7ABF7C35CE74 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Text.SpriteGlyph>
struct U3CGetEnumeratorU3Ed__1_t0359EE8A2BDC77A1C837A26B4791470F934E7C63  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	SpriteGlyph_t0BD62F6EB8D19B2C4B246BC436A8F4BF2E0ACA1A* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t15974BBCF572B028332E901DD9AF80B5DB6DBD1B* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t0C6D522F094A13A2EFBB6A91A5D65F4F0CB7DCE4 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<System.String>
struct U3CGetEnumeratorU3Ed__1_t283BA3DC5A055AD975FA79C78660EE12BFFB795F  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t2D804A2992DDB7361D4CB4860D68FC1A3F671212* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_tAD5FDEA784FB378DF92DF17B89503937A8ABE7D3 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_Character>
struct U3CGetEnumeratorU3Ed__1_t376E5F66DCEE0D59F1C78CB65978784A1267726D  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tC5ADDDA28F50783D874B378CEFDF8D1E3001A1F6* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t3D6779C13B12044D545DEBA947EC5429BFCD0632 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_GlyphPairAdjustmentRecord>
struct U3CGetEnumeratorU3Ed__1_t5A450C21FA8D2294FF05A6CE4423A34DF869CBDE  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	TMP_GlyphPairAdjustmentRecord_t6150C3DE547DDD860AB097843D36519D818D810F* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tB859BDBC1C7333C1BF109574C0CFE5C9D1EA47FF* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t887F3B55356014F5F1B6111981175CDD578AF51B ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_SpriteCharacter>
struct U3CGetEnumeratorU3Ed__1_tED4C4F55A6BA710773D5E1C6284C0882FE42327C  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	TMP_SpriteCharacter_t98295D0A81320909AC4AD5F2602DD69EACBB449E* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tDEA6AEFC796656289161CEB31F0A73723736982B* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t122834B77F9AE09B0E79080733AAAE7DE15E2E26 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_SpriteGlyph>
struct U3CGetEnumeratorU3Ed__1_t189EB0EE84E5DC1D2BF63CC07B7E87ED25498B26  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	TMP_SpriteGlyph_t03845F742ADD8467342FC94903608F97B538D2DB* ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t57486EDA17DF98C85669ECB0831BE73CC9AFCC2E* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t6C180E36F7D74AD3F5355BB455AE4C419A40788C ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.Vector2>
struct U3CGetEnumeratorU3Ed__1_t82D81D823FA036E5CA5EFADAEDC5EE91A9F83C1A  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t2A839D56030A5BF16B67D5ECEA66459EBD766265* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_tE9B128E74C4CE775AA381EB6E7F6C0765EFA4198 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.Vector3>
struct U3CGetEnumeratorU3Ed__1_tE3544847666FC31206ADA987CCC978F70EA0B08E  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tF6C515E2C22591C0A6DC4876461EF20B7E50E024* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t3F4049DE980F84BDC7ECA1365499D226E1E8E619 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct U3CGetEnumeratorU3Ed__35_tDB3656B11C252143A0A50A4ECB9DB6570DED4D99  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t019E7EFA7976670F1E87F3349C1A873384B288FF ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_t6D96DA6A58241967E9762173E04F244E01511C94* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t4542EA22E45A39AF4B43C29AE4402B1C066D0A64* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>
struct U3CGetEnumeratorU3Ed__35_tE396341CF6B6B83D137CF4DC12155FFB6066C719  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t133D48D35C7B98A70DD4A9229864B9A6D9CE6DC9 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tD3C361BC54FEDF7745E3BB9D568BFA4E9508ED5E* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t72D9C0ED13DF2AE5DBE0938245A3C4C2DBC41533* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>
struct U3CGetEnumeratorU3Ed__35_t6447E37FF84C3CDD31B2204D0573B3971C37BA35  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_tB4DF9CE689CFDD4ED96A36EE03147DC395C8F4A1 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tE5D68C7065E4F77898C796BF7641DDFCFCA9093F* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_tFB56F0B56C710743D31CDD139CA6EB411367FE1D* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.String,System.Object>
struct U3CGetEnumeratorU3Ed__35_t251A80085D68D8E48568C71B8626104830AB9C27  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t315170742663659D92605BE8E5D5455EC9805755* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tCCA8B187E0102F0F46CF179D9C236440333D10C4* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_tACF3610DBC64B838B005551A43F342DC09F08E35* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.String,System.String>
struct U3CGetEnumeratorU3Ed__35_t0A612567570D075F23FCBEBE65CFB93E1EDEB7C6  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_tE0296B741D9F887264D805ED46C4249B8F5EFC9C* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tD5F26912C4F7EA453ABA6570E943FD979094ABE8* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_tADE605864D33495155ACC3C2BBBAE65F85C97B5A* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Func`2<System.Object[],System.Object>>
struct U3CGetEnumeratorU3Ed__35_t2A87B2F68125A72DABA07AB28E1B310BF9FBEE33  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_tB64C5828D600B5F57F45F26B57B44A59443AD7D7 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t20B5CA15C5056FE527664A35E5CD67638EDDD99A* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_t0061F77A5D840D7E03DBDE9079D5D11B0495D345* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_tE01033DB453F2A351A186F8E81F8A42E1D81CF91* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct U3CGetEnumeratorU3Ed__35_t62E718E90D55414FEE2BEF7B29AF9E69D0874B7C  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t995259180EDCA054D1C0E11736891109975FD016 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t421F761E5F7000F25374ACA7F13932BC7DAD49EA* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_t578358395EAC8C9CF093CF44B7EC8F346A1619F2* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t686598AB020D8ED9B8C03931D80CEABB1DBF5E9A* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct U3CGetEnumeratorU3Ed__35_t58B6427D8F42172C180E9681CC7700FA43A9F01B  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_tC10BDA88D32AFEA6A989B9C37FCF380426C948DC ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t9F2024F9B290406C9129D78931CF9D0B9DFD9FD8* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tB7DBA374201DAAE25F40D21709F44554319E4189* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t303D22755297167406B6E6A3E4686B4C4037E5A6* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Object>
struct U3CGetEnumeratorU3Ed__35_t3288F3AEE075A90F79A1EF9B3D1D2555FD16A5AE  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tAC8D3A65F7C34AA3413DA284ABB5B60FCAF3D3EA* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t275FEE23E0F1784D62714B28D90342AD18D10EDD* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,Newtonsoft.Json.Utilities.ReflectionObject>
struct U3CGetEnumeratorU3Ed__35_tB4CF6619BA0FE4687D0270BE20F46BFC329E1A84  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t3473304F8F3812691972C5747183C7C3DF439A29 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_t5F087CBA0A9E52B7DC56AD11E2284651AA985593* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t5F2A6519A65881C0BDABDB267DA06F117975F140* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Runtime.Serialization.SerializationEvents>
struct U3CGetEnumeratorU3Ed__35_t93C8D066BDD0735F5596D849F89B3DB4747FAE43  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t19BEF7C453CD292E1C0BE0C6288CF0ECF5CEA88D ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tC3EDB1B54EF3B06632B8B4BD502FC39546FD2148* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t0F73121DD833728764ACE29E5C22B8E936851F70* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Type>
struct U3CGetEnumeratorU3Ed__35_tBD70198B4B6388A142740CD87478828C4C83172A  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_tEC77CF91980E5E712367BC7411495E13CD9AAD7D ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tC8FCEEB45E4B48F7B6CEFFDC72B621F3E8A718D5* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t62C8BC61A68CDAC1896211BA436D69E70B5E5785* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>
struct U3CGetEnumeratorU3Ed__35_tCDE5EBA23ABDEFB98A6F7498D894DADF145A4500  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t336CB2C873282C2A0E2A4449358831135DDC3B11 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_t07810C38C39BA19F3429300F9A612FDC4BC98511* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t740139511F607F7BDA83D737AD45EF9339DC6B35* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct U3CGetEnumeratorU3Ed__35_t27DB9BB77C9A483177753D3AAB03EEAA9F930CA3  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t26C5D47E72C7EAF7A3DBD2C76571BF15926C7A16 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_t6333260CBA8FDF0E4090E1AE00354338AD22653C* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t1DD497D7FB3074D93E2DA08CDE49BF5CF5A4828F* ___U3CcurrentU3E5__4_5;
};

// System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7<System.Linq.Expressions.LabelTarget,System.Linq.Expressions.Interpreter.LabelInfo>
struct U3CGetEnumeratorWorkerU3Ed__7_t131A800C88A0A64937966F5F30B721385AA7A7F6  : public RuntimeObject
{
	// System.Int32 System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7::<>2__current
	KeyValuePair_2_tA176798404D82C1A01B7FD34C483E49B58424A09 ___U3CU3E2__current_1;
	// System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<TKey,TValue> System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7::<>4__this
	HybridReferenceDictionary_2_t7A87D042741A1E0D8B04071F3D2626E8F7E8E200* ___U3CU3E4__this_2;
	// System.Int32 System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariables/VariableScope>
struct U3CGetEnumeratorWorkerU3Ed__7_t6464E11D5456FCBC58E6E48EDE796A311E3E1E85  : public RuntimeObject
{
	// System.Int32 System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7::<>2__current
	KeyValuePair_2_tAEC7D718945A879C35D9E5F49758992A6D8C5AF4 ___U3CU3E2__current_1;
	// System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<TKey,TValue> System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7::<>4__this
	HybridReferenceDictionary_2_tBA70675C8DC268BA62B7BB7A3AABDCCC23EBEC84* ___U3CU3E4__this_2;
	// System.Int32 System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// TMPro.TweenRunner`1/<Start>d__2<TMPro.FloatTween>
struct U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D  : public RuntimeObject
{
	// System.Int32 TMPro.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// T TMPro.TweenRunner`1/<Start>d__2::tweenInfo
	FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___tweenInfo_2;
	// System.Single TMPro.TweenRunner`1/<Start>d__2::<elapsedTime>5__1
	float ___U3CelapsedTimeU3E5__1_3;
	// System.Single TMPro.TweenRunner`1/<Start>d__2::<percentage>5__2
	float ___U3CpercentageU3E5__2_4;
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB  : public RuntimeObject
{
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::tweenInfo
	FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<elapsedTime>5__1
	float ___U3CelapsedTimeU3E5__1_3;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<percentage>5__2
	float ___U3CpercentageU3E5__2_4;
};

// System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>
struct KeyValuePair_2_t97949E0A5E77CABB23EA5CAAB156421D325B1518 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	StructMultiKey_2_t6E68BC5B4E82B577ED926DDD328474297A4F65C3 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>
struct KeyValuePair_2_t0A80CCE78EBBE1B13C06F23D35808109EA65F1E8 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	StructMultiKey_2_t9FB148F2A8EBC3FFB18FB69FDB4EBB5E77237C2D ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	EnumInfo_t786CA2C24EE84B1EC2F48E8448A3A0AC6F842571* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>
struct KeyValuePair_2_tA3FAAB92432032FB9F4F031603E499F3BB36BF18 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	StructMultiKey_2_t976DA9C5BBF0BD9567BAFE22C1E741F8E238D5F5 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___value_1;
};

// UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 
{
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshaled_pinvoke
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshaled_com
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	// System.UInt32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphIndex
	uint32_t ___m_GlyphIndex_0;
	// UnityEngine.TextCore.LowLevel.GlyphValueRecord UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphValueRecord
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord_1;
};

// UnityEngine.InputSystem.InputManager/AvailableDevice
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 
{
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputManager/AvailableDevice::description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___description_0;
	// System.Int32 UnityEngine.InputSystem.InputManager/AvailableDevice::deviceId
	int32_t ___deviceId_1;
	// System.Boolean UnityEngine.InputSystem.InputManager/AvailableDevice::isNative
	bool ___isNative_2;
	// System.Boolean UnityEngine.InputSystem.InputManager/AvailableDevice::isRemoved
	bool ___isRemoved_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputManager/AvailableDevice
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_marshaled_pinvoke
{
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke ___description_0;
	int32_t ___deviceId_1;
	int32_t ___isNative_2;
	int32_t ___isRemoved_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputManager/AvailableDevice
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_marshaled_com
{
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com ___description_0;
	int32_t ___deviceId_1;
	int32_t ___isNative_2;
	int32_t ___isRemoved_3;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>
struct U3CGetEnumeratorU3Ed__35_t32DEAB0693AD53E2169073A300398991978409CF  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t97949E0A5E77CABB23EA5CAAB156421D325B1518 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_tC98EE270110C16860732A47C70BF26F6F98195F2* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t27454880F6EA7B4F9AFE6A78DE18B7EE9187AEEC* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>
struct U3CGetEnumeratorU3Ed__35_t7CEB0BBBA6637D01823C67DEDE02FB91BB36BAAA  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_t0A80CCE78EBBE1B13C06F23D35808109EA65F1E8 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_t9450A332798603EC71011A35BB493849D8A376B1* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_t026D05D192ABB0E7322A354157B1D2DC64E5E63E* ___U3CcurrentU3E5__4_5;
};

// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>
struct U3CGetEnumeratorU3Ed__35_tDA9571DFE6263CAB77CC68D1411F88E549BCEE3C  : public RuntimeObject
{
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>2__current
	KeyValuePair_2_tA3FAAB92432032FB9F4F031603E499F3BB36BF18 ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<>4__this
	ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3* ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<buckets>5__2
	NodeU5BU5D_t8B34587D76E942D38C84013249A41D81E4FCCD18* ___U3CbucketsU3E5__2_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<i>5__3
	int32_t ___U3CiU3E5__3_4;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35::<current>5__4
	Node_tD2AD8B22DE509ED94E4F81F3131D77E256C312CC* ___U3CcurrentU3E5__4_5;
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47  : public RuntimeObject
{
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::tweenInfo
	ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<elapsedTime>5__1
	float ___U3CelapsedTimeU3E5__1_3;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<percentage>5__2
	float ___U3CpercentageU3E5__2_4;
};

// System.Linq.Enumerable/<TakeIterator>d__25`1<UnityEngine.InputSystem.InputManager/AvailableDevice>
struct U3CTakeIteratorU3Ed__25_1_tB8922508AB1B1644E78BC0D397CC4146B7D9B3CE  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<TakeIterator>d__25`1::<>2__current
	AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::count
	int32_t ___count_3;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>3__count
	int32_t ___U3CU3E3__count_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::source
	RuntimeObject* ___source_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
};

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FirstAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord_0;
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_SecondAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord_1;
	// UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FeatureLookupFlags
	int32_t ___m_FeatureLookupFlags_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90  : public RuntimeObject
{
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__2
	Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 ___U3CbufferU3E5__2_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_5;
};

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct IAsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t320CEDD73D1B6148F89E466592AD388D4E4C032C* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Int32Enum>
struct AsyncOperationCompletedHandler_1_t4FE670EEBA8A8DA91E598F5C92818885102709F4  : public MulticastDelegate_t
{
};

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct IAsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t4952BAC5E8EEE4D1A7F5C9E77985BC56BAA008F7* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct IAsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t6BCAA33302C9428BAC78372227CDB4F9436628DE* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct IAsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2* ___asyncInfo0, Il2CppIInspectable* ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct IAsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m44E5686A5ECD542FD4FE1D27B138BC2CB96DFAB3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tD26AAC0C38CD0F7DB527651AB6AD69F622A9896D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m7B29E4F5CAEDB776309C70A7190278406C8BFD8A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t83441B645908CC58488ABF426B95F0FA030C5E8B** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m3FABC5E5AEB3D250BD8B05D1BDBE039995E790A8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t09285B597935AFCB2EC018AF5E93854CD5C9BCF5** comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_m2652F8A6A5E643A7E0B247CF2AC3BCC116DD8279_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m35302C082F74012B21C9FF3A12270C2BD79C331F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_mCE5C05537DF4933F7AF0935DCB24FD8091EFA5CE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_m5262411EF3E0484DD85205F0FF5F72A1B24B4474_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m7B0DAD8851CA86EB594217AAD6B34CA1F1D5AEDE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t ___value1);
il2cpp_hresult_t IVector_1_InsertAt_mA9DBE52C6D8108DE6BD17D98ECAFFFDA2FFAAB56_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mB7926724DE60F95F962AFEB1DBD668343374A7B9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m754A802E88BF414D5DBFD01FAB389D78D0584253_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m483F742EE01ABAECDC1469CABFA87468A90AB555_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m1629FF75DF493CD9313BDFA7A3D97118DBC7E206_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m95B930D7FAB6A4F0705C562511B0C2FE5F4D4A64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mBED1EFA49ED65A725994F80E7C417D36C806E680_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, uint8_t* ___items0);
il2cpp_hresult_t IIterable_1_First_m43CD5A34ABEF4766A062BF3BAC919E85269CA039_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t61E394E90ADD9DF710E54EBD34636E513D0A7ED9** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m59ADAFBC7DB3F240B8CB8D8A60AB44ECD6740CC4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m62325E27C0A4D7EBB0CB00B4FA2ED93E964CA7EC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m15AED5FF23C249DAA0403F6C95FD7C0626F926F9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mD8EBC2B345ECF039A1438F5C63FFDCAD1CB664A4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue);

// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_mAF5846B8F630CC6A0B0FB0F28BF309A478E13E61_gshared_inline (AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_gshared_inline (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Int32Enum>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m094EA23E120E06DE3EA45BADC5B14B657D8F9D73_gshared_inline (AsyncOperationCompletedHandler_1_t4FE670EEBA8A8DA91E598F5C92818885102709F4* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_gshared_inline (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m9001691C382E2DE55970E04796390493C8D43138_gshared_inline (AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F* __this, RuntimeObject* ___asyncInfo0, RuntimeObject* ___progressInfo1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_gshared_inline (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_mAF272FF458B46E624BE1FE48585C64E5954565EA_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) ;

// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_mFC2E9B8EE42253766B3288A454029B0244998B0B_inline (AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_mAF5846B8F630CC6A0B0FB0F28BF309A478E13E61_gshared_inline)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_inline (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_gshared_inline)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_mAF5846B8F630CC6A0B0FB0F28BF309A478E13E61_inline (AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_mAF5846B8F630CC6A0B0FB0F28BF309A478E13E61_gshared_inline)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m465F8AB34C59E6FB2A0B69E0FD0C8C8465FE0136_inline (AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m094EA23E120E06DE3EA45BADC5B14B657D8F9D73_gshared_inline)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
inline void AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_inline (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_gshared_inline)(__this, ___asyncInfo0, ___progressInfo1, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
inline void AsyncOperationProgressHandler_2_Invoke_m9001691C382E2DE55970E04796390493C8D43138_inline (AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F* __this, RuntimeObject* ___asyncInfo0, RuntimeObject* ___progressInfo1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m9001691C382E2DE55970E04796390493C8D43138_gshared_inline)(__this, ___asyncInfo0, ___progressInfo1, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
inline void AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_inline (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5*, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_gshared_inline)(__this, ___asyncInfo0, ___progressInfo1, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
inline void AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_inline (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_gshared_inline)(__this, ___asyncInfo0, ___progressInfo1, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_inline (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_gshared_inline)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_mAF272FF458B46E624BE1FE48585C64E5954565EA_inline (AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_mAF272FF458B46E624BE1FE48585C64E5954565EA_gshared_inline)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_inline (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_gshared_inline)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_inline (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_gshared_inline)(__this, ___asyncInfo0, ___asyncStatus1, method);
}

// COM Callable Wrapper for UniRx.AsyncOperationExtensions/<AsObservableCore>d__2`1<UnityEngine.AsyncOperation>
struct U3CAsObservableCoreU3Ed__2_1_t600E8DEA6157749CF1C3B6EF843454570B202ADB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAsObservableCoreU3Ed__2_1_t600E8DEA6157749CF1C3B6EF843454570B202ADB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CAsObservableCoreU3Ed__2_1_t600E8DEA6157749CF1C3B6EF843454570B202ADB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAsObservableCoreU3Ed__2_1_t600E8DEA6157749CF1C3B6EF843454570B202ADB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAsObservableCoreU3Ed__2_1_t600E8DEA6157749CF1C3B6EF843454570B202ADB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAsObservableCoreU3Ed__2_1_t600E8DEA6157749CF1C3B6EF843454570B202ADB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAsObservableCoreU3Ed__2_1_t600E8DEA6157749CF1C3B6EF843454570B202ADB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.Attribute>
struct U3CCastIteratorU3Ed__99_1_t24A66DD657D68251AE23CA8D8CD259F6AB2CD5BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t24A66DD657D68251AE23CA8D8CD259F6AB2CD5BD_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t24A66DD657D68251AE23CA8D8CD259F6AB2CD5BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t24A66DD657D68251AE23CA8D8CD259F6AB2CD5BD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t24A66DD657D68251AE23CA8D8CD259F6AB2CD5BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t24A66DD657D68251AE23CA8D8CD259F6AB2CD5BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t24A66DD657D68251AE23CA8D8CD259F6AB2CD5BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.Runtime.Serialization.DataMemberAttribute>
struct U3CCastIteratorU3Ed__99_1_tF8D401BC67214FD88B07385F7B381676A413D8D3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_tF8D401BC67214FD88B07385F7B381676A413D8D3_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_tF8D401BC67214FD88B07385F7B381676A413D8D3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_tF8D401BC67214FD88B07385F7B381676A413D8D3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_tF8D401BC67214FD88B07385F7B381676A413D8D3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_tF8D401BC67214FD88B07385F7B381676A413D8D3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_tF8D401BC67214FD88B07385F7B381676A413D8D3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.ComponentModel.DefaultValueAttribute>
struct U3CCastIteratorU3Ed__99_1_t0ADE2A322A1012ED30E18546E92B629A6F44FC30_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t0ADE2A322A1012ED30E18546E92B629A6F44FC30_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t0ADE2A322A1012ED30E18546E92B629A6F44FC30_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t0ADE2A322A1012ED30E18546E92B629A6F44FC30_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t0ADE2A322A1012ED30E18546E92B629A6F44FC30(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t0ADE2A322A1012ED30E18546E92B629A6F44FC30_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t0ADE2A322A1012ED30E18546E92B629A6F44FC30_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.ComponentModel.DescriptionAttribute>
struct U3CCastIteratorU3Ed__99_1_t5A9900CCAC466458DE9B75D18A08301F39AB801C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t5A9900CCAC466458DE9B75D18A08301F39AB801C_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t5A9900CCAC466458DE9B75D18A08301F39AB801C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t5A9900CCAC466458DE9B75D18A08301F39AB801C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t5A9900CCAC466458DE9B75D18A08301F39AB801C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t5A9900CCAC466458DE9B75D18A08301F39AB801C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t5A9900CCAC466458DE9B75D18A08301F39AB801C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.Runtime.Serialization.EnumMemberAttribute>
struct U3CCastIteratorU3Ed__99_1_t0861F0F2E3BCBD5E8382B33905B8C62F47A0E438_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t0861F0F2E3BCBD5E8382B33905B8C62F47A0E438_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t0861F0F2E3BCBD5E8382B33905B8C62F47A0E438_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t0861F0F2E3BCBD5E8382B33905B8C62F47A0E438_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t0861F0F2E3BCBD5E8382B33905B8C62F47A0E438(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t0861F0F2E3BCBD5E8382B33905B8C62F47A0E438_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t0861F0F2E3BCBD5E8382B33905B8C62F47A0E438_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.Reflection.FieldInfo>
struct U3CCastIteratorU3Ed__99_1_t94E58FE181EC9776C4EE835CCAF13EC5FA135FC5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t94E58FE181EC9776C4EE835CCAF13EC5FA135FC5_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t94E58FE181EC9776C4EE835CCAF13EC5FA135FC5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t94E58FE181EC9776C4EE835CCAF13EC5FA135FC5_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t94E58FE181EC9776C4EE835CCAF13EC5FA135FC5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t94E58FE181EC9776C4EE835CCAF13EC5FA135FC5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t94E58FE181EC9776C4EE835CCAF13EC5FA135FC5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.Runtime.Serialization.IgnoreDataMemberAttribute>
struct U3CCastIteratorU3Ed__99_1_t8C3240FCA7C1EAB890D2DE203D51A2533098ACAF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t8C3240FCA7C1EAB890D2DE203D51A2533098ACAF_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t8C3240FCA7C1EAB890D2DE203D51A2533098ACAF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t8C3240FCA7C1EAB890D2DE203D51A2533098ACAF_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t8C3240FCA7C1EAB890D2DE203D51A2533098ACAF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t8C3240FCA7C1EAB890D2DE203D51A2533098ACAF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t8C3240FCA7C1EAB890D2DE203D51A2533098ACAF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.Linq.JProperty>
struct U3CCastIteratorU3Ed__99_1_t64A4EAD7D82C429C1FF4C85C67CBED999276ECAB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t64A4EAD7D82C429C1FF4C85C67CBED999276ECAB_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67, IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t64A4EAD7D82C429C1FF4C85C67CBED999276ECAB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t64A4EAD7D82C429C1FF4C85C67CBED999276ECAB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(8);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID;
		interfaceIds[3] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[4] = IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67::IID;
		interfaceIds[5] = IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1::IID;
		interfaceIds[6] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[7] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 8;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2(IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m44E5686A5ECD542FD4FE1D27B138BC2CB96DFAB3(IIterator_1_tD26AAC0C38CD0F7DB527651AB6AD69F622A9896D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m44E5686A5ECD542FD4FE1D27B138BC2CB96DFAB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7B29E4F5CAEDB776309C70A7190278406C8BFD8A(IIterator_1_t83441B645908CC58488ABF426B95F0FA030C5E8B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m7B29E4F5CAEDB776309C70A7190278406C8BFD8A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t64A4EAD7D82C429C1FF4C85C67CBED999276ECAB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t64A4EAD7D82C429C1FF4C85C67CBED999276ECAB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t64A4EAD7D82C429C1FF4C85C67CBED999276ECAB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonContainerAttribute>
struct U3CCastIteratorU3Ed__99_1_t62330600A1197CCE4976485D23414500471CA9E9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t62330600A1197CCE4976485D23414500471CA9E9_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t62330600A1197CCE4976485D23414500471CA9E9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t62330600A1197CCE4976485D23414500471CA9E9_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t62330600A1197CCE4976485D23414500471CA9E9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t62330600A1197CCE4976485D23414500471CA9E9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t62330600A1197CCE4976485D23414500471CA9E9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonExtensionDataAttribute>
struct U3CCastIteratorU3Ed__99_1_tF19D4084A0328650B03925BE1E9708367215521A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_tF19D4084A0328650B03925BE1E9708367215521A_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_tF19D4084A0328650B03925BE1E9708367215521A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_tF19D4084A0328650B03925BE1E9708367215521A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_tF19D4084A0328650B03925BE1E9708367215521A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_tF19D4084A0328650B03925BE1E9708367215521A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_tF19D4084A0328650B03925BE1E9708367215521A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonIgnoreAttribute>
struct U3CCastIteratorU3Ed__99_1_t4D9409F39E9604EEB456C89C2D797972DB7EFD5B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t4D9409F39E9604EEB456C89C2D797972DB7EFD5B_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t4D9409F39E9604EEB456C89C2D797972DB7EFD5B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t4D9409F39E9604EEB456C89C2D797972DB7EFD5B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t4D9409F39E9604EEB456C89C2D797972DB7EFD5B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t4D9409F39E9604EEB456C89C2D797972DB7EFD5B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t4D9409F39E9604EEB456C89C2D797972DB7EFD5B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonPropertyAttribute>
struct U3CCastIteratorU3Ed__99_1_tD4547C3887EB6A5220CA3DD3F5815E60B29FFF4D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_tD4547C3887EB6A5220CA3DD3F5815E60B29FFF4D_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_tD4547C3887EB6A5220CA3DD3F5815E60B29FFF4D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_tD4547C3887EB6A5220CA3DD3F5815E60B29FFF4D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_tD4547C3887EB6A5220CA3DD3F5815E60B29FFF4D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_tD4547C3887EB6A5220CA3DD3F5815E60B29FFF4D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_tD4547C3887EB6A5220CA3DD3F5815E60B29FFF4D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<Newtonsoft.Json.JsonRequiredAttribute>
struct U3CCastIteratorU3Ed__99_1_t430DF3667502813327471D9383BFC54A8C603223_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t430DF3667502813327471D9383BFC54A8C603223_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t430DF3667502813327471D9383BFC54A8C603223_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t430DF3667502813327471D9383BFC54A8C603223_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t430DF3667502813327471D9383BFC54A8C603223(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t430DF3667502813327471D9383BFC54A8C603223_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t430DF3667502813327471D9383BFC54A8C603223_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.NonSerializedAttribute>
struct U3CCastIteratorU3Ed__99_1_t440C6955E5E442E1FB6384E371486BD3EEF6AA02_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t440C6955E5E442E1FB6384E371486BD3EEF6AA02_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_t440C6955E5E442E1FB6384E371486BD3EEF6AA02_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_t440C6955E5E442E1FB6384E371486BD3EEF6AA02_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_t440C6955E5E442E1FB6384E371486BD3EEF6AA02(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_t440C6955E5E442E1FB6384E371486BD3EEF6AA02_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_t440C6955E5E442E1FB6384E371486BD3EEF6AA02_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<CastIterator>d__99`1<System.SerializableAttribute>
struct U3CCastIteratorU3Ed__99_1_tB5BE3C1D3CD95E60A4CE9E54B00AE7E05CA79BD7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_tB5BE3C1D3CD95E60A4CE9E54B00AE7E05CA79BD7_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCastIteratorU3Ed__99_1_tB5BE3C1D3CD95E60A4CE9E54B00AE7E05CA79BD7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCastIteratorU3Ed__99_1_tB5BE3C1D3CD95E60A4CE9E54B00AE7E05CA79BD7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCastIteratorU3Ed__99_1_tB5BE3C1D3CD95E60A4CE9E54B00AE7E05CA79BD7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCastIteratorU3Ed__99_1_tB5BE3C1D3CD95E60A4CE9E54B00AE7E05CA79BD7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCastIteratorU3Ed__99_1_tB5BE3C1D3CD95E60A4CE9E54B00AE7E05CA79BD7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<DistinctIterator>d__68`1<System.String>
struct U3CDistinctIteratorU3Ed__68_1_t99ABED846E0385E8697588683BF8748A9C35F6A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDistinctIteratorU3Ed__68_1_t99ABED846E0385E8697588683BF8748A9C35F6A1_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CDistinctIteratorU3Ed__68_1_t99ABED846E0385E8697588683BF8748A9C35F6A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDistinctIteratorU3Ed__68_1_t99ABED846E0385E8697588683BF8748A9C35F6A1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[5] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDistinctIteratorU3Ed__68_1_t99ABED846E0385E8697588683BF8748A9C35F6A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDistinctIteratorU3Ed__68_1_t99ABED846E0385E8697588683BF8748A9C35F6A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDistinctIteratorU3Ed__68_1_t99ABED846E0385E8697588683BF8748A9C35F6A1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<DistinctIterator>d__68`1<Microsoft.MixedReality.Toolkit.SystemType>
struct U3CDistinctIteratorU3Ed__68_1_t604B203C4BDF2745F901AB8A3DD9A5A53D70EAA0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDistinctIteratorU3Ed__68_1_t604B203C4BDF2745F901AB8A3DD9A5A53D70EAA0_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CDistinctIteratorU3Ed__68_1_t604B203C4BDF2745F901AB8A3DD9A5A53D70EAA0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDistinctIteratorU3Ed__68_1_t604B203C4BDF2745F901AB8A3DD9A5A53D70EAA0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDistinctIteratorU3Ed__68_1_t604B203C4BDF2745F901AB8A3DD9A5A53D70EAA0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDistinctIteratorU3Ed__68_1_t604B203C4BDF2745F901AB8A3DD9A5A53D70EAA0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDistinctIteratorU3Ed__68_1_t604B203C4BDF2745F901AB8A3DD9A5A53D70EAA0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__28<UnityEngine.Events.UnityEvent>
struct U3CEnumerateU3Ed__28_t24AAE35EBF85F44CE0AB0FBE5D8EA892BC0825E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CEnumerateU3Ed__28_t24AAE35EBF85F44CE0AB0FBE5D8EA892BC0825E2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CEnumerateU3Ed__28_t24AAE35EBF85F44CE0AB0FBE5D8EA892BC0825E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CEnumerateU3Ed__28_t24AAE35EBF85F44CE0AB0FBE5D8EA892BC0825E2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CEnumerateU3Ed__28_t24AAE35EBF85F44CE0AB0FBE5D8EA892BC0825E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CEnumerateU3Ed__28_t24AAE35EBF85F44CE0AB0FBE5D8EA892BC0825E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CEnumerateU3Ed__28_t24AAE35EBF85F44CE0AB0FBE5D8EA892BC0825E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Text.Character>
struct U3CGetEnumeratorU3Ed__1_t5840ED1E29EC73621F183A4DD7FFF26D96E7AA77_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t5840ED1E29EC73621F183A4DD7FFF26D96E7AA77_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t5840ED1E29EC73621F183A4DD7FFF26D96E7AA77_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t5840ED1E29EC73621F183A4DD7FFF26D96E7AA77_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t5840ED1E29EC73621F183A4DD7FFF26D96E7AA77(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t5840ED1E29EC73621F183A4DD7FFF26D96E7AA77_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t5840ED1E29EC73621F183A4DD7FFF26D96E7AA77_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Glyph>
struct U3CGetEnumeratorU3Ed__1_t34DEC42F0C24C43EEE7D2C0A5225525DE7B84C35_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t34DEC42F0C24C43EEE7D2C0A5225525DE7B84C35_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t34DEC42F0C24C43EEE7D2C0A5225525DE7B84C35_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t34DEC42F0C24C43EEE7D2C0A5225525DE7B84C35_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t34DEC42F0C24C43EEE7D2C0A5225525DE7B84C35(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t34DEC42F0C24C43EEE7D2C0A5225525DE7B84C35_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t34DEC42F0C24C43EEE7D2C0A5225525DE7B84C35_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<InterfaceAnmElement>
struct U3CGetEnumeratorU3Ed__1_tE412CEF7DC955D16D97AB90B11950324E0338DD9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tE412CEF7DC955D16D97AB90B11950324E0338DD9_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_tE412CEF7DC955D16D97AB90B11950324E0338DD9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tE412CEF7DC955D16D97AB90B11950324E0338DD9_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_tE412CEF7DC955D16D97AB90B11950324E0338DD9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_tE412CEF7DC955D16D97AB90B11950324E0338DD9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_tE412CEF7DC955D16D97AB90B11950324E0338DD9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<Newtonsoft.Json.Serialization.JsonProperty>
struct U3CGetEnumeratorU3Ed__1_tE2CD841643696846443D9067421A2D7DD81D3158_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tE2CD841643696846443D9067421A2D7DD81D3158_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_tE2CD841643696846443D9067421A2D7DD81D3158_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tE2CD841643696846443D9067421A2D7DD81D3158_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_tE2CD841643696846443D9067421A2D7DD81D3158(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_tE2CD841643696846443D9067421A2D7DD81D3158_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_tE2CD841643696846443D9067421A2D7DD81D3158_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.KerningPair>
struct U3CGetEnumeratorU3Ed__1_t050D1B69ABA15BD7FAB1924EECF24E8AA82D3AC2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t050D1B69ABA15BD7FAB1924EECF24E8AA82D3AC2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t050D1B69ABA15BD7FAB1924EECF24E8AA82D3AC2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t050D1B69ABA15BD7FAB1924EECF24E8AA82D3AC2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t050D1B69ABA15BD7FAB1924EECF24E8AA82D3AC2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t050D1B69ABA15BD7FAB1924EECF24E8AA82D3AC2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t050D1B69ABA15BD7FAB1924EECF24E8AA82D3AC2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.XR.OpenXR.Features.OpenXRFeature>
struct U3CGetEnumeratorU3Ed__1_tDA6F5F520EA5C781AC99542FCEB33D249AC3C9B2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tDA6F5F520EA5C781AC99542FCEB33D249AC3C9B2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_tDA6F5F520EA5C781AC99542FCEB33D249AC3C9B2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tDA6F5F520EA5C781AC99542FCEB33D249AC3C9B2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_tDA6F5F520EA5C781AC99542FCEB33D249AC3C9B2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_tDA6F5F520EA5C781AC99542FCEB33D249AC3C9B2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_tDA6F5F520EA5C781AC99542FCEB33D249AC3C9B2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.Resolution>
struct U3CGetEnumeratorU3Ed__1_t46D7AE48C705C2FF9006AB9A82CA95F4BDEF2037_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t46D7AE48C705C2FF9006AB9A82CA95F4BDEF2037_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t46D7AE48C705C2FF9006AB9A82CA95F4BDEF2037_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t46D7AE48C705C2FF9006AB9A82CA95F4BDEF2037_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t46D7AE48C705C2FF9006AB9A82CA95F4BDEF2037(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t46D7AE48C705C2FF9006AB9A82CA95F4BDEF2037_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t46D7AE48C705C2FF9006AB9A82CA95F4BDEF2037_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Text.SpriteCharacter>
struct U3CGetEnumeratorU3Ed__1_t369E83F7F7D63D7C4B76A473E5ED9C8634D6D8EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t369E83F7F7D63D7C4B76A473E5ED9C8634D6D8EC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t369E83F7F7D63D7C4B76A473E5ED9C8634D6D8EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t369E83F7F7D63D7C4B76A473E5ED9C8634D6D8EC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t369E83F7F7D63D7C4B76A473E5ED9C8634D6D8EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t369E83F7F7D63D7C4B76A473E5ED9C8634D6D8EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t369E83F7F7D63D7C4B76A473E5ED9C8634D6D8EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Text.SpriteGlyph>
struct U3CGetEnumeratorU3Ed__1_t0359EE8A2BDC77A1C837A26B4791470F934E7C63_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t0359EE8A2BDC77A1C837A26B4791470F934E7C63_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t0359EE8A2BDC77A1C837A26B4791470F934E7C63_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t0359EE8A2BDC77A1C837A26B4791470F934E7C63_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t0359EE8A2BDC77A1C837A26B4791470F934E7C63(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t0359EE8A2BDC77A1C837A26B4791470F934E7C63_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t0359EE8A2BDC77A1C837A26B4791470F934E7C63_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<System.String>
struct U3CGetEnumeratorU3Ed__1_t283BA3DC5A055AD975FA79C78660EE12BFFB795F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t283BA3DC5A055AD975FA79C78660EE12BFFB795F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t283BA3DC5A055AD975FA79C78660EE12BFFB795F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t283BA3DC5A055AD975FA79C78660EE12BFFB795F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t283BA3DC5A055AD975FA79C78660EE12BFFB795F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t283BA3DC5A055AD975FA79C78660EE12BFFB795F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t283BA3DC5A055AD975FA79C78660EE12BFFB795F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_Character>
struct U3CGetEnumeratorU3Ed__1_t376E5F66DCEE0D59F1C78CB65978784A1267726D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t376E5F66DCEE0D59F1C78CB65978784A1267726D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t376E5F66DCEE0D59F1C78CB65978784A1267726D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t376E5F66DCEE0D59F1C78CB65978784A1267726D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t376E5F66DCEE0D59F1C78CB65978784A1267726D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t376E5F66DCEE0D59F1C78CB65978784A1267726D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t376E5F66DCEE0D59F1C78CB65978784A1267726D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_GlyphPairAdjustmentRecord>
struct U3CGetEnumeratorU3Ed__1_t5A450C21FA8D2294FF05A6CE4423A34DF869CBDE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t5A450C21FA8D2294FF05A6CE4423A34DF869CBDE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t5A450C21FA8D2294FF05A6CE4423A34DF869CBDE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t5A450C21FA8D2294FF05A6CE4423A34DF869CBDE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t5A450C21FA8D2294FF05A6CE4423A34DF869CBDE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t5A450C21FA8D2294FF05A6CE4423A34DF869CBDE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t5A450C21FA8D2294FF05A6CE4423A34DF869CBDE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_SpriteCharacter>
struct U3CGetEnumeratorU3Ed__1_tED4C4F55A6BA710773D5E1C6284C0882FE42327C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tED4C4F55A6BA710773D5E1C6284C0882FE42327C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_tED4C4F55A6BA710773D5E1C6284C0882FE42327C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tED4C4F55A6BA710773D5E1C6284C0882FE42327C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_tED4C4F55A6BA710773D5E1C6284C0882FE42327C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_tED4C4F55A6BA710773D5E1C6284C0882FE42327C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_tED4C4F55A6BA710773D5E1C6284C0882FE42327C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_SpriteGlyph>
struct U3CGetEnumeratorU3Ed__1_t189EB0EE84E5DC1D2BF63CC07B7E87ED25498B26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t189EB0EE84E5DC1D2BF63CC07B7E87ED25498B26_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t189EB0EE84E5DC1D2BF63CC07B7E87ED25498B26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t189EB0EE84E5DC1D2BF63CC07B7E87ED25498B26_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t189EB0EE84E5DC1D2BF63CC07B7E87ED25498B26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t189EB0EE84E5DC1D2BF63CC07B7E87ED25498B26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t189EB0EE84E5DC1D2BF63CC07B7E87ED25498B26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.Vector2>
struct U3CGetEnumeratorU3Ed__1_t82D81D823FA036E5CA5EFADAEDC5EE91A9F83C1A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t82D81D823FA036E5CA5EFADAEDC5EE91A9F83C1A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_t82D81D823FA036E5CA5EFADAEDC5EE91A9F83C1A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t82D81D823FA036E5CA5EFADAEDC5EE91A9F83C1A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t82D81D823FA036E5CA5EFADAEDC5EE91A9F83C1A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t82D81D823FA036E5CA5EFADAEDC5EE91A9F83C1A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t82D81D823FA036E5CA5EFADAEDC5EE91A9F83C1A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.Vector3>
struct U3CGetEnumeratorU3Ed__1_tE3544847666FC31206ADA987CCC978F70EA0B08E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tE3544847666FC31206ADA987CCC978F70EA0B08E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__1_tE3544847666FC31206ADA987CCC978F70EA0B08E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tE3544847666FC31206ADA987CCC978F70EA0B08E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_tE3544847666FC31206ADA987CCC978F70EA0B08E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_tE3544847666FC31206ADA987CCC978F70EA0B08E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_tE3544847666FC31206ADA987CCC978F70EA0B08E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Lookup`2/<GetEnumerator>d__12<System.String,System.Reflection.MemberInfo>
struct U3CGetEnumeratorU3Ed__12_tD9C717C5C4F8A31595B6C1EC7D9B592029093ABD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__12_tD9C717C5C4F8A31595B6C1EC7D9B592029093ABD_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__12_tD9C717C5C4F8A31595B6C1EC7D9B592029093ABD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__12_tD9C717C5C4F8A31595B6C1EC7D9B592029093ABD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__12_tD9C717C5C4F8A31595B6C1EC7D9B592029093ABD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__12_tD9C717C5C4F8A31595B6C1EC7D9B592029093ABD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__12_tD9C717C5C4F8A31595B6C1EC7D9B592029093ABD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20<System.Linq.Expressions.Expression>
struct U3CGetEnumeratorU3Ed__20_tB19D5467E7EC21FC24A3861CFA02243A024D5BF1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__20_tB19D5467E7EC21FC24A3861CFA02243A024D5BF1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__20_tB19D5467E7EC21FC24A3861CFA02243A024D5BF1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__20_tB19D5467E7EC21FC24A3861CFA02243A024D5BF1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__20_tB19D5467E7EC21FC24A3861CFA02243A024D5BF1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__20_tB19D5467E7EC21FC24A3861CFA02243A024D5BF1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__20_tB19D5467E7EC21FC24A3861CFA02243A024D5BF1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Dynamic.Utils.ListProvider`1/<GetEnumerator>d__20<System.Linq.Expressions.ParameterExpression>
struct U3CGetEnumeratorU3Ed__20_t9BDD97D85857DCEBE74255667443CA53E106D019_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__20_t9BDD97D85857DCEBE74255667443CA53E106D019_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__20_t9BDD97D85857DCEBE74255667443CA53E106D019_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__20_t9BDD97D85857DCEBE74255667443CA53E106D019_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__20_t9BDD97D85857DCEBE74255667443CA53E106D019(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__20_t9BDD97D85857DCEBE74255667443CA53E106D019_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__20_t9BDD97D85857DCEBE74255667443CA53E106D019_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>
struct U3CGetEnumeratorU3Ed__35_t32DEAB0693AD53E2169073A300398991978409CF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t32DEAB0693AD53E2169073A300398991978409CF_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t32DEAB0693AD53E2169073A300398991978409CF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t32DEAB0693AD53E2169073A300398991978409CF_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t32DEAB0693AD53E2169073A300398991978409CF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t32DEAB0693AD53E2169073A300398991978409CF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t32DEAB0693AD53E2169073A300398991978409CF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>
struct U3CGetEnumeratorU3Ed__35_t7CEB0BBBA6637D01823C67DEDE02FB91BB36BAAA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t7CEB0BBBA6637D01823C67DEDE02FB91BB36BAAA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t7CEB0BBBA6637D01823C67DEDE02FB91BB36BAAA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t7CEB0BBBA6637D01823C67DEDE02FB91BB36BAAA_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t7CEB0BBBA6637D01823C67DEDE02FB91BB36BAAA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t7CEB0BBBA6637D01823C67DEDE02FB91BB36BAAA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t7CEB0BBBA6637D01823C67DEDE02FB91BB36BAAA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>
struct U3CGetEnumeratorU3Ed__35_tDA9571DFE6263CAB77CC68D1411F88E549BCEE3C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tDA9571DFE6263CAB77CC68D1411F88E549BCEE3C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_tDA9571DFE6263CAB77CC68D1411F88E549BCEE3C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tDA9571DFE6263CAB77CC68D1411F88E549BCEE3C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_tDA9571DFE6263CAB77CC68D1411F88E549BCEE3C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_tDA9571DFE6263CAB77CC68D1411F88E549BCEE3C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_tDA9571DFE6263CAB77CC68D1411F88E549BCEE3C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct U3CGetEnumeratorU3Ed__35_tDB3656B11C252143A0A50A4ECB9DB6570DED4D99_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tDB3656B11C252143A0A50A4ECB9DB6570DED4D99_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_tDB3656B11C252143A0A50A4ECB9DB6570DED4D99_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tDB3656B11C252143A0A50A4ECB9DB6570DED4D99_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_tDB3656B11C252143A0A50A4ECB9DB6570DED4D99(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_tDB3656B11C252143A0A50A4ECB9DB6570DED4D99_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_tDB3656B11C252143A0A50A4ECB9DB6570DED4D99_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>
struct U3CGetEnumeratorU3Ed__35_tE396341CF6B6B83D137CF4DC12155FFB6066C719_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tE396341CF6B6B83D137CF4DC12155FFB6066C719_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_tE396341CF6B6B83D137CF4DC12155FFB6066C719_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tE396341CF6B6B83D137CF4DC12155FFB6066C719_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_tE396341CF6B6B83D137CF4DC12155FFB6066C719(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_tE396341CF6B6B83D137CF4DC12155FFB6066C719_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_tE396341CF6B6B83D137CF4DC12155FFB6066C719_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>
struct U3CGetEnumeratorU3Ed__35_t6447E37FF84C3CDD31B2204D0573B3971C37BA35_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t6447E37FF84C3CDD31B2204D0573B3971C37BA35_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t6447E37FF84C3CDD31B2204D0573B3971C37BA35_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t6447E37FF84C3CDD31B2204D0573B3971C37BA35_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t6447E37FF84C3CDD31B2204D0573B3971C37BA35(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t6447E37FF84C3CDD31B2204D0573B3971C37BA35_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t6447E37FF84C3CDD31B2204D0573B3971C37BA35_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.String,System.Object>
struct U3CGetEnumeratorU3Ed__35_t251A80085D68D8E48568C71B8626104830AB9C27_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t251A80085D68D8E48568C71B8626104830AB9C27_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t251A80085D68D8E48568C71B8626104830AB9C27_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t251A80085D68D8E48568C71B8626104830AB9C27_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t251A80085D68D8E48568C71B8626104830AB9C27(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t251A80085D68D8E48568C71B8626104830AB9C27_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t251A80085D68D8E48568C71B8626104830AB9C27_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.String,System.String>
struct U3CGetEnumeratorU3Ed__35_t0A612567570D075F23FCBEBE65CFB93E1EDEB7C6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t0A612567570D075F23FCBEBE65CFB93E1EDEB7C6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t0A612567570D075F23FCBEBE65CFB93E1EDEB7C6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t0A612567570D075F23FCBEBE65CFB93E1EDEB7C6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t0A612567570D075F23FCBEBE65CFB93E1EDEB7C6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t0A612567570D075F23FCBEBE65CFB93E1EDEB7C6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t0A612567570D075F23FCBEBE65CFB93E1EDEB7C6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Func`2<System.Object[],System.Object>>
struct U3CGetEnumeratorU3Ed__35_t2A87B2F68125A72DABA07AB28E1B310BF9FBEE33_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t2A87B2F68125A72DABA07AB28E1B310BF9FBEE33_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t2A87B2F68125A72DABA07AB28E1B310BF9FBEE33_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t2A87B2F68125A72DABA07AB28E1B310BF9FBEE33_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t2A87B2F68125A72DABA07AB28E1B310BF9FBEE33(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t2A87B2F68125A72DABA07AB28E1B310BF9FBEE33_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t2A87B2F68125A72DABA07AB28E1B310BF9FBEE33_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct U3CGetEnumeratorU3Ed__35_t62E718E90D55414FEE2BEF7B29AF9E69D0874B7C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t62E718E90D55414FEE2BEF7B29AF9E69D0874B7C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t62E718E90D55414FEE2BEF7B29AF9E69D0874B7C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t62E718E90D55414FEE2BEF7B29AF9E69D0874B7C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t62E718E90D55414FEE2BEF7B29AF9E69D0874B7C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t62E718E90D55414FEE2BEF7B29AF9E69D0874B7C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t62E718E90D55414FEE2BEF7B29AF9E69D0874B7C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct U3CGetEnumeratorU3Ed__35_t58B6427D8F42172C180E9681CC7700FA43A9F01B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t58B6427D8F42172C180E9681CC7700FA43A9F01B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t58B6427D8F42172C180E9681CC7700FA43A9F01B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t58B6427D8F42172C180E9681CC7700FA43A9F01B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t58B6427D8F42172C180E9681CC7700FA43A9F01B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t58B6427D8F42172C180E9681CC7700FA43A9F01B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t58B6427D8F42172C180E9681CC7700FA43A9F01B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Object>
struct U3CGetEnumeratorU3Ed__35_t3288F3AEE075A90F79A1EF9B3D1D2555FD16A5AE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t3288F3AEE075A90F79A1EF9B3D1D2555FD16A5AE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t3288F3AEE075A90F79A1EF9B3D1D2555FD16A5AE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t3288F3AEE075A90F79A1EF9B3D1D2555FD16A5AE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t3288F3AEE075A90F79A1EF9B3D1D2555FD16A5AE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t3288F3AEE075A90F79A1EF9B3D1D2555FD16A5AE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t3288F3AEE075A90F79A1EF9B3D1D2555FD16A5AE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,Newtonsoft.Json.Utilities.ReflectionObject>
struct U3CGetEnumeratorU3Ed__35_tB4CF6619BA0FE4687D0270BE20F46BFC329E1A84_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tB4CF6619BA0FE4687D0270BE20F46BFC329E1A84_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_tB4CF6619BA0FE4687D0270BE20F46BFC329E1A84_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tB4CF6619BA0FE4687D0270BE20F46BFC329E1A84_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_tB4CF6619BA0FE4687D0270BE20F46BFC329E1A84(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_tB4CF6619BA0FE4687D0270BE20F46BFC329E1A84_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_tB4CF6619BA0FE4687D0270BE20F46BFC329E1A84_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Runtime.Serialization.SerializationEvents>
struct U3CGetEnumeratorU3Ed__35_t93C8D066BDD0735F5596D849F89B3DB4747FAE43_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t93C8D066BDD0735F5596D849F89B3DB4747FAE43_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t93C8D066BDD0735F5596D849F89B3DB4747FAE43_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t93C8D066BDD0735F5596D849F89B3DB4747FAE43_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t93C8D066BDD0735F5596D849F89B3DB4747FAE43(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t93C8D066BDD0735F5596D849F89B3DB4747FAE43_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t93C8D066BDD0735F5596D849F89B3DB4747FAE43_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,System.Type>
struct U3CGetEnumeratorU3Ed__35_tBD70198B4B6388A142740CD87478828C4C83172A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tBD70198B4B6388A142740CD87478828C4C83172A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_tBD70198B4B6388A142740CD87478828C4C83172A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tBD70198B4B6388A142740CD87478828C4C83172A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_tBD70198B4B6388A142740CD87478828C4C83172A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_tBD70198B4B6388A142740CD87478828C4C83172A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_tBD70198B4B6388A142740CD87478828C4C83172A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Type,Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Union>
struct U3CGetEnumeratorU3Ed__35_tCDE5EBA23ABDEFB98A6F7498D894DADF145A4500_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tCDE5EBA23ABDEFB98A6F7498D894DADF145A4500_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_tCDE5EBA23ABDEFB98A6F7498D894DADF145A4500_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_tCDE5EBA23ABDEFB98A6F7498D894DADF145A4500_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_tCDE5EBA23ABDEFB98A6F7498D894DADF145A4500(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_tCDE5EBA23ABDEFB98A6F7498D894DADF145A4500_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_tCDE5EBA23ABDEFB98A6F7498D894DADF145A4500_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct U3CGetEnumeratorU3Ed__35_t27DB9BB77C9A483177753D3AAB03EEAA9F930CA3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t27DB9BB77C9A483177753D3AAB03EEAA9F930CA3_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__35_t27DB9BB77C9A483177753D3AAB03EEAA9F930CA3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__35_t27DB9BB77C9A483177753D3AAB03EEAA9F930CA3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__35_t27DB9BB77C9A483177753D3AAB03EEAA9F930CA3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__35_t27DB9BB77C9A483177753D3AAB03EEAA9F930CA3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__35_t27DB9BB77C9A483177753D3AAB03EEAA9F930CA3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7<System.String,System.Reflection.MemberInfo>
struct U3CGetEnumeratorU3Ed__7_t732754A9133846FE068E8D71AE45D083DF5FC23F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__7_t732754A9133846FE068E8D71AE45D083DF5FC23F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__7_t732754A9133846FE068E8D71AE45D083DF5FC23F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__7_t732754A9133846FE068E8D71AE45D083DF5FC23F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__7_t732754A9133846FE068E8D71AE45D083DF5FC23F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__7_t732754A9133846FE068E8D71AE45D083DF5FC23F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__7_t732754A9133846FE068E8D71AE45D083DF5FC23F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7<System.Linq.Expressions.LabelTarget,System.Linq.Expressions.Interpreter.LabelInfo>
struct U3CGetEnumeratorWorkerU3Ed__7_t131A800C88A0A64937966F5F30B721385AA7A7F6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorWorkerU3Ed__7_t131A800C88A0A64937966F5F30B721385AA7A7F6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorWorkerU3Ed__7_t131A800C88A0A64937966F5F30B721385AA7A7F6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorWorkerU3Ed__7_t131A800C88A0A64937966F5F30B721385AA7A7F6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorWorkerU3Ed__7_t131A800C88A0A64937966F5F30B721385AA7A7F6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorWorkerU3Ed__7_t131A800C88A0A64937966F5F30B721385AA7A7F6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorWorkerU3Ed__7_t131A800C88A0A64937966F5F30B721385AA7A7F6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2/<GetEnumeratorWorker>d__7<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariables/VariableScope>
struct U3CGetEnumeratorWorkerU3Ed__7_t6464E11D5456FCBC58E6E48EDE796A311E3E1E85_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorWorkerU3Ed__7_t6464E11D5456FCBC58E6E48EDE796A311E3E1E85_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorWorkerU3Ed__7_t6464E11D5456FCBC58E6E48EDE796A311E3E1E85_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorWorkerU3Ed__7_t6464E11D5456FCBC58E6E48EDE796A311E3E1E85_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorWorkerU3Ed__7_t6464E11D5456FCBC58E6E48EDE796A311E3E1E85(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorWorkerU3Ed__7_t6464E11D5456FCBC58E6E48EDE796A311E3E1E85_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorWorkerU3Ed__7_t6464E11D5456FCBC58E6E48EDE796A311E3E1E85_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<IntersectIterator>d__74`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct U3CIntersectIteratorU3Ed__74_1_tEFAE198AD3A1318CA52953DB10E934CECA8CD8F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CIntersectIteratorU3Ed__74_1_tEFAE198AD3A1318CA52953DB10E934CECA8CD8F8_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CIntersectIteratorU3Ed__74_1_tEFAE198AD3A1318CA52953DB10E934CECA8CD8F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CIntersectIteratorU3Ed__74_1_tEFAE198AD3A1318CA52953DB10E934CECA8CD8F8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CIntersectIteratorU3Ed__74_1_tEFAE198AD3A1318CA52953DB10E934CECA8CD8F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CIntersectIteratorU3Ed__74_1_tEFAE198AD3A1318CA52953DB10E934CECA8CD8F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CIntersectIteratorU3Ed__74_1_tEFAE198AD3A1318CA52953DB10E934CECA8CD8F8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<OfTypeIterator>d__97`1<Microsoft.MixedReality.Toolkit.Input.IInteractionModeDetector>
struct U3COfTypeIteratorU3Ed__97_1_t94973C9D27ECA193883DF29390BAAA65888EBC27_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COfTypeIteratorU3Ed__97_1_t94973C9D27ECA193883DF29390BAAA65888EBC27_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3COfTypeIteratorU3Ed__97_1_t94973C9D27ECA193883DF29390BAAA65888EBC27_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COfTypeIteratorU3Ed__97_1_t94973C9D27ECA193883DF29390BAAA65888EBC27_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COfTypeIteratorU3Ed__97_1_t94973C9D27ECA193883DF29390BAAA65888EBC27(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COfTypeIteratorU3Ed__97_1_t94973C9D27ECA193883DF29390BAAA65888EBC27_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COfTypeIteratorU3Ed__97_1_t94973C9D27ECA193883DF29390BAAA65888EBC27_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<OfTypeIterator>d__97`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature>
struct U3COfTypeIteratorU3Ed__97_1_t9ED241477E1F16EC5FFF69B3D78FAA0024D5EF57_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COfTypeIteratorU3Ed__97_1_t9ED241477E1F16EC5FFF69B3D78FAA0024D5EF57_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3COfTypeIteratorU3Ed__97_1_t9ED241477E1F16EC5FFF69B3D78FAA0024D5EF57_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COfTypeIteratorU3Ed__97_1_t9ED241477E1F16EC5FFF69B3D78FAA0024D5EF57_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COfTypeIteratorU3Ed__97_1_t9ED241477E1F16EC5FFF69B3D78FAA0024D5EF57(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COfTypeIteratorU3Ed__97_1_t9ED241477E1F16EC5FFF69B3D78FAA0024D5EF57_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COfTypeIteratorU3Ed__97_1_t9ED241477E1F16EC5FFF69B3D78FAA0024D5EF57_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.CoroutineAsyncBridge/<Run>d__7`1<UnityEngine.Coroutine>
struct U3CRunU3Ed__7_1_tFA7961850A2D26062A62177857273500F621CC65_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunU3Ed__7_1_tFA7961850A2D26062A62177857273500F621CC65_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CRunU3Ed__7_1_tFA7961850A2D26062A62177857273500F621CC65_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunU3Ed__7_1_tFA7961850A2D26062A62177857273500F621CC65_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunU3Ed__7_1_tFA7961850A2D26062A62177857273500F621CC65(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunU3Ed__7_1_tFA7961850A2D26062A62177857273500F621CC65_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunU3Ed__7_1_tFA7961850A2D26062A62177857273500F621CC65_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SelectManyIterator>d__17`2<Newtonsoft.Json.Linq.JObject,Newtonsoft.Json.Linq.JProperty>
struct U3CSelectManyIteratorU3Ed__17_2_t72941C60D2F5DC59EB509651D943BDB3500B856A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_t72941C60D2F5DC59EB509651D943BDB3500B856A_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67, IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CSelectManyIteratorU3Ed__17_2_t72941C60D2F5DC59EB509651D943BDB3500B856A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_t72941C60D2F5DC59EB509651D943BDB3500B856A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(8);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID;
		interfaceIds[3] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[4] = IIterable_1_tEAB8F0AD760C608EB767DC8477B91570C5C8DF67::IID;
		interfaceIds[5] = IIterable_1_t3415FC97429B2170E0759FFDBD688A4D2292A9A1::IID;
		interfaceIds[6] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[7] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 8;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2(IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m44E5686A5ECD542FD4FE1D27B138BC2CB96DFAB3(IIterator_1_tD26AAC0C38CD0F7DB527651AB6AD69F622A9896D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m44E5686A5ECD542FD4FE1D27B138BC2CB96DFAB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7B29E4F5CAEDB776309C70A7190278406C8BFD8A(IIterator_1_t83441B645908CC58488ABF426B95F0FA030C5E8B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m7B29E4F5CAEDB776309C70A7190278406C8BFD8A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSelectManyIteratorU3Ed__17_2_t72941C60D2F5DC59EB509651D943BDB3500B856A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSelectManyIteratorU3Ed__17_2_t72941C60D2F5DC59EB509651D943BDB3500B856A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSelectManyIteratorU3Ed__17_2_t72941C60D2F5DC59EB509651D943BDB3500B856A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SelectManyIterator>d__17`2<Newtonsoft.Json.Schema.JsonSchemaModel,System.String>
struct U3CSelectManyIteratorU3Ed__17_2_tA654806EA661C282CF0E61B9CB2D7BBFDE5F1744_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_tA654806EA661C282CF0E61B9CB2D7BBFDE5F1744_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CSelectManyIteratorU3Ed__17_2_tA654806EA661C282CF0E61B9CB2D7BBFDE5F1744_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_tA654806EA661C282CF0E61B9CB2D7BBFDE5F1744_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[5] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSelectManyIteratorU3Ed__17_2_tA654806EA661C282CF0E61B9CB2D7BBFDE5F1744(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSelectManyIteratorU3Ed__17_2_tA654806EA661C282CF0E61B9CB2D7BBFDE5F1744_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSelectManyIteratorU3Ed__17_2_tA654806EA661C282CF0E61B9CB2D7BBFDE5F1744_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SelectManyIterator>d__17`2<System.Type,System.Reflection.MemberInfo>
struct U3CSelectManyIteratorU3Ed__17_2_t82D4FAF6B1207A2B84E6C9A86B35675F020D8E22_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_t82D4FAF6B1207A2B84E6C9A86B35675F020D8E22_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CSelectManyIteratorU3Ed__17_2_t82D4FAF6B1207A2B84E6C9A86B35675F020D8E22_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_t82D4FAF6B1207A2B84E6C9A86B35675F020D8E22_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSelectManyIteratorU3Ed__17_2_t82D4FAF6B1207A2B84E6C9A86B35675F020D8E22(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSelectManyIteratorU3Ed__17_2_t82D4FAF6B1207A2B84E6C9A86B35675F020D8E22_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSelectManyIteratorU3Ed__17_2_t82D4FAF6B1207A2B84E6C9A86B35675F020D8E22_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SelectManyIterator>d__17`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding,System.String>
struct U3CSelectManyIteratorU3Ed__17_2_tDAF3DB32F3C5D4D4CA84A0D7312A83EDAFB57B11_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_tDAF3DB32F3C5D4D4CA84A0D7312A83EDAFB57B11_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CSelectManyIteratorU3Ed__17_2_tDAF3DB32F3C5D4D4CA84A0D7312A83EDAFB57B11_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_tDAF3DB32F3C5D4D4CA84A0D7312A83EDAFB57B11_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[5] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSelectManyIteratorU3Ed__17_2_tDAF3DB32F3C5D4D4CA84A0D7312A83EDAFB57B11(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSelectManyIteratorU3Ed__17_2_tDAF3DB32F3C5D4D4CA84A0D7312A83EDAFB57B11_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSelectManyIteratorU3Ed__17_2_tDAF3DB32F3C5D4D4CA84A0D7312A83EDAFB57B11_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TweenRunner`1/<Start>d__2<TMPro.FloatTween>
struct U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<TakeIterator>d__25`1<UnityEngine.InputSystem.InputManager/AvailableDevice>
struct U3CTakeIteratorU3Ed__25_1_tB8922508AB1B1644E78BC0D397CC4146B7D9B3CE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTakeIteratorU3Ed__25_1_tB8922508AB1B1644E78BC0D397CC4146B7D9B3CE_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CTakeIteratorU3Ed__25_1_tB8922508AB1B1644E78BC0D397CC4146B7D9B3CE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTakeIteratorU3Ed__25_1_tB8922508AB1B1644E78BC0D397CC4146B7D9B3CE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTakeIteratorU3Ed__25_1_tB8922508AB1B1644E78BC0D397CC4146B7D9B3CE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTakeIteratorU3Ed__25_1_tB8922508AB1B1644E78BC0D397CC4146B7D9B3CE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTakeIteratorU3Ed__25_1_tB8922508AB1B1644E78BC0D397CC4146B7D9B3CE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<UnionIterator>d__71`1<System.Char>
struct U3CUnionIteratorU3Ed__71_1_tF738D83BD655B9F60315480F2FD641497C09D2E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_tF738D83BD655B9F60315480F2FD641497C09D2E2_ComCallableWrapper>, IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CUnionIteratorU3Ed__71_1_tF738D83BD655B9F60315480F2FD641497C09D2E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_tF738D83BD655B9F60315480F2FD641497C09D2E2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3FABC5E5AEB3D250BD8B05D1BDBE039995E790A8(IIterator_1_t09285B597935AFCB2EC018AF5E93854CD5C9BCF5** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3FABC5E5AEB3D250BD8B05D1BDBE039995E790A8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUnionIteratorU3Ed__71_1_tF738D83BD655B9F60315480F2FD641497C09D2E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUnionIteratorU3Ed__71_1_tF738D83BD655B9F60315480F2FD641497C09D2E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUnionIteratorU3Ed__71_1_tF738D83BD655B9F60315480F2FD641497C09D2E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<UnionIterator>d__71`1<Newtonsoft.Json.Schema.JsonSchema>
struct U3CUnionIteratorU3Ed__71_1_tFDD43BED29E3DFEF5D6650EC0BDBE8B77864D96B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_tFDD43BED29E3DFEF5D6650EC0BDBE8B77864D96B_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CUnionIteratorU3Ed__71_1_tFDD43BED29E3DFEF5D6650EC0BDBE8B77864D96B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_tFDD43BED29E3DFEF5D6650EC0BDBE8B77864D96B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUnionIteratorU3Ed__71_1_tFDD43BED29E3DFEF5D6650EC0BDBE8B77864D96B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUnionIteratorU3Ed__71_1_tFDD43BED29E3DFEF5D6650EC0BDBE8B77864D96B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUnionIteratorU3Ed__71_1_tFDD43BED29E3DFEF5D6650EC0BDBE8B77864D96B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<UnionIterator>d__71`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct U3CUnionIteratorU3Ed__71_1_tB351E4A0412CD6086E3413CADD96B4F47F86F761_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_tB351E4A0412CD6086E3413CADD96B4F47F86F761_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CUnionIteratorU3Ed__71_1_tB351E4A0412CD6086E3413CADD96B4F47F86F761_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_tB351E4A0412CD6086E3413CADD96B4F47F86F761_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUnionIteratorU3Ed__71_1_tB351E4A0412CD6086E3413CADD96B4F47F86F761(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUnionIteratorU3Ed__71_1_tB351E4A0412CD6086E3413CADD96B4F47F86F761_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUnionIteratorU3Ed__71_1_tB351E4A0412CD6086E3413CADD96B4F47F86F761_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<UnionIterator>d__71`1<System.String>
struct U3CUnionIteratorU3Ed__71_1_t5FE2B6923431B59CA7E1BB5DE2875C2FD0042765_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_t5FE2B6923431B59CA7E1BB5DE2875C2FD0042765_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CUnionIteratorU3Ed__71_1_t5FE2B6923431B59CA7E1BB5DE2875C2FD0042765_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_t5FE2B6923431B59CA7E1BB5DE2875C2FD0042765_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[5] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUnionIteratorU3Ed__71_1_t5FE2B6923431B59CA7E1BB5DE2875C2FD0042765(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUnionIteratorU3Ed__71_1_t5FE2B6923431B59CA7E1BB5DE2875C2FD0042765_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUnionIteratorU3Ed__71_1_t5FE2B6923431B59CA7E1BB5DE2875C2FD0042765_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<Newtonsoft.Json.Linq.JProperty,Newtonsoft.Json.Linq.JToken>
struct U3CValuesU3Ed__11_2_t214AD15E02BDFE59636FFD02EDAA93FFC93E41FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CValuesU3Ed__11_2_t214AD15E02BDFE59636FFD02EDAA93FFC93E41FB_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CValuesU3Ed__11_2_t214AD15E02BDFE59636FFD02EDAA93FFC93E41FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CValuesU3Ed__11_2_t214AD15E02BDFE59636FFD02EDAA93FFC93E41FB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID;
		interfaceIds[3] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[5] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2(IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CValuesU3Ed__11_2_t214AD15E02BDFE59636FFD02EDAA93FFC93E41FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CValuesU3Ed__11_2_t214AD15E02BDFE59636FFD02EDAA93FFC93E41FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CValuesU3Ed__11_2_t214AD15E02BDFE59636FFD02EDAA93FFC93E41FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken>
struct U3CValuesU3Ed__11_2_tC27CA5EEAC201121C493CC74D0BB00723F137254_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CValuesU3Ed__11_2_tC27CA5EEAC201121C493CC74D0BB00723F137254_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CValuesU3Ed__11_2_tC27CA5EEAC201121C493CC74D0BB00723F137254_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CValuesU3Ed__11_2_tC27CA5EEAC201121C493CC74D0BB00723F137254_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID;
		interfaceIds[3] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[5] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2(IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CValuesU3Ed__11_2_tC27CA5EEAC201121C493CC74D0BB00723F137254(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CValuesU3Ed__11_2_tC27CA5EEAC201121C493CC74D0BB00723F137254_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CValuesU3Ed__11_2_tC27CA5EEAC201121C493CC74D0BB00723F137254_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_ComCallableWrapper>, IVector_1_tC3BF786CEAAB25A1083C1962AE6A520382B1977E, IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D
{
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVector_1_tC3BF786CEAAB25A1083C1962AE6A520382B1977E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tC3BF786CEAAB25A1083C1962AE6A520382B1977E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D*>(this);
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
		interfaceIds[0] = IVector_1_tC3BF786CEAAB25A1083C1962AE6A520382B1977E::IID;
		interfaceIds[1] = IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D::IID;

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

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2652F8A6A5E643A7E0B247CF2AC3BCC116DD8279(uint32_t ___index0, uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m2652F8A6A5E643A7E0B247CF2AC3BCC116DD8279_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m35302C082F74012B21C9FF3A12270C2BD79C331F(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m35302C082F74012B21C9FF3A12270C2BD79C331F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mCE5C05537DF4933F7AF0935DCB24FD8091EFA5CE(IVectorView_1_t1C8B779C823A1F9BBD5C7BB1474226209480288D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_mCE5C05537DF4933F7AF0935DCB24FD8091EFA5CE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m5262411EF3E0484DD85205F0FF5F72A1B24B4474(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_m5262411EF3E0484DD85205F0FF5F72A1B24B4474_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m7B0DAD8851CA86EB594217AAD6B34CA1F1D5AEDE(uint32_t ___index0, uint8_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m7B0DAD8851CA86EB594217AAD6B34CA1F1D5AEDE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA9DBE52C6D8108DE6BD17D98ECAFFFDA2FFAAB56(uint32_t ___index0, uint8_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_mA9DBE52C6D8108DE6BD17D98ECAFFFDA2FFAAB56_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mB7926724DE60F95F962AFEB1DBD668343374A7B9(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mB7926724DE60F95F962AFEB1DBD668343374A7B9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m754A802E88BF414D5DBFD01FAB389D78D0584253(uint8_t ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m754A802E88BF414D5DBFD01FAB389D78D0584253_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m483F742EE01ABAECDC1469CABFA87468A90AB555() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m483F742EE01ABAECDC1469CABFA87468A90AB555_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1629FF75DF493CD9313BDFA7A3D97118DBC7E206() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m1629FF75DF493CD9313BDFA7A3D97118DBC7E206_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m95B930D7FAB6A4F0705C562511B0C2FE5F4D4A64(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m95B930D7FAB6A4F0705C562511B0C2FE5F4D4A64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBED1EFA49ED65A725994F80E7C417D36C806E680(uint32_t ___items0ArraySize, uint8_t* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mBED1EFA49ED65A725994F80E7C417D36C806E680_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m43CD5A34ABEF4766A062BF3BAC919E85269CA039(IIterator_1_t61E394E90ADD9DF710E54EBD34636E513D0A7ED9** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m43CD5A34ABEF4766A062BF3BAC919E85269CA039_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m59ADAFBC7DB3F240B8CB8D8A60AB44ECD6740CC4(uint32_t ___index0, uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m59ADAFBC7DB3F240B8CB8D8A60AB44ECD6740CC4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m62325E27C0A4D7EBB0CB00B4FA2ED93E964CA7EC(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m62325E27C0A4D7EBB0CB00B4FA2ED93E964CA7EC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m15AED5FF23C249DAA0403F6C95FD7C0626F926F9(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m15AED5FF23C249DAA0403F6C95FD7C0626F926F9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mD8EBC2B345ECF039A1438F5C63FFDCAD1CB664A4(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mD8EBC2B345ECF039A1438F5C63FFDCAD1CB664A4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.AsObservableObservable`1/AsObservable<System.Boolean>
struct AsObservable_t254435EF4B56717F478CCBDF51D166852FB1920D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsObservable_t254435EF4B56717F478CCBDF51D166852FB1920D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline AsObservable_t254435EF4B56717F478CCBDF51D166852FB1920D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsObservable_t254435EF4B56717F478CCBDF51D166852FB1920D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsObservable_t254435EF4B56717F478CCBDF51D166852FB1920D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsObservable_t254435EF4B56717F478CCBDF51D166852FB1920D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsObservable_t254435EF4B56717F478CCBDF51D166852FB1920D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.AsObservableObservable`1/AsObservable<System.Net.HttpWebResponse>
struct AsObservable_tCCDE26764C37FD5941DDDB8D05093685C2165E95_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsObservable_tCCDE26764C37FD5941DDDB8D05093685C2165E95_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline AsObservable_tCCDE26764C37FD5941DDDB8D05093685C2165E95_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsObservable_tCCDE26764C37FD5941DDDB8D05093685C2165E95_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsObservable_tCCDE26764C37FD5941DDDB8D05093685C2165E95(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsObservable_tCCDE26764C37FD5941DDDB8D05093685C2165E95_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsObservable_tCCDE26764C37FD5941DDDB8D05093685C2165E95_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.AsObservableObservable`1/AsObservable<System.IO.Stream>
struct AsObservable_t8EF942955F290674C7F9B0E7A888878F67E1C9D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsObservable_t8EF942955F290674C7F9B0E7A888878F67E1C9D9_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline AsObservable_t8EF942955F290674C7F9B0E7A888878F67E1C9D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsObservable_t8EF942955F290674C7F9B0E7A888878F67E1C9D9_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsObservable_t8EF942955F290674C7F9B0E7A888878F67E1C9D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsObservable_t8EF942955F290674C7F9B0E7A888878F67E1C9D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsObservable_t8EF942955F290674C7F9B0E7A888878F67E1C9D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.AsObservableObservable`1/AsObservable<UniRx.Unit>
struct AsObservable_t4332824DC33CD4443702AD9FB635C36EB0E2EE83_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsObservable_t4332824DC33CD4443702AD9FB635C36EB0E2EE83_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline AsObservable_t4332824DC33CD4443702AD9FB635C36EB0E2EE83_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsObservable_t4332824DC33CD4443702AD9FB635C36EB0E2EE83_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsObservable_t4332824DC33CD4443702AD9FB635C36EB0E2EE83(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsObservable_t4332824DC33CD4443702AD9FB635C36EB0E2EE83_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsObservable_t4332824DC33CD4443702AD9FB635C36EB0E2EE83_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.AsObservableObservable`1/AsObservable<System.Net.WebResponse>
struct AsObservable_tD82CD70FEDF74BF27F960705CFFF72AD8A89318F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsObservable_tD82CD70FEDF74BF27F960705CFFF72AD8A89318F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline AsObservable_tD82CD70FEDF74BF27F960705CFFF72AD8A89318F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsObservable_tD82CD70FEDF74BF27F960705CFFF72AD8A89318F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsObservable_tD82CD70FEDF74BF27F960705CFFF72AD8A89318F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsObservable_tD82CD70FEDF74BF27F960705CFFF72AD8A89318F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsObservable_tD82CD70FEDF74BF27F960705CFFF72AD8A89318F_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t320CEDD73D1B6148F89E466592AD388D4E4C032C* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t320CEDD73D1B6148F89E466592AD388D4E4C032C::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494* __thisValue = (AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494*)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_mFC2E9B8EE42253766B3288A454029B0244998B0B_inline(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t711DE28B72DEE40F11ED6A0D9D25AE28815A5494_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __thisValue = (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_inline(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t4952BAC5E8EEE4D1A7F5C9E77985BC56BAA008F7* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t4952BAC5E8EEE4D1A7F5C9E77985BC56BAA008F7::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A* __thisValue = (AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A*)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_mAF5846B8F630CC6A0B0FB0F28BF309A478E13E61_inline(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t6BCAA33302C9428BAC78372227CDB4F9436628DE* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t6BCAA33302C9428BAC78372227CDB4F9436628DE::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6* __thisValue = (AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6*)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m465F8AB34C59E6FB2A0B69E0FD0C8C8465FE0136_inline(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_tAF98C4B4DBD29BB5D32E1C99FA727763BCA776C6_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper>, IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___asyncInfo0, uint32_t ___progressInfo1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* __thisValue = (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_inline(__thisValue, ____asyncInfo0_unmarshaled, ___progressInfo1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper>, IAsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2* ___asyncInfo0, Il2CppIInspectable* ___progressInfo1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___progressInfo1' to managed representation
		RuntimeObject* ____progressInfo1_unmarshaled = NULL;
		if (___progressInfo1 != NULL)
		{
			____progressInfo1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___progressInfo1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____progressInfo1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____progressInfo1_unmarshaled), Il2CppIInspectable::IID, ___progressInfo1);
			}
		}
		else
		{
			____progressInfo1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F* __thisValue = (AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F*)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_m9001691C382E2DE55970E04796390493C8D43138_inline(__thisValue, ____asyncInfo0_unmarshaled, ____progressInfo1_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper>, IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1* ___asyncInfo0, uint32_t ___progressInfo1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __thisValue = (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5*)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_inline(__thisValue, ____asyncInfo0_unmarshaled, ___progressInfo1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper>, IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___asyncInfo0, uint32_t ___progressInfo1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __thisValue = (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_inline(__thisValue, ____asyncInfo0_unmarshaled, ___progressInfo1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* __thisValue = (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_inline(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_tD761301A400A42D3C57F576D4A2EFA26ADE108A2::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470* __thisValue = (AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470*)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_mAF272FF458B46E624BE1FE48585C64E5954565EA_inline(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __thisValue = (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F*)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_inline(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __thisValue = (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_inline(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1<System.Net.HttpWebResponse>
struct AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB_ComCallableWrapper(obj));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_mAF5846B8F630CC6A0B0FB0F28BF309A478E13E61_gshared_inline (AsyncOperationCompletedHandler_1_tA7710B434B7DEFF4A49B016623D78774E0A66F2A* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___asyncStatus1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_gshared_inline (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___asyncStatus1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m094EA23E120E06DE3EA45BADC5B14B657D8F9D73_gshared_inline (AsyncOperationCompletedHandler_1_t4FE670EEBA8A8DA91E598F5C92818885102709F4* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___asyncStatus1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_gshared_inline (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___progressInfo1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m9001691C382E2DE55970E04796390493C8D43138_gshared_inline (AsyncOperationProgressHandler_2_t9A51C597A6F38E4BC9B2DA3A8920E44919ABB64F* __this, RuntimeObject* ___asyncInfo0, RuntimeObject* ___progressInfo1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___progressInfo1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_gshared_inline (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___progressInfo1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___asyncStatus1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_mAF272FF458B46E624BE1FE48585C64E5954565EA_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t41B49569A757598158B008E13A76511DBDEE0470* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___asyncStatus1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___asyncInfo0, ___asyncStatus1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
