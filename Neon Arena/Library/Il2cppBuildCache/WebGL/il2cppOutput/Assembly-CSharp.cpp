#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5B9514E3D12F47B7EA1DA86A54C8BCD962D07630;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Destroy_Self
struct Destroy_Self_t419498E5C4FF739AAE7DBC675E62EA4F689EA7A6;
// EnemyAI
struct EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82;
// EnemySpawners
struct EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOver
struct GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Gun
struct Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791;
// PlayerInput
struct PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E;
// PlayerLook
struct PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591;
// PlayerMotor
struct PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52;
// PowerUps
struct PowerUps_t4E93511FA039BB2FA3641B512482CA737FB11533;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Scene1_Score
struct Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA;
// Scene2_Score
struct Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0;
// Scene3_Score
struct Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SettingsMenu
struct SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StartMenu
struct StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerInput/IOnFootActions
struct IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0489C1978337F0926640C799B97CCD78101ED117;
IL2CPP_EXTERN_C String_t* _stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F13B24F58CB2A0826EEE034881898735297C5DF;
IL2CPP_EXTERN_C String_t* _stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988;
IL2CPP_EXTERN_C String_t* _stringLiteral5A342A221A718CC46430003E5796296C80F4090F;
IL2CPP_EXTERN_C String_t* _stringLiteral67CD316C78BE2B3D3ADEC7A93D9D8BAC19CED3DA;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA8513A41ABF9237CBBF9B48323BF4AF439A646;
IL2CPP_EXTERN_C String_t* _stringLiteral8B4CF0C91B8B2E408351626A23224CF1BE387E25;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE;
IL2CPP_EXTERN_C String_t* _stringLiteral92FB790FD2406296F3E18DB741B77C7C5FD9A965;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EA000C1A514A952BC0428CB640DFD1A63700B7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4F3E3489DC79906E049D84074C1643D37E8C3A9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4E8142BFE618A5CBEC62617C682850D11107B9;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82_m0A1D2AEFC6A1D640C29515A8BDAB763A75D0AE12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591_m5983BEDAEE953E6B593A931BF86DC832B6436F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52_mA7F0D78FE52448891FC574008532A13AA34EA312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CAwakeU3Eb__4_0_m82E8239DF2A4658A20B327910DE536651757CF35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CAwakeU3Eb__4_1_mE94DA42F2C32EDFF59EFC3E502A706931FBCA5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CAwakeU3Eb__4_2_mD30B7BF7B387FCA0ABDF2B3E23F747F434D13951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// PlayerInput
struct PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionAsset PlayerInput::<asset>k__BackingField
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap PlayerInput::m_OnFoot
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_OnFoot_1;
	// PlayerInput/IOnFootActions PlayerInput::m_OnFootActionsCallbackInterface
	RuntimeObject* ___m_OnFootActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction PlayerInput::m_OnFoot_Movement
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_OnFoot_Movement_3;
	// UnityEngine.InputSystem.InputAction PlayerInput::m_OnFoot_Jump
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_OnFoot_Jump_4;
	// UnityEngine.InputSystem.InputAction PlayerInput::m_OnFoot_Look
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_OnFoot_Look_5;
	// UnityEngine.InputSystem.InputAction PlayerInput::m_OnFoot_SprintStart
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_OnFoot_SprintStart_6;
	// UnityEngine.InputSystem.InputAction PlayerInput::m_OnFoot_SprintFinish
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_OnFoot_SprintFinish_7;

public:
	inline static int32_t get_offset_of_U3CassetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E, ___U3CassetU3Ek__BackingField_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_U3CassetU3Ek__BackingField_0() const { return ___U3CassetU3Ek__BackingField_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_U3CassetU3Ek__BackingField_0() { return &___U3CassetU3Ek__BackingField_0; }
	inline void set_U3CassetU3Ek__BackingField_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___U3CassetU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFoot_1() { return static_cast<int32_t>(offsetof(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E, ___m_OnFoot_1)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_OnFoot_1() const { return ___m_OnFoot_1; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_OnFoot_1() { return &___m_OnFoot_1; }
	inline void set_m_OnFoot_1(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_OnFoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFootActionsCallbackInterface_2() { return static_cast<int32_t>(offsetof(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E, ___m_OnFootActionsCallbackInterface_2)); }
	inline RuntimeObject* get_m_OnFootActionsCallbackInterface_2() const { return ___m_OnFootActionsCallbackInterface_2; }
	inline RuntimeObject** get_address_of_m_OnFootActionsCallbackInterface_2() { return &___m_OnFootActionsCallbackInterface_2; }
	inline void set_m_OnFootActionsCallbackInterface_2(RuntimeObject* value)
	{
		___m_OnFootActionsCallbackInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFootActionsCallbackInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFoot_Movement_3() { return static_cast<int32_t>(offsetof(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E, ___m_OnFoot_Movement_3)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_OnFoot_Movement_3() const { return ___m_OnFoot_Movement_3; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_OnFoot_Movement_3() { return &___m_OnFoot_Movement_3; }
	inline void set_m_OnFoot_Movement_3(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_OnFoot_Movement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFoot_Movement_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFoot_Jump_4() { return static_cast<int32_t>(offsetof(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E, ___m_OnFoot_Jump_4)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_OnFoot_Jump_4() const { return ___m_OnFoot_Jump_4; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_OnFoot_Jump_4() { return &___m_OnFoot_Jump_4; }
	inline void set_m_OnFoot_Jump_4(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_OnFoot_Jump_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFoot_Jump_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFoot_Look_5() { return static_cast<int32_t>(offsetof(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E, ___m_OnFoot_Look_5)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_OnFoot_Look_5() const { return ___m_OnFoot_Look_5; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_OnFoot_Look_5() { return &___m_OnFoot_Look_5; }
	inline void set_m_OnFoot_Look_5(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_OnFoot_Look_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFoot_Look_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFoot_SprintStart_6() { return static_cast<int32_t>(offsetof(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E, ___m_OnFoot_SprintStart_6)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_OnFoot_SprintStart_6() const { return ___m_OnFoot_SprintStart_6; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_OnFoot_SprintStart_6() { return &___m_OnFoot_SprintStart_6; }
	inline void set_m_OnFoot_SprintStart_6(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_OnFoot_SprintStart_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFoot_SprintStart_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFoot_SprintFinish_7() { return static_cast<int32_t>(offsetof(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E, ___m_OnFoot_SprintFinish_7)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_OnFoot_SprintFinish_7() const { return ___m_OnFoot_SprintFinish_7; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_OnFoot_SprintFinish_7() { return &___m_OnFoot_SprintFinish_7; }
	inline void set_m_OnFoot_SprintFinish_7(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_OnFoot_SprintFinish_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFoot_SprintFinish_7), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___firstValue_1)); }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_Array_0)); }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_Array_0)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_Array_0() const { return ___m_Array_0; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// PlayerInput/OnFootActions
struct OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 
{
public:
	// PlayerInput PlayerInput/OnFootActions::m_Wrapper
	PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * ___m_Wrapper_0;

public:
	inline static int32_t get_offset_of_m_Wrapper_0() { return static_cast<int32_t>(offsetof(OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819, ___m_Wrapper_0)); }
	inline PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * get_m_Wrapper_0() const { return ___m_Wrapper_0; }
	inline PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E ** get_address_of_m_Wrapper_0() { return &___m_Wrapper_0; }
	inline void set_m_Wrapper_0(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * value)
	{
		___m_Wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Wrapper_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of PlayerInput/OnFootActions
struct OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshaled_pinvoke
{
	PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * ___m_Wrapper_0;
};
// Native definition for COM marshalling of PlayerInput/OnFootActions
struct OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshaled_com
{
	PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * ___m_Wrapper_0;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84 
{
public:
	// T System.Nullable`1::value
	ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84, ___value_0)); }
	inline ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  get_value_0() const { return ___value_0; }
	inline ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.CollisionFlags
struct CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.InputSystem.InputActionType
struct InputActionType_t913CC58784CA34E9791C18B15436C791CD465901 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t913CC58784CA34E9791C18B15436C791CD465901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
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

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
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
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
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

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_7;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_12;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingMask_7)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionMap_13)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnStarted_14)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_DevicesCount
	int32_t ___m_DevicesCount_9;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionAsset::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_10;

public:
	inline static int32_t get_offset_of_m_ActionMaps_5() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_ActionMaps_5)); }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* get_m_ActionMaps_5() const { return ___m_ActionMaps_5; }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580** get_address_of_m_ActionMaps_5() { return &___m_ActionMaps_5; }
	inline void set_m_ActionMaps_5(InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* value)
	{
		___m_ActionMaps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMaps_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemes_6() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_ControlSchemes_6)); }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* get_m_ControlSchemes_6() const { return ___m_ControlSchemes_6; }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533** get_address_of_m_ControlSchemes_6() { return &___m_ControlSchemes_6; }
	inline void set_m_ControlSchemes_6(InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* value)
	{
		___m_ControlSchemes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlSchemes_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStateForAllMaps_7() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_SharedStateForAllMaps_7)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_SharedStateForAllMaps_7() const { return ___m_SharedStateForAllMaps_7; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_SharedStateForAllMaps_7() { return &___m_SharedStateForAllMaps_7; }
	inline void set_m_SharedStateForAllMaps_7(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_SharedStateForAllMaps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStateForAllMaps_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_BindingMask_8)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_9() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_DevicesCount_9)); }
	inline int32_t get_m_DevicesCount_9() const { return ___m_DevicesCount_9; }
	inline int32_t* get_address_of_m_DevicesCount_9() { return &___m_DevicesCount_9; }
	inline void set_m_DevicesCount_9(int32_t value)
	{
		___m_DevicesCount_9 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_10() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_DevicesArray_10)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_10() const { return ___m_DevicesArray_10; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_10() { return &___m_DevicesArray_10; }
	inline void set_m_DevicesArray_10(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_10), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_10;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_11;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_DevicesCount
	int32_t ___m_DevicesCount_13;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_ActionCallbacks_15;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Asset_2() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Asset_2)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_2() const { return ___m_Asset_2; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_2() { return &___m_Asset_2; }
	inline void set_m_Asset_2(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actions_3() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Actions_3)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get_m_Actions_3() const { return ___m_Actions_3; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of_m_Actions_3() { return &___m_Actions_3; }
	inline void set_m_Actions_3(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		___m_Actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Bindings_4() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Bindings_4)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_Bindings_4() const { return ___m_Bindings_4; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_Bindings_4() { return &___m_Bindings_4; }
	inline void set_m_Bindings_4(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_Bindings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsForEachAction_5() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingsForEachAction_5)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_BindingsForEachAction_5() const { return ___m_BindingsForEachAction_5; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_BindingsForEachAction_5() { return &___m_BindingsForEachAction_5; }
	inline void set_m_BindingsForEachAction_5(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_BindingsForEachAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsForEachAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsForEachAction_6() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ControlsForEachAction_6)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ControlsForEachAction_6() const { return ___m_ControlsForEachAction_6; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ControlsForEachAction_6() { return &___m_ControlsForEachAction_6; }
	inline void set_m_ControlsForEachAction_6(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ControlsForEachAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsForEachAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledActionsCount_7() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_EnabledActionsCount_7)); }
	inline int32_t get_m_EnabledActionsCount_7() const { return ___m_EnabledActionsCount_7; }
	inline int32_t* get_address_of_m_EnabledActionsCount_7() { return &___m_EnabledActionsCount_7; }
	inline void set_m_EnabledActionsCount_7(int32_t value)
	{
		___m_EnabledActionsCount_7 = value;
	}

	inline static int32_t get_offset_of_m_SingletonAction_8() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_SingletonAction_8)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_SingletonAction_8() const { return ___m_SingletonAction_8; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_SingletonAction_8() { return &___m_SingletonAction_8; }
	inline void set_m_SingletonAction_8(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_SingletonAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndexInState_9() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_MapIndexInState_9)); }
	inline int32_t get_m_MapIndexInState_9() const { return ___m_MapIndexInState_9; }
	inline int32_t* get_address_of_m_MapIndexInState_9() { return &___m_MapIndexInState_9; }
	inline void set_m_MapIndexInState_9(int32_t value)
	{
		___m_MapIndexInState_9 = value;
	}

	inline static int32_t get_offset_of_m_State_10() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_State_10)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_10() const { return ___m_State_10; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_10() { return &___m_State_10; }
	inline void set_m_State_10(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeedToResolveBindings_11() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_NeedToResolveBindings_11)); }
	inline bool get_m_NeedToResolveBindings_11() const { return ___m_NeedToResolveBindings_11; }
	inline bool* get_address_of_m_NeedToResolveBindings_11() { return &___m_NeedToResolveBindings_11; }
	inline void set_m_NeedToResolveBindings_11(bool value)
	{
		___m_NeedToResolveBindings_11 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_12() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingMask_12)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_12() const { return ___m_BindingMask_12; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_12() { return &___m_BindingMask_12; }
	inline void set_m_BindingMask_12(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_13() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesCount_13)); }
	inline int32_t get_m_DevicesCount_13() const { return ___m_DevicesCount_13; }
	inline int32_t* get_address_of_m_DevicesCount_13() { return &___m_DevicesCount_13; }
	inline void set_m_DevicesCount_13(int32_t value)
	{
		___m_DevicesCount_13 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_14() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesArray_14)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_14() const { return ___m_DevicesArray_14; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_14() { return &___m_DevicesArray_14; }
	inline void set_m_DevicesArray_14(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionCallbacks_15() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ActionCallbacks_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_ActionCallbacks_15() const { return ___m_ActionCallbacks_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_ActionCallbacks_15() { return &___m_ActionCallbacks_15; }
	inline void set_m_ActionCallbacks_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_ActionCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_16;

public:
	inline static int32_t get_offset_of_s_DeferBindingResolution_16() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields, ___s_DeferBindingResolution_16)); }
	inline int32_t get_s_DeferBindingResolution_16() const { return ___s_DeferBindingResolution_16; }
	inline int32_t* get_address_of_s_DeferBindingResolution_16() { return &___s_DeferBindingResolution_16; }
	inline void set_s_DeferBindingResolution_16(int32_t value)
	{
		___s_DeferBindingResolution_16 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Destroy_Self
struct Destroy_Self_t419498E5C4FF739AAE7DBC675E62EA4F689EA7A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Destroy_Self::time_before_destroy
	float ___time_before_destroy_4;

public:
	inline static int32_t get_offset_of_time_before_destroy_4() { return static_cast<int32_t>(offsetof(Destroy_Self_t419498E5C4FF739AAE7DBC675E62EA4F689EA7A6, ___time_before_destroy_4)); }
	inline float get_time_before_destroy_4() const { return ___time_before_destroy_4; }
	inline float* get_address_of_time_before_destroy_4() { return &___time_before_destroy_4; }
	inline void set_time_before_destroy_4(float value)
	{
		___time_before_destroy_4 = value;
	}
};


// EnemyAI
struct EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AI.NavMeshAgent EnemyAI::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_4;
	// UnityEngine.Transform EnemyAI::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_5;
	// UnityEngine.LayerMask EnemyAI::whatIsGround
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatIsGround_6;
	// UnityEngine.LayerMask EnemyAI::whatIsPlayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatIsPlayer_7;
	// UnityEngine.ParticleSystem EnemyAI::deathEffect
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___deathEffect_8;
	// System.Single EnemyAI::health
	float ___health_9;
	// System.Single EnemyAI::enemydamagetoplayer
	float ___enemydamagetoplayer_10;
	// UnityEngine.Vector3 EnemyAI::walkPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___walkPoint_12;
	// System.Boolean EnemyAI::walkPointSet
	bool ___walkPointSet_13;
	// System.Single EnemyAI::walkPointRange
	float ___walkPointRange_14;
	// System.Single EnemyAI::timeBetweenAttacks
	float ___timeBetweenAttacks_15;
	// System.Boolean EnemyAI::alreadyAttacked
	bool ___alreadyAttacked_16;
	// System.Single EnemyAI::sightRange
	float ___sightRange_17;
	// System.Single EnemyAI::attackRange
	float ___attackRange_18;
	// System.Boolean EnemyAI::playerInSightRange
	bool ___playerInSightRange_19;
	// System.Boolean EnemyAI::playerInAttackRange
	bool ___playerInAttackRange_20;

public:
	inline static int32_t get_offset_of_agent_4() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___agent_4)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_4() const { return ___agent_4; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_4() { return &___agent_4; }
	inline void set_agent_4(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___player_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_5() const { return ___player_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_whatIsGround_6() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___whatIsGround_6)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatIsGround_6() const { return ___whatIsGround_6; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatIsGround_6() { return &___whatIsGround_6; }
	inline void set_whatIsGround_6(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatIsGround_6 = value;
	}

	inline static int32_t get_offset_of_whatIsPlayer_7() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___whatIsPlayer_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatIsPlayer_7() const { return ___whatIsPlayer_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatIsPlayer_7() { return &___whatIsPlayer_7; }
	inline void set_whatIsPlayer_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatIsPlayer_7 = value;
	}

	inline static int32_t get_offset_of_deathEffect_8() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___deathEffect_8)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_deathEffect_8() const { return ___deathEffect_8; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_deathEffect_8() { return &___deathEffect_8; }
	inline void set_deathEffect_8(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___deathEffect_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_8), (void*)value);
	}

	inline static int32_t get_offset_of_health_9() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___health_9)); }
	inline float get_health_9() const { return ___health_9; }
	inline float* get_address_of_health_9() { return &___health_9; }
	inline void set_health_9(float value)
	{
		___health_9 = value;
	}

	inline static int32_t get_offset_of_enemydamagetoplayer_10() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___enemydamagetoplayer_10)); }
	inline float get_enemydamagetoplayer_10() const { return ___enemydamagetoplayer_10; }
	inline float* get_address_of_enemydamagetoplayer_10() { return &___enemydamagetoplayer_10; }
	inline void set_enemydamagetoplayer_10(float value)
	{
		___enemydamagetoplayer_10 = value;
	}

	inline static int32_t get_offset_of_walkPoint_12() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___walkPoint_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_walkPoint_12() const { return ___walkPoint_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_walkPoint_12() { return &___walkPoint_12; }
	inline void set_walkPoint_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___walkPoint_12 = value;
	}

	inline static int32_t get_offset_of_walkPointSet_13() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___walkPointSet_13)); }
	inline bool get_walkPointSet_13() const { return ___walkPointSet_13; }
	inline bool* get_address_of_walkPointSet_13() { return &___walkPointSet_13; }
	inline void set_walkPointSet_13(bool value)
	{
		___walkPointSet_13 = value;
	}

	inline static int32_t get_offset_of_walkPointRange_14() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___walkPointRange_14)); }
	inline float get_walkPointRange_14() const { return ___walkPointRange_14; }
	inline float* get_address_of_walkPointRange_14() { return &___walkPointRange_14; }
	inline void set_walkPointRange_14(float value)
	{
		___walkPointRange_14 = value;
	}

	inline static int32_t get_offset_of_timeBetweenAttacks_15() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___timeBetweenAttacks_15)); }
	inline float get_timeBetweenAttacks_15() const { return ___timeBetweenAttacks_15; }
	inline float* get_address_of_timeBetweenAttacks_15() { return &___timeBetweenAttacks_15; }
	inline void set_timeBetweenAttacks_15(float value)
	{
		___timeBetweenAttacks_15 = value;
	}

	inline static int32_t get_offset_of_alreadyAttacked_16() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___alreadyAttacked_16)); }
	inline bool get_alreadyAttacked_16() const { return ___alreadyAttacked_16; }
	inline bool* get_address_of_alreadyAttacked_16() { return &___alreadyAttacked_16; }
	inline void set_alreadyAttacked_16(bool value)
	{
		___alreadyAttacked_16 = value;
	}

	inline static int32_t get_offset_of_sightRange_17() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___sightRange_17)); }
	inline float get_sightRange_17() const { return ___sightRange_17; }
	inline float* get_address_of_sightRange_17() { return &___sightRange_17; }
	inline void set_sightRange_17(float value)
	{
		___sightRange_17 = value;
	}

	inline static int32_t get_offset_of_attackRange_18() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___attackRange_18)); }
	inline float get_attackRange_18() const { return ___attackRange_18; }
	inline float* get_address_of_attackRange_18() { return &___attackRange_18; }
	inline void set_attackRange_18(float value)
	{
		___attackRange_18 = value;
	}

	inline static int32_t get_offset_of_playerInSightRange_19() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___playerInSightRange_19)); }
	inline bool get_playerInSightRange_19() const { return ___playerInSightRange_19; }
	inline bool* get_address_of_playerInSightRange_19() { return &___playerInSightRange_19; }
	inline void set_playerInSightRange_19(bool value)
	{
		___playerInSightRange_19 = value;
	}

	inline static int32_t get_offset_of_playerInAttackRange_20() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___playerInAttackRange_20)); }
	inline bool get_playerInAttackRange_20() const { return ___playerInAttackRange_20; }
	inline bool* get_address_of_playerInAttackRange_20() { return &___playerInAttackRange_20; }
	inline void set_playerInAttackRange_20(bool value)
	{
		___playerInAttackRange_20 = value;
	}
};

struct EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82_StaticFields
{
public:
	// System.Boolean EnemyAI::OneShotBaught
	bool ___OneShotBaught_11;

public:
	inline static int32_t get_offset_of_OneShotBaught_11() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82_StaticFields, ___OneShotBaught_11)); }
	inline bool get_OneShotBaught_11() const { return ___OneShotBaught_11; }
	inline bool* get_address_of_OneShotBaught_11() { return &___OneShotBaught_11; }
	inline void set_OneShotBaught_11(bool value)
	{
		___OneShotBaught_11 = value;
	}
};


// EnemySpawners
struct EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] EnemySpawners::spawners
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___spawners_4;
	// UnityEngine.GameObject EnemySpawners::enemy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy_5;
	// System.Single EnemySpawners::spawnCooldown
	float ___spawnCooldown_6;
	// System.Int32 EnemySpawners::num_spawners
	int32_t ___num_spawners_7;
	// System.Single EnemySpawners::numSeconds
	float ___numSeconds_8;

public:
	inline static int32_t get_offset_of_spawners_4() { return static_cast<int32_t>(offsetof(EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624, ___spawners_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_spawners_4() const { return ___spawners_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_spawners_4() { return &___spawners_4; }
	inline void set_spawners_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___spawners_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawners_4), (void*)value);
	}

	inline static int32_t get_offset_of_enemy_5() { return static_cast<int32_t>(offsetof(EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624, ___enemy_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemy_5() const { return ___enemy_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemy_5() { return &___enemy_5; }
	inline void set_enemy_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_5), (void*)value);
	}

	inline static int32_t get_offset_of_spawnCooldown_6() { return static_cast<int32_t>(offsetof(EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624, ___spawnCooldown_6)); }
	inline float get_spawnCooldown_6() const { return ___spawnCooldown_6; }
	inline float* get_address_of_spawnCooldown_6() { return &___spawnCooldown_6; }
	inline void set_spawnCooldown_6(float value)
	{
		___spawnCooldown_6 = value;
	}

	inline static int32_t get_offset_of_num_spawners_7() { return static_cast<int32_t>(offsetof(EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624, ___num_spawners_7)); }
	inline int32_t get_num_spawners_7() const { return ___num_spawners_7; }
	inline int32_t* get_address_of_num_spawners_7() { return &___num_spawners_7; }
	inline void set_num_spawners_7(int32_t value)
	{
		___num_spawners_7 = value;
	}

	inline static int32_t get_offset_of_numSeconds_8() { return static_cast<int32_t>(offsetof(EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624, ___numSeconds_8)); }
	inline float get_numSeconds_8() const { return ___numSeconds_8; }
	inline float* get_address_of_numSeconds_8() { return &___numSeconds_8; }
	inline void set_numSeconds_8(float value)
	{
		___numSeconds_8 = value;
	}
};


// GameOver
struct GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single GameOver::fadeDuration
	float ___fadeDuration_4;
	// UnityEngine.GameObject GameOver::enemy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy_5;
	// UnityEngine.GameObject GameOver::GotHitScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GotHitScreen_6;
	// System.Single GameOver::PlayerHealth
	float ___PlayerHealth_7;
	// UnityEngine.CanvasGroup GameOver::exitBackgroundImageCanvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___exitBackgroundImageCanvasGroup_8;
	// UnityEngine.Canvas GameOver::DisableThisUI
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___DisableThisUI_9;
	// UnityEngine.UI.Image GameOver::healthBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___healthBar_10;
	// UnityEngine.UI.Image GameOver::shieldBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___shieldBar_11;
	// System.Boolean GameOver::m_IsPlayerDead
	bool ___m_IsPlayerDead_12;
	// System.Single GameOver::m_Timer
	float ___m_Timer_13;

public:
	inline static int32_t get_offset_of_fadeDuration_4() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___fadeDuration_4)); }
	inline float get_fadeDuration_4() const { return ___fadeDuration_4; }
	inline float* get_address_of_fadeDuration_4() { return &___fadeDuration_4; }
	inline void set_fadeDuration_4(float value)
	{
		___fadeDuration_4 = value;
	}

	inline static int32_t get_offset_of_enemy_5() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___enemy_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemy_5() const { return ___enemy_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemy_5() { return &___enemy_5; }
	inline void set_enemy_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_5), (void*)value);
	}

	inline static int32_t get_offset_of_GotHitScreen_6() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___GotHitScreen_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GotHitScreen_6() const { return ___GotHitScreen_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GotHitScreen_6() { return &___GotHitScreen_6; }
	inline void set_GotHitScreen_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GotHitScreen_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GotHitScreen_6), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerHealth_7() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___PlayerHealth_7)); }
	inline float get_PlayerHealth_7() const { return ___PlayerHealth_7; }
	inline float* get_address_of_PlayerHealth_7() { return &___PlayerHealth_7; }
	inline void set_PlayerHealth_7(float value)
	{
		___PlayerHealth_7 = value;
	}

	inline static int32_t get_offset_of_exitBackgroundImageCanvasGroup_8() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___exitBackgroundImageCanvasGroup_8)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_exitBackgroundImageCanvasGroup_8() const { return ___exitBackgroundImageCanvasGroup_8; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_exitBackgroundImageCanvasGroup_8() { return &___exitBackgroundImageCanvasGroup_8; }
	inline void set_exitBackgroundImageCanvasGroup_8(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___exitBackgroundImageCanvasGroup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exitBackgroundImageCanvasGroup_8), (void*)value);
	}

	inline static int32_t get_offset_of_DisableThisUI_9() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___DisableThisUI_9)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_DisableThisUI_9() const { return ___DisableThisUI_9; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_DisableThisUI_9() { return &___DisableThisUI_9; }
	inline void set_DisableThisUI_9(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___DisableThisUI_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisableThisUI_9), (void*)value);
	}

	inline static int32_t get_offset_of_healthBar_10() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___healthBar_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_healthBar_10() const { return ___healthBar_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_healthBar_10() { return &___healthBar_10; }
	inline void set_healthBar_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___healthBar_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBar_10), (void*)value);
	}

	inline static int32_t get_offset_of_shieldBar_11() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___shieldBar_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_shieldBar_11() const { return ___shieldBar_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_shieldBar_11() { return &___shieldBar_11; }
	inline void set_shieldBar_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___shieldBar_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shieldBar_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsPlayerDead_12() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___m_IsPlayerDead_12)); }
	inline bool get_m_IsPlayerDead_12() const { return ___m_IsPlayerDead_12; }
	inline bool* get_address_of_m_IsPlayerDead_12() { return &___m_IsPlayerDead_12; }
	inline void set_m_IsPlayerDead_12(bool value)
	{
		___m_IsPlayerDead_12 = value;
	}

	inline static int32_t get_offset_of_m_Timer_13() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___m_Timer_13)); }
	inline float get_m_Timer_13() const { return ___m_Timer_13; }
	inline float* get_address_of_m_Timer_13() { return &___m_Timer_13; }
	inline void set_m_Timer_13(float value)
	{
		___m_Timer_13 = value;
	}
};


// Gun
struct Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Gun::damage
	float ___damage_4;
	// System.Single Gun::range
	float ___range_5;
	// UnityEngine.Camera Gun::fpsCam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___fpsCam_7;
	// UnityEngine.GameObject Gun::impactEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___impactEffect_8;
	// UnityEngine.AudioSource Gun::shootingSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___shootingSound_9;
	// UnityEngine.UI.Text Gun::dollarText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___dollarText_10;
	// System.Single Gun::dollars
	float ___dollars_11;
	// UnityEngine.UI.Image Gun::shieldBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___shieldBar_12;
	// System.Boolean Gun::alreadybought
	bool ___alreadybought_13;

public:
	inline static int32_t get_offset_of_damage_4() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___damage_4)); }
	inline float get_damage_4() const { return ___damage_4; }
	inline float* get_address_of_damage_4() { return &___damage_4; }
	inline void set_damage_4(float value)
	{
		___damage_4 = value;
	}

	inline static int32_t get_offset_of_range_5() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___range_5)); }
	inline float get_range_5() const { return ___range_5; }
	inline float* get_address_of_range_5() { return &___range_5; }
	inline void set_range_5(float value)
	{
		___range_5 = value;
	}

	inline static int32_t get_offset_of_fpsCam_7() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___fpsCam_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_fpsCam_7() const { return ___fpsCam_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_fpsCam_7() { return &___fpsCam_7; }
	inline void set_fpsCam_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___fpsCam_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fpsCam_7), (void*)value);
	}

	inline static int32_t get_offset_of_impactEffect_8() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___impactEffect_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_impactEffect_8() const { return ___impactEffect_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_impactEffect_8() { return &___impactEffect_8; }
	inline void set_impactEffect_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___impactEffect_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impactEffect_8), (void*)value);
	}

	inline static int32_t get_offset_of_shootingSound_9() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___shootingSound_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_shootingSound_9() const { return ___shootingSound_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_shootingSound_9() { return &___shootingSound_9; }
	inline void set_shootingSound_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___shootingSound_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shootingSound_9), (void*)value);
	}

	inline static int32_t get_offset_of_dollarText_10() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___dollarText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_dollarText_10() const { return ___dollarText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_dollarText_10() { return &___dollarText_10; }
	inline void set_dollarText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___dollarText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dollarText_10), (void*)value);
	}

	inline static int32_t get_offset_of_dollars_11() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___dollars_11)); }
	inline float get_dollars_11() const { return ___dollars_11; }
	inline float* get_address_of_dollars_11() { return &___dollars_11; }
	inline void set_dollars_11(float value)
	{
		___dollars_11 = value;
	}

	inline static int32_t get_offset_of_shieldBar_12() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___shieldBar_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_shieldBar_12() const { return ___shieldBar_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_shieldBar_12() { return &___shieldBar_12; }
	inline void set_shieldBar_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___shieldBar_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shieldBar_12), (void*)value);
	}

	inline static int32_t get_offset_of_alreadybought_13() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___alreadybought_13)); }
	inline bool get_alreadybought_13() const { return ___alreadybought_13; }
	inline bool* get_address_of_alreadybought_13() { return &___alreadybought_13; }
	inline void set_alreadybought_13(bool value)
	{
		___alreadybought_13 = value;
	}
};

struct Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields
{
public:
	// System.Single Gun::PlayerShield
	float ___PlayerShield_6;

public:
	inline static int32_t get_offset_of_PlayerShield_6() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields, ___PlayerShield_6)); }
	inline float get_PlayerShield_6() const { return ___PlayerShield_6; }
	inline float* get_address_of_PlayerShield_6() { return &___PlayerShield_6; }
	inline void set_PlayerShield_6(float value)
	{
		___PlayerShield_6 = value;
	}
};


// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerInput InputManager::playerInput
	PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * ___playerInput_4;
	// PlayerInput/OnFootActions InputManager::onFoot
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819  ___onFoot_5;
	// PlayerMotor InputManager::motor
	PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * ___motor_6;
	// PlayerLook InputManager::look
	PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * ___look_7;

public:
	inline static int32_t get_offset_of_playerInput_4() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___playerInput_4)); }
	inline PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * get_playerInput_4() const { return ___playerInput_4; }
	inline PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E ** get_address_of_playerInput_4() { return &___playerInput_4; }
	inline void set_playerInput_4(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * value)
	{
		___playerInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerInput_4), (void*)value);
	}

	inline static int32_t get_offset_of_onFoot_5() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___onFoot_5)); }
	inline OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819  get_onFoot_5() const { return ___onFoot_5; }
	inline OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * get_address_of_onFoot_5() { return &___onFoot_5; }
	inline void set_onFoot_5(OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819  value)
	{
		___onFoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___onFoot_5))->___m_Wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_motor_6() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___motor_6)); }
	inline PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * get_motor_6() const { return ___motor_6; }
	inline PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 ** get_address_of_motor_6() { return &___motor_6; }
	inline void set_motor_6(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * value)
	{
		___motor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___motor_6), (void*)value);
	}

	inline static int32_t get_offset_of_look_7() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___look_7)); }
	inline PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * get_look_7() const { return ___look_7; }
	inline PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 ** get_address_of_look_7() { return &___look_7; }
	inline void set_look_7(PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * value)
	{
		___look_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___look_7), (void*)value);
	}
};


// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PauseMenu::pauseMenuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenuUI_5;
	// UnityEngine.GameObject PauseMenu::shopMenuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopMenuUI_6;
	// UnityEngine.GameObject PauseMenu::UICanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___UICanvas_7;
	// UnityEngine.GameObject PauseMenu::crosshair
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___crosshair_8;
	// UnityEngine.UI.Slider PauseMenu::sensSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sensSlider_9;
	// UnityEngine.UI.Slider PauseMenu::musicVolumeSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___musicVolumeSlider_10;
	// UnityEngine.AudioSource PauseMenu::music
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___music_11;
	// System.Int32 PauseMenu::level
	int32_t ___level_12;

public:
	inline static int32_t get_offset_of_pauseMenuUI_5() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___pauseMenuUI_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenuUI_5() const { return ___pauseMenuUI_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenuUI_5() { return &___pauseMenuUI_5; }
	inline void set_pauseMenuUI_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenuUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenuUI_5), (void*)value);
	}

	inline static int32_t get_offset_of_shopMenuUI_6() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___shopMenuUI_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopMenuUI_6() const { return ___shopMenuUI_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopMenuUI_6() { return &___shopMenuUI_6; }
	inline void set_shopMenuUI_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopMenuUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopMenuUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_UICanvas_7() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___UICanvas_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_UICanvas_7() const { return ___UICanvas_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_UICanvas_7() { return &___UICanvas_7; }
	inline void set_UICanvas_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___UICanvas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UICanvas_7), (void*)value);
	}

	inline static int32_t get_offset_of_crosshair_8() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___crosshair_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_crosshair_8() const { return ___crosshair_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_crosshair_8() { return &___crosshair_8; }
	inline void set_crosshair_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___crosshair_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crosshair_8), (void*)value);
	}

	inline static int32_t get_offset_of_sensSlider_9() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___sensSlider_9)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sensSlider_9() const { return ___sensSlider_9; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sensSlider_9() { return &___sensSlider_9; }
	inline void set_sensSlider_9(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sensSlider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sensSlider_9), (void*)value);
	}

	inline static int32_t get_offset_of_musicVolumeSlider_10() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___musicVolumeSlider_10)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_musicVolumeSlider_10() const { return ___musicVolumeSlider_10; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_musicVolumeSlider_10() { return &___musicVolumeSlider_10; }
	inline void set_musicVolumeSlider_10(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___musicVolumeSlider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicVolumeSlider_10), (void*)value);
	}

	inline static int32_t get_offset_of_music_11() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___music_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_music_11() const { return ___music_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_music_11() { return &___music_11; }
	inline void set_music_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___music_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___music_11), (void*)value);
	}

	inline static int32_t get_offset_of_level_12() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___level_12)); }
	inline int32_t get_level_12() const { return ___level_12; }
	inline int32_t* get_address_of_level_12() { return &___level_12; }
	inline void set_level_12(int32_t value)
	{
		___level_12 = value;
	}
};

struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields
{
public:
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_4;

public:
	inline static int32_t get_offset_of_isPaused_4() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___isPaused_4)); }
	inline bool get_isPaused_4() const { return ___isPaused_4; }
	inline bool* get_address_of_isPaused_4() { return &___isPaused_4; }
	inline void set_isPaused_4(bool value)
	{
		___isPaused_4 = value;
	}
};


// PlayerLook
struct PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera PlayerLook::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_4;
	// System.Single PlayerLook::xRotation
	float ___xRotation_5;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591, ___cam_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_4() const { return ___cam_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_4), (void*)value);
	}

	inline static int32_t get_offset_of_xRotation_5() { return static_cast<int32_t>(offsetof(PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591, ___xRotation_5)); }
	inline float get_xRotation_5() const { return ___xRotation_5; }
	inline float* get_address_of_xRotation_5() { return &___xRotation_5; }
	inline void set_xRotation_5(float value)
	{
		___xRotation_5 = value;
	}
};


// PlayerMotor
struct PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.CharacterController PlayerMotor::controller
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___controller_4;
	// UnityEngine.Vector3 PlayerMotor::playerVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___playerVelocity_5;
	// System.Boolean PlayerMotor::isGrounded
	bool ___isGrounded_6;
	// System.Single PlayerMotor::speed
	float ___speed_7;
	// System.Single PlayerMotor::gravity
	float ___gravity_8;
	// System.Single PlayerMotor::jumpHeight
	float ___jumpHeight_9;
	// System.Boolean PlayerMotor::isSprinting
	bool ___isSprinting_10;
	// UnityEngine.UI.Image PlayerMotor::walkImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___walkImage_11;
	// UnityEngine.UI.Image PlayerMotor::sprintImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___sprintImage_12;
	// UnityEngine.GameObject PlayerMotor::walkIcon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___walkIcon_13;
	// UnityEngine.GameObject PlayerMotor::sprintIcon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sprintIcon_14;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___controller_4)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get_controller_4() const { return ___controller_4; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerVelocity_5() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___playerVelocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_playerVelocity_5() const { return ___playerVelocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_playerVelocity_5() { return &___playerVelocity_5; }
	inline void set_playerVelocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___playerVelocity_5 = value;
	}

	inline static int32_t get_offset_of_isGrounded_6() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___isGrounded_6)); }
	inline bool get_isGrounded_6() const { return ___isGrounded_6; }
	inline bool* get_address_of_isGrounded_6() { return &___isGrounded_6; }
	inline void set_isGrounded_6(bool value)
	{
		___isGrounded_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_gravity_8() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___gravity_8)); }
	inline float get_gravity_8() const { return ___gravity_8; }
	inline float* get_address_of_gravity_8() { return &___gravity_8; }
	inline void set_gravity_8(float value)
	{
		___gravity_8 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_9() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___jumpHeight_9)); }
	inline float get_jumpHeight_9() const { return ___jumpHeight_9; }
	inline float* get_address_of_jumpHeight_9() { return &___jumpHeight_9; }
	inline void set_jumpHeight_9(float value)
	{
		___jumpHeight_9 = value;
	}

	inline static int32_t get_offset_of_isSprinting_10() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___isSprinting_10)); }
	inline bool get_isSprinting_10() const { return ___isSprinting_10; }
	inline bool* get_address_of_isSprinting_10() { return &___isSprinting_10; }
	inline void set_isSprinting_10(bool value)
	{
		___isSprinting_10 = value;
	}

	inline static int32_t get_offset_of_walkImage_11() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___walkImage_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_walkImage_11() const { return ___walkImage_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_walkImage_11() { return &___walkImage_11; }
	inline void set_walkImage_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___walkImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkImage_11), (void*)value);
	}

	inline static int32_t get_offset_of_sprintImage_12() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___sprintImage_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_sprintImage_12() const { return ___sprintImage_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_sprintImage_12() { return &___sprintImage_12; }
	inline void set_sprintImage_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___sprintImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprintImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_walkIcon_13() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___walkIcon_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_walkIcon_13() const { return ___walkIcon_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_walkIcon_13() { return &___walkIcon_13; }
	inline void set_walkIcon_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___walkIcon_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkIcon_13), (void*)value);
	}

	inline static int32_t get_offset_of_sprintIcon_14() { return static_cast<int32_t>(offsetof(PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52, ___sprintIcon_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sprintIcon_14() const { return ___sprintIcon_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sprintIcon_14() { return &___sprintIcon_14; }
	inline void set_sprintIcon_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sprintIcon_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprintIcon_14), (void*)value);
	}
};


// PowerUps
struct PowerUps_t4E93511FA039BB2FA3641B512482CA737FB11533  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Scene1_Score
struct Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Scene1_Score::menuScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___menuScore_4;
	// UnityEngine.UI.Text Scene1_Score::timerTextValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerTextValue_5;
	// System.Single Scene1_Score::timer
	float ___timer_6;
	// System.Int32 Scene1_Score::seconds
	int32_t ___seconds_7;
	// System.String Scene1_Score::sceneName
	String_t* ___sceneName_9;
	// UnityEngine.GameObject Scene1_Score::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_10;

public:
	inline static int32_t get_offset_of_menuScore_4() { return static_cast<int32_t>(offsetof(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA, ___menuScore_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_menuScore_4() const { return ___menuScore_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_menuScore_4() { return &___menuScore_4; }
	inline void set_menuScore_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___menuScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_timerTextValue_5() { return static_cast<int32_t>(offsetof(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA, ___timerTextValue_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerTextValue_5() const { return ___timerTextValue_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerTextValue_5() { return &___timerTextValue_5; }
	inline void set_timerTextValue_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerTextValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerTextValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_seconds_7() { return static_cast<int32_t>(offsetof(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA, ___seconds_7)); }
	inline int32_t get_seconds_7() const { return ___seconds_7; }
	inline int32_t* get_address_of_seconds_7() { return &___seconds_7; }
	inline void set_seconds_7(int32_t value)
	{
		___seconds_7 = value;
	}

	inline static int32_t get_offset_of_sceneName_9() { return static_cast<int32_t>(offsetof(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA, ___sceneName_9)); }
	inline String_t* get_sceneName_9() const { return ___sceneName_9; }
	inline String_t** get_address_of_sceneName_9() { return &___sceneName_9; }
	inline void set_sceneName_9(String_t* value)
	{
		___sceneName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_9), (void*)value);
	}

	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA, ___player_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_10() const { return ___player_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_10), (void*)value);
	}
};

struct Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_StaticFields
{
public:
	// System.Int32 Scene1_Score::s1Score
	int32_t ___s1Score_8;

public:
	inline static int32_t get_offset_of_s1Score_8() { return static_cast<int32_t>(offsetof(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_StaticFields, ___s1Score_8)); }
	inline int32_t get_s1Score_8() const { return ___s1Score_8; }
	inline int32_t* get_address_of_s1Score_8() { return &___s1Score_8; }
	inline void set_s1Score_8(int32_t value)
	{
		___s1Score_8 = value;
	}
};


// Scene2_Score
struct Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Scene2_Score::menuScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___menuScore_4;
	// UnityEngine.UI.Text Scene2_Score::timerTextValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerTextValue_5;
	// System.Single Scene2_Score::timer
	float ___timer_6;
	// System.Int32 Scene2_Score::seconds
	int32_t ___seconds_7;
	// System.String Scene2_Score::sceneName
	String_t* ___sceneName_9;
	// UnityEngine.GameObject Scene2_Score::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_10;

public:
	inline static int32_t get_offset_of_menuScore_4() { return static_cast<int32_t>(offsetof(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0, ___menuScore_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_menuScore_4() const { return ___menuScore_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_menuScore_4() { return &___menuScore_4; }
	inline void set_menuScore_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___menuScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_timerTextValue_5() { return static_cast<int32_t>(offsetof(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0, ___timerTextValue_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerTextValue_5() const { return ___timerTextValue_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerTextValue_5() { return &___timerTextValue_5; }
	inline void set_timerTextValue_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerTextValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerTextValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_seconds_7() { return static_cast<int32_t>(offsetof(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0, ___seconds_7)); }
	inline int32_t get_seconds_7() const { return ___seconds_7; }
	inline int32_t* get_address_of_seconds_7() { return &___seconds_7; }
	inline void set_seconds_7(int32_t value)
	{
		___seconds_7 = value;
	}

	inline static int32_t get_offset_of_sceneName_9() { return static_cast<int32_t>(offsetof(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0, ___sceneName_9)); }
	inline String_t* get_sceneName_9() const { return ___sceneName_9; }
	inline String_t** get_address_of_sceneName_9() { return &___sceneName_9; }
	inline void set_sceneName_9(String_t* value)
	{
		___sceneName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_9), (void*)value);
	}

	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0, ___player_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_10() const { return ___player_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_10), (void*)value);
	}
};

struct Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_StaticFields
{
public:
	// System.Int32 Scene2_Score::s2Score
	int32_t ___s2Score_8;

public:
	inline static int32_t get_offset_of_s2Score_8() { return static_cast<int32_t>(offsetof(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_StaticFields, ___s2Score_8)); }
	inline int32_t get_s2Score_8() const { return ___s2Score_8; }
	inline int32_t* get_address_of_s2Score_8() { return &___s2Score_8; }
	inline void set_s2Score_8(int32_t value)
	{
		___s2Score_8 = value;
	}
};


// Scene3_Score
struct Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Scene3_Score::menuScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___menuScore_4;
	// UnityEngine.UI.Text Scene3_Score::timerTextValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerTextValue_5;
	// System.Single Scene3_Score::timer
	float ___timer_6;
	// System.Int32 Scene3_Score::seconds
	int32_t ___seconds_7;
	// System.String Scene3_Score::sceneName
	String_t* ___sceneName_9;
	// UnityEngine.GameObject Scene3_Score::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_10;

public:
	inline static int32_t get_offset_of_menuScore_4() { return static_cast<int32_t>(offsetof(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF, ___menuScore_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_menuScore_4() const { return ___menuScore_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_menuScore_4() { return &___menuScore_4; }
	inline void set_menuScore_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___menuScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_timerTextValue_5() { return static_cast<int32_t>(offsetof(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF, ___timerTextValue_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerTextValue_5() const { return ___timerTextValue_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerTextValue_5() { return &___timerTextValue_5; }
	inline void set_timerTextValue_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerTextValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerTextValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_seconds_7() { return static_cast<int32_t>(offsetof(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF, ___seconds_7)); }
	inline int32_t get_seconds_7() const { return ___seconds_7; }
	inline int32_t* get_address_of_seconds_7() { return &___seconds_7; }
	inline void set_seconds_7(int32_t value)
	{
		___seconds_7 = value;
	}

	inline static int32_t get_offset_of_sceneName_9() { return static_cast<int32_t>(offsetof(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF, ___sceneName_9)); }
	inline String_t* get_sceneName_9() const { return ___sceneName_9; }
	inline String_t** get_address_of_sceneName_9() { return &___sceneName_9; }
	inline void set_sceneName_9(String_t* value)
	{
		___sceneName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_9), (void*)value);
	}

	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF, ___player_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_10() const { return ___player_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_10), (void*)value);
	}
};

struct Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_StaticFields
{
public:
	// System.Int32 Scene3_Score::s3Score
	int32_t ___s3Score_8;

public:
	inline static int32_t get_offset_of_s3Score_8() { return static_cast<int32_t>(offsetof(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_StaticFields, ___s3Score_8)); }
	inline int32_t get_s3Score_8() const { return ___s3Score_8; }
	inline int32_t* get_address_of_s3Score_8() { return &___s3Score_8; }
	inline void set_s3Score_8(int32_t value)
	{
		___s3Score_8 = value;
	}
};


// SettingsMenu
struct SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider SettingsMenu::sensSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sensSlider_4;
	// UnityEngine.UI.Slider SettingsMenu::musicVolumeSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___musicVolumeSlider_5;
	// UnityEngine.AudioSource SettingsMenu::music
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___music_6;

public:
	inline static int32_t get_offset_of_sensSlider_4() { return static_cast<int32_t>(offsetof(SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250, ___sensSlider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sensSlider_4() const { return ___sensSlider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sensSlider_4() { return &___sensSlider_4; }
	inline void set_sensSlider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sensSlider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sensSlider_4), (void*)value);
	}

	inline static int32_t get_offset_of_musicVolumeSlider_5() { return static_cast<int32_t>(offsetof(SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250, ___musicVolumeSlider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_musicVolumeSlider_5() const { return ___musicVolumeSlider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_musicVolumeSlider_5() { return &___musicVolumeSlider_5; }
	inline void set_musicVolumeSlider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___musicVolumeSlider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicVolumeSlider_5), (void*)value);
	}

	inline static int32_t get_offset_of_music_6() { return static_cast<int32_t>(offsetof(SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250, ___music_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_music_6() const { return ___music_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_music_6() { return &___music_6; }
	inline void set_music_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___music_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___music_6), (void*)value);
	}
};


// StartMenu
struct StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider StartMenu::sensSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sensSlider_6;
	// UnityEngine.AudioSource StartMenu::music
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___music_7;

public:
	inline static int32_t get_offset_of_sensSlider_6() { return static_cast<int32_t>(offsetof(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3, ___sensSlider_6)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sensSlider_6() const { return ___sensSlider_6; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sensSlider_6() { return &___sensSlider_6; }
	inline void set_sensSlider_6(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sensSlider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sensSlider_6), (void*)value);
	}

	inline static int32_t get_offset_of_music_7() { return static_cast<int32_t>(offsetof(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3, ___music_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_music_7() const { return ___music_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_music_7() { return &___music_7; }
	inline void set_music_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___music_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___music_7), (void*)value);
	}
};

struct StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields
{
public:
	// System.Single StartMenu::sens
	float ___sens_4;
	// System.Single StartMenu::musicVolume
	float ___musicVolume_5;

public:
	inline static int32_t get_offset_of_sens_4() { return static_cast<int32_t>(offsetof(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields, ___sens_4)); }
	inline float get_sens_4() const { return ___sens_4; }
	inline float* get_address_of_sens_4() { return &___sens_4; }
	inline void set_sens_4(float value)
	{
		___sens_4 = value;
	}

	inline static int32_t get_offset_of_musicVolume_5() { return static_cast<int32_t>(offsetof(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields, ___musicVolume_5)); }
	inline float get_musicVolume_5() const { return ___musicVolume_5; }
	inline float* get_address_of_musicVolume_5() { return &___musicVolume_5; }
	inline void set_musicVolume_5(float value)
	{
		___musicVolume_5 = value;
	}
};


// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Timer::timerTextValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerTextValue_4;
	// System.Single Timer::seconds
	float ___seconds_5;

public:
	inline static int32_t get_offset_of_timerTextValue_4() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___timerTextValue_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerTextValue_4() const { return ___timerTextValue_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerTextValue_4() { return &___timerTextValue_4; }
	inline void set_timerTextValue_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerTextValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerTextValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_seconds_5() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___seconds_5)); }
	inline float get_seconds_5() const { return ___seconds_5; }
	inline float* get_address_of_seconds_5() { return &___seconds_5; }
	inline void set_seconds_5(float value)
	{
		___seconds_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);

// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m6DFD61C841CEBFDE6645689279AA6E31297B002B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Void EnemyAI::Patroling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Patroling_mAC8BB15FB3CB1C6FF6AE4B37151CFFB8C8F26106 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method);
// System.Void EnemyAI::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_ChasePlayer_mDE9D8C1FADBD9A1A2DCF0710B344B2744C3B8553 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method);
// System.Void EnemyAI::AttackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_AttackPlayer_mC2241855AA45978031FB4A35173C33287634E037 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method);
// System.Void EnemyAI::SearchWalkPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_SearchWalkPoint_m636C77903FB1198ED1F21FF8E89039CF9FC29EA0 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m09F21E13465121A73F19C07FC5F5314CF15ACD15 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameOver>()
inline GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GameOver::PlayerTakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_PlayerTakeDamage_m8B9724B71139F73A894E8862CDF855A200954CC8 (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, float ___damage0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void EnemyAI::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Die_m0067FEB2BE98B3CAF4FAD2A26660F0C8EE20899E (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void EnemySpawners::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawners_SpawnEnemy_mD8B10CA99DFA508F6DFF6F2C2DEF739BD62AC178 (EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GameOver::EndLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_EndLevel_m47D1B1E8DC6C75A36A46565DCBD3528E7AC4E7CC (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void Gun::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Shoot_mBF898A288AE753B55835CACBDA1977CC28C3C5B0 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<EnemyAI>()
inline EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * Component_GetComponent_TisEnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82_m0A1D2AEFC6A1D640C29515A8BDAB763A75D0AE12 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 EnemyAI::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyAI_TakeDamage_m2EA67386E167EA35DC8755D9C64062B8D6DEC9CA (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, float ___damage0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m84EAB041CD5C8D268A3C5741EC3A70B5F1E47B20 (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method);
// PlayerInput/OnFootActions PlayerInput::get_OnFoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819  PlayerInput_get_OnFoot_m2CA1EEAA308777B05F76BF2CB995E86F755B1B2D (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerMotor>()
inline PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * Component_GetComponent_TisPlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52_mA7F0D78FE52448891FC574008532A13AA34EA312 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<PlayerLook>()
inline PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * Component_GetComponent_TisPlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591_m5983BEDAEE953E6B593A931BF86DC832B6436F1D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0 (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_SprintStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_SprintFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared)(__this, method);
}
// System.Void PlayerMotor::ProcessMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_ProcessMove_mDA94C8F58FABE93E5DF73B3ED447796AF90D807C (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// System.Void PlayerLook::ProcessLook(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLook_ProcessLook_m7F004A844FF0A249BED80937668E6EB3572A9E42 (PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input0, const RuntimeMethod* method);
// System.Void PlayerInput/OnFootActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFootActions_Enable_m745E08E639B1032378BFAA274140CB42A5D0504F (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// System.Void PlayerInput/OnFootActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFootActions_Disable_m4BA006D5625CDBBA66B9BF4542B42C49C738902A (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// System.Void PlayerMotor::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Jump_mE15EB03505EB22FECE8C2FFD77968E0C108D4278 (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method);
// System.Void PlayerMotor::SprintPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_SprintPressed_m246BD462BD432579E326FA4BCA8D37C169193BCB (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method);
// System.Void PlayerMotor::SprintReleased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_SprintReleased_m098F4D702E1D5435D5E255E2E876533E06CF9826 (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * InputActionAsset_FromJson_m85BD957DA42DE323A6FFB6A262A39A65EFD6A698 (String_t* ___json0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset PlayerInput::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * InputActionAsset_FindActionMap_m26AEF35E59D7739FC7BF8E985085ED02CC42CA70 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_m8B3F08D6BB04076802DFFF80E4C8606A2F78753F (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___value0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  InputActionAsset_get_devices_m1144659F84189F26DF62C81AD3E3CB59D91E2233 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m719AC35B8D32694CDDB432D38BBE670BFE4A53D5 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  InputActionAsset_get_controlSchemes_m9FACEA3E979F8EAAA228ED9390E80E05318C4A60 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_m792C3FAB58851FC223273425F7D2C39562BDE40D (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___action0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_mEA39637BFE5F6916DEDC5C99080128CEDB79A3B6 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_GetEnumerator_mB336E324CBA4DF0E1B13334D8D79891B4E984E68 (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_mC9C209D6E73F93865238FA20C9CA5B864F53E647 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m8879D95AF1BC47E7406769B0C490592D313D6269 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void PlayerInput/OnFootActions::.ctor(PlayerInput)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFootActions__ctor_m83748B1441D251D2076151AD42964332B6FC76AD_inline (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * ___wrapper0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m327A1A1940F225FE81E751F255316BB0D8698CBC (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60 (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___motion0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap PlayerInput/OnFootActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * OnFootActions_Get_mC65F807CD3EC1ABC60701D6C6B45E60BD2F2D1E5 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Boolean PlayerInput/OnFootActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnFootActions_get_enabled_mFA4415846946AFBA8765B4E6D3A2B98809F762B6 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void PlayerInput/OnFootActions::SetCallbacks(PlayerInput/IOnFootActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFootActions_SetCallbacks_m37F58E1A81156C33CFF5911F7FDB8766229BA378 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Destroy_Self::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_Self_Start_mC6AB39B7A00BE872C4DB587FDAFE8AE38DDF5F0C (Destroy_Self_t419498E5C4FF739AAE7DBC675E62EA4F689EA7A6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Destroy_Self::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_Self_Update_mE39E3485C6FC75C6014274F1FE1CA737B40E6840 (Destroy_Self_t419498E5C4FF739AAE7DBC675E62EA4F689EA7A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time_before_destroy -= Time.deltaTime;
		float L_0 = __this->get_time_before_destroy_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_before_destroy_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if(time_before_destroy <= 0.0f)
		float L_2 = __this->get_time_before_destroy_4();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Destroy_Self::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_Self__ctor_m656CA88C94CFF3A999739ACE4CC5CBDA520019B3 (Destroy_Self_t419498E5C4FF739AAE7DBC675E62EA4F689EA7A6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyAI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Awake_m0BC47B4A1D3BB5A7FE4802BFE30BA706F6C50397 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_player_5(L_1);
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_2;
		L_2 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_agent_4(L_2);
		// }
		return;
	}
}
// System.Void EnemyAI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Update_mBB23B2D10604094D0D5BDD6D02A5C51DFCDFAA84 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	{
		// playerInSightRange = Physics.CheckSphere(transform.position, sightRange, whatIsPlayer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_sightRange_17();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = __this->get_whatIsPlayer_7();
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Physics_CheckSphere_m6DFD61C841CEBFDE6645689279AA6E31297B002B(L_1, L_2, L_4, /*hidden argument*/NULL);
		__this->set_playerInSightRange_19(L_5);
		// playerInAttackRange = Physics.CheckSphere(transform.position, attackRange, whatIsPlayer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_attackRange_18();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_9 = __this->get_whatIsPlayer_7();
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Physics_CheckSphere_m6DFD61C841CEBFDE6645689279AA6E31297B002B(L_7, L_8, L_10, /*hidden argument*/NULL);
		__this->set_playerInAttackRange_20(L_11);
		// if (!playerInSightRange && !playerInAttackRange) Patroling();
		bool L_12 = __this->get_playerInSightRange_19();
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		bool L_13 = __this->get_playerInAttackRange_20();
		if (L_13)
		{
			goto IL_0064;
		}
	}
	{
		// if (!playerInSightRange && !playerInAttackRange) Patroling();
		EnemyAI_Patroling_mAC8BB15FB3CB1C6FF6AE4B37151CFFB8C8F26106(__this, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// if (playerInSightRange && !playerInAttackRange) ChasePlayer();
		bool L_14 = __this->get_playerInSightRange_19();
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		bool L_15 = __this->get_playerInAttackRange_20();
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		// if (playerInSightRange && !playerInAttackRange) ChasePlayer();
		EnemyAI_ChasePlayer_mDE9D8C1FADBD9A1A2DCF0710B344B2744C3B8553(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// if (playerInAttackRange && playerInSightRange) AttackPlayer();
		bool L_16 = __this->get_playerInAttackRange_20();
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17 = __this->get_playerInSightRange_19();
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		// if (playerInAttackRange && playerInSightRange) AttackPlayer();
		EnemyAI_AttackPlayer_mC2241855AA45978031FB4A35173C33287634E037(__this, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::Patroling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Patroling_mAC8BB15FB3CB1C6FF6AE4B37151CFFB8C8F26106 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!walkPointSet)
		bool L_0 = __this->get_walkPointSet_13();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SearchWalkPoint();
		EnemyAI_SearchWalkPoint_m636C77903FB1198ED1F21FF8E89039CF9FC29EA0(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (walkPointSet)
		bool L_1 = __this->get_walkPointSet_13();
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// agent.SetDestination(walkPoint);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_2 = __this->get_agent_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_walkPoint_12();
		bool L_4;
		L_4 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// Vector3 distanceToWalkPoint = transform.position - walkPoint;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_walkPoint_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// if (distanceToWalkPoint.magnitude < 1f)
		float L_9;
		L_9 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_9) < ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// walkPointSet = false;
		__this->set_walkPointSet_13((bool)0);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::SearchWalkPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_SearchWalkPoint_m636C77903FB1198ED1F21FF8E89039CF9FC29EA0 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float randomZ = Random.Range(-walkPointRange, walkPointRange);
		float L_0 = __this->get_walkPointRange_14();
		float L_1 = __this->get_walkPointRange_14();
		float L_2;
		L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_0)), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float randomX = Random.Range(-walkPointRange, walkPointRange);
		float L_3 = __this->get_walkPointRange_14();
		float L_4 = __this->get_walkPointRange_14();
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_3)), L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// walkPoint = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		float L_9 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		float L_16 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), ((float)il2cpp_codegen_add((float)L_8, (float)L_9)), L_12, ((float)il2cpp_codegen_add((float)L_15, (float)L_16)), /*hidden argument*/NULL);
		__this->set_walkPoint_12(L_17);
		// if (Physics.Raycast(walkPoint, -transform.up, 2f, whatIsGround))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_walkPoint_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_20, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_22 = __this->get_whatIsGround_6();
		int32_t L_23;
		L_23 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Physics_Raycast_m09F21E13465121A73F19C07FC5F5314CF15ACD15(L_18, L_21, (2.0f), L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0099;
		}
	}
	{
		// walkPointSet = true;
		__this->set_walkPointSet_13((bool)1);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_ChasePlayer_mDE9D8C1FADBD9A1A2DCF0710B344B2744C3B8553 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	{
		// agent.SetDestination(player.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_agent_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_player_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyAI::AttackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_AttackPlayer_mC2241855AA45978031FB4A35173C33287634E037 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0489C1978337F0926640C799B97CCD78101ED117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent.SetDestination(transform.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_agent_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_0, L_2, /*hidden argument*/NULL);
		// transform.LookAt(player);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_player_5();
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_4, L_5, /*hidden argument*/NULL);
		// if (!alreadyAttacked)
		bool L_6 = __this->get_alreadyAttacked_16();
		if (L_6)
		{
			goto IL_006c;
		}
	}
	{
		// Debug.Log("Attacking The Player!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0489C1978337F0926640C799B97CCD78101ED117, /*hidden argument*/NULL);
		// GameObject playerObject = GameObject.FindWithTag("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		// playerObject.GetComponent<GameOver>().PlayerTakeDamage(enemydamagetoplayer);
		GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * L_8;
		L_8 = GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA(L_7, /*hidden argument*/GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var);
		float L_9 = __this->get_enemydamagetoplayer_10();
		GameOver_PlayerTakeDamage_m8B9724B71139F73A894E8862CDF855A200954CC8(L_8, L_9, /*hidden argument*/NULL);
		// alreadyAttacked = true;
		__this->set_alreadyAttacked_16((bool)1);
		// Invoke(nameof(ResetAttack), timeBetweenAttacks);
		float L_10 = __this->get_timeBetweenAttacks_15();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988, L_10, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::ResetAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_ResetAttack_m6F0D8E390CB61134223194E873F2453510D1D0BD (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	{
		// alreadyAttacked = false;
		__this->set_alreadyAttacked_16((bool)0);
		// }
		return;
	}
}
// System.Int32 EnemyAI::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyAI_TakeDamage_m2EA67386E167EA35DC8755D9C64062B8D6DEC9CA (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, float ___damage0, const RuntimeMethod* method)
{
	{
		// health -= damage;
		float L_0 = __this->get_health_9();
		float L_1 = ___damage0;
		__this->set_health_9(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (health <= 0f)
		float L_2 = __this->get_health_9();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0023;
		}
	}
	{
		// Die();
		EnemyAI_Die_m0067FEB2BE98B3CAF4FAD2A26660F0C8EE20899E(__this, /*hidden argument*/NULL);
		// return 1;
		return 1;
	}

IL_0023:
	{
		// return 0;
		return 0;
	}
}
// System.Void EnemyAI::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Die_m0067FEB2BE98B3CAF4FAD2A26660F0C8EE20899E (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 up = new Vector3(0, 2, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 new_pos = transform.position + up;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Instantiate(deathEffect, new_pos, Quaternion.identity);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = __this->get_deathEffect_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_7;
		L_7 = Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283(L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI__ctor_mAF4FEC29EA4ADF864B4641448BFF55028ED4B3BC (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	{
		// public float health = 100f;
		__this->set_health_9((100.0f));
		// public float enemydamagetoplayer = 40f;
		__this->set_enemydamagetoplayer_10((40.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyAI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI__cctor_mB83C8193C1397F2D1B26D8B7CFA64F2CDFE31055 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemySpawners::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawners_Start_m3AEE1F1017E20571E974D843C9E173DDD9F3B021 (EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// spawners = new GameObject[num_spawners];
		int32_t L_0 = __this->get_num_spawners_7();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_spawners_4(L_1);
		// for(int i = 0; i < spawners.Length; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0015:
	{
		// spawners[i] = transform.GetChild(i).gameObject;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_spawners_4();
		int32_t L_3 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_4, L_5, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_7);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_7);
		// for(int i = 0; i < spawners.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0032:
	{
		// for(int i = 0; i < spawners.Length; i++)
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_spawners_4();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemySpawners::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawners_SpawnEnemy_mD8B10CA99DFA508F6DFF6F2C2DEF739BD62AC178 (EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int spawnerID = Random.Range(0, spawners.Length); //randomly select a spawner
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_spawners_4();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// Instantiate(enemy, spawners[spawnerID].transform.position, spawners[spawnerID].transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_enemy_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_spawners_4();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_spawners_4();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_2, L_8, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemySpawners::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawners_Update_mCC500A353D2F6C8E95571F278C5C01298A81043F (EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624 * __this, const RuntimeMethod* method)
{
	{
		// numSeconds += Time.deltaTime;
		float L_0 = __this->get_numSeconds_8();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_numSeconds_8(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if(numSeconds > spawnCooldown)
		float L_2 = __this->get_numSeconds_8();
		float L_3 = __this->get_spawnCooldown_6();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		// numSeconds = 0.0f;
		__this->set_numSeconds_8((0.0f));
		// SpawnEnemy();
		EnemySpawners_SpawnEnemy_mD8B10CA99DFA508F6DFF6F2C2DEF739BD62AC178(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void EnemySpawners::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawners__ctor_m69B105A2A3D5D45961FA86F87E3E36A8C3E7F438 (EnemySpawners_tAC4600A696BF8513DD02D663D7150266DFA0B624 * __this, const RuntimeMethod* method)
{
	{
		// public float spawnCooldown = 3.0f;
		__this->set_spawnCooldown_6((3.0f));
		// public int num_spawners = 1;
		__this->set_num_spawners_7(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Start_m55E09F90FA409F47F1A42929F294DC60C06FD5CB (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerHealth = 100f;
		__this->set_PlayerHealth_7((100.0f));
		// Gun.PlayerShield = 0f;
		IL2CPP_RUNTIME_CLASS_INIT(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var);
		((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->set_PlayerShield_6((0.0f));
		// healthBar.fillAmount = PlayerHealth/100f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_healthBar_10();
		float L_1 = __this->get_PlayerHealth_7();
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, ((float)((float)L_1/(float)(100.0f))), /*hidden argument*/NULL);
		// shieldBar.fillAmount = 0f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_shieldBar_11();
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_2, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOver::PlayerTakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_PlayerTakeDamage_m8B9724B71139F73A894E8862CDF855A200954CC8 (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, float ___damage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4F3E3489DC79906E049D84074C1643D37E8C3A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE4E8142BFE618A5CBEC62617C682850D11107B9);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Gun.PlayerShield > 0f)
		IL2CPP_RUNTIME_CLASS_INIT(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var);
		float L_0 = ((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->get_PlayerShield_6();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		// var color = GotHitScreen.GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GotHitScreen_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2;
		L_2 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		V_0 = L_3;
		// color.a = 0.8f;
		(&V_0)->set_a_3((0.800000012f));
		// GotHitScreen.GetComponent<Image>().color = color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_GotHitScreen_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_0;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// Gun.PlayerShield -= damage;
		IL2CPP_RUNTIME_CLASS_INIT(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var);
		float L_7 = ((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->get_PlayerShield_6();
		float L_8 = ___damage0;
		((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->set_PlayerShield_6(((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)));
		// Debug.Log("Player Shield is now: " + Gun.PlayerShield);
		String_t* L_9;
		L_9 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->get_address_of_PlayerShield_6()), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFE4E8142BFE618A5CBEC62617C682850D11107B9, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// shieldBar.fillAmount = Gun.PlayerShield/100f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_shieldBar_11();
		float L_12 = ((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->get_PlayerShield_6();
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_11, ((float)((float)L_12/(float)(100.0f))), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0076:
	{
		// var color = GotHitScreen.GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_GotHitScreen_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14;
		L_14 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_13, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_14);
		V_1 = L_15;
		// color.a = 0.8f;
		(&V_1)->set_a_3((0.800000012f));
		// GotHitScreen.GetComponent<Image>().color = color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_GotHitScreen_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17;
		L_17 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_16, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = V_1;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// PlayerHealth -= damage;
		float L_19 = __this->get_PlayerHealth_7();
		float L_20 = ___damage0;
		__this->set_PlayerHealth_7(((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)));
		// Debug.Log("Player Health is now: " + PlayerHealth);
		float* L_21 = __this->get_address_of_PlayerHealth_7();
		String_t* L_22;
		L_22 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE4F3E3489DC79906E049D84074C1643D37E8C3A9, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
		// healthBar.fillAmount = PlayerHealth/100f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24 = __this->get_healthBar_10();
		float L_25 = __this->get_PlayerHealth_7();
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_24, ((float)((float)L_25/(float)(100.0f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Update_m9C017FC54A6BA38547A8EBEC17A7CD20236CB14F (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (PlayerHealth <= 0f)
		float L_0 = __this->get_PlayerHealth_7();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		// EndLevel();
		GameOver_EndLevel_m47D1B1E8DC6C75A36A46565DCBD3528E7AC4E7CC(__this, /*hidden argument*/NULL);
		// DisableThisUI.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1 = __this->get_DisableThisUI_9();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_3;
		L_3 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_4, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// if(GotHitScreen.GetComponent<Image>().color.a > 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_GotHitScreen_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6;
		L_6 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_5, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		float L_8 = L_7.get_a_3();
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0088;
		}
	}
	{
		// var color = GotHitScreen.GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_GotHitScreen_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10;
		L_10 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_9, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		V_1 = L_11;
		// color.a -= 0.005f;
		float* L_12 = (&V_1)->get_address_of_a_3();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract((float)L_14, (float)(0.00499999989f)));
		// GotHitScreen.GetComponent<Image>().color = color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_GotHitScreen_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16;
		L_16 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_15, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = V_1;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void GameOver::EndLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_EndLevel_m47D1B1E8DC6C75A36A46565DCBD3528E7AC4E7CC (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	{
		// m_Timer += Time.deltaTime;
		float L_0 = __this->get_m_Timer_13();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_Timer_13(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// exitBackgroundImageCanvasGroup.alpha = m_Timer / fadeDuration;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_2 = __this->get_exitBackgroundImageCanvasGroup_8();
		float L_3 = __this->get_m_Timer_13();
		float L_4 = __this->get_fadeDuration_4();
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_2, ((float)((float)L_3/(float)L_4)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_mA5E40A40961F188E4CE253D481E8AED893A224E9 (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	{
		// public float fadeDuration = 1f;
		__this->set_fadeDuration_4((1.0f));
		// public float PlayerHealth = 100f;
		__this->set_PlayerHealth_7((100.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gun::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Update_m71CB7FCF54EBD12F5A1452B9E5FC978F3636B04B (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetButtonDown("Fire"))
		bool L_0;
		L_0 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Shoot();
		Gun_Shoot_mBF898A288AE753B55835CACBDA1977CC28C3C5B0(__this, /*hidden argument*/NULL);
		// shootingSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_shootingSound_9();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Gun::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Shoot_mBF898A288AE753B55835CACBDA1977CC28C3C5B0 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82_m0A1D2AEFC6A1D640C29515A8BDAB763A75D0AE12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * V_1 = NULL;
	String_t* G_B5_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	{
		// if(Physics.Raycast(fpsCam.transform.position, fpsCam.transform.forward, out hit, range))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_fpsCam_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_fpsCam_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_range_5();
		bool L_7;
		L_7 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_2, L_5, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00c1;
		}
	}
	{
		// Debug.Log(hit.transform.name);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// EnemyAI target = hit.transform.GetComponent<EnemyAI>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * L_11;
		L_11 = Component_GetComponent_TisEnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82_m0A1D2AEFC6A1D640C29515A8BDAB763A75D0AE12(L_10, /*hidden argument*/Component_GetComponent_TisEnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82_m0A1D2AEFC6A1D640C29515A8BDAB763A75D0AE12_RuntimeMethod_var);
		V_1 = L_11;
		// if (target != null)
		EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		// enemydead = target.TakeDamage(damage);
		EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * L_14 = V_1;
		float L_15 = __this->get_damage_4();
		int32_t L_16;
		L_16 = EnemyAI_TakeDamage_m2EA67386E167EA35DC8755D9C64062B8D6DEC9CA(L_14, L_15, /*hidden argument*/NULL);
		// if (enemydead == 1)
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		// dollars += 50.00f;
		float L_17 = __this->get_dollars_11();
		__this->set_dollars_11(((float)il2cpp_codegen_add((float)L_17, (float)(50.0f))));
		// dollarText.text = "" + (dollars);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_dollarText_10();
		float* L_19 = __this->get_address_of_dollars_11();
		String_t* L_20;
		L_20 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_19, /*hidden argument*/NULL);
		String_t* L_21 = L_20;
		G_B4_0 = L_21;
		G_B4_1 = L_18;
		if (L_21)
		{
			G_B5_0 = L_21;
			G_B5_1 = L_18;
			goto IL_0094;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B4_1;
	}

IL_0094:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B5_1, G_B5_0);
	}

IL_0099:
	{
		// GameObject impactGo = Instantiate(impactEffect, hit.point, Quaternion.LookRotation(hit.normal));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_impactEffect_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_22, L_23, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(impactGo, 1f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_26, (1.0f), /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void Gun::OneShotKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_OneShotKill_m1CBE8A3F6BA287B8A3FC56EC6D0FEF4051038E4D (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// if(dollars >= 200f)
		float L_0 = __this->get_dollars_11();
		if ((!(((float)L_0) >= ((float)(200.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// if (!alreadybought)
		bool L_1 = __this->get_alreadybought_13();
		if (L_1)
		{
			goto IL_0058;
		}
	}
	{
		// alreadybought = true;
		__this->set_alreadybought_13((bool)1);
		// dollars = dollars - 200f;
		float L_2 = __this->get_dollars_11();
		__this->set_dollars_11(((float)il2cpp_codegen_subtract((float)L_2, (float)(200.0f))));
		// dollarText.text = "" + (dollars);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_dollarText_10();
		float* L_4 = __this->get_address_of_dollars_11();
		String_t* L_5;
		L_5 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_3;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_3;
			goto IL_0048;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// damage = 1000f;
		__this->set_damage_4((1000.0f));
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Gun::Shields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Shields_mBC1694D65310760EB915918BAEB602617C9BDF14 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// if(dollars >= 100f)
		float L_0 = __this->get_dollars_11();
		if ((!(((float)L_0) >= ((float)(100.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (PlayerShield != 100f)
		IL2CPP_RUNTIME_CLASS_INIT(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var);
		float L_1 = ((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->get_PlayerShield_6();
		if ((((float)L_1) == ((float)(100.0f))))
		{
			goto IL_006a;
		}
	}
	{
		// dollars = dollars - 100f;
		float L_2 = __this->get_dollars_11();
		__this->set_dollars_11(((float)il2cpp_codegen_subtract((float)L_2, (float)(100.0f))));
		// dollarText.text = "" + (dollars);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_dollarText_10();
		float* L_4 = __this->get_address_of_dollars_11();
		String_t* L_5;
		L_5 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_3;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_3;
			goto IL_0045;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// PlayerShield = 100f;
		IL2CPP_RUNTIME_CLASS_INIT(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var);
		((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->set_PlayerShield_6((100.0f));
		// shieldBar.fillAmount = PlayerShield/100f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_shieldBar_12();
		float L_8 = ((Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_StaticFields*)il2cpp_codegen_static_fields_for(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C_il2cpp_TypeInfo_var))->get_PlayerShield_6();
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_7, ((float)((float)L_8/(float)(100.0f))), /*hidden argument*/NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Gun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun__ctor_mAB78FE575637ED35491FD9880E4B35EB48689718 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	{
		// public float damage = 10f;
		__this->set_damage_4((10.0f));
		// public float range = 100f;
		__this->set_range_5((100.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Gun::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun__cctor_mC4C1CCCDBE6CFE02F96B6F4739BF02B7664EED85 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Awake_m56AAFE728DF63B4B922FC31449C82EC6CFB0D946 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591_m5983BEDAEE953E6B593A931BF86DC832B6436F1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52_mA7F0D78FE52448891FC574008532A13AA34EA312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CAwakeU3Eb__4_0_m82E8239DF2A4658A20B327910DE536651757CF35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CAwakeU3Eb__4_1_mE94DA42F2C32EDFF59EFC3E502A706931FBCA5CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CAwakeU3Eb__4_2_mD30B7BF7B387FCA0ABDF2B3E23F747F434D13951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerInput = new PlayerInput();
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E *)il2cpp_codegen_object_new(PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E_il2cpp_TypeInfo_var);
		PlayerInput__ctor_m84EAB041CD5C8D268A3C5741EC3A70B5F1E47B20(L_0, /*hidden argument*/NULL);
		__this->set_playerInput_4(L_0);
		// onFoot = playerInput.OnFoot;
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_1 = __this->get_playerInput_4();
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819  L_2;
		L_2 = PlayerInput_get_OnFoot_m2CA1EEAA308777B05F76BF2CB995E86F755B1B2D(L_1, /*hidden argument*/NULL);
		__this->set_onFoot_5(L_2);
		// motor = GetComponent<PlayerMotor>();
		PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * L_3;
		L_3 = Component_GetComponent_TisPlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52_mA7F0D78FE52448891FC574008532A13AA34EA312(__this, /*hidden argument*/Component_GetComponent_TisPlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52_mA7F0D78FE52448891FC574008532A13AA34EA312_RuntimeMethod_var);
		__this->set_motor_6(L_3);
		// look = GetComponent<PlayerLook>();
		PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * L_4;
		L_4 = Component_GetComponent_TisPlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591_m5983BEDAEE953E6B593A931BF86DC832B6436F1D(__this, /*hidden argument*/Component_GetComponent_TisPlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591_m5983BEDAEE953E6B593A931BF86DC832B6436F1D_RuntimeMethod_var);
		__this->set_look_7(L_4);
		// onFoot.Jump.performed += ctx => motor.Jump();
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * L_5 = __this->get_address_of_onFoot_5();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_6;
		L_6 = OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)L_5, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_7 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_7, __this, (intptr_t)((intptr_t)InputManager_U3CAwakeU3Eb__4_0_m82E8239DF2A4658A20B327910DE536651757CF35_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_6, L_7, /*hidden argument*/NULL);
		// onFoot.SprintStart.performed += ctx => motor.SprintPressed();
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * L_8 = __this->get_address_of_onFoot_5();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_9;
		L_9 = OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)L_8, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_10 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_10, __this, (intptr_t)((intptr_t)InputManager_U3CAwakeU3Eb__4_1_mE94DA42F2C32EDFF59EFC3E502A706931FBCA5CB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_9, L_10, /*hidden argument*/NULL);
		// onFoot.SprintFinish.performed += ctx => motor.SprintReleased();
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * L_11 = __this->get_address_of_onFoot_5();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)L_11, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_13 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_13, __this, (intptr_t)((intptr_t)InputManager_U3CAwakeU3Eb__4_2_mD30B7BF7B387FCA0ABDF2B3E23F747F434D13951_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_FixedUpdate_m042719623BB97D4BF333A0784E19E34ED76D3857 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// motor.ProcessMove(onFoot.Movement.ReadValue<Vector2>());
		PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * L_0 = __this->get_motor_6();
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * L_1 = __this->get_address_of_onFoot_5();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F(L_2, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		PlayerMotor_ProcessMove_mDA94C8F58FABE93E5DF73B3ED447796AF90D807C(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_LateUpdate_m79214A6E214CF3423F9D67B4A5D47D2F4A034ED1 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// look.ProcessLook(onFoot.Look.ReadValue<Vector2>());
		PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * L_0 = __this->get_look_7();
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * L_1 = __this->get_address_of_onFoot_5();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F(L_2, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		PlayerLook_ProcessLook_m7F004A844FF0A249BED80937668E6EB3572A9E42(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnEnable_m584432543637338E8BBECE286DF8167F10309018 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// onFoot.Enable();
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * L_0 = __this->get_address_of_onFoot_5();
		OnFootActions_Enable_m745E08E639B1032378BFAA274140CB42A5D0504F((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnDisable_m93B2282C567FD565E189E8F08A5BBF08EED61478 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// onFoot.Disable();
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * L_0 = __this->get_address_of_onFoot_5();
		OnFootActions_Disable_m4BA006D5625CDBBA66B9BF4542B42C49C738902A((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mB533F16325A793C9274F6CA3804EBCE27AD700A7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InputManager::<Awake>b__4_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CAwakeU3Eb__4_0_m82E8239DF2A4658A20B327910DE536651757CF35 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___ctx0, const RuntimeMethod* method)
{
	{
		// onFoot.Jump.performed += ctx => motor.Jump();
		PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * L_0 = __this->get_motor_6();
		PlayerMotor_Jump_mE15EB03505EB22FECE8C2FFD77968E0C108D4278(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InputManager::<Awake>b__4_1(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CAwakeU3Eb__4_1_mE94DA42F2C32EDFF59EFC3E502A706931FBCA5CB (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___ctx0, const RuntimeMethod* method)
{
	{
		// onFoot.SprintStart.performed += ctx => motor.SprintPressed();
		PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * L_0 = __this->get_motor_6();
		PlayerMotor_SprintPressed_m246BD462BD432579E326FA4BCA8D37C169193BCB(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InputManager::<Awake>b__4_2(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CAwakeU3Eb__4_2_mD30B7BF7B387FCA0ABDF2B3E23F747F434D13951 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___ctx0, const RuntimeMethod* method)
{
	{
		// onFoot.SprintFinish.performed += ctx => motor.SprintReleased();
		PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * L_0 = __this->get_motor_6();
		PlayerMotor_SprintReleased_m098F4D702E1D5435D5E255E2E876533E06CF9826(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Start_mB3762C9E5B204FDE0381A6409728D7DCAD7E6C37 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// Resume();
		PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m191CABDC11442A2CC104FC8B3244D04826E7BD57 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sensSlider.value = StartMenu.sens;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_sensSlider_9();
		IL2CPP_RUNTIME_CLASS_INIT(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		float L_1 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_sens_4();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// musicVolumeSlider.value = StartMenu.musicVolume;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_musicVolumeSlider_10();
		float L_3 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_musicVolume_5();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
		// music.volume = StartMenu.musicVolume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_music_11();
		float L_5 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_musicVolume_5();
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, L_5, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.Tab))
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)9), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		// if(isPaused)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_7 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_isPaused_4();
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// Resume();
		PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0047:
	{
		// pauseMenuUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_pauseMenuUI_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// crosshair.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_crosshair_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// isPaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)1);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuUI_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// shopMenuUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_shopMenuUI_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// crosshair.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_crosshair_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// isPaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::RestartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_RestartButton_m6CE1AEB720860FDA0C35AE4010104C6E1EC22BEA (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_1, /*hidden argument*/NULL);
		// Resume();
		PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::QuitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_QuitButton_mB700A872AE27EAD4EFFF611647E29A3BEEB3754D (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::MusicVolume(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MusicVolume_m8D5AFA4F6DECC1A6DF1934B0D25EB2B9E392C784 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartMenu.musicVolume = slider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = ___slider0;
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->set_musicVolume_5(L_1);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mA1A281F3359C234E5CF24FFEAC20C12C48D69018 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// int level = 1;
		__this->set_level_12(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__cctor_m6819B2CD3B03CB44F1D7914C847058A7C1B7D924 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionAsset PlayerInput::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = __this->get_U3CassetU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m84EAB041CD5C8D268A3C5741EC3A70B5F1E47B20 (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A342A221A718CC46430003E5796296C80F4090F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EA8513A41ABF9237CBBF9B48323BF4AF439A646);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92FB790FD2406296F3E18DB741B77C7C5FD9A965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8EA000C1A514A952BC0428CB640DFD1A63700B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @PlayerInput()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""PlayerInput"",
		//     ""maps"": [
		//         {
		//             ""name"": ""OnFoot"",
		//             ""id"": ""5c2767bd-dee6-4ca8-b2a8-4900da28a763"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Movement"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""5db5a7dd-2962-4c23-b38b-19a8ba466aa2"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""Jump"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""a819bbb0-2131-4d0c-96d8-973fa5895038"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""Look"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""dffd93b9-cdf0-481f-af64-82d723eb91af"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""SprintStart"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""66ee42b1-7b17-46ac-8583-e9b61a6e0d09"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""SprintFinish"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""7e11c049-8788-4858-b64c-7ba1617a96f0"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": ""WASD"",
		//                     ""id"": ""874a2ccc-5d8d-4f3e-854d-c17b99fecd39"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""0afea043-ddc4-4f8e-bcc0-bc13a00d70cc"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""0022dd40-66e3-4300-b2fc-ce8f605200b7"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""550a4e3e-a2e4-4c27-a5ad-fd1f06309907"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""f7ebbfcc-1279-40a5-9f53-f03fc74e56e5"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""18d2bef0-388a-45f5-bebc-a763a35f2633"",
		//                     ""path"": ""<Keyboard>/space"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Jump"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""89fb4270-fb1a-4dfe-bb5b-57996f144bc1"",
		//                     ""path"": ""<Mouse>/delta"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""51878d3f-b328-43f7-9cc6-3a56f57bbade"",
		//                     ""path"": ""<Keyboard>/shift"",
		//                     ""interactions"": ""Press"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""SprintStart"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""e643717a-1a12-4e7f-a011-e17901349c93"",
		//                     ""path"": ""<Keyboard>/shift"",
		//                     ""interactions"": ""Press(behavior=1)"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""SprintFinish"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = InputActionAsset_FromJson_m85BD957DA42DE323A6FFB6A262A39A65EFD6A698(_stringLiteralD8EA000C1A514A952BC0428CB640DFD1A63700B7, /*hidden argument*/NULL);
		__this->set_U3CassetU3Ek__BackingField_0(L_0);
		// m_OnFoot = asset.FindActionMap("OnFoot", throwIfNotFound: true);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_1;
		L_1 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_2;
		L_2 = InputActionAsset_FindActionMap_m26AEF35E59D7739FC7BF8E985085ED02CC42CA70(L_1, _stringLiteral7EA8513A41ABF9237CBBF9B48323BF4AF439A646, (bool)1, /*hidden argument*/NULL);
		__this->set_m_OnFoot_1(L_2);
		// m_OnFoot_Movement = m_OnFoot.FindAction("Movement", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_3 = __this->get_m_OnFoot_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_3, _stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A, (bool)1, /*hidden argument*/NULL);
		__this->set_m_OnFoot_Movement_3(L_4);
		// m_OnFoot_Jump = m_OnFoot.FindAction("Jump", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_5 = __this->get_m_OnFoot_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_6;
		L_6 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_5, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, (bool)1, /*hidden argument*/NULL);
		__this->set_m_OnFoot_Jump_4(L_6);
		// m_OnFoot_Look = m_OnFoot.FindAction("Look", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_7 = __this->get_m_OnFoot_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_8;
		L_8 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_7, _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F, (bool)1, /*hidden argument*/NULL);
		__this->set_m_OnFoot_Look_5(L_8);
		// m_OnFoot_SprintStart = m_OnFoot.FindAction("SprintStart", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_9 = __this->get_m_OnFoot_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_10;
		L_10 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_9, _stringLiteral5A342A221A718CC46430003E5796296C80F4090F, (bool)1, /*hidden argument*/NULL);
		__this->set_m_OnFoot_SprintStart_6(L_10);
		// m_OnFoot_SprintFinish = m_OnFoot.FindAction("SprintFinish", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_11 = __this->get_m_OnFoot_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_11, _stringLiteral92FB790FD2406296F3E18DB741B77C7C5FD9A965, (bool)1, /*hidden argument*/NULL);
		__this->set_m_OnFoot_SprintFinish_7(L_12);
		// }
		return;
	}
}
// System.Void PlayerInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Dispose_m560794A2B84F1C6308F607BF82B1E4A1EDF38E21 (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> PlayerInput::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  PlayerInput_get_bindingMask_m6FEAD996A00EA3AC27C0898E069434158F51B6B1 (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_1;
		L_1 = InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerInput::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_bindingMask_mB99FECA9A895F7C3CC173A398D214CD7E396ECAB (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___value0, const RuntimeMethod* method)
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_1 = ___value0;
		InputActionAsset_set_bindingMask_m8B3F08D6BB04076802DFFF80E4C8606A2F78753F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> PlayerInput::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  PlayerInput_get_devices_m2C4D8056997D2AD069A3C001596C612AEE861D4B (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// get => asset.devices;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  L_1;
		L_1 = InputActionAsset_get_devices_m1144659F84189F26DF62C81AD3E3CB59D91E2233(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerInput::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_devices_m9634FFA028D8E54FE40AC7CF96B3C33A431F723A (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  ___value0, const RuntimeMethod* method)
{
	{
		// set => asset.devices = value;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  L_1 = ___value0;
		InputActionAsset_set_devices_m719AC35B8D32694CDDB432D38BBE670BFE4A53D5(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> PlayerInput::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  PlayerInput_get_controlSchemes_m2690472EC4C18DB835007DEFC198771F971F6295 (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  L_1;
		L_1 = InputActionAsset_get_controlSchemes_m9FACEA3E979F8EAAA228ED9390E80E05318C4A60(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean PlayerInput::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_Contains_m6505973E16FA35B9083BA39E9DE8B82DAD266BAD (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___action0, const RuntimeMethod* method)
{
	{
		// return asset.Contains(action);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = ___action0;
		bool L_2;
		L_2 = InputActionAsset_Contains_m792C3FAB58851FC223273425F7D2C39562BDE40D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_GetEnumerator_mB336E324CBA4DF0E1B13334D8D79891B4E984E68 (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_mEA39637BFE5F6916DEDC5C99080128CEDB79A3B6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerInput::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_System_Collections_IEnumerable_GetEnumerator_mC4FB5A6DEF54DCC127F7710AE1CE80BFAE93E46A (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = PlayerInput_GetEnumerator_mB336E324CBA4DF0E1B13334D8D79891B4E984E68(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void PlayerInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Enable_m51F97ADF330547539E0B99A3FB8139ADD5266D93 (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// asset.Enable();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		InputActionAsset_Enable_mC9C209D6E73F93865238FA20C9CA5B864F53E647(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Disable_m7E5A729CAA47FB37AF38169AED455C8350E6F68C (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// asset.Disable();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline(__this, /*hidden argument*/NULL);
		InputActionAsset_Disable_m8879D95AF1BC47E7406769B0C490592D313D6269(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// PlayerInput/OnFootActions PlayerInput::get_OnFoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819  PlayerInput_get_OnFoot_m2CA1EEAA308777B05F76BF2CB995E86F755B1B2D (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// public OnFootActions @OnFoot => new OnFootActions(this);
		OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819  L_0;
		memset((&L_0), 0, sizeof(L_0));
		OnFootActions__ctor_m83748B1441D251D2076151AD42964332B6FC76AD_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLook_Update_mA425AA6701F39303BF7744B1A2E2E2B41BAC6793 (PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PauseMenu.isPaused)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_0 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_isPaused_4();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0014:
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerLook::ProcessLook(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLook_ProcessLook_m7F004A844FF0A249BED80937668E6EB3572A9E42 (PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = input.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___input0;
		float L_1 = L_0.get_x_0();
		V_0 = L_1;
		// float mouseY = input.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___input0;
		float L_3 = L_2.get_y_1();
		V_1 = L_3;
		// xRotation -= (mouseY * Time.deltaTime) * StartMenu.sens;
		float L_4 = __this->get_xRotation_5();
		float L_5 = V_1;
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		float L_7 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_sens_4();
		__this->set_xRotation_5(((float)il2cpp_codegen_subtract((float)L_4, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)L_7)))));
		// xRotation = Mathf.Clamp(xRotation, -80f, 80f);
		float L_8 = __this->get_xRotation_5();
		float L_9;
		L_9 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_8, (-80.0f), (80.0f), /*hidden argument*/NULL);
		__this->set_xRotation_5(L_9);
		// cam.transform.localRotation = Quaternion.Euler(xRotation, 0, 0);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = __this->get_cam_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_xRotation_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_12, (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_11, L_13, /*hidden argument*/NULL);
		// transform.Rotate(Vector3.up * (mouseX * Time.deltaTime) * StartMenu.sens);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_16 = V_0;
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		float L_19 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_sens_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_14, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerLook::ChangeSensitivity(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLook_ChangeSensitivity_m3215D70D2235D7B25EFB211B25B49E08D34B312B (PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * __this, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartMenu.sens = slider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = ___slider0;
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->set_sens_4(L_1);
		// }
		return;
	}
}
// System.Void PlayerLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLook__ctor_mF86A13B977B997D8F4BE67197972675B6AC09456 (PlayerLook_tF44032910C1DEF93392DCE139BEE2E26CE6C6591 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMotor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Start_mE33AFBCA4469F39BAD92F136838FAC1970470FD6 (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<CharacterController>();
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_0;
		L_0 = Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		__this->set_controller_4(L_0);
		// walkImage = walkIcon.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_walkIcon_13();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2;
		L_2 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_walkImage_11(L_2);
		// sprintImage = sprintIcon.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_sprintIcon_14();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_sprintImage_12(L_4);
		// }
		return;
	}
}
// System.Void PlayerMotor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Update_m2B85C51BB405823DBA4EF969244010E1CF7D3349 (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method)
{
	{
		// isGrounded = controller.isGrounded;
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_0 = __this->get_controller_4();
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m327A1A1940F225FE81E751F255316BB0D8698CBC(L_0, /*hidden argument*/NULL);
		__this->set_isGrounded_6(L_1);
		// if (isSprinting)
		bool L_2 = __this->get_isSprinting_10();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// speed = 10f;
		__this->set_speed_7((10.0f));
		// }
		return;
	}

IL_0025:
	{
		// else if(isGrounded)
		bool L_3 = __this->get_isGrounded_6();
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// speed = 5f;
		__this->set_speed_7((5.0f));
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void PlayerMotor::ProcessMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_ProcessMove_mDA94C8F58FABE93E5DF73B3ED447796AF90D807C (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 moveDirection = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// moveDirection.x = input.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___input0;
		float L_2 = L_1.get_x_0();
		(&V_0)->set_x_2(L_2);
		// moveDirection.z = input.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___input0;
		float L_4 = L_3.get_y_1();
		(&V_0)->set_z_4(L_4);
		// controller.Move(transform.TransformDirection(moveDirection) * speed * Time.deltaTime);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_5 = __this->get_controller_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_6, L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_speed_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_5, L_12, /*hidden argument*/NULL);
		// playerVelocity.y += gravity * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_playerVelocity_5();
		float* L_15 = L_14->get_address_of_y_3();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = __this->get_gravity_8();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19))));
		// if(isGrounded && playerVelocity.y < 0)
		bool L_20 = __this->get_isGrounded_6();
		if (!L_20)
		{
			goto IL_0092;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_playerVelocity_5();
		float L_22 = L_21->get_y_3();
		if ((!(((float)L_22) < ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// playerVelocity.y = -2f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_playerVelocity_5();
		L_23->set_y_3((-2.0f));
	}

IL_0092:
	{
		// controller.Move(playerVelocity * Time.deltaTime);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_24 = __this->get_controller_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_playerVelocity_5();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, L_26, /*hidden argument*/NULL);
		int32_t L_28;
		L_28 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_24, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMotor::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Jump_mE15EB03505EB22FECE8C2FFD77968E0C108D4278 (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method)
{
	{
		// if(isGrounded)
		bool L_0 = __this->get_isGrounded_6();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// playerVelocity.y = Mathf.Sqrt(jumpHeight * -3.0f * gravity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_playerVelocity_5();
		float L_2 = __this->get_jumpHeight_9();
		float L_3 = __this->get_gravity_8();
		float L_4;
		L_4 = sqrtf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)(-3.0f))), (float)L_3)));
		L_1->set_y_3(L_4);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void PlayerMotor::SprintPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_SprintPressed_m246BD462BD432579E326FA4BCA8D37C169193BCB (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method)
{
	{
		// isSprinting = true;
		__this->set_isSprinting_10((bool)1);
		// walkImage.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_walkImage_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// sprintImage.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_sprintImage_12();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMotor::SprintReleased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_SprintReleased_m098F4D702E1D5435D5E255E2E876533E06CF9826 (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method)
{
	{
		// isSprinting = false;
		__this->set_isSprinting_10((bool)0);
		// sprintImage.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_sprintImage_12();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// walkImage.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_walkImage_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMotor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor__ctor_m69F6DC58548EA8671F5A04801ADAB3D5F22D5E7E (PlayerMotor_t039BA96D1334B84759F4CF89C1845D324B181B52 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 5f;
		__this->set_speed_7((5.0f));
		// public float gravity = -9.8f;
		__this->set_gravity_8((-9.80000019f));
		// public float jumpHeight = 3f;
		__this->set_jumpHeight_9((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PowerUps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps__ctor_m4E7D923E00D2340FE83164815733B5CEA67F1FE6 (PowerUps_t4E93511FA039BB2FA3641B512482CA737FB11533 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scene1_Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene1_Score_Start_m064B1A20DD421C2661139F1F1F85294887A60C92 (Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timer = 0f;
		__this->set_timer_6((0.0f));
		// Scene currentScene = SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		// sceneName = currentScene.name;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		__this->set_sceneName_9(L_1);
		// }
		return;
	}
}
// System.Void Scene1_Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene1_Score_Update_mA3F7BF333F4241AA1C80D4F612FB6B370E6D98E6 (Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F13B24F58CB2A0826EEE034881898735297C5DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// if(sceneName == "Map1")
		String_t* L_0 = __this->get_sceneName_9();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral2F13B24F58CB2A0826EEE034881898735297C5DF, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_player_10(L_2);
		// if ((player.GetComponent<GameOver>().PlayerHealth) > 0f){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_player_10();
		GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * L_4;
		L_4 = GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA(L_3, /*hidden argument*/GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var);
		float L_5 = L_4->get_PlayerHealth_7();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_6 = __this->get_timer_6();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_6(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		// seconds = (int)timer % 60;
		float L_8 = __this->get_timer_6();
		__this->set_seconds_7(((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_8)%(int32_t)((int32_t)60))));
		// timerTextValue.text = "" + (seconds);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_timerTextValue_5();
		int32_t* L_10 = __this->get_address_of_seconds_7();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_9;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_9;
			goto IL_0078;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0078:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// if (seconds > s1Score)
		int32_t L_13 = __this->get_seconds_7();
		IL2CPP_RUNTIME_CLASS_INIT(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_StaticFields*)il2cpp_codegen_static_fields_for(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_il2cpp_TypeInfo_var))->get_s1Score_8();
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0095;
		}
	}
	{
		// s1Score = seconds;
		int32_t L_15 = __this->get_seconds_7();
		IL2CPP_RUNTIME_CLASS_INIT(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_il2cpp_TypeInfo_var);
		((Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_StaticFields*)il2cpp_codegen_static_fields_for(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_il2cpp_TypeInfo_var))->set_s1Score_8(L_15);
	}

IL_0095:
	{
		// if (sceneName == "StartMenu")
		String_t* L_16 = __this->get_sceneName_9();
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00d1;
		}
	}
	{
		// string s1ScoreStr = s1Score.ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_StaticFields*)il2cpp_codegen_static_fields_for(Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA_il2cpp_TypeInfo_var))->get_address_of_s1Score_8()), /*hidden argument*/NULL);
		V_0 = L_18;
		// if (menuScore.text != s1ScoreStr)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_menuScore_4();
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_19);
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d1;
		}
	}
	{
		// menuScore.text = s1ScoreStr;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_menuScore_4();
		String_t* L_24 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_24);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void Scene1_Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene1_Score__ctor_mC924FD5D6292E1A9B7AB53652EEF87F5579E867C (Scene1_Score_tD65627F8F146F0A3772CEC82CE0E2828320425EA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scene1_Score::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene1_Score__cctor_m791F29924AAACD073F30FE8BE5432E022A871E70 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scene2_Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene2_Score_Start_m3BE0E12A620C3327F896EFED4271492A1EA64E30 (Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timer = 0f;
		__this->set_timer_6((0.0f));
		// Scene currentScene = SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		// sceneName = currentScene.name;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		__this->set_sceneName_9(L_1);
		// }
		return;
	}
}
// System.Void Scene2_Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene2_Score_Update_m4398836FE6E169F2F9CD6D752B9C71872E29E35F (Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B4CF0C91B8B2E408351626A23224CF1BE387E25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// if (sceneName == "Map2")
		String_t* L_0 = __this->get_sceneName_9();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral8B4CF0C91B8B2E408351626A23224CF1BE387E25, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_player_10(L_2);
		// if ((player.GetComponent<GameOver>().PlayerHealth) > 0f)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_player_10();
		GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * L_4;
		L_4 = GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA(L_3, /*hidden argument*/GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var);
		float L_5 = L_4->get_PlayerHealth_7();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_6 = __this->get_timer_6();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_6(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		// seconds = (int)timer % 60;
		float L_8 = __this->get_timer_6();
		__this->set_seconds_7(((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_8)%(int32_t)((int32_t)60))));
		// timerTextValue.text = "" + (seconds);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_timerTextValue_5();
		int32_t* L_10 = __this->get_address_of_seconds_7();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_9;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_9;
			goto IL_0078;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0078:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// if (seconds > s2Score)
		int32_t L_13 = __this->get_seconds_7();
		IL2CPP_RUNTIME_CLASS_INIT(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_StaticFields*)il2cpp_codegen_static_fields_for(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_il2cpp_TypeInfo_var))->get_s2Score_8();
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0095;
		}
	}
	{
		// s2Score = seconds;
		int32_t L_15 = __this->get_seconds_7();
		IL2CPP_RUNTIME_CLASS_INIT(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_il2cpp_TypeInfo_var);
		((Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_StaticFields*)il2cpp_codegen_static_fields_for(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_il2cpp_TypeInfo_var))->set_s2Score_8(L_15);
	}

IL_0095:
	{
		// if (sceneName == "StartMenu")
		String_t* L_16 = __this->get_sceneName_9();
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00d1;
		}
	}
	{
		// string s2ScoreStr = s2Score.ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_StaticFields*)il2cpp_codegen_static_fields_for(Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0_il2cpp_TypeInfo_var))->get_address_of_s2Score_8()), /*hidden argument*/NULL);
		V_0 = L_18;
		// if (menuScore.text != s2ScoreStr)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_menuScore_4();
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_19);
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d1;
		}
	}
	{
		// menuScore.text = s2ScoreStr;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_menuScore_4();
		String_t* L_24 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_24);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void Scene2_Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene2_Score__ctor_mB92EE6EE7E7D8411756D9684CD216917EF5DA1C5 (Scene2_Score_t9FF931671D7D04B695FEDF2A66D65B33716F82F0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scene2_Score::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene2_Score__cctor_mBDE81A715EB112EE229A78CE53C77C5A05C2EB8A (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scene3_Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene3_Score_Start_m53B6995932B2B7995AE77D7F682B059A56FE18EF (Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timer = 0f;
		__this->set_timer_6((0.0f));
		// Scene currentScene = SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		// sceneName = currentScene.name;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		__this->set_sceneName_9(L_1);
		// }
		return;
	}
}
// System.Void Scene3_Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene3_Score_Update_m1F9B093FC02F08C6CC566A6ABFBB4D1D43D0FA1F (Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67CD316C78BE2B3D3ADEC7A93D9D8BAC19CED3DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// if (sceneName == "Map3")
		String_t* L_0 = __this->get_sceneName_9();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral67CD316C78BE2B3D3ADEC7A93D9D8BAC19CED3DA, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_player_10(L_2);
		// if ((player.GetComponent<GameOver>().PlayerHealth) > 0f)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_player_10();
		GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * L_4;
		L_4 = GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA(L_3, /*hidden argument*/GameObject_GetComponent_TisGameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582_m89561CB7591BE13C1E391592B39CC9A82CD173EA_RuntimeMethod_var);
		float L_5 = L_4->get_PlayerHealth_7();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_6 = __this->get_timer_6();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_6(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		// seconds = (int)timer % 60;
		float L_8 = __this->get_timer_6();
		__this->set_seconds_7(((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_8)%(int32_t)((int32_t)60))));
		// timerTextValue.text = "" + (seconds);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_timerTextValue_5();
		int32_t* L_10 = __this->get_address_of_seconds_7();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_9;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_9;
			goto IL_0078;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0078:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// if (seconds > s3Score)
		int32_t L_13 = __this->get_seconds_7();
		IL2CPP_RUNTIME_CLASS_INIT(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_StaticFields*)il2cpp_codegen_static_fields_for(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_il2cpp_TypeInfo_var))->get_s3Score_8();
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0095;
		}
	}
	{
		// s3Score = seconds;
		int32_t L_15 = __this->get_seconds_7();
		IL2CPP_RUNTIME_CLASS_INIT(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_il2cpp_TypeInfo_var);
		((Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_StaticFields*)il2cpp_codegen_static_fields_for(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_il2cpp_TypeInfo_var))->set_s3Score_8(L_15);
	}

IL_0095:
	{
		// if (sceneName == "StartMenu")
		String_t* L_16 = __this->get_sceneName_9();
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00d1;
		}
	}
	{
		// string s3ScoreStr = s3Score.ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_StaticFields*)il2cpp_codegen_static_fields_for(Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF_il2cpp_TypeInfo_var))->get_address_of_s3Score_8()), /*hidden argument*/NULL);
		V_0 = L_18;
		// if (menuScore.text != s3ScoreStr)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_menuScore_4();
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_19);
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d1;
		}
	}
	{
		// menuScore.text = s3ScoreStr;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_menuScore_4();
		String_t* L_24 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_24);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void Scene3_Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene3_Score__ctor_m03786CB0DE245B9E4F5FBDBDCCF64DD372F6FB58 (Scene3_Score_t1E5213484D783C4D006C8344A2589F8900F7FDAF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scene3_Score::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene3_Score__cctor_m991A72FA3D68801B1EEF20786A7987ACF7E3CD99 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SettingsMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_Update_m71983A14F1842A620B21A6E3FE6236CEF2840832 (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// musicVolumeSlider.value = StartMenu.musicVolume;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_musicVolumeSlider_5();
		IL2CPP_RUNTIME_CLASS_INIT(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		float L_1 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_musicVolume_5();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// music.volume = StartMenu.musicVolume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_music_6();
		float L_3 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_musicVolume_5();
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu__ctor_mEE7E8FBE8EEE811B1F2AD035EBA04B35FC6ED9EF (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu_Update_m80D4D1208497F4C3551D6572B10D6CEA01DE36AA (StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// music.volume = musicVolume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_music_7();
		IL2CPP_RUNTIME_CLASS_INIT(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		float L_1 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_musicVolume_5();
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, L_1, /*hidden argument*/NULL);
		// sensSlider.value = StartMenu.sens;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_sensSlider_6();
		float L_3 = ((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->get_sens_4();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void StartMenu::MapStart1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu_MapStart1_mE657C5BDF6E3672B02A3390A772B8646203D46DD (StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartMenu::MapStart2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu_MapStart2_m7CC71EE07C9A12C97A4608F68727A3064855A334 (StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartMenu::MapStart3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu_MapStart3_m6982C77C20A351D423AE1362D16A0C0749BFDB2D (StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(3);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartMenu::MusicVolume(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu_MusicVolume_mB61ABE3C7A7E4792B5C22D97989DEC647057ECB3 (StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * __this, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// musicVolume = slider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = ___slider0;
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->set_musicVolume_5(L_1);
		// }
		return;
	}
}
// System.Void StartMenu::ChangeSensitivity(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu_ChangeSensitivity_m70B8FC04DE28248878B8E95851FF5B4D615E1C17 (StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * __this, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartMenu.sens = slider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = ___slider0;
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->set_sens_4(L_1);
		// }
		return;
	}
}
// System.Void StartMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu__ctor_mF07C92F5B046EB38E3933ABD69D96918F29EB952 (StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartMenu::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu__cctor_m12748ECC7D55F27274C25B56A314209DBBE9E8CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float sens = 15f;
		((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->set_sens_4((15.0f));
		// public static float musicVolume = 0.03f;
		((StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_StaticFields*)il2cpp_codegen_static_fields_for(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3_il2cpp_TypeInfo_var))->set_musicVolume_5((0.0299999993f));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// seconds = 0f;
		__this->set_seconds_5((0.0f));
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	{
		// seconds += Time.deltaTime;
		float L_0 = __this->get_seconds_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_seconds_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// timerTextValue.text = "" + (seconds);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_timerTextValue_4();
		float* L_3 = __this->get_address_of_seconds_5();
		String_t* L_4;
		L_4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_3, /*hidden argument*/NULL);
		String_t* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_2;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_2;
			goto IL_002c;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: PlayerInput/OnFootActions
IL2CPP_EXTERN_C void OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshal_pinvoke(const OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819& unmarshaled, OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'OnFootActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshal_pinvoke_back(const OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshaled_pinvoke& marshaled, OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'OnFootActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInput/OnFootActions
IL2CPP_EXTERN_C void OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshal_pinvoke_cleanup(OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: PlayerInput/OnFootActions
IL2CPP_EXTERN_C void OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshal_com(const OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819& unmarshaled, OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'OnFootActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshal_com_back(const OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshaled_com& marshaled, OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'OnFootActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInput/OnFootActions
IL2CPP_EXTERN_C void OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshal_com_cleanup(OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819_marshaled_com& marshaled)
{
}
// System.Void PlayerInput/OnFootActions::.ctor(PlayerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFootActions__ctor_m83748B1441D251D2076151AD42964332B6FC76AD (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public OnFootActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public OnFootActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void OnFootActions__ctor_m83748B1441D251D2076151AD42964332B6FC76AD_AdjustorThunk (RuntimeObject * __this, PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * ___wrapper0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	OnFootActions__ctor_m83748B1441D251D2076151AD42964332B6FC76AD_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Movement => m_Wrapper.m_OnFoot_Movement;
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_OnFoot_Movement_3();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Jump => m_Wrapper.m_OnFoot_Jump;
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_OnFoot_Jump_4();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Look => m_Wrapper.m_OnFoot_Look;
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_OnFoot_Look_5();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_SprintStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @SprintStart => m_Wrapper.m_OnFoot_SprintStart;
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_OnFoot_SprintStart_6();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInput/OnFootActions::get_SprintFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @SprintFinish => m_Wrapper.m_OnFoot_SprintFinish;
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_OnFoot_SprintFinish_7();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInput/OnFootActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * OnFootActions_Get_mC65F807CD3EC1ABC60701D6C6B45E60BD2F2D1E5 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_OnFoot; }
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = __this->get_m_Wrapper_0();
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_1 = L_0->get_m_OnFoot_1();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * OnFootActions_Get_mC65F807CD3EC1ABC60701D6C6B45E60BD2F2D1E5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * _returnValue;
	_returnValue = OnFootActions_Get_mC65F807CD3EC1ABC60701D6C6B45E60BD2F2D1E5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void PlayerInput/OnFootActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFootActions_Enable_m745E08E639B1032378BFAA274140CB42A5D0504F (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = OnFootActions_Get_mC65F807CD3EC1ABC60701D6C6B45E60BD2F2D1E5((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15(L_0, /*hidden argument*/NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void OnFootActions_Enable_m745E08E639B1032378BFAA274140CB42A5D0504F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	OnFootActions_Enable_m745E08E639B1032378BFAA274140CB42A5D0504F(_thisAdjusted, method);
}
// System.Void PlayerInput/OnFootActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFootActions_Disable_m4BA006D5625CDBBA66B9BF4542B42C49C738902A (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = OnFootActions_Get_mC65F807CD3EC1ABC60701D6C6B45E60BD2F2D1E5((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5(L_0, /*hidden argument*/NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void OnFootActions_Disable_m4BA006D5625CDBBA66B9BF4542B42C49C738902A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	OnFootActions_Disable_m4BA006D5625CDBBA66B9BF4542B42C49C738902A(_thisAdjusted, method);
}
// System.Boolean PlayerInput/OnFootActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnFootActions_get_enabled_mFA4415846946AFBA8765B4E6D3A2B98809F762B6 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, const RuntimeMethod* method)
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = OnFootActions_Get_mC65F807CD3EC1ABC60701D6C6B45E60BD2F2D1E5((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool OnFootActions_get_enabled_mFA4415846946AFBA8765B4E6D3A2B98809F762B6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	bool _returnValue;
	_returnValue = OnFootActions_get_enabled_mFA4415846946AFBA8765B4E6D3A2B98809F762B6(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInput/OnFootActions::op_Implicit(PlayerInput/OnFootActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * OnFootActions_op_Implicit_mD7529E00FF041E2662B5EC966748ACF6A8E88BBC (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819  ___set0, const RuntimeMethod* method)
{
	{
		// public static implicit operator InputActionMap(OnFootActions set) { return set.Get(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = OnFootActions_Get_mC65F807CD3EC1ABC60701D6C6B45E60BD2F2D1E5((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)(&___set0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void PlayerInput/OnFootActions::SetCallbacks(PlayerInput/IOnFootActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFootActions_SetCallbacks_m37F58E1A81156C33CFF5911F7FDB8766229BA378 (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_OnFootActionsCallbackInterface != null)
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = __this->get_m_Wrapper_0();
		RuntimeObject* L_1 = L_0->get_m_OnFootActionsCallbackInterface_2();
		if (!L_1)
		{
			goto IL_020e;
		}
	}
	{
		// @Movement.started -= m_Wrapper.m_OnFootActionsCallbackInterface.OnMovement;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_3 = __this->get_m_Wrapper_0();
		RuntimeObject* L_4 = L_3->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_5 = L_4;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_6 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_6, L_5, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_5, 0, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_2, L_6, /*hidden argument*/NULL);
		// @Movement.performed -= m_Wrapper.m_OnFootActionsCallbackInterface.OnMovement;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_8 = __this->get_m_Wrapper_0();
		RuntimeObject* L_9 = L_8->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_10 = L_9;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_11 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_11, L_10, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_10, 0, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_7, L_11, /*hidden argument*/NULL);
		// @Movement.canceled -= m_Wrapper.m_OnFootActionsCallbackInterface.OnMovement;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_13 = __this->get_m_Wrapper_0();
		RuntimeObject* L_14 = L_13->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_15 = L_14;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_16 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_16, L_15, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_15, 0, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_12, L_16, /*hidden argument*/NULL);
		// @Jump.started -= m_Wrapper.m_OnFootActionsCallbackInterface.OnJump;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_17;
		L_17 = OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_18 = __this->get_m_Wrapper_0();
		RuntimeObject* L_19 = L_18->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_20 = L_19;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_21 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_21, L_20, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_20, 1, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_17, L_21, /*hidden argument*/NULL);
		// @Jump.performed -= m_Wrapper.m_OnFootActionsCallbackInterface.OnJump;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_22;
		L_22 = OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_23 = __this->get_m_Wrapper_0();
		RuntimeObject* L_24 = L_23->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_25 = L_24;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_26 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_26, L_25, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_25, 1, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_22, L_26, /*hidden argument*/NULL);
		// @Jump.canceled -= m_Wrapper.m_OnFootActionsCallbackInterface.OnJump;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_27;
		L_27 = OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_28 = __this->get_m_Wrapper_0();
		RuntimeObject* L_29 = L_28->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_30 = L_29;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_31 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_31, L_30, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_30, 1, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_27, L_31, /*hidden argument*/NULL);
		// @Look.started -= m_Wrapper.m_OnFootActionsCallbackInterface.OnLook;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_32;
		L_32 = OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_33 = __this->get_m_Wrapper_0();
		RuntimeObject* L_34 = L_33->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_35 = L_34;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_36 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_36, L_35, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_35, 2, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_32, L_36, /*hidden argument*/NULL);
		// @Look.performed -= m_Wrapper.m_OnFootActionsCallbackInterface.OnLook;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_37;
		L_37 = OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_38 = __this->get_m_Wrapper_0();
		RuntimeObject* L_39 = L_38->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_40 = L_39;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_41 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_41, L_40, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_40, 2, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_37, L_41, /*hidden argument*/NULL);
		// @Look.canceled -= m_Wrapper.m_OnFootActionsCallbackInterface.OnLook;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_42;
		L_42 = OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_43 = __this->get_m_Wrapper_0();
		RuntimeObject* L_44 = L_43->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_45 = L_44;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_46 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_46, L_45, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_45, 2, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_42, L_46, /*hidden argument*/NULL);
		// @SprintStart.started -= m_Wrapper.m_OnFootActionsCallbackInterface.OnSprintStart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_47;
		L_47 = OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_48 = __this->get_m_Wrapper_0();
		RuntimeObject* L_49 = L_48->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_50 = L_49;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_51 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_51, L_50, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_50, 3, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_47, L_51, /*hidden argument*/NULL);
		// @SprintStart.performed -= m_Wrapper.m_OnFootActionsCallbackInterface.OnSprintStart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_52;
		L_52 = OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_53 = __this->get_m_Wrapper_0();
		RuntimeObject* L_54 = L_53->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_55 = L_54;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_56 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_56, L_55, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_55, 3, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_52, L_56, /*hidden argument*/NULL);
		// @SprintStart.canceled -= m_Wrapper.m_OnFootActionsCallbackInterface.OnSprintStart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_57;
		L_57 = OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_58 = __this->get_m_Wrapper_0();
		RuntimeObject* L_59 = L_58->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_60 = L_59;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_61 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_61, L_60, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_60, 3, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_57, L_61, /*hidden argument*/NULL);
		// @SprintFinish.started -= m_Wrapper.m_OnFootActionsCallbackInterface.OnSprintFinish;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_62;
		L_62 = OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_63 = __this->get_m_Wrapper_0();
		RuntimeObject* L_64 = L_63->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_65 = L_64;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_66 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_66, L_65, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_65, 4, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_62, L_66, /*hidden argument*/NULL);
		// @SprintFinish.performed -= m_Wrapper.m_OnFootActionsCallbackInterface.OnSprintFinish;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_67;
		L_67 = OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_68 = __this->get_m_Wrapper_0();
		RuntimeObject* L_69 = L_68->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_70 = L_69;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_71 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_71, L_70, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_70, 4, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_67, L_71, /*hidden argument*/NULL);
		// @SprintFinish.canceled -= m_Wrapper.m_OnFootActionsCallbackInterface.OnSprintFinish;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_72;
		L_72 = OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_73 = __this->get_m_Wrapper_0();
		RuntimeObject* L_74 = L_73->get_m_OnFootActionsCallbackInterface_2();
		RuntimeObject* L_75 = L_74;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_76 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_76, L_75, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_75, 4, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_72, L_76, /*hidden argument*/NULL);
	}

IL_020e:
	{
		// m_Wrapper.m_OnFootActionsCallbackInterface = instance;
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_77 = __this->get_m_Wrapper_0();
		RuntimeObject* L_78 = ___instance0;
		L_77->set_m_OnFootActionsCallbackInterface_2(L_78);
		// if (instance != null)
		RuntimeObject* L_79 = ___instance0;
		if (!L_79)
		{
			goto IL_0388;
		}
	}
	{
		// @Movement.started += instance.OnMovement;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_80;
		L_80 = OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_81 = ___instance0;
		RuntimeObject* L_82 = L_81;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_83 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_83, L_82, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_82, 0, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_80, L_83, /*hidden argument*/NULL);
		// @Movement.performed += instance.OnMovement;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_84;
		L_84 = OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_85 = ___instance0;
		RuntimeObject* L_86 = L_85;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_87 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_87, L_86, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_86, 0, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_84, L_87, /*hidden argument*/NULL);
		// @Movement.canceled += instance.OnMovement;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_88;
		L_88 = OnFootActions_get_Movement_m38A83619EF95CB15BDE3136AB50FF02E40192824((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_89 = ___instance0;
		RuntimeObject* L_90 = L_89;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_91 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_91, L_90, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_90, 0, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_88, L_91, /*hidden argument*/NULL);
		// @Jump.started += instance.OnJump;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_92;
		L_92 = OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_93 = ___instance0;
		RuntimeObject* L_94 = L_93;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_95 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_95, L_94, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_94, 1, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_92, L_95, /*hidden argument*/NULL);
		// @Jump.performed += instance.OnJump;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_96;
		L_96 = OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_97 = ___instance0;
		RuntimeObject* L_98 = L_97;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_99 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_99, L_98, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_98, 1, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_96, L_99, /*hidden argument*/NULL);
		// @Jump.canceled += instance.OnJump;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_100;
		L_100 = OnFootActions_get_Jump_m11BFB4F03672873714458C952DE2A32C47C72918((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_101 = ___instance0;
		RuntimeObject* L_102 = L_101;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_103 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_103, L_102, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_102, 1, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_100, L_103, /*hidden argument*/NULL);
		// @Look.started += instance.OnLook;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_104;
		L_104 = OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_105 = ___instance0;
		RuntimeObject* L_106 = L_105;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_107 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_107, L_106, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_106, 2, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_104, L_107, /*hidden argument*/NULL);
		// @Look.performed += instance.OnLook;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_108;
		L_108 = OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_109 = ___instance0;
		RuntimeObject* L_110 = L_109;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_111 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_111, L_110, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_110, 2, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_108, L_111, /*hidden argument*/NULL);
		// @Look.canceled += instance.OnLook;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_112;
		L_112 = OnFootActions_get_Look_m8104D68BE803625A2AD7007794978D150ADEC413((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_113 = ___instance0;
		RuntimeObject* L_114 = L_113;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_115 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_115, L_114, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_114, 2, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_112, L_115, /*hidden argument*/NULL);
		// @SprintStart.started += instance.OnSprintStart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_116;
		L_116 = OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_117 = ___instance0;
		RuntimeObject* L_118 = L_117;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_119 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_119, L_118, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_118, 3, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_116, L_119, /*hidden argument*/NULL);
		// @SprintStart.performed += instance.OnSprintStart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_120;
		L_120 = OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_121 = ___instance0;
		RuntimeObject* L_122 = L_121;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_123 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_123, L_122, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_122, 3, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_120, L_123, /*hidden argument*/NULL);
		// @SprintStart.canceled += instance.OnSprintStart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_124;
		L_124 = OnFootActions_get_SprintStart_mBF354ECB7E550F2997ADB9FF1AEA39C9DB63FDE9((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_125 = ___instance0;
		RuntimeObject* L_126 = L_125;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_127 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_127, L_126, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_126, 3, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_124, L_127, /*hidden argument*/NULL);
		// @SprintFinish.started += instance.OnSprintFinish;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_128;
		L_128 = OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_129 = ___instance0;
		RuntimeObject* L_130 = L_129;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_131 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_131, L_130, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_130, 4, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_128, L_131, /*hidden argument*/NULL);
		// @SprintFinish.performed += instance.OnSprintFinish;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_132;
		L_132 = OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_133 = ___instance0;
		RuntimeObject* L_134 = L_133;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_135 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_135, L_134, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_134, 4, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_132, L_135, /*hidden argument*/NULL);
		// @SprintFinish.canceled += instance.OnSprintFinish;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_136;
		L_136 = OnFootActions_get_SprintFinish_m622B8D59F3C27103E8D4BD2BEF23C48F933DE6CE((OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_137 = ___instance0;
		RuntimeObject* L_138 = L_137;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_139 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_139, L_138, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_138, 4, IOnFootActions_t334DBEAC93A934C1FA9EEADBF6F46EA57DEF0F23_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_136, L_139, /*hidden argument*/NULL);
	}

IL_0388:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void OnFootActions_SetCallbacks_m37F58E1A81156C33CFF5911F7FDB8766229BA378_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * _thisAdjusted = reinterpret_cast<OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 *>(__this + _offset);
	OnFootActions_SetCallbacks_m37F58E1A81156C33CFF5911F7FDB8766229BA378(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * PlayerInput_get_asset_mE0BD6F32CD2E67A27121A83086C27A440C78A75D_inline (PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * __this, const RuntimeMethod* method)
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = __this->get_U3CassetU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method)
{
	{
		// get => m_BindingMask;
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_0 = __this->get_m_BindingMask_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFootActions__ctor_m83748B1441D251D2076151AD42964332B6FC76AD_inline (OnFootActions_tA2B66A67943FE619BDCD8156009D4C38A3DCE819 * __this, PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public OnFootActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
		PlayerInput_t8FB99FDA5B5C3F2023CD3DE7B81D823B4E10E94E * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public OnFootActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
