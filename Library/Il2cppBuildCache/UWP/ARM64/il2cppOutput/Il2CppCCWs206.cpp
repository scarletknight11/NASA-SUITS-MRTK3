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

// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Func_1_t91F7ACDFBC018CFC14246035F22D8CFC5EAADBC4;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ITreeViewItem>
struct IEnumerable_1_t1DCD7370BCB062DA7B74DB398BCCCB035669E369;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ITreeViewItem>
struct IEnumerator_1_t3094D477B964E20DA7A2FBDCE746832ECCCC56CF;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t0632E50BDC15D0ABBB866944CAA2D6DB854B9641;
// System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct IObserver_1_tBA370B49C5227E7D5F575F4CE6A81A040CF7C5D5;
// System.IObserver`1<System.Int64>
struct IObserver_1_t150CBC5D0737F019A8BCF90DAF9977A37A0C0D65;
// System.IObserver`1<UniRx.Unit>
struct IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D;
// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message>
struct IObserver_1_t5F31FFBD7270B494632B49E2FC5E15AF8BB73672;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct List_1_tDED7E0C66749F8E622E5B6D639BE146DBBC37448;
// System.Collections.Generic.List`1<InterfaceAnmElement>
struct List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0;
// System.Collections.Generic.Stack`1<System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ITreeViewItem>>
struct Stack_1_tD4465E97FAAAFD450F766F80007EAD484D692451;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
// System.Data.RBTree`1/TreePage<System.Int32>[]
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.InputSystem.LowLevel.ActionEvent
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Linq.Expressions.Interpreter.DebugInfo
struct DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UniRx.Operators.FromEventObservable
struct FromEventObservable_tCB9E7D62D84FB0926AE674D36E1A39592D89A1AC;
// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse
struct FrontPlatePulse_t8920A6F13EDA8A9F95D7D9B177ABE6CF8DAFD2E0;
// GPS
struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp
struct HandConstraintPalmUp_t7F1C2375E975F3463A09B2A541ADF5D02C1EF549;
// Microsoft.MixedReality.Toolkit.Input.HandVisualizer
struct HandVisualizer_t153CFC71020C3F654C81E4A2125E64899D2CB006;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Windows.Storage.Streams.IInputStream
struct IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D;
// UnityEngine.UIElements.ITreeViewItem
struct ITreeViewItem_t0C5908872EA2842688BFFB2055D5096EC1EA9EFC;
// System.Data.Index
struct Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.Utilities.InputActionTrace
struct InputActionTrace_t046FE0C3746A1C44ADDD9367AA19409D0097AFC7;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.Layouts.InputControlAttribute
struct InputControlAttribute_t312CA97B153666F873279E81BA4054684715368D;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
// UnityEngine.InputSystem.LowLevel.InputEventTrace
struct InputEventTrace_t1D25547AACA8FD1C1AA974F31EF9BD9478205FBD;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.InputSystem.InputManager
struct InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210;
// UnityEngine.InputSystem.InputRemoting
struct InputRemoting_tCBC35AAA3A034ECED8F33C5BA5257F2EB2B05114;
// UnityEngine.InputSystem.LowLevel.InputStateHistory
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// InterfaceAnimManager
struct InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962;
// InterfaceAnmElement
struct InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// JSONReader
struct JSONReader_tBC618CE007A6A18C4E2AB31B5C19F54413F2024D;
// JSONReader2
struct JSONReader2_tE72F7132B4C050DB17E5247B1F7047C2248D90F1;
// JSONReader3
struct JSONReader3_t7252827F9424F9114DE23467CF41F122F263D4E4;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Microsoft.MixedReality.Toolkit.UX.KeyboardPreview
struct KeyboardPreview_t54A2B94DE15874851CC8F92F9AA46C01A92B10F1;
// LSAR
struct LSAR_tFBDBFE0C21C8F4C660AC9E83636C3A4856D4912B;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B;
// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123;
// UniRx.MainThreadDispatcher
struct MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71;
struct IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95;
struct IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B;
struct IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82;
struct IIterator_1_t66A0D1700F95C289C5585DDBAE26DFC77D58859F;
struct IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648;
struct IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284;
struct IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D;


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
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) = 0;
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
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCCAFE946731B7D39FD27411DAAD9CD782220BA91(IIterator_1_t66A0D1700F95C289C5585DDBAE26DFC77D58859F** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) = 0;
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
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_mCDCAF874CA48FAD12C3C50CC2F76FD425D82C060(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mFDEBAF5BE18872689664196233CDE3187ADD562B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m027C5E15C55C227EC7C2C18B4A4B63AAE8B8FC43(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m29F4D8681FB7E60088E7A665F319EADAF14696BA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_mF541E936AB539C97B96018952B00DAF943C8E658(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m5B59AEE63C2736D9CCBB8A4987C5316A34CD343F(uint64_t ___position0, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_mE15EFF78D7AB63C66957863FE3D54FA33D66CCB8(uint64_t ___position0, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3BBAFE5846C2C4581E7E509DC125E3AB508D591A(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m1DDCF62775B861D7FDD3EF761EE05251C13FA512(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mFD31B358478E07E6281E4D329FAC8B6DABE36191(IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m599EC4BE14290138A7DCE9D82AF647993B4049E1(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m76930DBC1CC5718B50A9CCFFBB604AF6137C223B(bool* comReturnValue) = 0;
};

// System.Data.RBTree`1<System.Int32>
struct RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D  : public RuntimeObject
{
	// System.Data.RBTree`1/TreePage<K>[] System.Data.RBTree`1::_pageTable
	TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* ____pageTable_0;
	// System.Int32[] System.Data.RBTree`1::_pageTableMap
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap_1;
	// System.Int32 System.Data.RBTree`1::_inUsePageCount
	int32_t ____inUsePageCount_2;
	// System.Int32 System.Data.RBTree`1::_nextFreePageLine
	int32_t ____nextFreePageLine_3;
	// System.Int32 System.Data.RBTree`1::root
	int32_t ___root_4;
	// System.Int32 System.Data.RBTree`1::_version
	int32_t ____version_5;
	// System.Int32 System.Data.RBTree`1::_inUseNodeCount
	int32_t ____inUseNodeCount_6;
	// System.Int32 System.Data.RBTree`1::_inUseSatelliteTreeCount
	int32_t ____inUseSatelliteTreeCount_7;
	// System.Data.TreeAccessMethod System.Data.RBTree`1::_accessMethod
	int32_t ____accessMethod_8;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;
};

struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_StaticFields
{
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3ClastValueU3Ek__BackingField_2;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737  : public RuntimeObject
{
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;
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

// UniRx.Operators.FromEventObservable/FromEvent
struct FromEvent_tF76980CE8735C3963CF40C49CAE55AC2D660F2EA  : public RuntimeObject
{
	// UniRx.Operators.FromEventObservable UniRx.Operators.FromEventObservable/FromEvent::parent
	FromEventObservable_tCB9E7D62D84FB0926AE674D36E1A39592D89A1AC* ___parent_0;
	// System.IObserver`1<UniRx.Unit> UniRx.Operators.FromEventObservable/FromEvent::observer
	RuntimeObject* ___observer_1;
	// System.Action UniRx.Operators.FromEventObservable/FromEvent::handler
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___handler_2;
};

// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__18
struct U3CUpdatePulseU3Ed__18_t99E6FC1D02430CFF937784317C1C8A65D6A9736F  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__18::<>4__this
	FrontPlatePulse_t8920A6F13EDA8A9F95D7D9B177ABE6CF8DAFD2E0* ___U3CU3E4__this_2;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__18::<i>5__1
	int32_t ___U3CiU3E5__1_3;
};

// GPS/<StartLocationService>d__7
struct U3CStartLocationServiceU3Ed__7_t001F5C739E226DE23D4BA2C29C47890856D206B9  : public RuntimeObject
{
	// System.Int32 GPS/<StartLocationService>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GPS/<StartLocationService>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GPS GPS/<StartLocationService>d__7::<>4__this
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___U3CU3E4__this_2;
	// System.Int32 GPS/<StartLocationService>d__7::<maxWait>5__1
	int32_t ___U3CmaxWaitU3E5__1_3;
};

// System.Text.RegularExpressions.GroupCollection/Enumerator
struct Enumerator_t49742A61974B06BB73678C5555C3E42E6C843772  : public RuntimeObject
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.GroupCollection/Enumerator::_collection
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____collection_0;
	// System.Int32 System.Text.RegularExpressions.GroupCollection/Enumerator::_index
	int32_t ____index_1;
};

// Microsoft.MixedReality.Toolkit.Input.HandVisualizer/<EnableWhenSubsystemAvailable>d__15
struct U3CEnableWhenSubsystemAvailableU3Ed__15_tC1EFEC1175C47E35C14E0A621704FD3F0B81C16C  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.HandVisualizer/<EnableWhenSubsystemAvailable>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Input.HandVisualizer/<EnableWhenSubsystemAvailable>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.HandVisualizer Microsoft.MixedReality.Toolkit.Input.HandVisualizer/<EnableWhenSubsystemAvailable>d__15::<>4__this
	HandVisualizer_t153CFC71020C3F654C81E4A2125E64899D2CB006* ___U3CU3E4__this_2;
};

// System.Collections.Hashtable/KeyCollection
struct KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____hashtable_0;
};

// System.Collections.Hashtable/ValueCollection
struct ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____hashtable_0;
};

// UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
struct DeferBindingResolutionWrapper_tBEB0D0DEA05F9681F0189610B4D7B0CEAD32AC8C  : public RuntimeObject
{
};

// UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12
struct U3CGetPartNamesU3Ed__12_t8BCAC80872285E88D3B83FED9489CAEE929F0996  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::composite
	String_t* ___composite_3;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>3__composite
	String_t* ___U3CU3E3__composite_4;
	// System.Type UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<compositeType>5__1
	Type_t* ___U3CcompositeTypeU3E5__1_5;
	// System.Reflection.FieldInfo[] UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>s__2
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* ___U3CU3Es__2_6;
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>s__3
	int32_t ___U3CU3Es__3_7;
	// System.Reflection.FieldInfo UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<field>5__4
	FieldInfo_t* ___U3CfieldU3E5__4_8;
	// UnityEngine.InputSystem.Layouts.InputControlAttribute UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<controlAttribute>5__5
	InputControlAttribute_t312CA97B153666F873279E81BA4054684715368D* ___U3CcontrolAttributeU3E5__5_9;
};

// UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver
struct DisposableObserver_t29E26C6260179B3DB17CBF2FB8A5014027E1FA73  : public RuntimeObject
{
	// System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver::observer
	RuntimeObject* ___observer_0;
};

// UnityEngine.UI.InputField/<CaretBlink>d__169
struct U3CCaretBlinkU3Ed__169_t9B9E5B1CA9742C185386DC36BE2657C570C137EC  : public RuntimeObject
{
	// System.Int32 UnityEngine.UI.InputField/<CaretBlink>d__169::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<CaretBlink>d__169::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<CaretBlink>d__169::<>4__this
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___U3CU3E4__this_2;
	// System.Single UnityEngine.UI.InputField/<CaretBlink>d__169::<blinkPeriod>5__1
	float ___U3CblinkPeriodU3E5__1_3;
	// System.Boolean UnityEngine.UI.InputField/<CaretBlink>d__169::<blinkState>5__2
	bool ___U3CblinkStateU3E5__2_4;
};

// UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_t0FD48507D961A57BB24A3C74867C385428FFB58F  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputRemoting UnityEngine.InputSystem.InputRemoting/Subscriber::owner
	InputRemoting_tCBC35AAA3A034ECED8F33C5BA5257F2EB2B05114* ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.InputRemoting/Subscriber::observer
	RuntimeObject* ___observer_1;
};

// UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64
struct U3CGetAllItemsU3Ed__64_t9EFAED139C12952E9775C9509CE4409F9B3014F5  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.UIElements.ITreeViewItem UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ITreeViewItem> UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::rootItems
	RuntimeObject* ___rootItems_3;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ITreeViewItem> UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::<>3__rootItems
	RuntimeObject* ___U3CU3E3__rootItems_4;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ITreeViewItem>> UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::<iteratorStack>5__1
	Stack_1_tD4465E97FAAAFD450F766F80007EAD484D692451* ___U3CiteratorStackU3E5__1_5;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ITreeViewItem> UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::<currentIterator>5__2
	RuntimeObject* ___U3CcurrentIteratorU3E5__2_6;
	// System.Boolean UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::<hasNext>5__3
	bool ___U3ChasNextU3E5__3_7;
	// UnityEngine.UIElements.ITreeViewItem UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64::<currentItem>5__4
	RuntimeObject* ___U3CcurrentItemU3E5__4_8;
};

// Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36
struct U3CGetDescendantsU3Ed__36_tBC1F8EB52ABD353245A17827600DDC18F14EA673  : public RuntimeObject
{
	// System.Int32 Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>2__current
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::self
	bool ___self_3;
	// System.Boolean Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>3__self
	bool ___U3CU3E3__self_4;
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>4__this
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<o>5__3
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CoU3E5__3_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>7__wrap3
	RuntimeObject* ___U3CU3E7__wrap3_8;
};

// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____token_0;
};

// JSONReader/<GetData_Coroutine>d__3
struct U3CGetData_CoroutineU3Ed__3_tC55C369353C33B22C6AA6C28B78AEECB7ED86ED5  : public RuntimeObject
{
	// System.Int32 JSONReader/<GetData_Coroutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSONReader/<GetData_Coroutine>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// JSONReader JSONReader/<GetData_Coroutine>d__3::<>4__this
	JSONReader_tBC618CE007A6A18C4E2AB31B5C19F54413F2024D* ___U3CU3E4__this_2;
	// System.String JSONReader/<GetData_Coroutine>d__3::<uri>5__1
	String_t* ___U3CuriU3E5__1_3;
	// UnityEngine.Networking.UnityWebRequest JSONReader/<GetData_Coroutine>d__3::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
};

// JSONReader2/<GetData_Coroutine>d__2
struct U3CGetData_CoroutineU3Ed__2_tC73F2A7C9F2603B488E64C9F5033BB403A761328  : public RuntimeObject
{
	// System.Int32 JSONReader2/<GetData_Coroutine>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSONReader2/<GetData_Coroutine>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// JSONReader2 JSONReader2/<GetData_Coroutine>d__2::<>4__this
	JSONReader2_tE72F7132B4C050DB17E5247B1F7047C2248D90F1* ___U3CU3E4__this_2;
	// System.String JSONReader2/<GetData_Coroutine>d__2::<uri>5__1
	String_t* ___U3CuriU3E5__1_3;
	// UnityEngine.Networking.UnityWebRequest JSONReader2/<GetData_Coroutine>d__2::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
};

// JSONReader3/<GetData_Coroutine>d__3
struct U3CGetData_CoroutineU3Ed__3_tE9D7B650BD68309BA61398F8A5A4D592760AE99A  : public RuntimeObject
{
	// System.Int32 JSONReader3/<GetData_Coroutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSONReader3/<GetData_Coroutine>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// JSONReader3 JSONReader3/<GetData_Coroutine>d__3::<>4__this
	JSONReader3_t7252827F9424F9114DE23467CF41F122F263D4E4* ___U3CU3E4__this_2;
	// System.String JSONReader3/<GetData_Coroutine>d__3::<uri>5__1
	String_t* ___U3CuriU3E5__1_3;
	// UnityEngine.Networking.UnityWebRequest JSONReader3/<GetData_Coroutine>d__3::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
};

// Newtonsoft.Json.Linq.JToken/<AfterSelf>d__49
struct U3CAfterSelfU3Ed__49_t444D8F91D940620C88F4D62AF82EBF4FE0A30AA6  : public RuntimeObject
{
	// System.Int32 Newtonsoft.Json.Linq.JToken/<AfterSelf>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<AfterSelf>d__49::<>2__current
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JToken/<AfterSelf>d__49::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<AfterSelf>d__49::<>4__this
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E4__this_3;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<AfterSelf>d__49::<o>5__2
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CoU3E5__2_4;
};

// Newtonsoft.Json.Linq.JToken/<Annotations>d__185
struct U3CAnnotationsU3Ed__185_tE4D019F4D2201C516651C988734CEF1C496A61D3  : public RuntimeObject
{
	// System.Int32 Newtonsoft.Json.Linq.JToken/<Annotations>d__185::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Newtonsoft.Json.Linq.JToken/<Annotations>d__185::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JToken/<Annotations>d__185::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Newtonsoft.Json.Linq.JToken/<Annotations>d__185::type
	Type_t* ___type_3;
	// System.Type Newtonsoft.Json.Linq.JToken/<Annotations>d__185::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<Annotations>d__185::<>4__this
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E4__this_5;
	// System.Object[] Newtonsoft.Json.Linq.JToken/<Annotations>d__185::<annotations>5__2
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___U3CannotationsU3E5__2_6;
	// System.Int32 Newtonsoft.Json.Linq.JToken/<Annotations>d__185::<i>5__3
	int32_t ___U3CiU3E5__3_7;
};

// Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__50
struct U3CBeforeSelfU3Ed__50_t63BFF3FAE8985A3BD6972447A78F20E64F955062  : public RuntimeObject
{
	// System.Int32 Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__50::<>2__current
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__50::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__50::<>4__this
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E4__this_3;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__50::<o>5__2
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CoU3E5__2_4;
};

// Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48
struct U3CGetAncestorsU3Ed__48_t5EF4C692CACDD36BF0887DD0E9D823FCF81AFADA  : public RuntimeObject
{
	// System.Int32 Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48::<>2__current
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48::self
	bool ___self_3;
	// System.Boolean Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48::<>3__self
	bool ___U3CU3E3__self_4;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48::<>4__this
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CU3E4__this_5;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48::<current>5__2
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CcurrentU3E5__2_6;
};

// Microsoft.MixedReality.Toolkit.UX.KeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_tBC1B0E20CE9BE7380B08A2691602A8BD302D8B14  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UX.KeyboardPreview/<BlinkCaret>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UX.KeyboardPreview/<BlinkCaret>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UX.KeyboardPreview Microsoft.MixedReality.Toolkit.UX.KeyboardPreview/<BlinkCaret>d__20::<>4__this
	KeyboardPreview_t54A2B94DE15874851CC8F92F9AA46C01A92B10F1* ___U3CU3E4__this_2;
};

// LSAR/<GetData_Coroutine>d__3
struct U3CGetData_CoroutineU3Ed__3_t524BC0F53C97F00EE988B30BDDA854097FE0D123  : public RuntimeObject
{
	// System.Int32 LSAR/<GetData_Coroutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LSAR/<GetData_Coroutine>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LSAR LSAR/<GetData_Coroutine>d__3::<>4__this
	LSAR_tFBDBFE0C21C8F4C660AC9E83636C3A4856D4912B* ___U3CU3E4__this_2;
	// System.String LSAR/<GetData_Coroutine>d__3::<url>5__1
	String_t* ___U3CurlU3E5__1_3;
	// UnityEngine.Networking.UnityWebRequest LSAR/<GetData_Coroutine>d__3::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
};

// UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tBB95794CB5EF3D416C3147252ACD628FEE7267E2  : public RuntimeObject
{
	// System.Int32 UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_2;
	// UnityEngine.UI.LayoutGroup UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>4__this
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___U3CU3E4__this_3;
};

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471  : public RuntimeObject
{
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::_list
	ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* ____list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::_isKeys
	bool ____isKeys_1;
};

// System.Collections.ListDictionaryInternal/NodeKeyValueCollection
struct NodeKeyValueCollection_t0B8650C6DE8A447850CCFF3F044B07C4853C6044  : public RuntimeObject
{
	// System.Collections.ListDictionaryInternal System.Collections.ListDictionaryInternal/NodeKeyValueCollection::list
	ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* ___list_0;
	// System.Boolean System.Collections.ListDictionaryInternal/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;
};

// UniRx.MainThreadDispatcher/<RunEndOfFrameMicroCoroutine>d__33
struct U3CRunEndOfFrameMicroCoroutineU3Ed__33_tA673E23F9A8558DE63C32F7BE41E5898B39F26D3  : public RuntimeObject
{
	// System.Int32 UniRx.MainThreadDispatcher/<RunEndOfFrameMicroCoroutine>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.MainThreadDispatcher/<RunEndOfFrameMicroCoroutine>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.MainThreadDispatcher UniRx.MainThreadDispatcher/<RunEndOfFrameMicroCoroutine>d__33::<>4__this
	MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928* ___U3CU3E4__this_2;
};

// UniRx.MainThreadDispatcher/<RunFixedUpdateMicroCoroutine>d__32
struct U3CRunFixedUpdateMicroCoroutineU3Ed__32_t41223CCD5373D3BB6546C8E21871027D30F3BE53  : public RuntimeObject
{
	// System.Int32 UniRx.MainThreadDispatcher/<RunFixedUpdateMicroCoroutine>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.MainThreadDispatcher/<RunFixedUpdateMicroCoroutine>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.MainThreadDispatcher UniRx.MainThreadDispatcher/<RunFixedUpdateMicroCoroutine>d__32::<>4__this
	MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928* ___U3CU3E4__this_2;
};

// UniRx.MainThreadDispatcher/<RunUpdateMicroCoroutine>d__31
struct U3CRunUpdateMicroCoroutineU3Ed__31_tD07197B7121059A30978A40437D3770FFF6411EE  : public RuntimeObject
{
	// System.Int32 UniRx.MainThreadDispatcher/<RunUpdateMicroCoroutine>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.MainThreadDispatcher/<RunUpdateMicroCoroutine>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.MainThreadDispatcher UniRx.MainThreadDispatcher/<RunUpdateMicroCoroutine>d__31::<>4__this
	MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928* ___U3CU3E4__this_2;
};

// System.Text.RegularExpressions.MatchCollection/Enumerator
struct Enumerator_t600BA5FC7EA2F68C19679262670BEEA5DB0CC61D  : public RuntimeObject
{
	// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.MatchCollection/Enumerator::_collection
	MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* ____collection_0;
	// System.Int32 System.Text.RegularExpressions.MatchCollection/Enumerator::_index
	int32_t ____index_1;
};

// System.Collections.Generic.List`1/Enumerator<InterfaceAnmElement>
struct Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice>
struct InlinedArray_1_t1B3C6A098E8582B58A16218A7BA01827E025158C 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___additionalValues_2;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>
struct KeyValuePair_2_t25BF56B44F40AC19698F68DD29593E307D428F8B 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<UnityEngine.XR.XRNode>
struct Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction>
struct ReadOnlyArray_1_t87BBFDC4C52C189E583DEC4E87E663DF435F7915 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
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

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputBindingCompositeContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext::m_BindingIndex
	int32_t ___m_BindingIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr_0;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 
{
	// System.String System.Linq.Expressions.Interpreter.InterpretedFrameInfo::_methodName
	String_t* ____methodName_0;
	// System.Linq.Expressions.Interpreter.DebugInfo System.Linq.Expressions.Interpreter.InterpretedFrameInfo::_debugInfo
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo_1;
};
// Native definition for P/Invoke marshalling of System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_pinvoke
{
	char* ____methodName_0;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo_1;
};
// Native definition for COM marshalling of System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_com
{
	Il2CppChar* ____methodName_0;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
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

// UnityEngine.GUIClip/ParentClipScope
struct ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52 
{
	// System.Boolean UnityEngine.GUIClip/ParentClipScope::m_Disposed
	bool ___m_Disposed_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIClip/ParentClipScope
struct ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_pinvoke
{
	int32_t ___m_Disposed_0;
};
// Native definition for COM marshalling of UnityEngine.GUIClip/ParentClipScope
struct ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_com
{
	int32_t ___m_Disposed_0;
};

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5  : public Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D
{
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____table_22;
};

// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF 
{
	union
	{
		struct
		{
			// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer::FixedElementField
			Il2CppChar ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF__padding[128];
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF_marshaled_pinvoke
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF__padding[128];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF_marshaled_com
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF__padding[128];
	};
};

// System.Data.Index/IndexTree
struct IndexTree_t5A9D1B6E4C2AF3B18E6CC799F1A38063EAA53887  : public RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D
{
	// System.Data.Index System.Data.Index/IndexTree::_index
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____index_9;
};

// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_ControlCount
					uint8_t ___m_ControlCount_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___m_ControlCount_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionCount_1_OffsetPadding[1];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_InteractionCount
					uint8_t ___m_InteractionCount_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionCount_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___m_InteractionCount_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ProcessorCount_2_OffsetPadding[2];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_ProcessorCount
					uint8_t ___m_ProcessorCount_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ProcessorCount_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___m_ProcessorCount_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_MapIndex_3_OffsetPadding[3];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_MapIndex
					uint8_t ___m_MapIndex_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_MapIndex_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___m_MapIndex_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Flags_4_OffsetPadding[4];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_Flags
					uint8_t ___m_Flags_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Flags_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___m_Flags_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_PartIndex_5_OffsetPadding[5];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_PartIndex
					uint8_t ___m_PartIndex_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_PartIndex_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___m_PartIndex_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ActionIndex_6_OffsetPadding[6];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_ActionIndex
					uint16_t ___m_ActionIndex_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ActionIndex_6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___m_ActionIndex_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_CompositeOrCompositeBindingIndex_7_OffsetPadding[8];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_CompositeOrCompositeBindingIndex
					uint16_t ___m_CompositeOrCompositeBindingIndex_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_CompositeOrCompositeBindingIndex_7_OffsetPadding_forAlignmentOnly[8];
					uint16_t ___m_CompositeOrCompositeBindingIndex_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ProcessorStartIndex_8_OffsetPadding[10];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_ProcessorStartIndex
					uint16_t ___m_ProcessorStartIndex_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ProcessorStartIndex_8_OffsetPadding_forAlignmentOnly[10];
					uint16_t ___m_ProcessorStartIndex_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionStartIndex_9_OffsetPadding[12];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_InteractionStartIndex
					uint16_t ___m_InteractionStartIndex_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionStartIndex_9_OffsetPadding_forAlignmentOnly[12];
					uint16_t ___m_InteractionStartIndex_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlStartIndex_10_OffsetPadding[14];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_ControlStartIndex
					uint16_t ___m_ControlStartIndex_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlStartIndex_10_OffsetPadding_forAlignmentOnly[14];
					uint16_t ___m_ControlStartIndex_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_TriggerEventIdForComposite_11_OffsetPadding[16];
					// System.Int32 UnityEngine.InputSystem.InputActionState/BindingState::m_TriggerEventIdForComposite
					int32_t ___m_TriggerEventIdForComposite_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_TriggerEventIdForComposite_11_OffsetPadding_forAlignmentOnly[16];
					int32_t ___m_TriggerEventIdForComposite_11_forAlignmentOnly;
				};
			};
		};
		uint8_t BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA__padding[20];
	};
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 
{
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices_16;
};

// UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6 
{
	// UnityEngine.InputSystem.Utilities.InputActionTrace UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_Trace
	InputActionTrace_t046FE0C3746A1C44ADDD9367AA19409D0097AFC7* ___m_Trace_0;
	// UnityEngine.InputSystem.LowLevel.ActionEvent* UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_Buffer
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Buffer_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_EventCount
	int32_t ___m_EventCount_2;
	// UnityEngine.InputSystem.LowLevel.ActionEvent* UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_CurrentEvent
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_CurrentEvent_3;
	// System.Int32 UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6_marshaled_pinvoke
{
	InputActionTrace_t046FE0C3746A1C44ADDD9367AA19409D0097AFC7* ___m_Trace_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Buffer_1;
	int32_t ___m_EventCount_2;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_CurrentEvent_3;
	int32_t ___m_CurrentIndex_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6_marshaled_com
{
	InputActionTrace_t046FE0C3746A1C44ADDD9367AA19409D0097AFC7* ___m_Trace_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Buffer_1;
	int32_t ___m_EventCount_2;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_CurrentEvent_3;
	int32_t ___m_CurrentIndex_4;
};

// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 
{
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<part>k__BackingField
	int32_t ___U3CpartU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<control>k__BackingField
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_pinvoke
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_com
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023 
{
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance::valid
	bool ___valid_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023_marshaled_pinvoke
{
	int32_t ___valid_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023_marshaled_com
{
	int32_t ___valid_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
struct RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476 
{
	union
	{
		struct
		{
		};
		uint8_t RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476__padding[1];
	};
};

// UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct Enumerator_tE2E93AB92A6D5439BE88C499EF436B1945F2A2EB 
{
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_Buffer
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_Buffer_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_EventCount
	int32_t ___m_EventCount_1;
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_CurrentEvent
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_CurrentEvent_2;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_3;
};

// UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935 
{
	// UnityEngine.InputSystem.LowLevel.InputStateHistory UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_History
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_History_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_Index
	int32_t ___m_Index_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_History_0;
	int32_t ___m_Index_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_History_0;
	int32_t ___m_Index_1;
};

// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection
struct ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523  : public FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF
{
};

// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_t5337674C27D910998AD03237067CD14A65B18403  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct InlinedArray_1_tCD4550E16CF87B93F7C4EF9D0F922C1D5E99FA43 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.Substring>
struct InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___additionalValues_2;
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputDevice>
struct InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 
{
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct KeyValuePair_2_t2FBB7313F48428A44B08F0D78BC65005416142D8 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_1_t91F7ACDFBC018CFC14246035F22D8CFC5EAADBC4* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct KeyValuePair_2_tDFDCDC67FA3CA241D5E986ECCBE8BD80C4C15628 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t* ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString::size
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.IMECompositionString::buffer
					U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E__padding[132];
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF_marshaled_pinvoke ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF_marshaled_pinvoke ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E__padding[132];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF_marshaled_com ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t0B51E719D7B47A75DA8CBDD28396CD1AD00FFECF_marshaled_com ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E__padding[132];
	};
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};

struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kVersionKey_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31
struct U3CGetEnumeratorU3Ed__31_t36AC955611AAC565A76EBC2CB8A33BA46C5A8EBE  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>2__current
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___U3CU3E2__current_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>4__this
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CU3E4__this_2;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<i>5__1
	int32_t ___U3CiU3E5__1_3;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<actions>5__2
	ReadOnlyArray_1_t87BBFDC4C52C189E583DEC4E87E663DF435F7915 ___U3CactionsU3E5__2_4;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<actionCount>5__3
	int32_t ___U3CactionCountU3E5__3_5;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<n>5__4
	int32_t ___U3CnU3E5__4_6;
};

// UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8
struct U3Cget_bindingsU3Ed__8_t180F5B68E4D01EAA28B096886A977EC6859D6FFD  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputBinding UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>2__current
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>4__this
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CU3E4__this_3;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<numActionMaps>5__1
	int32_t ___U3CnumActionMapsU3E5__1_4;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<i>5__2
	int32_t ___U3CiU3E5__2_5;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<actionMap>5__3
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___U3CactionMapU3E5__3_6;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<bindings>5__4
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___U3CbindingsU3E5__4_7;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<numBindings>5__5
	int32_t ___U3CnumBindingsU3E5__5_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<n>5__6
	int32_t ___U3CnU3E5__6_9;
};

// UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2
struct U3Cget_controlsU3Ed__2_t09B5C7D3532D39371222B9D7A3E9A0D114A49717  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>2__current
	PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.InputBindingCompositeContext UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>4__this
	InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390 ___U3CU3E4__this_3;
	// UnityEngine.InputSystem.InputBindingCompositeContext UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>3__<>4__this
	InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390 ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<totalBindingCount>5__1
	int32_t ___U3CtotalBindingCountU3E5__1_5;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<bindingIndex>5__2
	int32_t ___U3CbindingIndexU3E5__2_6;
	// UnityEngine.InputSystem.InputActionState/BindingState UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<bindingState>5__3
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA ___U3CbindingStateU3E5__3_7;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<controlStartIndex>5__4
	int32_t ___U3CcontrolStartIndexU3E5__4_8;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<i>5__5
	int32_t ___U3CiU3E5__5_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<control>5__6
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3E5__6_10;
};

// UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE 
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_0;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_EventPtr
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_EventPtr_1;
	// UnityEngine.InputSystem.InputControlExtensions/Enumerate UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_Flags
	int32_t ___m_Flags_2;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_0;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_EventPtr_1;
	int32_t ___m_Flags_2;
	float ___m_MagnitudeThreshold_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_0;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_EventPtr_1;
	int32_t ___m_Flags_2;
	float ___m_MagnitudeThreshold_3;
};

// UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB 
{
	// UnityEngine.InputSystem.InputControlExtensions/Enumerate UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_Flags
	int32_t ___m_Flags_0;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_1;
	// System.UInt32[] UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_StateOffsetToControlIndex
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlIndex_2;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_StateOffsetToControlIndexLength
	int32_t ___m_StateOffsetToControlIndexLength_3;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_AllControls
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_AllControls_4;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_DefaultState
	uint8_t* ___m_DefaultState_5;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentState
	uint8_t* ___m_CurrentState_6;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_NoiseMask
	uint8_t* ___m_NoiseMask_7;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EventPtr
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_EventPtr_8;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentControl
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_CurrentControl_9;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentIndexInStateOffsetToControlIndexMap
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentControlStateBitOffset
	uint32_t ___m_CurrentControlStateBitOffset_11;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EventState
	uint8_t* ___m_EventState_12;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentBitOffset
	uint32_t ___m_CurrentBitOffset_13;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EndBitOffset
	uint32_t ___m_EndBitOffset_14;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB_marshaled_pinvoke
{
	int32_t ___m_Flags_0;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_1;
	Il2CppSafeArray/*NONE*/* ___m_StateOffsetToControlIndex_2;
	int32_t ___m_StateOffsetToControlIndexLength_3;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_AllControls_4;
	uint8_t* ___m_DefaultState_5;
	uint8_t* ___m_CurrentState_6;
	uint8_t* ___m_NoiseMask_7;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_EventPtr_8;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_CurrentControl_9;
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	uint32_t ___m_CurrentControlStateBitOffset_11;
	uint8_t* ___m_EventState_12;
	uint32_t ___m_CurrentBitOffset_13;
	uint32_t ___m_EndBitOffset_14;
	float ___m_MagnitudeThreshold_15;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB_marshaled_com
{
	int32_t ___m_Flags_0;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_1;
	Il2CppSafeArray/*NONE*/* ___m_StateOffsetToControlIndex_2;
	int32_t ___m_StateOffsetToControlIndexLength_3;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_AllControls_4;
	uint8_t* ___m_DefaultState_5;
	uint8_t* ___m_CurrentState_6;
	uint8_t* ___m_NoiseMask_7;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_EventPtr_8;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_CurrentControl_9;
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	uint32_t ___m_CurrentControlStateBitOffset_11;
	uint8_t* ___m_EventState_12;
	uint32_t ___m_CurrentBitOffset_13;
	uint32_t ___m_EndBitOffset_14;
	float ___m_MagnitudeThreshold_15;
};

// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_Trace
	InputEventTrace_t1D25547AACA8FD1C1AA974F31EF9BD9478205FBD* ___m_Trace_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_ChangeCounter
	int32_t ___m_ChangeCounter_1;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_Current
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_Current_2;
};

// UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191
struct U3CMouseDragOutsideRectU3Ed__191_t8133AC58E0F79BBA4C4B3B550D44FCD68E33E977  : public RuntimeObject
{
	// System.Int32 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191::eventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData_2;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191::<>4__this
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___U3CU3E4__this_3;
	// UnityEngine.Vector2 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191::<position>5__1
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3E5__1_4;
	// UnityEngine.Vector2 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191::<localMousePos>5__2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ClocalMousePosU3E5__2_5;
	// UnityEngine.Rect UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191::<rect>5__3
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___U3CrectU3E5__3_6;
	// System.Single UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191::<delay>5__4
	float ___U3CdelayU3E5__4_7;
};

// InterfaceAnimManager/<Disable_OnDisappearEnd>d__35
struct U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0  : public RuntimeObject
{
	// System.Int32 InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InterfaceAnimManager InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<>4__this
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ___U3CU3E4__this_2;
	// System.Int32 InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<longestWait>5__1
	int32_t ___U3ClongestWaitU3E5__1_3;
	// System.Int32 InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<index>5__2
	int32_t ___U3CindexU3E5__2_4;
	// System.Collections.Generic.List`1/Enumerator<InterfaceAnmElement> InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<>s__3
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E ___U3CU3Es__3_5;
	// InterfaceAnmElement InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<_element>5__4
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ___U3C_elementU3E5__4_6;
	// System.Collections.Generic.List`1/Enumerator<InterfaceAnmElement> InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<>s__5
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E ___U3CU3Es__5_7;
	// InterfaceAnmElement InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<_elementx>5__6
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ___U3C_elementxU3E5__6_8;
};

// System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29
struct U3CGetStackTraceDebugInfoU3Ed__29_t4B4ECB4D89B67E9A3128B46126F648ECED6F03FD  : public RuntimeObject
{
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrameInfo System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<>2__current
	InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<>4__this
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ___U3CU3E4__this_3;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<frame>5__2
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ___U3CframeU3E5__2_4;
};

// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63
struct U3CGetEnumeratorU3Ed__63_t73B6D3031C4E07FECAF4EB8B29AA887B83DA2170  : public RuntimeObject
{
	// System.Int32 Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>2__current
	KeyValuePair_2_t25BF56B44F40AC19698F68DD29593E307D428F8B ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>4__this
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;
};

// UniRx.Observable/<EveryCycleCore>d__311
struct U3CEveryCycleCoreU3Ed__311_tBB2D29EE5E1F9DE7400502C16E87F9518BE7A403  : public RuntimeObject
{
	// System.Int32 UniRx.Observable/<EveryCycleCore>d__311::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Observable/<EveryCycleCore>d__311::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.IObserver`1<System.Int64> UniRx.Observable/<EveryCycleCore>d__311::observer
	RuntimeObject* ___observer_2;
	// System.Threading.CancellationToken UniRx.Observable/<EveryCycleCore>d__311::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int64 UniRx.Observable/<EveryCycleCore>d__311::<count>5__1
	int64_t ___U3CcountU3E5__1_4;
};

// UniRx.Observable/<NextFrameCore>d__316
struct U3CNextFrameCoreU3Ed__316_t8013A94868484E5529A1A88E41FFDC5607BA700F  : public RuntimeObject
{
	// System.Int32 UniRx.Observable/<NextFrameCore>d__316::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Observable/<NextFrameCore>d__316::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.IObserver`1<UniRx.Unit> UniRx.Observable/<NextFrameCore>d__316::observer
	RuntimeObject* ___observer_2;
	// System.Threading.CancellationToken UniRx.Observable/<NextFrameCore>d__316::cancellation
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellation_3;
};

// UniRx.Observable/<TimerFrameCore>d__320
struct U3CTimerFrameCoreU3Ed__320_t491B03138D557345147976BDE0DB11AF0E0DC5D5  : public RuntimeObject
{
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__320::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Observable/<TimerFrameCore>d__320::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.IObserver`1<System.Int64> UniRx.Observable/<TimerFrameCore>d__320::observer
	RuntimeObject* ___observer_2;
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__320::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_3;
	// System.Threading.CancellationToken UniRx.Observable/<TimerFrameCore>d__320::cancel
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancel_4;
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__320::<currentFrame>5__1
	int32_t ___U3CcurrentFrameU3E5__1_5;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Enumerator_t4025852652DF630539AB5A80E27707ED96617DEB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t2FBB7313F48428A44B08F0D78BC65005416142D8 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Enumerator_t52594E7DD43EA93200C520E7F24A36FC9F19D3ED 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDFDCDC67FA3CA241D5E986ECCBE8BD80C4C15628 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Microsoft.MixedReality.Toolkit.HandJointPose
struct HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3 
{
	// UnityEngine.Pose Microsoft.MixedReality.Toolkit.HandJointPose::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	// System.Single Microsoft.MixedReality.Toolkit.HandJointPose::radius
	float ___radius_1;
};

// System.Net.FtpWebResponse/EmptyStream
struct EmptyStream_t195E304A631BA5798F6FED9BD12ADFDD157BB7E5  : public MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2
{
};

// UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46 
{
	// UnityEngine.InputSystem.LowLevel.IMECompositionString UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CompositionString
	IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E ___m_CompositionString_0;
	// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CurrentCharacter
	Il2CppChar ___m_CurrentCharacter_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46_marshaled_pinvoke
{
	IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E_marshaled_pinvoke ___m_CompositionString_0;
	uint8_t ___m_CurrentCharacter_1;
	int32_t ___m_CurrentIndex_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46_marshaled_com
{
	IMECompositionString_tE204556D15A112A43E86FBF18FE4A5B8AD96161E_marshaled_com ___m_CompositionString_0;
	uint8_t ___m_CurrentCharacter_1;
	int32_t ___m_CurrentIndex_2;
};

// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t* ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A* ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4* ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79* ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t* ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C* ___m_StartingActuations_31;
};

// UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
struct U3CGetAllButtonPressesU3Ed__43_t441E9F16B11BE50E982A62FC7B9ED45CB88B115B  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>2__current
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::eventPtr
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr_3;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__eventPtr
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___U3CU3E3__eventPtr_4;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::magnitude
	float ___magnitude_5;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__magnitude
	float ___U3CU3E3__magnitude_6;
	// System.Boolean UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::buttonControlsOnly
	bool ___buttonControlsOnly_7;
	// System.Boolean UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__buttonControlsOnly
	bool ___U3CU3E3__buttonControlsOnly_8;
	// UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>s__1
	InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB ___U3CU3Es__1_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<control>5__2
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3E5__2_10;
};

// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 
{
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Layout
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_Layout_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.Substring> UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Usages
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages_1;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Name
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_Name_2;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_DisplayName
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_DisplayName_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_Layout_0;
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages_1;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_Name_2;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_DisplayName_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_Layout_0;
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages_1;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_Name_2;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_DisplayName_3;
};

// UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27 
{
	// UnityEngine.InputSystem.InputControlScheme/MatchResult/Result UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Result
	int32_t ___m_Result_0;
	// System.Single UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Score
	float ___m_Score_1;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Devices
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices_2;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Controls
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_3;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Requirements
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Requirements_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_pinvoke
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices_2;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_3;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_Requirements_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_com
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices_2;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_3;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_Requirements_4;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4
struct U3Cget_patternsU3Ed__4_t1DEF554289913D08B960B18ACF82952C5F4FBE62  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>2__current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>4__this
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___U3CU3E4__this_3;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>3__<>4__this
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<count>5__1
	int32_t ___U3CcountU3E5__1_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<i>5__2
	int32_t ___U3CiU3E5__2_6;
};

// UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_t88691435BC5F2A470BB08FDFD9C91ECA8DF0523C  : public RuntimeObject
{
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<finished>k__BackingField
	bool ___U3CfinishedU3Ek__BackingField_0;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<position>k__BackingField
	int32_t ___U3CpositionU3Ek__BackingField_2;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_EventTrace
	InputEventTrace_t1D25547AACA8FD1C1AA974F31EF9BD9478205FBD* ___m_EventTrace_3;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_Enumerator
	Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75* ___m_Enumerator_4;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_DeviceIDMappings
	InlinedArray_1_tCD4550E16CF87B93F7C4EF9D0F922C1D5E99FA43 ___m_DeviceIDMappings_5;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreateNewDevices
	bool ___m_CreateNewDevices_6;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreatedDevices
	InlinedArray_1_t1B3C6A098E8582B58A16218A7BA01827E025158C ___m_CreatedDevices_7;
	// System.Action UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnFinished
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnFinished_8;
	// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnEvent
	Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C* ___m_OnEvent_9;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerFirstEvent
	double ___m_StartTimeAsPerFirstEvent_10;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerRuntime
	double ___m_StartTimeAsPerRuntime_11;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTimeIndex
	int32_t ___m_AllEventsByTimeIndex_12;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTime
	List_1_tDED7E0C66749F8E622E5B6D639BE146DBBC37448* ___m_AllEventsByTime_13;
};

// Mono.Btls.MonoBtlsObject/MonoBtlsHandle
struct MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44
struct U3CWorldLockedReattachCheckU3Ed__44_tD084261AB2F0DAED177CC2FBEDB4FAE172FE82C6  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<>4__this
	HandConstraintPalmUp_t7F1C2375E975F3463A09B2A541ADF5D02C1EF549* ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.HandJointPose Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<palmPose>5__1
	HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3 ___U3CpalmPoseU3E5__1_3;
	// System.Nullable`1<UnityEngine.XR.XRNode> Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<hand>5__2
	Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 ___U3ChandU3E5__2_4;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<palmCameraAngle>5__3
	float ___U3CpalmCameraAngleU3E5__3_5;
};

// UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tD7733255830E15015A27DF9E9D7A5ADBC3A79204 
{
	// System.String UnityEngine.InputSystem.InputControlPath/PathParser::path
	String_t* ___path_0;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::length
	int32_t ___length_1;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::leftIndexInPath
	int32_t ___leftIndexInPath_2;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::rightIndexInPath
	int32_t ___rightIndexInPath_3;
	// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent UnityEngine.InputSystem.InputControlPath/PathParser::current
	ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 ___current_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tD7733255830E15015A27DF9E9D7A5ADBC3A79204_marshaled_pinvoke
{
	char* ___path_0;
	int32_t ___length_1;
	int32_t ___leftIndexInPath_2;
	int32_t ___rightIndexInPath_3;
	ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_marshaled_pinvoke ___current_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tD7733255830E15015A27DF9E9D7A5ADBC3A79204_marshaled_com
{
	Il2CppChar* ___path_0;
	int32_t ___length_1;
	int32_t ___leftIndexInPath_2;
	int32_t ___rightIndexInPath_3;
	ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_marshaled_com ___current_4;
};

// UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76
struct U3CListControlLayoutsU3Ed__76_tF6EF0CE1FF92A1BE550F096AEE253A1349BDF763  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::basedOn
	String_t* ___basedOn_3;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>3__basedOn
	String_t* ___U3CU3E3__basedOn_4;
	// UnityEngine.InputSystem.InputManager UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>4__this
	InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210* ___U3CU3E4__this_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<internedBasedOn>5__1
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CinternedBasedOnU3E5__1_6;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>s__2
	Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE ___U3CU3Es__2_7;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<entry>5__3
	KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 ___U3CentryU3E5__3_8;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>s__4
	Enumerator_t52594E7DD43EA93200C520E7F24A36FC9F19D3ED ___U3CU3Es__4_9;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<entry>5__5
	KeyValuePair_2_tDFDCDC67FA3CA241D5E986ECCBE8BD80C4C15628 ___U3CentryU3E5__5_10;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>s__6
	Enumerator_t4025852652DF630539AB5A80E27707ED96617DEB ___U3CU3Es__6_11;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<entry>5__7
	KeyValuePair_2_t2FBB7313F48428A44B08F0D78BC65005416142D8 ___U3CentryU3E5__7_12;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>s__8
	Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE ___U3CU3Es__8_13;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<entry>5__9
	KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 ___U3CentryU3E5__9_14;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>s__10
	Enumerator_t52594E7DD43EA93200C520E7F24A36FC9F19D3ED ___U3CU3Es__10_15;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<entry>5__11
	KeyValuePair_2_tDFDCDC67FA3CA241D5E986ECCBE8BD80C4C15628 ___U3CentryU3E5__11_16;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>s__12
	Enumerator_t4025852652DF630539AB5A80E27707ED96617DEB ___U3CU3Es__12_17;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<entry>5__13
	KeyValuePair_2_t2FBB7313F48428A44B08F0D78BC65005416142D8 ___U3CentryU3E5__13_18;
};

// Mono.Btls.MonoBtlsBio/BoringBioHandle
struct BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsKey/BoringKeyHandle
struct BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsPkcs12/BoringPkcs12Handle
struct BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsSsl/BoringSslHandle
struct BoringSslHandle_tCE47FFF3E2B0B21A01A1E9488F237EBF7B990EDF  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsSslCtx/BoringSslCtxHandle
struct BoringSslCtxHandle_t813CF75AFA0B4A300A2B1A7A7BC34CB27EDAE585  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509/BoringX509Handle
struct BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509Chain/BoringX509ChainHandle
struct BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509Lookup/BoringX509LookupHandle
struct BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509LookupMono/BoringX509LookupMonoHandle
struct BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509Name/BoringX509NameHandle
struct BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
	// System.Boolean Mono.Btls.MonoBtlsX509Name/BoringX509NameHandle::dontFree
	bool ___dontFree_6;
};

// Mono.Btls.MonoBtlsX509Store/BoringX509StoreHandle
struct BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509StoreCtx/BoringX509StoreCtxHandle
struct BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
	// System.Boolean Mono.Btls.MonoBtlsX509StoreCtx/BoringX509StoreCtxHandle::dontFree
	bool ___dontFree_6;
};

// Mono.Btls.MonoBtlsX509VerifyParam/BoringX509VerifyParamHandle
struct BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// UnityEngine.InputSystem.InputControlPath/<Parse>d__33
struct U3CParseU3Ed__33_t181FAC571BDDF72170317EAE165F5394F733855B  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>2__current
	ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputControlPath/<Parse>d__33::path
	String_t* ___path_3;
	// System.String UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>3__path
	String_t* ___U3CU3E3__path_4;
	// UnityEngine.InputSystem.InputControlPath/PathParser UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<parser>5__1
	PathParser_tD7733255830E15015A27DF9E9D7A5ADBC3A79204 ___U3CparserU3E5__1_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mCCAFE946731B7D39FD27411DAAD9CD782220BA91_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t66A0D1700F95C289C5585DDBAE26DFC77D58859F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue);


// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, RuntimeObject* ___buffer0, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mC7911E36EE823861F59C0BDE0744F658385F98A1 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m2C0590DEFB21D9424F72CF21DD0A054F8E80C75A (RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m03E7B7428D9EF51696BEB6C89842FBA7FD82D3F9 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___position0, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_mA1AF4993CBC2A031B9DA190B67BDFEC34B7CC19F (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___position0, const RuntimeMethod* method) ;
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m9FB2167532BF6A84B75B38F2CBD2BC3C4520418B (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_m9AC81223CCC143CF53DAEF7CA809E8C45526E52C (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___position0, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m7C1D8E72959462110DE24B04DD63A1E7460EC4A7 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m9A2F71AE4F8DF5D46EBCBA7EEA0BD6E3BA5E550F (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_mE15EAB11D32C7615C658F2C226266E1AD1E02214 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;

// COM Callable Wrapper for UniRx.Operators.FromEventObservable/FromEvent
struct FromEvent_tF76980CE8735C3963CF40C49CAE55AC2D660F2EA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FromEvent_tF76980CE8735C3963CF40C49CAE55AC2D660F2EA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FromEvent_tF76980CE8735C3963CF40C49CAE55AC2D660F2EA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FromEvent_tF76980CE8735C3963CF40C49CAE55AC2D660F2EA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FromEvent_tF76980CE8735C3963CF40C49CAE55AC2D660F2EA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FromEvent_tF76980CE8735C3963CF40C49CAE55AC2D660F2EA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FromEvent_tF76980CE8735C3963CF40C49CAE55AC2D660F2EA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__18
struct U3CUpdatePulseU3Ed__18_t99E6FC1D02430CFF937784317C1C8A65D6A9736F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdatePulseU3Ed__18_t99E6FC1D02430CFF937784317C1C8A65D6A9736F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CUpdatePulseU3Ed__18_t99E6FC1D02430CFF937784317C1C8A65D6A9736F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdatePulseU3Ed__18_t99E6FC1D02430CFF937784317C1C8A65D6A9736F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdatePulseU3Ed__18_t99E6FC1D02430CFF937784317C1C8A65D6A9736F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdatePulseU3Ed__18_t99E6FC1D02430CFF937784317C1C8A65D6A9736F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdatePulseU3Ed__18_t99E6FC1D02430CFF937784317C1C8A65D6A9736F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FtpWebResponse/EmptyStream
struct EmptyStream_t195E304A631BA5798F6FED9BD12ADFDD157BB7E5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyStream_t195E304A631BA5798F6FED9BD12ADFDD157BB7E5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline EmptyStream_t195E304A631BA5798F6FED9BD12ADFDD157BB7E5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyStream_t195E304A631BA5798F6FED9BD12ADFDD157BB7E5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyStream_t195E304A631BA5798F6FED9BD12ADFDD157BB7E5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyStream_t195E304A631BA5798F6FED9BD12ADFDD157BB7E5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyStream_t195E304A631BA5798F6FED9BD12ADFDD157BB7E5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for GPS/<StartLocationService>d__7
struct U3CStartLocationServiceU3Ed__7_t001F5C739E226DE23D4BA2C29C47890856D206B9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartLocationServiceU3Ed__7_t001F5C739E226DE23D4BA2C29C47890856D206B9_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CStartLocationServiceU3Ed__7_t001F5C739E226DE23D4BA2C29C47890856D206B9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartLocationServiceU3Ed__7_t001F5C739E226DE23D4BA2C29C47890856D206B9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartLocationServiceU3Ed__7_t001F5C739E226DE23D4BA2C29C47890856D206B9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartLocationServiceU3Ed__7_t001F5C739E226DE23D4BA2C29C47890856D206B9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartLocationServiceU3Ed__7_t001F5C739E226DE23D4BA2C29C47890856D206B9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.GUIClip/ParentClipScope
struct ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.GroupCollection/Enumerator
struct Enumerator_t49742A61974B06BB73678C5555C3E42E6C843772_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t49742A61974B06BB73678C5555C3E42E6C843772_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_t49742A61974B06BB73678C5555C3E42E6C843772_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t49742A61974B06BB73678C5555C3E42E6C843772_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t49742A61974B06BB73678C5555C3E42E6C843772(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t49742A61974B06BB73678C5555C3E42E6C843772_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t49742A61974B06BB73678C5555C3E42E6C843772_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44
struct U3CWorldLockedReattachCheckU3Ed__44_tD084261AB2F0DAED177CC2FBEDB4FAE172FE82C6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWorldLockedReattachCheckU3Ed__44_tD084261AB2F0DAED177CC2FBEDB4FAE172FE82C6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CWorldLockedReattachCheckU3Ed__44_tD084261AB2F0DAED177CC2FBEDB4FAE172FE82C6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWorldLockedReattachCheckU3Ed__44_tD084261AB2F0DAED177CC2FBEDB4FAE172FE82C6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWorldLockedReattachCheckU3Ed__44_tD084261AB2F0DAED177CC2FBEDB4FAE172FE82C6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWorldLockedReattachCheckU3Ed__44_tD084261AB2F0DAED177CC2FBEDB4FAE172FE82C6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWorldLockedReattachCheckU3Ed__44_tD084261AB2F0DAED177CC2FBEDB4FAE172FE82C6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.HandVisualizer/<EnableWhenSubsystemAvailable>d__15
struct U3CEnableWhenSubsystemAvailableU3Ed__15_tC1EFEC1175C47E35C14E0A621704FD3F0B81C16C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CEnableWhenSubsystemAvailableU3Ed__15_tC1EFEC1175C47E35C14E0A621704FD3F0B81C16C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CEnableWhenSubsystemAvailableU3Ed__15_tC1EFEC1175C47E35C14E0A621704FD3F0B81C16C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CEnableWhenSubsystemAvailableU3Ed__15_tC1EFEC1175C47E35C14E0A621704FD3F0B81C16C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CEnableWhenSubsystemAvailableU3Ed__15_tC1EFEC1175C47E35C14E0A621704FD3F0B81C16C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CEnableWhenSubsystemAvailableU3Ed__15_tC1EFEC1175C47E35C14E0A621704FD3F0B81C16C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CEnableWhenSubsystemAvailableU3Ed__15_tC1EFEC1175C47E35C14E0A621704FD3F0B81C16C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/KeyCollection
struct KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/ValueCollection
struct ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t1A8AC222761BFB9580E0FC935D4B0445A448FC46_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.Index/IndexTree
struct IndexTree_t5A9D1B6E4C2AF3B18E6CC799F1A38063EAA53887_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IndexTree_t5A9D1B6E4C2AF3B18E6CC799F1A38063EAA53887_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline IndexTree_t5A9D1B6E4C2AF3B18E6CC799F1A38063EAA53887_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IndexTree_t5A9D1B6E4C2AF3B18E6CC799F1A38063EAA53887_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IndexTree_t5A9D1B6E4C2AF3B18E6CC799F1A38063EAA53887(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IndexTree_t5A9D1B6E4C2AF3B18E6CC799F1A38063EAA53887_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IndexTree_t5A9D1B6E4C2AF3B18E6CC799F1A38063EAA53887_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31
struct U3CGetEnumeratorU3Ed__31_t36AC955611AAC565A76EBC2CB8A33BA46C5A8EBE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__31_t36AC955611AAC565A76EBC2CB8A33BA46C5A8EBE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__31_t36AC955611AAC565A76EBC2CB8A33BA46C5A8EBE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__31_t36AC955611AAC565A76EBC2CB8A33BA46C5A8EBE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__31_t36AC955611AAC565A76EBC2CB8A33BA46C5A8EBE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__31_t36AC955611AAC565A76EBC2CB8A33BA46C5A8EBE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__31_t36AC955611AAC565A76EBC2CB8A33BA46C5A8EBE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8
struct U3Cget_bindingsU3Ed__8_t180F5B68E4D01EAA28B096886A977EC6859D6FFD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_bindingsU3Ed__8_t180F5B68E4D01EAA28B096886A977EC6859D6FFD_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3Cget_bindingsU3Ed__8_t180F5B68E4D01EAA28B096886A977EC6859D6FFD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_bindingsU3Ed__8_t180F5B68E4D01EAA28B096886A977EC6859D6FFD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_bindingsU3Ed__8_t180F5B68E4D01EAA28B096886A977EC6859D6FFD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_bindingsU3Ed__8_t180F5B68E4D01EAA28B096886A977EC6859D6FFD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_bindingsU3Ed__8_t180F5B68E4D01EAA28B096886A977EC6859D6FFD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
struct DeferBindingResolutionWrapper_tBEB0D0DEA05F9681F0189610B4D7B0CEAD32AC8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DeferBindingResolutionWrapper_tBEB0D0DEA05F9681F0189610B4D7B0CEAD32AC8C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline DeferBindingResolutionWrapper_tBEB0D0DEA05F9681F0189610B4D7B0CEAD32AC8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DeferBindingResolutionWrapper_tBEB0D0DEA05F9681F0189610B4D7B0CEAD32AC8C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DeferBindingResolutionWrapper_tBEB0D0DEA05F9681F0189610B4D7B0CEAD32AC8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DeferBindingResolutionWrapper_tBEB0D0DEA05F9681F0189610B4D7B0CEAD32AC8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DeferBindingResolutionWrapper_tBEB0D0DEA05F9681F0189610B4D7B0CEAD32AC8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tC0F792D149DF8552C0B6721D81AA1D51AF62EEC6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12
struct U3CGetPartNamesU3Ed__12_t8BCAC80872285E88D3B83FED9489CAEE929F0996_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetPartNamesU3Ed__12_t8BCAC80872285E88D3B83FED9489CAEE929F0996_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetPartNamesU3Ed__12_t8BCAC80872285E88D3B83FED9489CAEE929F0996_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetPartNamesU3Ed__12_t8BCAC80872285E88D3B83FED9489CAEE929F0996_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetPartNamesU3Ed__12_t8BCAC80872285E88D3B83FED9489CAEE929F0996(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetPartNamesU3Ed__12_t8BCAC80872285E88D3B83FED9489CAEE929F0996_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetPartNamesU3Ed__12_t8BCAC80872285E88D3B83FED9489CAEE929F0996_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2
struct U3Cget_controlsU3Ed__2_t09B5C7D3532D39371222B9D7A3E9A0D114A49717_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_controlsU3Ed__2_t09B5C7D3532D39371222B9D7A3E9A0D114A49717_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3Cget_controlsU3Ed__2_t09B5C7D3532D39371222B9D7A3E9A0D114A49717_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_controlsU3Ed__2_t09B5C7D3532D39371222B9D7A3E9A0D114A49717_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_controlsU3Ed__2_t09B5C7D3532D39371222B9D7A3E9A0D114A49717(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_controlsU3Ed__2_t09B5C7D3532D39371222B9D7A3E9A0D114A49717_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_controlsU3Ed__2_t09B5C7D3532D39371222B9D7A3E9A0D114A49717_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
struct U3CGetAllButtonPressesU3Ed__43_t441E9F16B11BE50E982A62FC7B9ED45CB88B115B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllButtonPressesU3Ed__43_t441E9F16B11BE50E982A62FC7B9ED45CB88B115B_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetAllButtonPressesU3Ed__43_t441E9F16B11BE50E982A62FC7B9ED45CB88B115B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllButtonPressesU3Ed__43_t441E9F16B11BE50E982A62FC7B9ED45CB88B115B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllButtonPressesU3Ed__43_t441E9F16B11BE50E982A62FC7B9ED45CB88B115B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllButtonPressesU3Ed__43_t441E9F16B11BE50E982A62FC7B9ED45CB88B115B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllButtonPressesU3Ed__43_t441E9F16B11BE50E982A62FC7B9ED45CB88B115B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputEventControlCollection_t63B58F806FC82F1D8E18E88557E8FCC26388F3BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputEventControlEnumerator_tB4810CBA4520ACCDFE385C107283A75EC91CD6DB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CacheRefInstance_t4E8602E1529A57250C63318B7E44AE2195514023_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlPath/<Parse>d__33
struct U3CParseU3Ed__33_t181FAC571BDDF72170317EAE165F5394F733855B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CParseU3Ed__33_t181FAC571BDDF72170317EAE165F5394F733855B_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CParseU3Ed__33_t181FAC571BDDF72170317EAE165F5394F733855B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CParseU3Ed__33_t181FAC571BDDF72170317EAE165F5394F733855B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CParseU3Ed__33_t181FAC571BDDF72170317EAE165F5394F733855B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CParseU3Ed__33_t181FAC571BDDF72170317EAE165F5394F733855B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CParseU3Ed__33_t181FAC571BDDF72170317EAE165F5394F733855B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
struct RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RefInstance_tAB8B260CEA1D5409CA7B920B4BECE6361620A476_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4
struct U3Cget_patternsU3Ed__4_t1DEF554289913D08B960B18ACF82952C5F4FBE62_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_patternsU3Ed__4_t1DEF554289913D08B960B18ACF82952C5F4FBE62_ComCallableWrapper>, IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3Cget_patternsU3Ed__4_t1DEF554289913D08B960B18ACF82952C5F4FBE62_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_patternsU3Ed__4_t1DEF554289913D08B960B18ACF82952C5F4FBE62_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9*>(this);
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
		interfaceIds[0] = IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9::IID;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCCAFE946731B7D39FD27411DAAD9CD782220BA91(IIterator_1_t66A0D1700F95C289C5585DDBAE26DFC77D58859F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mCCAFE946731B7D39FD27411DAAD9CD782220BA91_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_patternsU3Ed__4_t1DEF554289913D08B960B18ACF82952C5F4FBE62(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_patternsU3Ed__4_t1DEF554289913D08B960B18ACF82952C5F4FBE62_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_patternsU3Ed__4_t1DEF554289913D08B960B18ACF82952C5F4FBE62_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct Enumerator_tE2E93AB92A6D5439BE88C499EF436B1945F2A2EB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tE2E93AB92A6D5439BE88C499EF436B1945F2A2EB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_tE2E93AB92A6D5439BE88C499EF436B1945F2A2EB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tE2E93AB92A6D5439BE88C499EF436B1945F2A2EB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tE2E93AB92A6D5439BE88C499EF436B1945F2A2EB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tE2E93AB92A6D5439BE88C499EF436B1945F2A2EB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tE2E93AB92A6D5439BE88C499EF436B1945F2A2EB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver
struct DisposableObserver_t29E26C6260179B3DB17CBF2FB8A5014027E1FA73_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DisposableObserver_t29E26C6260179B3DB17CBF2FB8A5014027E1FA73_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline DisposableObserver_t29E26C6260179B3DB17CBF2FB8A5014027E1FA73_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DisposableObserver_t29E26C6260179B3DB17CBF2FB8A5014027E1FA73_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DisposableObserver_t29E26C6260179B3DB17CBF2FB8A5014027E1FA73(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DisposableObserver_t29E26C6260179B3DB17CBF2FB8A5014027E1FA73_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DisposableObserver_t29E26C6260179B3DB17CBF2FB8A5014027E1FA73_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t6DF3D5CC6EB756C7583B28E1CA7B752A8E591A75_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_t88691435BC5F2A470BB08FDFD9C91ECA8DF0523C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReplayController_t88691435BC5F2A470BB08FDFD9C91ECA8DF0523C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ReplayController_t88691435BC5F2A470BB08FDFD9C91ECA8DF0523C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReplayController_t88691435BC5F2A470BB08FDFD9C91ECA8DF0523C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReplayController_t88691435BC5F2A470BB08FDFD9C91ECA8DF0523C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReplayController_t88691435BC5F2A470BB08FDFD9C91ECA8DF0523C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReplayController_t88691435BC5F2A470BB08FDFD9C91ECA8DF0523C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<CaretBlink>d__169
struct U3CCaretBlinkU3Ed__169_t9B9E5B1CA9742C185386DC36BE2657C570C137EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__169_t9B9E5B1CA9742C185386DC36BE2657C570C137EC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCaretBlinkU3Ed__169_t9B9E5B1CA9742C185386DC36BE2657C570C137EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__169_t9B9E5B1CA9742C185386DC36BE2657C570C137EC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCaretBlinkU3Ed__169_t9B9E5B1CA9742C185386DC36BE2657C570C137EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCaretBlinkU3Ed__169_t9B9E5B1CA9742C185386DC36BE2657C570C137EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCaretBlinkU3Ed__169_t9B9E5B1CA9742C185386DC36BE2657C570C137EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<MouseDragOutsideRect>d__191
struct U3CMouseDragOutsideRectU3Ed__191_t8133AC58E0F79BBA4C4B3B550D44FCD68E33E977_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__191_t8133AC58E0F79BBA4C4B3B550D44FCD68E33E977_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CMouseDragOutsideRectU3Ed__191_t8133AC58E0F79BBA4C4B3B550D44FCD68E33E977_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__191_t8133AC58E0F79BBA4C4B3B550D44FCD68E33E977_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMouseDragOutsideRectU3Ed__191_t8133AC58E0F79BBA4C4B3B550D44FCD68E33E977(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMouseDragOutsideRectU3Ed__191_t8133AC58E0F79BBA4C4B3B550D44FCD68E33E977_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMouseDragOutsideRectU3Ed__191_t8133AC58E0F79BBA4C4B3B550D44FCD68E33E977_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76
struct U3CListControlLayoutsU3Ed__76_tF6EF0CE1FF92A1BE550F096AEE253A1349BDF763_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__76_tF6EF0CE1FF92A1BE550F096AEE253A1349BDF763_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CListControlLayoutsU3Ed__76_tF6EF0CE1FF92A1BE550F096AEE253A1349BDF763_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__76_tF6EF0CE1FF92A1BE550F096AEE253A1349BDF763_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListControlLayoutsU3Ed__76_tF6EF0CE1FF92A1BE550F096AEE253A1349BDF763(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListControlLayoutsU3Ed__76_tF6EF0CE1FF92A1BE550F096AEE253A1349BDF763_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListControlLayoutsU3Ed__76_tF6EF0CE1FF92A1BE550F096AEE253A1349BDF763_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_t0FD48507D961A57BB24A3C74867C385428FFB58F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_t0FD48507D961A57BB24A3C74867C385428FFB58F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscriber_t0FD48507D961A57BB24A3C74867C385428FFB58F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_t0FD48507D961A57BB24A3C74867C385428FFB58F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_t0FD48507D961A57BB24A3C74867C385428FFB58F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_t0FD48507D961A57BB24A3C74867C385428FFB58F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_t0FD48507D961A57BB24A3C74867C385428FFB58F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t64151AA4F7A5CBB087D385EA4DCA7F3B6BB74935_ComCallableWrapper(obj));
}

// COM Callable Wrapper for InterfaceAnimManager/<Disable_OnDisappearEnd>d__35
struct U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.InternalTreeView/<GetAllItems>d__64
struct U3CGetAllItemsU3Ed__64_t9EFAED139C12952E9775C9509CE4409F9B3014F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllItemsU3Ed__64_t9EFAED139C12952E9775C9509CE4409F9B3014F5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetAllItemsU3Ed__64_t9EFAED139C12952E9775C9509CE4409F9B3014F5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllItemsU3Ed__64_t9EFAED139C12952E9775C9509CE4409F9B3014F5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllItemsU3Ed__64_t9EFAED139C12952E9775C9509CE4409F9B3014F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllItemsU3Ed__64_t9EFAED139C12952E9775C9509CE4409F9B3014F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllItemsU3Ed__64_t9EFAED139C12952E9775C9509CE4409F9B3014F5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29
struct U3CGetStackTraceDebugInfoU3Ed__29_t4B4ECB4D89B67E9A3128B46126F648ECED6F03FD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetStackTraceDebugInfoU3Ed__29_t4B4ECB4D89B67E9A3128B46126F648ECED6F03FD_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetStackTraceDebugInfoU3Ed__29_t4B4ECB4D89B67E9A3128B46126F648ECED6F03FD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetStackTraceDebugInfoU3Ed__29_t4B4ECB4D89B67E9A3128B46126F648ECED6F03FD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetStackTraceDebugInfoU3Ed__29_t4B4ECB4D89B67E9A3128B46126F648ECED6F03FD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetStackTraceDebugInfoU3Ed__29_t4B4ECB4D89B67E9A3128B46126F648ECED6F03FD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetStackTraceDebugInfoU3Ed__29_t4B4ECB4D89B67E9A3128B46126F648ECED6F03FD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36
struct U3CGetDescendantsU3Ed__36_tBC1F8EB52ABD353245A17827600DDC18F14EA673_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetDescendantsU3Ed__36_tBC1F8EB52ABD353245A17827600DDC18F14EA673_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetDescendantsU3Ed__36_tBC1F8EB52ABD353245A17827600DDC18F14EA673_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetDescendantsU3Ed__36_tBC1F8EB52ABD353245A17827600DDC18F14EA673_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetDescendantsU3Ed__36_tBC1F8EB52ABD353245A17827600DDC18F14EA673(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetDescendantsU3Ed__36_tBC1F8EB52ABD353245A17827600DDC18F14EA673_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetDescendantsU3Ed__36_tBC1F8EB52ABD353245A17827600DDC18F14EA673_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63
struct U3CGetEnumeratorU3Ed__63_t73B6D3031C4E07FECAF4EB8B29AA887B83DA2170_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__63_t73B6D3031C4E07FECAF4EB8B29AA887B83DA2170_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetEnumeratorU3Ed__63_t73B6D3031C4E07FECAF4EB8B29AA887B83DA2170_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__63_t73B6D3031C4E07FECAF4EB8B29AA887B83DA2170_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__63_t73B6D3031C4E07FECAF4EB8B29AA887B83DA2170(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__63_t73B6D3031C4E07FECAF4EB8B29AA887B83DA2170_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__63_t73B6D3031C4E07FECAF4EB8B29AA887B83DA2170_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(5);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID;
		interfaceIds[3] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 5;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98_ComCallableWrapper(obj));
}

// COM Callable Wrapper for JSONReader/<GetData_Coroutine>d__3
struct U3CGetData_CoroutineU3Ed__3_tC55C369353C33B22C6AA6C28B78AEECB7ED86ED5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetData_CoroutineU3Ed__3_tC55C369353C33B22C6AA6C28B78AEECB7ED86ED5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetData_CoroutineU3Ed__3_tC55C369353C33B22C6AA6C28B78AEECB7ED86ED5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetData_CoroutineU3Ed__3_tC55C369353C33B22C6AA6C28B78AEECB7ED86ED5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetData_CoroutineU3Ed__3_tC55C369353C33B22C6AA6C28B78AEECB7ED86ED5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetData_CoroutineU3Ed__3_tC55C369353C33B22C6AA6C28B78AEECB7ED86ED5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetData_CoroutineU3Ed__3_tC55C369353C33B22C6AA6C28B78AEECB7ED86ED5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for JSONReader2/<GetData_Coroutine>d__2
struct U3CGetData_CoroutineU3Ed__2_tC73F2A7C9F2603B488E64C9F5033BB403A761328_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetData_CoroutineU3Ed__2_tC73F2A7C9F2603B488E64C9F5033BB403A761328_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetData_CoroutineU3Ed__2_tC73F2A7C9F2603B488E64C9F5033BB403A761328_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetData_CoroutineU3Ed__2_tC73F2A7C9F2603B488E64C9F5033BB403A761328_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetData_CoroutineU3Ed__2_tC73F2A7C9F2603B488E64C9F5033BB403A761328(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetData_CoroutineU3Ed__2_tC73F2A7C9F2603B488E64C9F5033BB403A761328_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetData_CoroutineU3Ed__2_tC73F2A7C9F2603B488E64C9F5033BB403A761328_ComCallableWrapper(obj));
}

// COM Callable Wrapper for JSONReader3/<GetData_Coroutine>d__3
struct U3CGetData_CoroutineU3Ed__3_tE9D7B650BD68309BA61398F8A5A4D592760AE99A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetData_CoroutineU3Ed__3_tE9D7B650BD68309BA61398F8A5A4D592760AE99A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetData_CoroutineU3Ed__3_tE9D7B650BD68309BA61398F8A5A4D592760AE99A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetData_CoroutineU3Ed__3_tE9D7B650BD68309BA61398F8A5A4D592760AE99A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetData_CoroutineU3Ed__3_tE9D7B650BD68309BA61398F8A5A4D592760AE99A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetData_CoroutineU3Ed__3_tE9D7B650BD68309BA61398F8A5A4D592760AE99A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetData_CoroutineU3Ed__3_tE9D7B650BD68309BA61398F8A5A4D592760AE99A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JToken/<AfterSelf>d__49
struct U3CAfterSelfU3Ed__49_t444D8F91D940620C88F4D62AF82EBF4FE0A30AA6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAfterSelfU3Ed__49_t444D8F91D940620C88F4D62AF82EBF4FE0A30AA6_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CAfterSelfU3Ed__49_t444D8F91D940620C88F4D62AF82EBF4FE0A30AA6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAfterSelfU3Ed__49_t444D8F91D940620C88F4D62AF82EBF4FE0A30AA6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAfterSelfU3Ed__49_t444D8F91D940620C88F4D62AF82EBF4FE0A30AA6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAfterSelfU3Ed__49_t444D8F91D940620C88F4D62AF82EBF4FE0A30AA6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAfterSelfU3Ed__49_t444D8F91D940620C88F4D62AF82EBF4FE0A30AA6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JToken/<Annotations>d__185
struct U3CAnnotationsU3Ed__185_tE4D019F4D2201C516651C988734CEF1C496A61D3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnnotationsU3Ed__185_tE4D019F4D2201C516651C988734CEF1C496A61D3_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CAnnotationsU3Ed__185_tE4D019F4D2201C516651C988734CEF1C496A61D3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnnotationsU3Ed__185_tE4D019F4D2201C516651C988734CEF1C496A61D3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnnotationsU3Ed__185_tE4D019F4D2201C516651C988734CEF1C496A61D3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnnotationsU3Ed__185_tE4D019F4D2201C516651C988734CEF1C496A61D3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnnotationsU3Ed__185_tE4D019F4D2201C516651C988734CEF1C496A61D3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__50
struct U3CBeforeSelfU3Ed__50_t63BFF3FAE8985A3BD6972447A78F20E64F955062_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CBeforeSelfU3Ed__50_t63BFF3FAE8985A3BD6972447A78F20E64F955062_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CBeforeSelfU3Ed__50_t63BFF3FAE8985A3BD6972447A78F20E64F955062_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CBeforeSelfU3Ed__50_t63BFF3FAE8985A3BD6972447A78F20E64F955062_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CBeforeSelfU3Ed__50_t63BFF3FAE8985A3BD6972447A78F20E64F955062(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CBeforeSelfU3Ed__50_t63BFF3FAE8985A3BD6972447A78F20E64F955062_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CBeforeSelfU3Ed__50_t63BFF3FAE8985A3BD6972447A78F20E64F955062_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48
struct U3CGetAncestorsU3Ed__48_t5EF4C692CACDD36BF0887DD0E9D823FCF81AFADA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAncestorsU3Ed__48_t5EF4C692CACDD36BF0887DD0E9D823FCF81AFADA_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetAncestorsU3Ed__48_t5EF4C692CACDD36BF0887DD0E9D823FCF81AFADA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAncestorsU3Ed__48_t5EF4C692CACDD36BF0887DD0E9D823FCF81AFADA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAncestorsU3Ed__48_t5EF4C692CACDD36BF0887DD0E9D823FCF81AFADA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAncestorsU3Ed__48_t5EF4C692CACDD36BF0887DD0E9D823FCF81AFADA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAncestorsU3Ed__48_t5EF4C692CACDD36BF0887DD0E9D823FCF81AFADA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UX.KeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_tBC1B0E20CE9BE7380B08A2691602A8BD302D8B14_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_tBC1B0E20CE9BE7380B08A2691602A8BD302D8B14_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CBlinkCaretU3Ed__20_tBC1B0E20CE9BE7380B08A2691602A8BD302D8B14_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_tBC1B0E20CE9BE7380B08A2691602A8BD302D8B14_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CBlinkCaretU3Ed__20_tBC1B0E20CE9BE7380B08A2691602A8BD302D8B14(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CBlinkCaretU3Ed__20_tBC1B0E20CE9BE7380B08A2691602A8BD302D8B14_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CBlinkCaretU3Ed__20_tBC1B0E20CE9BE7380B08A2691602A8BD302D8B14_ComCallableWrapper(obj));
}

// COM Callable Wrapper for LSAR/<GetData_Coroutine>d__3
struct U3CGetData_CoroutineU3Ed__3_t524BC0F53C97F00EE988B30BDDA854097FE0D123_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetData_CoroutineU3Ed__3_t524BC0F53C97F00EE988B30BDDA854097FE0D123_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetData_CoroutineU3Ed__3_t524BC0F53C97F00EE988B30BDDA854097FE0D123_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetData_CoroutineU3Ed__3_t524BC0F53C97F00EE988B30BDDA854097FE0D123_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetData_CoroutineU3Ed__3_t524BC0F53C97F00EE988B30BDDA854097FE0D123(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetData_CoroutineU3Ed__3_t524BC0F53C97F00EE988B30BDDA854097FE0D123_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetData_CoroutineU3Ed__3_t524BC0F53C97F00EE988B30BDDA854097FE0D123_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tBB95794CB5EF3D416C3147252ACD628FEE7267E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tBB95794CB5EF3D416C3147252ACD628FEE7267E2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CDelayedSetDirtyU3Ed__56_tBB95794CB5EF3D416C3147252ACD628FEE7267E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tBB95794CB5EF3D416C3147252ACD628FEE7267E2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedSetDirtyU3Ed__56_tBB95794CB5EF3D416C3147252ACD628FEE7267E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedSetDirtyU3Ed__56_tBB95794CB5EF3D416C3147252ACD628FEE7267E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedSetDirtyU3Ed__56_tBB95794CB5EF3D416C3147252ACD628FEE7267E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ListDictionaryInternal/NodeKeyValueCollection
struct NodeKeyValueCollection_t0B8650C6DE8A447850CCFF3F044B07C4853C6044_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t0B8650C6DE8A447850CCFF3F044B07C4853C6044_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline NodeKeyValueCollection_t0B8650C6DE8A447850CCFF3F044B07C4853C6044_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t0B8650C6DE8A447850CCFF3F044B07C4853C6044_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NodeKeyValueCollection_t0B8650C6DE8A447850CCFF3F044B07C4853C6044(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NodeKeyValueCollection_t0B8650C6DE8A447850CCFF3F044B07C4853C6044_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NodeKeyValueCollection_t0B8650C6DE8A447850CCFF3F044B07C4853C6044_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.MainThreadDispatcher/<RunEndOfFrameMicroCoroutine>d__33
struct U3CRunEndOfFrameMicroCoroutineU3Ed__33_tA673E23F9A8558DE63C32F7BE41E5898B39F26D3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunEndOfFrameMicroCoroutineU3Ed__33_tA673E23F9A8558DE63C32F7BE41E5898B39F26D3_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CRunEndOfFrameMicroCoroutineU3Ed__33_tA673E23F9A8558DE63C32F7BE41E5898B39F26D3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunEndOfFrameMicroCoroutineU3Ed__33_tA673E23F9A8558DE63C32F7BE41E5898B39F26D3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunEndOfFrameMicroCoroutineU3Ed__33_tA673E23F9A8558DE63C32F7BE41E5898B39F26D3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunEndOfFrameMicroCoroutineU3Ed__33_tA673E23F9A8558DE63C32F7BE41E5898B39F26D3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunEndOfFrameMicroCoroutineU3Ed__33_tA673E23F9A8558DE63C32F7BE41E5898B39F26D3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.MainThreadDispatcher/<RunFixedUpdateMicroCoroutine>d__32
struct U3CRunFixedUpdateMicroCoroutineU3Ed__32_t41223CCD5373D3BB6546C8E21871027D30F3BE53_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunFixedUpdateMicroCoroutineU3Ed__32_t41223CCD5373D3BB6546C8E21871027D30F3BE53_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CRunFixedUpdateMicroCoroutineU3Ed__32_t41223CCD5373D3BB6546C8E21871027D30F3BE53_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunFixedUpdateMicroCoroutineU3Ed__32_t41223CCD5373D3BB6546C8E21871027D30F3BE53_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunFixedUpdateMicroCoroutineU3Ed__32_t41223CCD5373D3BB6546C8E21871027D30F3BE53(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunFixedUpdateMicroCoroutineU3Ed__32_t41223CCD5373D3BB6546C8E21871027D30F3BE53_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunFixedUpdateMicroCoroutineU3Ed__32_t41223CCD5373D3BB6546C8E21871027D30F3BE53_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.MainThreadDispatcher/<RunUpdateMicroCoroutine>d__31
struct U3CRunUpdateMicroCoroutineU3Ed__31_tD07197B7121059A30978A40437D3770FFF6411EE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunUpdateMicroCoroutineU3Ed__31_tD07197B7121059A30978A40437D3770FFF6411EE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CRunUpdateMicroCoroutineU3Ed__31_tD07197B7121059A30978A40437D3770FFF6411EE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunUpdateMicroCoroutineU3Ed__31_tD07197B7121059A30978A40437D3770FFF6411EE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunUpdateMicroCoroutineU3Ed__31_tD07197B7121059A30978A40437D3770FFF6411EE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunUpdateMicroCoroutineU3Ed__31_tD07197B7121059A30978A40437D3770FFF6411EE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunUpdateMicroCoroutineU3Ed__31_tD07197B7121059A30978A40437D3770FFF6411EE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.MatchCollection/Enumerator
struct Enumerator_t600BA5FC7EA2F68C19679262670BEEA5DB0CC61D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t600BA5FC7EA2F68C19679262670BEEA5DB0CC61D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_t600BA5FC7EA2F68C19679262670BEEA5DB0CC61D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t600BA5FC7EA2F68C19679262670BEEA5DB0CC61D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t600BA5FC7EA2F68C19679262670BEEA5DB0CC61D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t600BA5FC7EA2F68C19679262670BEEA5DB0CC61D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t600BA5FC7EA2F68C19679262670BEEA5DB0CC61D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsBio/BoringBioHandle
struct BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsKey/BoringKeyHandle
struct BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsPkcs12/BoringPkcs12Handle
struct BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsSsl/BoringSslHandle
struct BoringSslHandle_tCE47FFF3E2B0B21A01A1E9488F237EBF7B990EDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringSslHandle_tCE47FFF3E2B0B21A01A1E9488F237EBF7B990EDF_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringSslHandle_tCE47FFF3E2B0B21A01A1E9488F237EBF7B990EDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringSslHandle_tCE47FFF3E2B0B21A01A1E9488F237EBF7B990EDF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringSslHandle_tCE47FFF3E2B0B21A01A1E9488F237EBF7B990EDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringSslHandle_tCE47FFF3E2B0B21A01A1E9488F237EBF7B990EDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringSslHandle_tCE47FFF3E2B0B21A01A1E9488F237EBF7B990EDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsSslCtx/BoringSslCtxHandle
struct BoringSslCtxHandle_t813CF75AFA0B4A300A2B1A7A7BC34CB27EDAE585_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringSslCtxHandle_t813CF75AFA0B4A300A2B1A7A7BC34CB27EDAE585_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringSslCtxHandle_t813CF75AFA0B4A300A2B1A7A7BC34CB27EDAE585_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringSslCtxHandle_t813CF75AFA0B4A300A2B1A7A7BC34CB27EDAE585_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringSslCtxHandle_t813CF75AFA0B4A300A2B1A7A7BC34CB27EDAE585(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringSslCtxHandle_t813CF75AFA0B4A300A2B1A7A7BC34CB27EDAE585_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringSslCtxHandle_t813CF75AFA0B4A300A2B1A7A7BC34CB27EDAE585_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509/BoringX509Handle
struct BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509Chain/BoringX509ChainHandle
struct BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509Lookup/BoringX509LookupHandle
struct BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509LookupMono/BoringX509LookupMonoHandle
struct BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509Name/BoringX509NameHandle
struct BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509Store/BoringX509StoreHandle
struct BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509StoreCtx/BoringX509StoreCtxHandle
struct BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509VerifyParam/BoringX509VerifyParamHandle
struct BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.NavigateFocusRing/ChangeDirection
struct ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284
{
	inline InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID;
		interfaceIds[2] = IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71
{
	inline InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputStream_t5337674C27D910998AD03237067CD14A65B18403(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284
{
	inline OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284
{
	inline RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D::IID;
		interfaceIds[2] = IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID;
		interfaceIds[3] = IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m29F4D8681FB7E60088E7A665F319EADAF14696BA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Size_mC7911E36EE823861F59C0BDE0744F658385F98A1(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_mF541E936AB539C97B96018952B00DAF943C8E658(uint64_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D* __thisValue = (RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D*)GetManagedObjectInline();
			RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m2C0590DEFB21D9424F72CF21DD0A054F8E80C75A(__thisValue, ___value0, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m5B59AEE63C2736D9CCBB8A4987C5316A34CD343F(uint64_t ___position0, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetInputStreamAt_m03E7B7428D9EF51696BEB6C89842FBA7FD82D3F9(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_mE15EFF78D7AB63C66957863FE3D54FA33D66CCB8(uint64_t ___position0, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetOutputStreamAt_mA1AF4993CBC2A031B9DA190B67BDFEC34B7CC19F(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3BBAFE5846C2C4581E7E509DC125E3AB508D591A(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Position_m9FB2167532BF6A84B75B38F2CBD2BC3C4520418B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m1DDCF62775B861D7FDD3EF761EE05251C13FA512(uint64_t ___position0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			NetFxToWinRtStreamAdapter_Seek_m9AC81223CCC143CF53DAEF7CA809E8C45526E52C(__thisValue, ___position0, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mFD31B358478E07E6281E4D329FAC8B6DABE36191(IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_CloneStream_m7C1D8E72959462110DE24B04DD63A1E7460EC4A7(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m599EC4BE14290138A7DCE9D82AF647993B4049E1(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanRead_m9A2F71AE4F8DF5D46EBCBA7EEA0BD6E3BA5E550F(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m76930DBC1CC5718B50A9CCFFBB604AF6137C223B(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanWrite_mE15EAB11D32C7615C658F2C226266E1AD1E02214(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Observable/<EveryCycleCore>d__311
struct U3CEveryCycleCoreU3Ed__311_tBB2D29EE5E1F9DE7400502C16E87F9518BE7A403_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CEveryCycleCoreU3Ed__311_tBB2D29EE5E1F9DE7400502C16E87F9518BE7A403_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CEveryCycleCoreU3Ed__311_tBB2D29EE5E1F9DE7400502C16E87F9518BE7A403_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CEveryCycleCoreU3Ed__311_tBB2D29EE5E1F9DE7400502C16E87F9518BE7A403_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CEveryCycleCoreU3Ed__311_tBB2D29EE5E1F9DE7400502C16E87F9518BE7A403(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CEveryCycleCoreU3Ed__311_tBB2D29EE5E1F9DE7400502C16E87F9518BE7A403_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CEveryCycleCoreU3Ed__311_tBB2D29EE5E1F9DE7400502C16E87F9518BE7A403_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Observable/<NextFrameCore>d__316
struct U3CNextFrameCoreU3Ed__316_t8013A94868484E5529A1A88E41FFDC5607BA700F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CNextFrameCoreU3Ed__316_t8013A94868484E5529A1A88E41FFDC5607BA700F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CNextFrameCoreU3Ed__316_t8013A94868484E5529A1A88E41FFDC5607BA700F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CNextFrameCoreU3Ed__316_t8013A94868484E5529A1A88E41FFDC5607BA700F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CNextFrameCoreU3Ed__316_t8013A94868484E5529A1A88E41FFDC5607BA700F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CNextFrameCoreU3Ed__316_t8013A94868484E5529A1A88E41FFDC5607BA700F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CNextFrameCoreU3Ed__316_t8013A94868484E5529A1A88E41FFDC5607BA700F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Observable/<TimerFrameCore>d__320
struct U3CTimerFrameCoreU3Ed__320_t491B03138D557345147976BDE0DB11AF0E0DC5D5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTimerFrameCoreU3Ed__320_t491B03138D557345147976BDE0DB11AF0E0DC5D5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CTimerFrameCoreU3Ed__320_t491B03138D557345147976BDE0DB11AF0E0DC5D5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTimerFrameCoreU3Ed__320_t491B03138D557345147976BDE0DB11AF0E0DC5D5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTimerFrameCoreU3Ed__320_t491B03138D557345147976BDE0DB11AF0E0DC5D5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTimerFrameCoreU3Ed__320_t491B03138D557345147976BDE0DB11AF0E0DC5D5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTimerFrameCoreU3Ed__320_t491B03138D557345147976BDE0DB11AF0E0DC5D5_ComCallableWrapper(obj));
}
