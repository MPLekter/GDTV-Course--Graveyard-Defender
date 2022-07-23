#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>
struct Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>
struct Dictionary_2_t9960A3ACE6FAE1073261A9154F09FA1C2AEEA832;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int>
struct IEqualityComparer_1_t4275A3D7B86C2D3C66842AB0700881FB24837F2D;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector2Int,Node>
struct KeyCollection_t61277088ABCE57C5C83EAAA62DFC378D7CB1BCD5;
// System.Collections.Generic.List`1<Node>
struct List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<Node>
struct Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector2Int,Node>
struct ValueCollection_t676AEA14CE8D5545DBCF07C0222FE4284FC5F0B8;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Vector2Int,Node>[]
struct EntryU5BU5D_tF59C18CEB40D19D87A344ED0306E6C5CDAB1668F;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// Enemy[]
struct EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// Node[]
struct NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Bank
struct Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyHealth
struct EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D;
// EnemyMover
struct EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GridManager
struct GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectPool
struct ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// Pathfinder
struct Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TargetLocator
struct TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
// Tower
struct Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// EnemyMover/<FollowPath>d__10
struct U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ObjectPool/<SpawnEnemy>d__8
struct U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664;
// Tower/<Build>d__4
struct U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCC26F0ECC06C779A5229B38DF7FF6E27306A9F;
IL2CPP_EXTERN_C String_t* _stringLiteral236695FC630D35C988E0043B17D3CF131DF6F6F6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA8204B3789EBC58555C04D0C796AFA94C29EB6A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m8BBFC8E2C04C877B9CB228254EF9870520E47724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m283E20E49F0F1A15A1C362EEB4F066DB37C613D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEACF4F81C4BB0E2FCCE178DD4FA51EB748BF0324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mABED1E0B1F5907DADE1D92D353B6ECA58994924E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8A3ADC28DE0AE73F6C9900FF55ACD6675DEA6D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m744026410AF433C3132467640EFC4D43BAE365BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisBank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E_m141DC8D29437A38451E2D42B2CE27EB4D9EC0883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB_m33C5732A9BBCA136F3CF4A82BCAB766AA6D3381B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_mAC25F370B1372543690444BF023641DEC3EC9F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mE8E7F1405938E9AD7592077979C9646B23E40D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m6D3A777DCF074850FB48420BC1B147092EA1618A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m00D6A2B52A30801B021F8A2ED733C880DD10D1D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mD5402A80444ACD93B071EAB631E35A5E055F2578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m931C96774ADC7144158EF990AF37AF00AE55600E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildU3Ed__4_System_Collections_IEnumerator_Reset_m7A190BC4DABC8792A30E56A01F9B7C5D5C1AD903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFollowPathU3Ed__10_System_Collections_IEnumerator_Reset_m832309F826C7EC9B0C9729031413F07B8F014955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnEnemyU3Ed__8_System_Collections_IEnumerator_Reset_mF7376A8C382AEDC3A3A25EF5A1952710E3DA640B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>
struct Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF59C18CEB40D19D87A344ED0306E6C5CDAB1668F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t61277088ABCE57C5C83EAAA62DFC378D7CB1BCD5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t676AEA14CE8D5545DBCF07C0222FE4284FC5F0B8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Node>
struct List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<Node>
struct Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ObjectPool/<SpawnEnemy>d__8
struct U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664  : public RuntimeObject
{
	// System.Int32 ObjectPool/<SpawnEnemy>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObjectPool/<SpawnEnemy>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ObjectPool ObjectPool/<SpawnEnemy>d__8::<>4__this
	ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* ___U3CU3E4__this_2;
};

// Tower/<Build>d__4
struct U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F  : public RuntimeObject
{
	// System.Int32 Tower/<Build>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tower/<Build>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Tower Tower/<Build>d__4::<>4__this
	Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator Tower/<Build>d__4::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;
	// UnityEngine.Transform Tower/<Build>d__4::<child>5__3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CchildU3E5__3_4;
};

// System.Collections.Generic.List`1/Enumerator<Node>
struct Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,Node>
struct KeyValuePair_2_t6FDC7121BAD91206AF703C33534A8C8A03E5F48F 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,System.Object>
struct KeyValuePair_2_t6F788E07042D753A519E870A5BB1F7A1FE726AA2 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5  : public RuntimeObject
{
	// UnityEngine.Vector2Int Node::coordinates
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates_0;
	// System.Boolean Node::isWalkable
	bool ___isWalkable_1;
	// System.Boolean Node::isExplored
	bool ___isExplored_2;
	// System.Boolean Node::isPath
	bool ___isPath_3;
	// Node Node::connectedTo
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___connectedTo_4;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// EnemyMover/<FollowPath>d__10
struct U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C  : public RuntimeObject
{
	// System.Int32 EnemyMover/<FollowPath>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyMover/<FollowPath>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnemyMover EnemyMover/<FollowPath>d__10::<>4__this
	EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* ___U3CU3E4__this_2;
	// System.Int32 EnemyMover/<FollowPath>d__10::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.Vector3 EnemyMover/<FollowPath>d__10::<startPos>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPosU3E5__3_4;
	// UnityEngine.Vector3 EnemyMover/<FollowPath>d__10::<endPos>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CendPosU3E5__4_5;
	// System.Single EnemyMover/<FollowPath>d__10::<travelPercent>5__5
	float ___U3CtravelPercentU3E5__5_6;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>
struct Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t6FDC7121BAD91206AF703C33534A8C8A03E5F48F ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>
struct Enumerator_t6947C7682E007DBAB15EC55150B30357DB5A5550 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9960A3ACE6FAE1073261A9154F09FA1C2AEEA832* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t6F788E07042D753A519E870A5BB1F7A1FE726AA2 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Bank
struct Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Bank::startingBalance
	int32_t ___startingBalance_4;
	// System.Int32 Bank::currentBalance
	int32_t ___currentBalance_5;
	// TMPro.TMP_Text Bank::displayedBalance
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___displayedBalance_6;
	// UnityEngine.GameObject Bank::UI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UI_7;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Enemy::goldReward
	int32_t ___goldReward_4;
	// System.Int32 Enemy::goldPenalty
	int32_t ___goldPenalty_5;
	// Bank Enemy::bank
	Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* ___bank_6;
};

// EnemyHealth
struct EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 EnemyHealth::maxHP
	int32_t ___maxHP_4;
	// System.Int32 EnemyHealth::currentHP
	int32_t ___currentHP_5;
	// System.Int32 EnemyHealth::boostHP
	int32_t ___boostHP_6;
	// Enemy EnemyHealth::enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy_7;
};

// EnemyMover
struct EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyMover::speed
	float ___speed_4;
	// System.Collections.Generic.List`1<Node> EnemyMover::path
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* ___path_5;
	// Enemy EnemyMover::enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy_6;
	// GridManager EnemyMover::gridManager
	GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* ___gridManager_7;
	// Pathfinder EnemyMover::pathfinder
	Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* ___pathfinder_8;
};

// GridManager
struct GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2Int GridManager::gridSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___gridSize_4;
	// System.Int32 GridManager::unityGridSize
	int32_t ___unityGridSize_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> GridManager::grid
	Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* ___grid_6;
};

// ObjectPool
struct ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ObjectPool::enemyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyPrefab_4;
	// System.Int32 ObjectPool::poolSize
	int32_t ___poolSize_5;
	// System.Single ObjectPool::spawnTimer
	float ___spawnTimer_6;
	// UnityEngine.GameObject[] ObjectPool::pool
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___pool_7;
};

// Pathfinder
struct Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2Int Pathfinder::startCoordinates
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___startCoordinates_4;
	// UnityEngine.Vector2Int Pathfinder::endCoordinates
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___endCoordinates_5;
	// Node Pathfinder::startNode
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___startNode_6;
	// Node Pathfinder::destinationNode
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___destinationNode_7;
	// Node Pathfinder::currentSearchNode
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___currentSearchNode_8;
	// System.Collections.Generic.Queue`1<Node> Pathfinder::frontier
	Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* ___frontier_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> Pathfinder::reached
	Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* ___reached_10;
	// UnityEngine.Vector2Int[] Pathfinder::directions
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___directions_11;
	// GridManager Pathfinder::gridManager
	GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* ___gridManager_12;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> Pathfinder::grid
	Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* ___grid_13;
};

// TargetLocator
struct TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform TargetLocator::weapon
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___weapon_4;
	// UnityEngine.Transform TargetLocator::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
	// System.Single TargetLocator::range
	float ___range_6;
	// UnityEngine.ParticleSystem TargetLocator::projectileParticles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___projectileParticles_7;
};

// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Tower Tile::towerPrefab
	Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* ___towerPrefab_4;
	// System.Boolean Tile::isPlaceable
	bool ___isPlaceable_5;
	// GridManager Tile::gridManager
	GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* ___gridManager_6;
	// Pathfinder Tile::pathfinder
	Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* ___pathfinder_7;
	// UnityEngine.Vector2Int Tile::coordinates
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates_8;
};

// Tower
struct Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Tower::towerCost
	int32_t ___towerCost_4;
	// System.Single Tower::buildDelay
	float ___buildDelay_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A m_Items[1];

	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		m_Items[index] = value;
	}
};
// Enemy[]
struct EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F  : public RuntimeArray
{
	ALIGN_FIELD (8) Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* m_Items[1];

	inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m79B18A0589BCFE1AB0C51AC7109CA7DA9899371C_gshared (Dictionary_2_t9960A3ACE6FAE1073261A9154F09FA1C2AEEA832* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m1A1540A3C6915FC270E142FE5402E7B0B45D9F2A_gshared (Dictionary_2_t9960A3ACE6FAE1073261A9154F09FA1C2AEEA832* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6947C7682E007DBAB15EC55150B30357DB5A5550 Dictionary_2_GetEnumerator_mBC4B336667BAA96E60E77C2972D432F55D634EB6_gshared (Dictionary_2_t9960A3ACE6FAE1073261A9154F09FA1C2AEEA832* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2A1D61186FF11C0ABF676BF51FB6FBD6772FFBC2_gshared (Enumerator_t6947C7682E007DBAB15EC55150B30357DB5A5550* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t6F788E07042D753A519E870A5BB1F7A1FE726AA2 Enumerator_get_Current_m95E00F3578F490956A3625933D4756814604A2C3_gshared_inline (Enumerator_t6947C7682E007DBAB15EC55150B30357DB5A5550* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m9C25318B39214FC63CE60D19D565828C56D8CCEB_gshared_inline (KeyValuePair_2_t6F788E07042D753A519E870A5BB1F7A1FE726AA2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD586848625A71787FC12AC6E304751F2B3AA21CB_gshared (Enumerator_t6947C7682E007DBAB15EC55150B30357DB5A5550* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m549EFEBC90125EE1CB6D78A5D3B4AC05F83614EF_gshared (Dictionary_2_t9960A3ACE6FAE1073261A9154F09FA1C2AEEA832* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBA9343523B9FC2B73E1296469B8E4777EF816CFA_gshared (Dictionary_2_t9960A3ACE6FAE1073261A9154F09FA1C2AEEA832* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFBCE9AA28AC026A8F6D4A8785B88AE406343228E_gshared (Dictionary_2_t9960A3ACE6FAE1073261A9154F09FA1C2AEEA832* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Bank::UpdateTextUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_UpdateTextUI_m79814160519AAF132107F926060AE264EA6B9B0E (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Bank::ReloadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_ReloadScene_mA980E48CACA890828906388F90C056BD820E5446 (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Bank>()
inline Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* Object_FindObjectOfType_TisBank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E_m141DC8D29437A38451E2D42B2CE27EB4D9EC0883 (const RuntimeMethod* method)
{
	return ((  Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Bank::Deposit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Deposit_mAE1023FEDD896E740AD8C85F99BD60FC91F61612 (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void Bank::Withdraw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Withdraw_m507224141BAFA79C03889C965D8E687DED2EAD1B (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void EnemyHealth::ProcessHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_ProcessHit_m891421BADB440A488D19E7673409149FA51F4C27 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) ;
// System.Void EnemyHealth::ReduceHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_ReduceHP_mA94E3200B5BF987F94A5598CCBC77FE61E728FEE (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) ;
// System.Void Enemy::RewardGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_RewardGold_m82FC45C2AF96481D04CAE32C1E70D137C75260A6 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void EnemyMover::ReturnToStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover_ReturnToStart_m50A8D93BA01E1F6F946B5C2AC8A1B22BF5DA2C49 (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) ;
// System.Void EnemyMover::RecalculatePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover_RecalculatePath_mEA1F9E42ADE8E657CBE457CDC811C394FC6984D3 (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, bool ___resetPath0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GridManager>()
inline GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944 (const RuntimeMethod* method)
{
	return ((  GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<Pathfinder>()
inline Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* Object_FindObjectOfType_TisPathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB_m33C5732A9BBCA136F3CF4A82BCAB766AA6D3381B (const RuntimeMethod* method)
{
	return ((  Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// UnityEngine.Vector2Int Pathfinder::get_StartCoordinates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Pathfinder_get_StartCoordinates_mA92A4B53942C430032042384DB6ACABAF319166D_inline (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int GridManager::GetCoordinatesFromPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GridManager_GetCoordinatesFromPosition_m7813DC06B7E5DA1A87FF3750CB0312674454CEBA (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Node>::Clear()
inline void List_1_Clear_m744026410AF433C3132467640EFC4D43BAE365BB_inline (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Node> Pathfinder::GetNewPath(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* Pathfinder_GetNewPath_mD416DC437AD949F6756F9C577F717F1DFE2C0D41 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EnemyMover::FollowPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyMover_FollowPath_m3A139436AF165B1393602A9A885295AA6A238DC3 (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GridManager::GetPositionFromCoordinates(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GridManager_GetPositionFromCoordinates_m3E8DD1613B6B6542758843E63412458261B78C38 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Enemy::StealGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_StealGold_m1DFE65C100AF60C78967C192B22876548B73650B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void EnemyMover/<FollowPath>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__10__ctor_m0E9786F7DA2F7189A5BC8DBAA15ECB69D3862083 (U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Node>::.ctor()
inline void List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057 (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Node>::get_Item(System.Int32)
inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Node>::get_Count()
inline int32_t List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_inline (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void EnemyMover::FinishPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover_FinishPath_m2676C635E5BE08A8CAAEF07F1CE36B7E39FD261B (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void GridManager::CreateGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_CreateGrid_m5465099AB604474CC7D02C5E20E06165DEF6D4DB (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6 (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))Dictionary_2_ContainsKey_m79B18A0589BCFE1AB0C51AC7109CA7DA9899371C_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::get_Item(TKey)
inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479 (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___key0, const RuntimeMethod* method)
{
	return ((  Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* (*) (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))Dictionary_2_get_Item_m1A1540A3C6915FC270E142FE5402E7B0B45D9F2A_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::GetEnumerator()
inline Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454 Dictionary_2_GetEnumerator_m283E20E49F0F1A15A1C362EEB4F066DB37C613D3 (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454 (*) (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mBC4B336667BAA96E60E77C2972D432F55D634EB6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>::Dispose()
inline void Enumerator_Dispose_mEACF4F81C4BB0E2FCCE178DD4FA51EB748BF0324 (Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454*, const RuntimeMethod*))Enumerator_Dispose_m2A1D61186FF11C0ABF676BF51FB6FBD6772FFBC2_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>::get_Current()
inline KeyValuePair_2_t6FDC7121BAD91206AF703C33534A8C8A03E5F48F Enumerator_get_Current_m8A3ADC28DE0AE73F6C9900FF55ACD6675DEA6D98_inline (Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t6FDC7121BAD91206AF703C33534A8C8A03E5F48F (*) (Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454*, const RuntimeMethod*))Enumerator_get_Current_m95E00F3578F490956A3625933D4756814604A2C3_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2Int,Node>::get_Value()
inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_inline (KeyValuePair_2_t6FDC7121BAD91206AF703C33534A8C8A03E5F48F* __this, const RuntimeMethod* method)
{
	return ((  Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* (*) (KeyValuePair_2_t6FDC7121BAD91206AF703C33534A8C8A03E5F48F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m9C25318B39214FC63CE60D19D565828C56D8CCEB_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector2Int,Node>::MoveNext()
inline bool Enumerator_MoveNext_mABED1E0B1F5907DADE1D92D353B6ECA58994924E (Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454*, const RuntimeMethod*))Enumerator_MoveNext_mD586848625A71787FC12AC6E304751F2B3AA21CB_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Node::.ctor(UnityEngine.Vector2Int,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m34022B1151E14810645C3FEF6FB24462CA276AA7 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, bool ___isWalkable1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91 (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___key0, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*, const RuntimeMethod*))Dictionary_2_Add_m549EFEBC90125EE1CB6D78A5D3B4AC05F83614EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::.ctor()
inline void Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0 (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*, const RuntimeMethod*))Dictionary_2__ctor_mBA9343523B9FC2B73E1296469B8E4777EF816CFA_gshared)(__this, method);
}
// System.Void ObjectPool::PopulatePool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_PopulatePool_m03E443E0D4CBCEEC91A635F70151AF2E92B459D2 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ObjectPool::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_SpawnEnemy_m7FCACDF30593D975F9108CB287E784B1C2FB9241 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void ObjectPool/<SpawnEnemy>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__8__ctor_mC6F65B4A34FFF6654DA9F75A1295D4FDECC8BBDB (U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ObjectPool::EnableObjectInPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_EnableObjectInPool_m963044C2B1CCD6E482CCFE2C619678F93BF7B308 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> GridManager::get_Grid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* GridManager_get_Grid_m823A4943B32194E1A922C7C38B06841D6D972CC2_inline (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Node> Pathfinder::GetNewPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* Pathfinder_GetNewPath_m6B32B9BF86E33F1147FB4F363825554EC49849B4 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) ;
// System.Void GridManager::ResetNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_ResetNodes_m396A85046D8CF0D472413EC95BB4E879646F2D64 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) ;
// System.Void Pathfinder::BreadthFirstSearch(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_BreadthFirstSearch_m3AD910012A6529664634F6FBB62224EDD739AC5B (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Node> Pathfinder::BuildPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* Pathfinder_BuildPath_mAFC4E86070B81A920C22B7CAB7A94E8FF3828423 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::op_Addition(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_op_Addition_m395CFA571AB48E2286EECC12AEEA718CA1A32C70_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___a0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Node>::Add(T)
inline void List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Node>::GetEnumerator()
inline Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Node>::Dispose()
inline void Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84 (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Node>::get_Current()
inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_inline (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D* __this, const RuntimeMethod* method)
{
	return ((  Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* (*) (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Node>::Enqueue(T)
inline void Queue_1_Enqueue_m00D6A2B52A30801B021F8A2ED733C880DD10D1D1 (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A*, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Node>::MoveNext()
inline bool Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415 (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Node>::Clear()
inline void Queue_1_Clear_mE8E7F1405938E9AD7592077979C9646B23E40D2C (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node>::Clear()
inline void Dictionary_2_Clear_m8BBFC8E2C04C877B9CB228254EF9870520E47724 (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*, const RuntimeMethod*))Dictionary_2_Clear_mFBCE9AA28AC026A8F6D4A8785B88AE406343228E_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1<Node>::Dequeue()
inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* Queue_1_Dequeue_m6D3A777DCF074850FB48420BC1B147092EA1618A (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* __this, const RuntimeMethod* method)
{
	return ((  Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* (*) (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void Pathfinder::ExploreNeighbors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_ExploreNeighbors_m4FFA3093FF666B587ABB719710A9F7493BC8C9E6 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2Int::op_Equality(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Equality_m0BACF220C29A50100740A626E2A928F9F96E6759_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___lhs0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___rhs1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Node>::get_Count()
inline int32_t Queue_1_get_Count_m931C96774ADC7144158EF990AF37AF00AE55600E_inline (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Node>::Reverse()
inline void List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3 (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_BroadcastMessage_mE828C5B6A2BBF97BE0922493EEC4A6D45C45FEBF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___methodName0, RuntimeObject* ___parameter1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Node>::.ctor()
inline void Queue_1__ctor_mD5402A80444ACD93B071EAB631E35A5E055F2578 (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_right_m921C9F23A09E5423E1905D5A4E5D0E02ED146AE7_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_left_m0115A485CCFE776FDFABCBF6E5486095F2A658C9_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_up_m870C1A8FD5977767F43B0A53A99FD12AD594432C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_down_m4695E9EBBC28CEA810728022456DF9639FD5BC62_inline (const RuntimeMethod* method) ;
// System.Void TargetLocator::FindClosestTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_FindClosestTarget_mCF08DF2817099324DD0A7F2F3A841AE692E80D74 (TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026* __this, const RuntimeMethod* method) ;
// System.Void TargetLocator::AimWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_AimWeapon_m24568E66962603E05D0078C51A3156F87DEE5FCE (TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Enemy>()
inline EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* Object_FindObjectsOfType_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_mAC25F370B1372543690444BF023641DEC3EC9F1E (const RuntimeMethod* method)
{
	return ((  EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void TargetLocator::Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_Attack_mD6A68606D2AE2FDA64CA2E018649CFBECB66A748 (TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026* __this, bool ___isActive0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GridManager::SetUnwalkable(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SetUnwalkable_mC850D214DC5FF981FA6C761161E5A4A5E83513DD (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) ;
// Node GridManager::GetNode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* GridManager_GetNode_mEA7F6C2B8DF9445C73D0253010E48620D36C6610 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) ;
// System.Boolean Pathfinder::WillBlockPath(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pathfinder_WillBlockPath_m4B4AA6BC0CA64950EF205169E91F25D946987F85 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) ;
// System.Boolean Tower::CreateTower(Tower,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tower_CreateTower_mD239DC343662B0A6FF76BF9EABB2D86BB08F2732 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* ___tower0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void Pathfinder::NotifyReceivers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_NotifyReceivers_m28C7A1D8C55D2A41F4AAC52A6F4D712D2C8C453D (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Tower::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tower_Build_m7C23F79D6178960D60FEEE79018E07B032258433 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) ;
// System.Int32 Bank::get_CurrentBalance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Bank_get_CurrentBalance_m4155C4A5226E56C5E398B24D1544B25F38086816_inline (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Tower/<Build>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__4__ctor_mC33BC61EFB09464015ACD00A99EA172C304E8189 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Tower/<Build>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__4_U3CU3Em__Finally1_m82026C2FAC41F62201FCEAF990853A643E0786D3 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, const RuntimeMethod* method) ;
// System.Void Tower/<Build>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__4_System_IDisposable_Dispose_mA9B6EA4C4B9F24C2F95DAF766E350DF96AECCA55 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Int32 Bank::get_CurrentBalance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bank_get_CurrentBalance_m4155C4A5226E56C5E398B24D1544B25F38086816 (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) 
{
	{
		// public int CurrentBalance { get { return currentBalance; } } //CurrentBalance must be accessed from elsewhere, too.
		int32_t L_0 = __this->___currentBalance_5;
		return L_0;
	}
}
// System.Void Bank::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Start_m9E4CA54709D26E47874A753961C4CE4525181C13 (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCC26F0ECC06C779A5229B38DF7FF6E27306A9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral236695FC630D35C988E0043B17D3CF131DF6F6F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UI = GameObject.FindWithTag("UI-Text");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F(_stringLiteral0CCC26F0ECC06C779A5229B38DF7FF6E27306A9F, NULL);
		__this->___UI_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UI_7), (void*)L_0);
		// displayedBalance = UI.GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___UI_7;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_1, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___displayedBalance_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayedBalance_6), (void*)L_2);
		// displayedBalance.text = "Gold " + startingBalance.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___displayedBalance_6;
		int32_t* L_4 = (&__this->___startingBalance_4);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral236695FC630D35C988E0043B17D3CF131DF6F6F6, L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// }
		return;
	}
}
// System.Void Bank::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Update_m5CD27FBBCA0F66100052BAFC93680165F206FDFC (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) 
{
	{
		// UpdateTextUI();
		Bank_UpdateTextUI_m79814160519AAF132107F926060AE264EA6B9B0E(__this, NULL);
		// }
		return;
	}
}
// System.Void Bank::UpdateTextUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_UpdateTextUI_m79814160519AAF132107F926060AE264EA6B9B0E (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral236695FC630D35C988E0043B17D3CF131DF6F6F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// displayedBalance.text = "Gold " + currentBalance.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___displayedBalance_6;
		int32_t* L_1 = (&__this->___currentBalance_5);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral236695FC630D35C988E0043B17D3CF131DF6F6F6, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Bank::Deposit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Deposit_mAE1023FEDD896E740AD8C85F99BD60FC91F61612 (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// currentBalance += Mathf.Abs(amount);
		int32_t L_0 = __this->___currentBalance_5;
		int32_t L_1 = ___amount0;
		int32_t L_2;
		L_2 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(L_1, NULL);
		__this->___currentBalance_5 = ((int32_t)il2cpp_codegen_add(L_0, L_2));
		// }
		return;
	}
}
// System.Void Bank::Withdraw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_Withdraw_m507224141BAFA79C03889C965D8E687DED2EAD1B (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// currentBalance -= Mathf.Abs(amount);
		int32_t L_0 = __this->___currentBalance_5;
		int32_t L_1 = ___amount0;
		int32_t L_2;
		L_2 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(L_1, NULL);
		__this->___currentBalance_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_2));
		// if (currentBalance < 0)
		int32_t L_3 = __this->___currentBalance_5;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// ReloadScene();
		Bank_ReloadScene_mA980E48CACA890828906388F90C056BD820E5446(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Bank::ReloadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank_ReloadScene_mA980E48CACA890828906388F90C056BD820E5446 (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Scene currentScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		// SceneManager.LoadScene(currentScene.buildIndex);
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_1, NULL);
		// }
		return;
	}
}
// System.Void Bank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank__ctor_m80FE28924D5F3DD852D6D19F579A74490EEC3E17 (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int startingBalance = 150;
		__this->___startingBalance_4 = ((int32_t)150);
		// [SerializeField] int currentBalance = 150;
		__this->___currentBalance_5 = ((int32_t)150);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E_m141DC8D29437A38451E2D42B2CE27EB4D9EC0883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bank = FindObjectOfType<Bank>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_0;
		L_0 = Object_FindObjectOfType_TisBank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E_m141DC8D29437A38451E2D42B2CE27EB4D9EC0883(Object_FindObjectOfType_TisBank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E_m141DC8D29437A38451E2D42B2CE27EB4D9EC0883_RuntimeMethod_var);
		__this->___bank_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bank_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Enemy::RewardGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_RewardGold_m82FC45C2AF96481D04CAE32C1E70D137C75260A6 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bank == null) { return; }
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_0 = __this->___bank_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (bank == null) { return; }
		return;
	}

IL_000f:
	{
		// bank.Deposit(goldReward);
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_2 = __this->___bank_6;
		int32_t L_3 = __this->___goldReward_4;
		Bank_Deposit_mAE1023FEDD896E740AD8C85F99BD60FC91F61612(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Enemy::StealGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_StealGold_m1DFE65C100AF60C78967C192B22876548B73650B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bank == null) { return; }
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_0 = __this->___bank_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (bank == null) { return; }
		return;
	}

IL_000f:
	{
		// bank.Withdraw(goldPenalty);
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_2 = __this->___bank_6;
		int32_t L_3 = __this->___goldPenalty_5;
		Bank_Withdraw_m507224141BAFA79C03889C965D8E687DED2EAD1B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int goldReward = 25;
		__this->___goldReward_4 = ((int32_t)25);
		// [SerializeField] int goldPenalty = 25;
		__this->___goldPenalty_5 = ((int32_t)25);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyHealth::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_OnEnable_m93E1498F478166D8D18B90204F1E8592864E0D45 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) 
{
	{
		// currentHP = maxHP; //3 first and then + boost on every death.
		int32_t L_0 = __this->___maxHP_4;
		__this->___currentHP_5 = L_0;
		// }
		return;
	}
}
// System.Void EnemyHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Start_m7EB3716BBC5601C7C090FD76E440672C19E4CA27 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemy = GetComponent<Enemy>();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0;
		L_0 = Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11(__this, Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		__this->___enemy_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemy_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void EnemyHealth::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_OnParticleCollision_m5009DD7CF9B49ABDED94EC8EDDAAB861644DC6F7 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___other0, const RuntimeMethod* method) 
{
	{
		// ProcessHit();
		EnemyHealth_ProcessHit_m891421BADB440A488D19E7673409149FA51F4C27(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyHealth::ProcessHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_ProcessHit_m891421BADB440A488D19E7673409149FA51F4C27 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) 
{
	{
		// ReduceHP();
		EnemyHealth_ReduceHP_mA94E3200B5BF987F94A5598CCBC77FE61E728FEE(__this, NULL);
		// if (currentHP <= 0)
		int32_t L_0 = __this->___currentHP_5;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		// enemy.RewardGold();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = __this->___enemy_7;
		Enemy_RewardGold_m82FC45C2AF96481D04CAE32C1E70D137C75260A6(L_1, NULL);
		// maxHP += boostHP;
		int32_t L_2 = __this->___maxHP_4;
		int32_t L_3 = __this->___boostHP_6;
		__this->___maxHP_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void EnemyHealth::ReduceHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_ReduceHP_mA94E3200B5BF987F94A5598CCBC77FE61E728FEE (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) 
{
	{
		// currentHP -= 1;
		int32_t L_0 = __this->___currentHP_5;
		__this->___currentHP_5 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// }
		return;
	}
}
// System.Void EnemyHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth__ctor_m4ADD4CF1D414077D48BEB31F8B6EF010657BD687 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int maxHP = 3;
		__this->___maxHP_4 = 3;
		// [SerializeField] int boostHP = 1;
		__this->___boostHP_6 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyMover::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover_OnEnable_m11DE2509C3365110C3E5D182BE9EDC14BE3A096F (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) 
{
	{
		// ReturnToStart();
		EnemyMover_ReturnToStart_m50A8D93BA01E1F6F946B5C2AC8A1B22BF5DA2C49(__this, NULL);
		// RecalculatePath(true);
		EnemyMover_RecalculatePath_mEA1F9E42ADE8E657CBE457CDC811C394FC6984D3(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EnemyMover::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover_Awake_m2F392F48889D3ED891775170CCEDE358E4820692 (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB_m33C5732A9BBCA136F3CF4A82BCAB766AA6D3381B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemy = GetComponent<Enemy>();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0;
		L_0 = Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11(__this, Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		__this->___enemy_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemy_6), (void*)L_0);
		// gridManager = FindObjectOfType<GridManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_1;
		L_1 = Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944(Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944_RuntimeMethod_var);
		__this->___gridManager_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gridManager_7), (void*)L_1);
		// pathfinder = FindObjectOfType<Pathfinder>();
		Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* L_2;
		L_2 = Object_FindObjectOfType_TisPathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB_m33C5732A9BBCA136F3CF4A82BCAB766AA6D3381B(Object_FindObjectOfType_TisPathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB_m33C5732A9BBCA136F3CF4A82BCAB766AA6D3381B_RuntimeMethod_var);
		__this->___pathfinder_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathfinder_8), (void*)L_2);
		// }
		return;
	}
}
// System.Void EnemyMover::RecalculatePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover_RecalculatePath_mEA1F9E42ADE8E657CBE457CDC811C394FC6984D3 (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, bool ___resetPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m744026410AF433C3132467640EFC4D43BAE365BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2Int coordinates = new Vector2Int();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		// if(resetPath)
		bool L_0 = ___resetPath0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// coordinates = pathfinder.StartCoordinates;
		Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* L_1 = __this->___pathfinder_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = Pathfinder_get_StartCoordinates_mA92A4B53942C430032042384DB6ACABAF319166D_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0030;
	}

IL_0019:
	{
		// coordinates = gridManager.GetCoordinatesFromPosition(transform.position);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_3 = __this->___gridManager_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		L_6 = GridManager_GetCoordinatesFromPosition_m7813DC06B7E5DA1A87FF3750CB0312674454CEBA(L_3, L_5, NULL);
		V_0 = L_6;
	}

IL_0030:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// path.Clear(); //clears instead of building up a long long path.
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_7 = __this->___path_5;
		List_1_Clear_m744026410AF433C3132467640EFC4D43BAE365BB_inline(L_7, List_1_Clear_m744026410AF433C3132467640EFC4D43BAE365BB_RuntimeMethod_var);
		// path = pathfinder.GetNewPath(coordinates);
		Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* L_8 = __this->___pathfinder_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = V_0;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_10;
		L_10 = Pathfinder_GetNewPath_mD416DC437AD949F6756F9C577F717F1DFE2C0D41(L_8, L_9, NULL);
		__this->___path_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_5), (void*)L_10);
		// StartCoroutine(FollowPath());
		RuntimeObject* L_11;
		L_11 = EnemyMover_FollowPath_m3A139436AF165B1393602A9A885295AA6A238DC3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void EnemyMover::ReturnToStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover_ReturnToStart_m50A8D93BA01E1F6F946B5C2AC8A1B22BF5DA2C49 (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = gridManager.GetPositionFromCoordinates(pathfinder.StartCoordinates);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_1 = __this->___gridManager_7;
		Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* L_2 = __this->___pathfinder_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = Pathfinder_get_StartCoordinates_mA92A4B53942C430032042384DB6ACABAF319166D_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = GridManager_GetPositionFromCoordinates_m3E8DD1613B6B6542758843E63412458261B78C38(L_1, L_3, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void EnemyMover::FinishPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover_FinishPath_m2676C635E5BE08A8CAAEF07F1CE36B7E39FD261B (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) 
{
	{
		// enemy.StealGold();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->___enemy_6;
		Enemy_StealGold_m1DFE65C100AF60C78967C192B22876548B73650B(L_0, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyMover::FollowPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyMover_FollowPath_m3A139436AF165B1393602A9A885295AA6A238DC3 (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* L_0 = (U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C*)il2cpp_codegen_object_new(U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C_il2cpp_TypeInfo_var);
		U3CFollowPathU3Ed__10__ctor_m0E9786F7DA2F7189A5BC8DBAA15ECB69D3862083(L_0, 0, NULL);
		U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EnemyMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMover__ctor_mC9DC5176F9DF74CA8EAC497DCC8A71B4A88E83BC (EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] [Range(0f, 5f)] float speed = 1f;
		__this->___speed_4 = (1.0f);
		// List<Node> path = new List<Node>();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_0 = (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*)il2cpp_codegen_object_new(List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057(L_0, List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		__this->___path_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyMover/<FollowPath>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__10__ctor_m0E9786F7DA2F7189A5BC8DBAA15ECB69D3862083 (U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemyMover/<FollowPath>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__10_System_IDisposable_Dispose_m2E9398802B673C8C8905104FB2CD911CBC3FC22C (U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemyMover/<FollowPath>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFollowPathU3Ed__10_MoveNext_mD3F776090E1FB7EBE51E5D87917C28750BF4253C (U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(int i = 1; i < path.Count; i++)
		__this->___U3CiU3E5__2_3 = 1;
		goto IL_010e;
	}

IL_002d:
	{
		// Vector3 startPos = transform.position;
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___U3CstartPosU3E5__3_4 = L_6;
		// Vector3 endPos = gridManager.GetPositionFromCoordinates(path[i].coordinates);
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_7 = V_1;
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_8 = L_7->___gridManager_7;
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_9 = V_1;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_10 = L_9->___path_5;
		int32_t L_11 = __this->___U3CiU3E5__2_3;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_12;
		L_12 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_10, L_11, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_13 = L_12->___coordinates_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = GridManager_GetPositionFromCoordinates_m3E8DD1613B6B6542758843E63412458261B78C38(L_8, L_13, NULL);
		__this->___U3CendPosU3E5__4_5 = L_14;
		// float travelPercent = 0f;
		__this->___U3CtravelPercentU3E5__5_6 = (0.0f);
		// transform.LookAt(endPos);
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_15 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___U3CendPosU3E5__4_5;
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_16, L_17, NULL);
		goto IL_00d9;
	}

IL_0083:
	{
		// travelPercent += Time.deltaTime * speed;
		float L_18 = __this->___U3CtravelPercentU3E5__5_6;
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_20 = V_1;
		float L_21 = L_20->___speed_4;
		__this->___U3CtravelPercentU3E5__5_6 = ((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_multiply(L_19, L_21))));
		// transform.position = Vector3.Lerp(startPos, endPos, travelPercent);
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_22 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___U3CstartPosU3E5__3_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___U3CendPosU3E5__4_5;
		float L_26 = __this->___U3CtravelPercentU3E5__5_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_24, L_25, L_26, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_27, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_28 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_28, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d2:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00d9:
	{
		// while(travelPercent < 1f)
		float L_29 = __this->___U3CtravelPercentU3E5__5_6;
		if ((((float)L_29) < ((float)(1.0f))))
		{
			goto IL_0083;
		}
	}
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___U3CstartPosU3E5__3_4);
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___U3CendPosU3E5__4_5);
		il2cpp_codegen_initobj(L_31, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// for(int i = 1; i < path.Count; i++)
		int32_t L_32 = __this->___U3CiU3E5__2_3;
		V_2 = L_32;
		int32_t L_33 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_010e:
	{
		// for(int i = 1; i < path.Count; i++)
		int32_t L_34 = __this->___U3CiU3E5__2_3;
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_35 = V_1;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_36 = L_35->___path_5;
		int32_t L_37;
		L_37 = List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_inline(L_36, List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_37)))
		{
			goto IL_002d;
		}
	}
	{
		// FinishPath();
		EnemyMover_t7C5144985D051A0581354157455EA677761DBAFC* L_38 = V_1;
		EnemyMover_FinishPath_m2676C635E5BE08A8CAAEF07F1CE36B7E39FD261B(L_38, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnemyMover/<FollowPath>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFollowPathU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m944E2B38E7C1F943AA1DC82CDAA5B61EA6A93D03 (U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemyMover/<FollowPath>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowPathU3Ed__10_System_Collections_IEnumerator_Reset_m832309F826C7EC9B0C9729031413F07B8F014955 (U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFollowPathU3Ed__10_System_Collections_IEnumerator_Reset_m832309F826C7EC9B0C9729031413F07B8F014955_RuntimeMethod_var)));
	}
}
// System.Object EnemyMover/<FollowPath>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFollowPathU3Ed__10_System_Collections_IEnumerator_get_Current_m6C1D01D261B730BA6431B630DB0145ADE8F97A02 (U3CFollowPathU3Ed__10_t13980674A5C58B6DE5F7634B715BDA355EBE5E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Int32 GridManager::get_UnityGridSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridManager_get_UnityGridSize_m8232384757281057416884BA6F5210426F676031 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	{
		// public int UnityGridSize { get { return unityGridSize; } }
		int32_t L_0 = __this->___unityGridSize_5;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,Node> GridManager::get_Grid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* GridManager_get_Grid_m823A4943B32194E1A922C7C38B06841D6D972CC2 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<Vector2Int, Node> Grid { get { return grid; } }
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_0 = __this->___grid_6;
		return L_0;
	}
}
// System.Void GridManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Awake_m663A059BFA9CB0F09507D270962932D937C78AE7 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	{
		// CreateGrid();
		GridManager_CreateGrid_m5465099AB604474CC7D02C5E20E06165DEF6D4DB(__this, NULL);
		// }
		return;
	}
}
// Node GridManager::GetNode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* GridManager_GetNode_mEA7F6C2B8DF9445C73D0253010E48620D36C6610 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(grid.ContainsKey(coordinates))
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_0 = __this->___grid_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___coordinates0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6(L_0, L_1, Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return grid[coordinates];
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_3 = __this->___grid_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = ___coordinates0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5;
		L_5 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_3, L_4, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return null;
		return (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)NULL;
	}
}
// System.Void GridManager::SetUnwalkable(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SetUnwalkable_mC850D214DC5FF981FA6C761161E5A4A5E83513DD (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(grid.ContainsKey(coordinates))
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_0 = __this->___grid_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___coordinates0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6(L_0, L_1, Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// grid[coordinates].isWalkable = false;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_3 = __this->___grid_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = ___coordinates0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5;
		L_5 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_3, L_4, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		L_5->___isWalkable_1 = (bool)0;
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void GridManager::ResetNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_ResetNodes_m396A85046D8CF0D472413EC95BB4E879646F2D64 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m283E20E49F0F1A15A1C362EEB4F066DB37C613D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEACF4F81C4BB0E2FCCE178DD4FA51EB748BF0324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mABED1E0B1F5907DADE1D92D353B6ECA58994924E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8A3ADC28DE0AE73F6C9900FF55ACD6675DEA6D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t6FDC7121BAD91206AF703C33534A8C8A03E5F48F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach(KeyValuePair<Vector2Int, Node> entry in grid) // interesting new concept. a foreach loop for dictionary in c#. every pair is called an 'entry'
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_0 = __this->___grid_6;
		Enumerator_t099D8D230F1BA1FCDDEB3173F421AE2EAE02B454 L_1;
		L_1 = Dictionary_2_GetEnumerator_m283E20E49F0F1A15A1C362EEB4F066DB37C613D3(L_0, Dictionary_2_GetEnumerator_m283E20E49F0F1A15A1C362EEB4F066DB37C613D3_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEACF4F81C4BB0E2FCCE178DD4FA51EB748BF0324((&V_0), Enumerator_Dispose_mEACF4F81C4BB0E2FCCE178DD4FA51EB748BF0324_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_000e_1:
			{
				// foreach(KeyValuePair<Vector2Int, Node> entry in grid) // interesting new concept. a foreach loop for dictionary in c#. every pair is called an 'entry'
				KeyValuePair_2_t6FDC7121BAD91206AF703C33534A8C8A03E5F48F L_2;
				L_2 = Enumerator_get_Current_m8A3ADC28DE0AE73F6C9900FF55ACD6675DEA6D98_inline((&V_0), Enumerator_get_Current_m8A3ADC28DE0AE73F6C9900FF55ACD6675DEA6D98_RuntimeMethod_var);
				V_1 = L_2;
				// entry.Value.connectedTo = null;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_3;
				L_3 = KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_inline((&V_1), KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_RuntimeMethod_var);
				L_3->___connectedTo_4 = (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_3->___connectedTo_4), (void*)(Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)NULL);
				// entry.Value.isExplored = false;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_4;
				L_4 = KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_inline((&V_1), KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_RuntimeMethod_var);
				L_4->___isExplored_2 = (bool)0;
				// entry.Value.isPath = false;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5;
				L_5 = KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_inline((&V_1), KeyValuePair_2_get_Value_mC1A2EDD5638D554CC4021EBA15A7BEDB49A5395C_RuntimeMethod_var);
				L_5->___isPath_3 = (bool)0;
			}

IL_003d_1:
			{
				// foreach(KeyValuePair<Vector2Int, Node> entry in grid) // interesting new concept. a foreach loop for dictionary in c#. every pair is called an 'entry'
				bool L_6;
				L_6 = Enumerator_MoveNext_mABED1E0B1F5907DADE1D92D353B6ECA58994924E((&V_0), Enumerator_MoveNext_mABED1E0B1F5907DADE1D92D353B6ECA58994924E_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2Int GridManager::GetCoordinatesFromPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GridManager_GetCoordinatesFromPosition_m7813DC06B7E5DA1A87FF3750CB0312674454CEBA (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2Int coordinates = new Vector2Int();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		// coordinates.x = Mathf.RoundToInt(position.x / unityGridSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		float L_1 = L_0.___x_2;
		int32_t L_2 = __this->___unityGridSize_5;
		int32_t L_3;
		L_3 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)(L_1/((float)L_2))), NULL);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline((&V_0), L_3, NULL);
		// coordinates.y = Mathf.RoundToInt(position.z / unityGridSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position0;
		float L_5 = L_4.___z_4;
		int32_t L_6 = __this->___unityGridSize_5;
		int32_t L_7;
		L_7 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)(L_5/((float)L_6))), NULL);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline((&V_0), L_7, NULL);
		// return coordinates;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Vector3 GridManager::GetPositionFromCoordinates(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GridManager_GetPositionFromCoordinates_m3E8DD1613B6B6542758843E63412458261B78C38 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// position.x = Mathf.RoundToInt(coordinates.x * unityGridSize);
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___coordinates0), NULL);
		int32_t L_1 = __this->___unityGridSize_5;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)((int32_t)il2cpp_codegen_multiply(L_0, L_1))), NULL);
		(&V_0)->___x_2 = ((float)L_2);
		// position.z = Mathf.RoundToInt(coordinates.y * unityGridSize); //probably position.z, rember its a 3d object working on 2 planes and z is working as y
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___coordinates0), NULL);
		int32_t L_4 = __this->___unityGridSize_5;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)((int32_t)il2cpp_codegen_multiply(L_3, L_4))), NULL);
		(&V_0)->___z_4 = ((float)L_5);
		// return position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
// System.Void GridManager::CreateGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_CreateGrid_m5465099AB604474CC7D02C5E20E06165DEF6D4DB (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int x = 0; x < gridSize.x; x++)
		V_0 = 0;
		goto IL_003a;
	}

IL_0004:
	{
		// for (int y = 0; y < gridSize.y; y++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0008:
	{
		// Vector2Int coordinates = new Vector2Int(x, y);
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_2), L_0, L_1, NULL);
		// grid.Add(coordinates, new Node(coordinates, true));
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_2 = __this->___grid_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = V_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = V_2;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5 = (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)il2cpp_codegen_object_new(Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5_il2cpp_TypeInfo_var);
		Node__ctor_m34022B1151E14810645C3FEF6FB24462CA276AA7(L_5, L_4, (bool)1, NULL);
		Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91(L_2, L_3, L_5, Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91_RuntimeMethod_var);
		// for (int y = 0; y < gridSize.y; y++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		// for (int y = 0; y < gridSize.y; y++)
		int32_t L_7 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_8 = (&__this->___gridSize_4);
		int32_t L_9;
		L_9 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int x = 0; x < gridSize.x; x++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003a:
	{
		// for (int x = 0; x < gridSize.x; x++)
		int32_t L_11 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_12 = (&__this->___gridSize_4);
		int32_t L_13;
		L_13 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_12, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GridManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager__ctor_m95147960FF399FEFE47E590512C6C825C3AD782E (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] int unityGridSize = 10;
		__this->___unityGridSize_5 = ((int32_t)10);
		// Dictionary<Vector2Int, Node> grid = new Dictionary<Vector2Int, Node>();
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_0 = (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*)il2cpp_codegen_object_new(Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0(L_0, Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0_RuntimeMethod_var);
		__this->___grid_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grid_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ObjectPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Awake_m91BEBE4AB885A4A68643A352DE5BCAE2422650B8 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	{
		// PopulatePool();
		ObjectPool_PopulatePool_m03E443E0D4CBCEEC91A635F70151AF2E92B459D2(__this, NULL);
		// }
		return;
	}
}
// System.Void ObjectPool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Start_mFE2BCF2FAF33C92FBEBB4BC56BA17F404DD43805 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(SpawnEnemy());
		RuntimeObject* L_0;
		L_0 = ObjectPool_SpawnEnemy_m7FCACDF30593D975F9108CB287E784B1C2FB9241(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ObjectPool::PopulatePool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_PopulatePool_m03E443E0D4CBCEEC91A635F70151AF2E92B459D2 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// pool = new GameObject[poolSize]; //poolSize must be positive.
		int32_t L_0 = __this->___poolSize_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___pool_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pool_7), (void*)L_1);
		// for (int i = 0; i < pool.Length; i++)
		V_0 = 0;
		goto IL_0040;
	}

IL_0015:
	{
		// pool[i] = Instantiate(enemyPrefab, transform); // here I looked for Instantiate with just two arguments - the thing and its position (related to parent - ObjectPool)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___pool_7;
		int32_t L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___enemyPrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_6);
		// pool[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___pool_7;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// for (int i = 0; i < pool.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < pool.Length; i++)
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___pool_7;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObjectPool::EnableObjectInPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_EnableObjectInPool_m963044C2B1CCD6E482CCFE2C619678F93BF7B308 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < pool.Length; i++ )
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// if (pool[i].activeInHierarchy == false)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___pool_7;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// pool[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___pool_7;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// return;
		return;
	}

IL_0022:
	{
		// for (int i = 0; i < pool.Length; i++ )
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < pool.Length; i++ )
		int32_t L_10 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___pool_7;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ObjectPool::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_SpawnEnemy_m7FCACDF30593D975F9108CB287E784B1C2FB9241 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* L_0 = (U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664*)il2cpp_codegen_object_new(U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664_il2cpp_TypeInfo_var);
		U3CSpawnEnemyU3Ed__8__ctor_mC6F65B4A34FFF6654DA9F75A1295D4FDECC8BBDB(L_0, 0, NULL);
		U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__ctor_m71417FAC6D702860867B1C3413ED349B343ACFFD (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] [Range(0, 40)] int poolSize = 5;
		__this->___poolSize_5 = 5;
		// [SerializeField] [Range(0.1f, 29f)] float spawnTimer = 1f;
		__this->___spawnTimer_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ObjectPool/<SpawnEnemy>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__8__ctor_mC6F65B4A34FFF6654DA9F75A1295D4FDECC8BBDB (U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ObjectPool/<SpawnEnemy>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__8_System_IDisposable_Dispose_mC47229E14F33E2A4F1AECC54F1BB94994C70D147 (U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ObjectPool/<SpawnEnemy>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnEnemyU3Ed__8_MoveNext_m50ED92E7A6F39F7A70EF2A28D11578088DF45292 (U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// EnableObjectInPool();
		ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* L_4 = V_1;
		ObjectPool_EnableObjectInPool_m963044C2B1CCD6E482CCFE2C619678F93BF7B308(L_4, NULL);
		// yield return new WaitForSeconds(spawnTimer);
		ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* L_5 = V_1;
		float L_6 = L_5->___spawnTimer_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, L_6, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true) //danger! infinite loop here. spawnTimer must be positive, not 0, not negative.
		goto IL_001e;
	}
}
// System.Object ObjectPool/<SpawnEnemy>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnEnemyU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1EF8343B4906FA8E233322EB94B7C6755C1EB392 (U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ObjectPool/<SpawnEnemy>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__8_System_Collections_IEnumerator_Reset_mF7376A8C382AEDC3A3A25EF5A1952710E3DA640B (U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnEnemyU3Ed__8_System_Collections_IEnumerator_Reset_mF7376A8C382AEDC3A3A25EF5A1952710E3DA640B_RuntimeMethod_var)));
	}
}
// System.Object ObjectPool/<SpawnEnemy>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnEnemyU3Ed__8_System_Collections_IEnumerator_get_Current_m1F17F342358D624A06087F7583656B7BDAFCED6E (U3CSpawnEnemyU3Ed__8_t5730E4AA8F9E921E4696896483E9D7BB1822E664* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// UnityEngine.Vector2Int Pathfinder::get_StartCoordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Pathfinder_get_StartCoordinates_mA92A4B53942C430032042384DB6ACABAF319166D (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int StartCoordinates {  get { return startCoordinates;  } }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___startCoordinates_4;
		return L_0;
	}
}
// UnityEngine.Vector2Int Pathfinder::get_EndCoordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Pathfinder_get_EndCoordinates_mF3FC78705CD6F54C1047C9C148EC4BEF75A86699 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int EndCoordinates { get { return endCoordinates; } }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___endCoordinates_5;
		return L_0;
	}
}
// System.Void Pathfinder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_Awake_m14ECB6E5F090F15D1859F367C1AC3DD84BFF1759 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gridManager = FindObjectOfType<GridManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_0;
		L_0 = Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944(Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944_RuntimeMethod_var);
		__this->___gridManager_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gridManager_12), (void*)L_0);
		// if(gridManager != null)
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_1 = __this->___gridManager_12;
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		// grid = gridManager.Grid;
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_3 = __this->___gridManager_12;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_4;
		L_4 = GridManager_get_Grid_m823A4943B32194E1A922C7C38B06841D6D972CC2_inline(L_3, NULL);
		__this->___grid_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grid_13), (void*)L_4);
		// startNode = grid[startCoordinates];
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_5 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = __this->___startCoordinates_4;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_7;
		L_7 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_5, L_6, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		__this->___startNode_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startNode_6), (void*)L_7);
		// destinationNode = grid[endCoordinates];
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_8 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = __this->___endCoordinates_5;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_10;
		L_10 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_8, L_9, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		__this->___destinationNode_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destinationNode_7), (void*)L_10);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Pathfinder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_Start_m82685A60EB258B206DE9742A0CDD8807111A7827 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	{
		// GetNewPath();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_0;
		L_0 = Pathfinder_GetNewPath_m6B32B9BF86E33F1147FB4F363825554EC49849B4(__this, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Node> Pathfinder::GetNewPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* Pathfinder_GetNewPath_m6B32B9BF86E33F1147FB4F363825554EC49849B4 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	{
		// return GetNewPath(startCoordinates);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___startCoordinates_4;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_1;
		L_1 = Pathfinder_GetNewPath_mD416DC437AD949F6756F9C577F717F1DFE2C0D41(__this, L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<Node> Pathfinder::GetNewPath(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* Pathfinder_GetNewPath_mD416DC437AD949F6756F9C577F717F1DFE2C0D41 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) 
{
	{
		// gridManager.ResetNodes();
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_0 = __this->___gridManager_12;
		GridManager_ResetNodes_m396A85046D8CF0D472413EC95BB4E879646F2D64(L_0, NULL);
		// BreadthFirstSearch(coordinates);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___coordinates0;
		Pathfinder_BreadthFirstSearch_m3AD910012A6529664634F6FBB62224EDD739AC5B(__this, L_1, NULL);
		// return BuildPath();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_2;
		L_2 = Pathfinder_BuildPath_mAFC4E86070B81A920C22B7CAB7A94E8FF3828423(__this, NULL);
		return L_2;
	}
}
// System.Void Pathfinder::ExploreNeighbors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_ExploreNeighbors_m4FFA3093FF666B587ABB719710A9F7493BC8C9E6 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m00D6A2B52A30801B021F8A2ED733C880DD10D1D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* V_0 = NULL;
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* V_1 = NULL;
	int32_t V_2 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D V_5;
	memset((&V_5), 0, sizeof(V_5));
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* V_6 = NULL;
	{
		// List<Node> neighbors = new List<Node>();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_0 = (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*)il2cpp_codegen_object_new(List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057(L_0, List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		V_0 = L_0;
		// foreach(Vector2Int direction in directions)
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_1 = __this->___directions_11;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0057;
	}

IL_0011:
	{
		// foreach(Vector2Int direction in directions)
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// Vector2Int neighbor = currentSearchNode.coordinates + direction;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_6 = __this->___currentSearchNode_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7 = L_6->___coordinates_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = V_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9;
		L_9 = Vector2Int_op_Addition_m395CFA571AB48E2286EECC12AEEA718CA1A32C70_inline(L_7, L_8, NULL);
		V_4 = L_9;
		// if(gridManager.Grid.ContainsKey(neighbor))
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_10 = __this->___gridManager_12;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_11;
		L_11 = GridManager_get_Grid_m823A4943B32194E1A922C7C38B06841D6D972CC2_inline(L_10, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_12 = V_4;
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6(L_11, L_12, Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		// neighbors.Add(grid[neighbor]);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_14 = V_0;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_15 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_16 = V_4;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_17;
		L_17 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_15, L_16, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline(L_14, L_17, List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
	}

IL_0053:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		// foreach(Vector2Int direction in directions)
		int32_t L_19 = V_2;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// foreach(Node neighbor in neighbors)
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_21 = V_0;
		Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D L_22;
		L_22 = List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB(L_21, List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB_RuntimeMethod_var);
		V_5 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84((&V_5), Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bb_1;
			}

IL_0067_1:
			{
				// foreach(Node neighbor in neighbors)
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_23;
				L_23 = Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_inline((&V_5), Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_RuntimeMethod_var);
				V_6 = L_23;
				// if(!reached.ContainsKey(neighbor.coordinates) && neighbor.isWalkable)
				Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_24 = __this->___reached_10;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_25 = V_6;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_26 = L_25->___coordinates_0;
				bool L_27;
				L_27 = Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6(L_24, L_26, Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_00bb_1;
				}
			}
			{
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_28 = V_6;
				bool L_29 = L_28->___isWalkable_1;
				if (!L_29)
				{
					goto IL_00bb_1;
				}
			}
			{
				// neighbor.connectedTo = currentSearchNode;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_30 = V_6;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_31 = __this->___currentSearchNode_8;
				L_30->___connectedTo_4 = L_31;
				Il2CppCodeGenWriteBarrier((void**)(&L_30->___connectedTo_4), (void*)L_31);
				// reached.Add(neighbor.coordinates, neighbor);
				Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_32 = __this->___reached_10;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_33 = V_6;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_34 = L_33->___coordinates_0;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_35 = V_6;
				Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91(L_32, L_34, L_35, Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91_RuntimeMethod_var);
				// frontier.Enqueue(neighbor);
				Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* L_36 = __this->___frontier_9;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_37 = V_6;
				Queue_1_Enqueue_m00D6A2B52A30801B021F8A2ED733C880DD10D1D1(L_36, L_37, Queue_1_Enqueue_m00D6A2B52A30801B021F8A2ED733C880DD10D1D1_RuntimeMethod_var);
			}

IL_00bb_1:
			{
				// foreach(Node neighbor in neighbors)
				bool L_38;
				L_38 = Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415((&V_5), Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00d4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void Pathfinder::BreadthFirstSearch(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_BreadthFirstSearch_m3AD910012A6529664634F6FBB62224EDD739AC5B (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m8BBFC8E2C04C877B9CB228254EF9870520E47724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mE8E7F1405938E9AD7592077979C9646B23E40D2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m6D3A777DCF074850FB48420BC1B147092EA1618A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m00D6A2B52A30801B021F8A2ED733C880DD10D1D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m931C96774ADC7144158EF990AF37AF00AE55600E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// startNode.isWalkable = true;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_0 = __this->___startNode_6;
		L_0->___isWalkable_1 = (bool)1;
		// destinationNode.isWalkable = true;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_1 = __this->___destinationNode_7;
		L_1->___isWalkable_1 = (bool)1;
		// frontier.Clear();
		Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* L_2 = __this->___frontier_9;
		Queue_1_Clear_mE8E7F1405938E9AD7592077979C9646B23E40D2C(L_2, Queue_1_Clear_mE8E7F1405938E9AD7592077979C9646B23E40D2C_RuntimeMethod_var);
		// reached.Clear();
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_3 = __this->___reached_10;
		Dictionary_2_Clear_m8BBFC8E2C04C877B9CB228254EF9870520E47724(L_3, Dictionary_2_Clear_m8BBFC8E2C04C877B9CB228254EF9870520E47724_RuntimeMethod_var);
		// bool isRunning = true;
		V_0 = (bool)1;
		// frontier.Enqueue(grid[coordinates]);
		Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* L_4 = __this->___frontier_9;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_5 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = ___coordinates0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_7;
		L_7 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_5, L_6, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		Queue_1_Enqueue_m00D6A2B52A30801B021F8A2ED733C880DD10D1D1(L_4, L_7, Queue_1_Enqueue_m00D6A2B52A30801B021F8A2ED733C880DD10D1D1_RuntimeMethod_var);
		// reached.Add(coordinates, grid[coordinates]);
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_8 = __this->___reached_10;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = ___coordinates0;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_10 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11 = ___coordinates0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_12;
		L_12 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_10, L_11, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91(L_8, L_9, L_12, Dictionary_2_Add_mC2FA446F69EA82E56E5436F5A2F1FF79C259FA91_RuntimeMethod_var);
		goto IL_009e;
	}

IL_0061:
	{
		// currentSearchNode = frontier.Dequeue();
		Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* L_13 = __this->___frontier_9;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_14;
		L_14 = Queue_1_Dequeue_m6D3A777DCF074850FB48420BC1B147092EA1618A(L_13, Queue_1_Dequeue_m6D3A777DCF074850FB48420BC1B147092EA1618A_RuntimeMethod_var);
		__this->___currentSearchNode_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSearchNode_8), (void*)L_14);
		// currentSearchNode.isExplored = true;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_15 = __this->___currentSearchNode_8;
		L_15->___isExplored_2 = (bool)1;
		// ExploreNeighbors();
		Pathfinder_ExploreNeighbors_m4FFA3093FF666B587ABB719710A9F7493BC8C9E6(__this, NULL);
		// if(currentSearchNode.coordinates == endCoordinates)
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_16 = __this->___currentSearchNode_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_17 = L_16->___coordinates_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18 = __this->___endCoordinates_5;
		bool L_19;
		L_19 = Vector2Int_op_Equality_m0BACF220C29A50100740A626E2A928F9F96E6759_inline(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		// isRunning = false;
		V_0 = (bool)0;
	}

IL_009e:
	{
		// while(frontier.Count > 0 && isRunning)
		Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* L_20 = __this->___frontier_9;
		int32_t L_21;
		L_21 = Queue_1_get_Count_m931C96774ADC7144158EF990AF37AF00AE55600E_inline(L_20, Queue_1_get_Count_m931C96774ADC7144158EF990AF37AF00AE55600E_RuntimeMethod_var);
		bool L_22 = V_0;
		if (((int32_t)(((((int32_t)L_21) > ((int32_t)0))? 1 : 0)&(int32_t)L_22)))
		{
			goto IL_0061;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Node> Pathfinder::BuildPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* Pathfinder_BuildPath_mAFC4E86070B81A920C22B7CAB7A94E8FF3828423 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* V_0 = NULL;
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* V_1 = NULL;
	{
		// List<Node> path = new List<Node>();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_0 = (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*)il2cpp_codegen_object_new(List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057(L_0, List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		V_0 = L_0;
		// Node currentNode = destinationNode;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_1 = __this->___destinationNode_7;
		V_1 = L_1;
		// path.Add(currentNode);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_2 = V_0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_3 = V_1;
		List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline(L_2, L_3, List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		// currentNode.isPath = true;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_4 = V_1;
		L_4->___isPath_3 = (bool)1;
		goto IL_0032;
	}

IL_001d:
	{
		// currentNode = currentNode.connectedTo; //connect
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5 = V_1;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_6 = L_5->___connectedTo_4;
		V_1 = L_6;
		// path.Add(currentNode); //add to path
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_7 = V_0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_8 = V_1;
		List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline(L_7, L_8, List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		// currentNode.isPath = true; //and mark
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_9 = V_1;
		L_9->___isPath_3 = (bool)1;
	}

IL_0032:
	{
		// while(currentNode.connectedTo != null) //as long as current is not connected
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_10 = V_1;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_11 = L_10->___connectedTo_4;
		if (L_11)
		{
			goto IL_001d;
		}
	}
	{
		// path.Reverse(); //now we need it in a reversed sequence.
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_12 = V_0;
		List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3(L_12, List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3_RuntimeMethod_var);
		// return path;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_13 = V_0;
		return L_13;
	}
}
// System.Boolean Pathfinder::WillBlockPath(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pathfinder_WillBlockPath_m4B4AA6BC0CA64950EF205169E91F25D946987F85 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(grid.ContainsKey(coordinates))
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_0 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___coordinates0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6(L_0, L_1, Dictionary_2_ContainsKey_m1423371CC8890AA2B4908C135354A9BDB7AC2BA6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		// bool previousState = grid[coordinates].isWalkable;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_3 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = ___coordinates0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5;
		L_5 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_3, L_4, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		bool L_6 = L_5->___isWalkable_1;
		V_0 = L_6;
		// grid[coordinates].isWalkable = false;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_7 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = ___coordinates0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_9;
		L_9 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_7, L_8, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		L_9->___isWalkable_1 = (bool)0;
		// List<Node> newPath = GetNewPath();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_10;
		L_10 = Pathfinder_GetNewPath_m6B32B9BF86E33F1147FB4F363825554EC49849B4(__this, NULL);
		// grid[coordinates].isWalkable = previousState;
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_11 = __this->___grid_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_12 = ___coordinates0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_13;
		L_13 = Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479(L_11, L_12, Dictionary_2_get_Item_m050C8A3B94DB18A24105745B3CBAC17157633479_RuntimeMethod_var);
		bool L_14 = V_0;
		L_13->___isWalkable_1 = L_14;
		// if(newPath.Count <= 1)
		int32_t L_15;
		L_15 = List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_inline(L_10, List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		if ((((int32_t)L_15) > ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		// GetNewPath();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_16;
		L_16 = Pathfinder_GetNewPath_m6B32B9BF86E33F1147FB4F363825554EC49849B4(__this, NULL);
		// return true;
		return (bool)1;
	}

IL_005b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Pathfinder::NotifyReceivers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_NotifyReceivers_m28C7A1D8C55D2A41F4AAC52A6F4D712D2C8C453D (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA8204B3789EBC58555C04D0C796AFA94C29EB6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BroadcastMessage("RecalculatePath", false,  SendMessageOptions.DontRequireReceiver); // means shout the message even if there is no receiver
		bool L_0 = ((bool)0);
		RuntimeObject* L_1 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_0);
		Component_BroadcastMessage_mE828C5B6A2BBF97BE0922493EEC4A6D45C45FEBF(__this, _stringLiteralDA8204B3789EBC58555C04D0C796AFA94C29EB6A, L_1, 1, NULL);
		// }
		return;
	}
}
// System.Void Pathfinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder__ctor_m38C6CBBD38838E7E51FE1592504D2C3AFF247D36 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mD5402A80444ACD93B071EAB631E35A5E055F2578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<Node> frontier = new Queue<Node>(); //a FIFO list
		Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A* L_0 = (Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A*)il2cpp_codegen_object_new(Queue_1_t3BB537029F18F8558E9B7F9181CAC7EB20D70E2A_il2cpp_TypeInfo_var);
		Queue_1__ctor_mD5402A80444ACD93B071EAB631E35A5E055F2578(L_0, Queue_1__ctor_mD5402A80444ACD93B071EAB631E35A5E055F2578_RuntimeMethod_var);
		__this->___frontier_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frontier_9), (void*)L_0);
		// Dictionary<Vector2Int, Node> reached = new Dictionary<Vector2Int, Node>();
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_1 = (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*)il2cpp_codegen_object_new(Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0(L_1, Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0_RuntimeMethod_var);
		__this->___reached_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reached_10), (void*)L_1);
		// Vector2Int[] directions = { Vector2Int.right, Vector2Int.left, Vector2Int.up, Vector2Int.down };
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_2 = (Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534*)(Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534*)SZArrayNew(Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_3 = L_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		L_4 = Vector2Int_get_right_m921C9F23A09E5423E1905D5A4E5D0E02ED146AE7_inline(NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)L_4);
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_5 = L_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		L_6 = Vector2Int_get_left_m0115A485CCFE776FDFABCBF6E5486095F2A658C9_inline(NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)L_6);
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_7 = L_5;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		L_8 = Vector2Int_get_up_m870C1A8FD5977767F43B0A53A99FD12AD594432C_inline(NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)L_8);
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_9 = L_7;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10;
		L_10 = Vector2Int_get_down_m4695E9EBBC28CEA810728022456DF9639FD5BC62_inline(NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)L_10);
		__this->___directions_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directions_11), (void*)L_9);
		// Dictionary<Vector2Int, Node> grid = new Dictionary<Vector2Int, Node>();
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_11 = (Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65*)il2cpp_codegen_object_new(Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0(L_11, Dictionary_2__ctor_mB98FA03950BF62911646FBE0A5EE02CE73BB19B0_RuntimeMethod_var);
		__this->___grid_13 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grid_13), (void*)L_11);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TargetLocator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_Update_m79C8C405A2D6518E6E1DBB9FA476D83AFB9A2A0A (TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026* __this, const RuntimeMethod* method) 
{
	{
		// FindClosestTarget();
		TargetLocator_FindClosestTarget_mCF08DF2817099324DD0A7F2F3A841AE692E80D74(__this, NULL);
		// AimWeapon();
		TargetLocator_AimWeapon_m24568E66962603E05D0078C51A3156F87DEE5FCE(__this, NULL);
		// }
		return;
	}
}
// System.Void TargetLocator::FindClosestTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_FindClosestTarget_mCF08DF2817099324DD0A7F2F3A841AE692E80D74 (TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_mAC25F370B1372543690444BF023641DEC3EC9F1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	float V_1 = 0.0f;
	EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* V_2 = NULL;
	int32_t V_3 = 0;
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_4 = NULL;
	float V_5 = 0.0f;
	{
		// Enemy[] enemies = FindObjectsOfType<Enemy>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* L_0;
		L_0 = Object_FindObjectsOfType_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_mAC25F370B1372543690444BF023641DEC3EC9F1E(Object_FindObjectsOfType_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_mAC25F370B1372543690444BF023641DEC3EC9F1E_RuntimeMethod_var);
		// Transform closestTarget = null;
		V_0 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// float maxDistance = Mathf.Infinity; //this is a bit weird but we need a big number initially.
		V_1 = (std::numeric_limits<float>::infinity());
		// foreach(Enemy enemy in enemies)
		V_2 = L_0;
		V_3 = 0;
		goto IL_0049;
	}

IL_0012:
	{
		// foreach(Enemy enemy in enemies)
		EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// float targetDistance = Vector3.Distance(transform.position, enemy.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_7 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10;
		L_10 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_6, L_9, NULL);
		V_5 = L_10;
		// if (targetDistance < maxDistance)
		float L_11 = V_5;
		float L_12 = V_1;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_0045;
		}
	}
	{
		// closestTarget = enemy.transform; //first you just pick any enemy
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_13 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		V_0 = L_14;
		// maxDistance = targetDistance; //then you cut the big number into some more imaginable distance
		float L_15 = V_5;
		V_1 = L_15;
	}

IL_0045:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0049:
	{
		// foreach(Enemy enemy in enemies)
		int32_t L_17 = V_3;
		EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// target = closestTarget; //so you have looped through all and if you cannot find one thats closer than itself, however silly that sounds, you have found the closest!
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
		__this->___target_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_19);
		// }
		return;
	}
}
// System.Void TargetLocator::AimWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_AimWeapon_m24568E66962603E05D0078C51A3156F87DEE5FCE (TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026* __this, const RuntimeMethod* method) 
{
	{
		// float targetDistance = Vector3.Distance(transform.position, target.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_1, L_4, NULL);
		// if (targetDistance < range)
		float L_6 = __this->___range_6;
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_0041;
		}
	}
	{
		// Attack(true);
		TargetLocator_Attack_mD6A68606D2AE2FDA64CA2E018649CFBECB66A748(__this, (bool)1, NULL);
		// weapon.LookAt(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___weapon_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___target_5;
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_7, L_8, NULL);
		return;
	}

IL_0041:
	{
		// Attack(false);
		TargetLocator_Attack_mD6A68606D2AE2FDA64CA2E018649CFBECB66A748(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TargetLocator::Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator_Attack_mD6A68606D2AE2FDA64CA2E018649CFBECB66A748 (TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026* __this, bool ___isActive0, const RuntimeMethod* method) 
{
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var emissionModule = projectileParticles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___projectileParticles_7;
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		V_0 = L_1;
		// emissionModule.enabled = isActive;
		bool L_2 = ___isActive0;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_0), L_2, NULL);
		// }
		return;
	}
}
// System.Void TargetLocator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetLocator__ctor_mC6BD20A9F3CAE6DCAE4C7B287441DA80F1141036 (TargetLocator_tCDD9149A6930262B47DCFEDB7B1234D6FE448026* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float range = 15f; // a tile and a half.
		__this->___range_6 = (15.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Tile::get_IsPlaceable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_get_IsPlaceable_mC24DDB89812252A99B7A00B28773CC58A584B54D (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPlaceable {  get { return isPlaceable;  } }
		bool L_0 = __this->___isPlaceable_5;
		return L_0;
	}
}
// System.Void Tile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Awake_m8CE361BE2F7DD3BFD42DDCF775CF4F89FCEDCABF (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB_m33C5732A9BBCA136F3CF4A82BCAB766AA6D3381B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gridManager = FindObjectOfType<GridManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_0;
		L_0 = Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944(Object_FindObjectOfType_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m5ACF783AB26E5DD7D43786A9ABCE086C0C4CC944_RuntimeMethod_var);
		__this->___gridManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gridManager_6), (void*)L_0);
		// pathfinder = FindObjectOfType<Pathfinder>();
		Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* L_1;
		L_1 = Object_FindObjectOfType_TisPathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB_m33C5732A9BBCA136F3CF4A82BCAB766AA6D3381B(Object_FindObjectOfType_TisPathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB_m33C5732A9BBCA136F3CF4A82BCAB766AA6D3381B_RuntimeMethod_var);
		__this->___pathfinder_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathfinder_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void Tile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Start_m7570D3565812FE205FD0D72A69D9979C41E08FB1 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// coordinates = gridManager.GetCoordinatesFromPosition(transform.position);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_0 = __this->___gridManager_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = GridManager_GetCoordinatesFromPosition_m7813DC06B7E5DA1A87FF3750CB0312674454CEBA(L_0, L_2, NULL);
		__this->___coordinates_8 = L_3;
		// if(!isPlaceable)
		bool L_4 = __this->___isPlaceable_5;
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		// gridManager.SetUnwalkable(coordinates);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_5 = __this->___gridManager_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = __this->___coordinates_8;
		GridManager_SetUnwalkable_mC850D214DC5FF981FA6C761161E5A4A5E83513DD(L_5, L_6, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Tile::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_OnMouseDown_m15CC374FC44376602BDD7405A7125F9AB2542ED0 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// if (gridManager.GetNode(coordinates).isWalkable && !pathfinder.WillBlockPath(coordinates))
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_0 = __this->___gridManager_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = __this->___coordinates_8;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_2;
		L_2 = GridManager_GetNode_mEA7F6C2B8DF9445C73D0253010E48620D36C6610(L_0, L_1, NULL);
		bool L_3 = L_2->___isWalkable_1;
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* L_4 = __this->___pathfinder_7;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = __this->___coordinates_8;
		bool L_6;
		L_6 = Pathfinder_WillBlockPath_m4B4AA6BC0CA64950EF205169E91F25D946987F85(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0065;
		}
	}
	{
		// bool isTowerCreated = towerPrefab.CreateTower(towerPrefab, transform.position); //this works because towerPrefab.CreateTower is a public bool (not a void!) and returns true/false.
		Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_7 = __this->___towerPrefab_4;
		Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_8 = __this->___towerPrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		bool L_11;
		L_11 = Tower_CreateTower_mD239DC343662B0A6FF76BF9EABB2D86BB08F2732(L_7, L_8, L_10, NULL);
		// if(isTowerCreated)
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// gridManager.SetUnwalkable(coordinates);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_12 = __this->___gridManager_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_13 = __this->___coordinates_8;
		GridManager_SetUnwalkable_mC850D214DC5FF981FA6C761161E5A4A5E83513DD(L_12, L_13, NULL);
		// pathfinder.NotifyReceivers();
		Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* L_14 = __this->___pathfinder_7;
		Pathfinder_NotifyReceivers_m28C7A1D8C55D2A41F4AAC52A6F4D712D2C8C453D(L_14, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mB2C904B47040471552C938AE751AC0BF80B369E7 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Tower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_Start_mC9F05378DD96501A52BF28A5C2981E2D04909CBB (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Build());
		RuntimeObject* L_0;
		L_0 = Tower_Build_m7C23F79D6178960D60FEEE79018E07B032258433(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Tower::CreateTower(Tower,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tower_CreateTower_mD239DC343662B0A6FF76BF9EABB2D86BB08F2732 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* ___tower0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E_m141DC8D29437A38451E2D42B2CE27EB4D9EC0883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* V_0 = NULL;
	{
		// Bank bank = FindObjectOfType<Bank>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_0;
		L_0 = Object_FindObjectOfType_TisBank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E_m141DC8D29437A38451E2D42B2CE27EB4D9EC0883(Object_FindObjectOfType_TisBank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E_m141DC8D29437A38451E2D42B2CE27EB4D9EC0883_RuntimeMethod_var);
		V_0 = L_0;
		// if (bank == null) { return false; } //no bank? return false
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (bank == null) { return false; } //no bank? return false
		return (bool)0;
	}

IL_0011:
	{
		// if (bank.CurrentBalance >= towerCost)
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_3 = V_0;
		int32_t L_4;
		L_4 = Bank_get_CurrentBalance_m4155C4A5226E56C5E398B24D1544B25F38086816_inline(L_3, NULL);
		int32_t L_5 = __this->___towerCost_4;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		// Instantiate(tower.gameObject, position, Quaternion.identity);
		Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_6 = ___tower0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// bank.Withdraw(towerCost);
		Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* L_11 = V_0;
		int32_t L_12 = __this->___towerCost_4;
		Bank_Withdraw_m507224141BAFA79C03889C965D8E687DED2EAD1B(L_11, L_12, NULL);
		// return true; //bank and money? return true
		return (bool)1;
	}

IL_003f:
	{
		// return false; //if all else fails, return false.
		return (bool)0;
	}
}
// System.Collections.IEnumerator Tower::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tower_Build_m7C23F79D6178960D60FEEE79018E07B032258433 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* L_0 = (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F*)il2cpp_codegen_object_new(U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F_il2cpp_TypeInfo_var);
		U3CBuildU3Ed__4__ctor_mC33BC61EFB09464015ACD00A99EA172C304E8189(L_0, 0, NULL);
		U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Tower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower__ctor_m1DDECE451BF98AEDFB7520FFBA14FB8D89DB0A80 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int towerCost = 50;
		__this->___towerCost_4 = ((int32_t)50);
		// [SerializeField] float buildDelay = 1f;
		__this->___buildDelay_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Tower/<Build>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__4__ctor_mC33BC61EFB09464015ACD00A99EA172C304E8189 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Tower/<Build>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__4_System_IDisposable_Dispose_mA9B6EA4C4B9F24C2F95DAF766E350DF96AECCA55 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CBuildU3Ed__4_U3CU3Em__Finally1_m82026C2FAC41F62201FCEAF990853A643E0786D3(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Tower/<Build>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildU3Ed__4_MoveNext_m65486F99D7A049877ABA6778CB808AE819C34D34 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_017c:
			{// begin fault (depth: 1)
				U3CBuildU3Ed__4_System_IDisposable_Dispose_mA9B6EA4C4B9F24C2F95DAF766E350DF96AECCA55(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_010a_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0183;
			}

IL_001f_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach(Transform child in transform)
				Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_4 = V_2;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
				RuntimeObject* L_6;
				L_6 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_5, NULL);
				V_3 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0095_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_7 = V_3;
							V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_8 = V_5;
							if (!L_8)
							{
								goto IL_00a8_1;
							}
						}
						{
							RuntimeObject* L_9 = V_5;
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
						}

IL_00a8_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_008b_2;
					}

IL_0034_2:
					{
						// foreach(Transform child in transform)
						RuntimeObject* L_10 = V_3;
						RuntimeObject* L_11;
						L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
						// child.gameObject.SetActive(false);
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
						L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
						GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
						// foreach( Transform grandchild in child)
						RuntimeObject* L_14;
						L_14 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_12, NULL);
						V_4 = L_14;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0076_2:
							{// begin finally (depth: 3)
								{
									RuntimeObject* L_15 = V_4;
									V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
									RuntimeObject* L_16 = V_5;
									if (!L_16)
									{
										goto IL_008a_2;
									}
								}
								{
									RuntimeObject* L_17 = V_5;
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
								}

IL_008a_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_006b_3;
							}

IL_0054_3:
							{
								// foreach( Transform grandchild in child)
								RuntimeObject* L_18 = V_4;
								RuntimeObject* L_19;
								L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
								// grandchild.gameObject.SetActive(false);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
								L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_19, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
								GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
							}

IL_006b_3:
							{
								// foreach( Transform grandchild in child)
								RuntimeObject* L_21 = V_4;
								bool L_22;
								L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
								if (L_22)
								{
									goto IL_0054_3;
								}
							}
							{
								goto IL_008b_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_008b_2:
					{
						// foreach(Transform child in transform)
						RuntimeObject* L_23 = V_3;
						bool L_24;
						L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
						if (L_24)
						{
							goto IL_0034_2;
						}
					}
					{
						goto IL_00a9_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a9_1:
			{
				// foreach (Transform child in transform)
				Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_25 = V_2;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
				L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
				RuntimeObject* L_27;
				L_27 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_26, NULL);
				__this->___U3CU3E7__wrap1_3 = L_27;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_27);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_015b_1;
			}

IL_00c7_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_28 = __this->___U3CU3E7__wrap1_3;
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				__this->___U3CchildU3E5__3_4 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_29, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__3_4), (void*)((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_29, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				// child.gameObject.SetActive(true);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___U3CchildU3E5__3_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
				L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
				// yield return new WaitForSeconds(buildDelay);
				Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_32 = V_2;
				float L_33 = L_32->___buildDelay_5;
				WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_34 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
				WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_34, L_33, NULL);
				__this->___U3CU3E2__current_1 = L_34;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_34);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0183;
			}

IL_010a_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// foreach (Transform grandchild in child)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___U3CchildU3E5__3_4;
				RuntimeObject* L_36;
				L_36 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_35, NULL);
				V_3 = L_36;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0140_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_37 = V_3;
							V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_38 = V_5;
							if (!L_38)
							{
								goto IL_0153_1;
							}
						}
						{
							RuntimeObject* L_39 = V_5;
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_39);
						}

IL_0153_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0136_2;
					}

IL_0120_2:
					{
						// foreach (Transform grandchild in child)
						RuntimeObject* L_40 = V_3;
						RuntimeObject* L_41;
						L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
						// grandchild.gameObject.SetActive(true);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
						L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_41, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
						GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
					}

IL_0136_2:
					{
						// foreach (Transform grandchild in child)
						RuntimeObject* L_43 = V_3;
						bool L_44;
						L_44 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
						if (L_44)
						{
							goto IL_0120_2;
						}
					}
					{
						goto IL_0154_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0154_1:
			{
				// }
				__this->___U3CchildU3E5__3_4 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__3_4), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
			}

IL_015b_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_45 = __this->___U3CU3E7__wrap1_3;
				bool L_46;
				L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_45);
				if (L_46)
				{
					goto IL_00c7_1;
				}
			}
			{
				U3CBuildU3Ed__4_U3CU3Em__Finally1_m82026C2FAC41F62201FCEAF990853A643E0786D3(__this, NULL);
				__this->___U3CU3E7__wrap1_3 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0183;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0183:
	{
		bool L_47 = V_0;
		return L_47;
	}
}
// System.Void Tower/<Build>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__4_U3CU3Em__Finally1_m82026C2FAC41F62201FCEAF990853A643E0786D3 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_3;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object Tower/<Build>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBuildU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDCE08A57105269AF7B64B8D41DCA6E3447762C59 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Tower/<Build>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildU3Ed__4_System_Collections_IEnumerator_Reset_m7A190BC4DABC8792A30E56A01F9B7C5D5C1AD903 (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildU3Ed__4_System_Collections_IEnumerator_Reset_m7A190BC4DABC8792A30E56A01F9B7C5D5C1AD903_RuntimeMethod_var)));
	}
}
// System.Object Tower/<Build>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBuildU3Ed__4_System_Collections_IEnumerator_get_Current_m132F009EA6187276328975C1978A17AC37DD86EE (U3CBuildU3Ed__4_t72454C0740FB1874A379F31406C4C622490F811F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Node::.ctor(UnityEngine.Vector2Int,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m34022B1151E14810645C3FEF6FB24462CA276AA7 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coordinates0, bool ___isWalkable1, const RuntimeMethod* method) 
{
	{
		// public Node(Vector2Int coordinates, bool isWalkable)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.coordinates = coordinates; //a way of using the same names
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___coordinates0;
		__this->___coordinates_0 = L_0;
		// this.isWalkable = isWalkable;
		bool L_1 = ___isWalkable1;
		__this->___isWalkable_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Pathfinder_get_StartCoordinates_mA92A4B53942C430032042384DB6ACABAF319166D_inline (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int StartCoordinates {  get { return startCoordinates;  } }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___startCoordinates_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* GridManager_get_Grid_m823A4943B32194E1A922C7C38B06841D6D972CC2_inline (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<Vector2Int, Node> Grid { get { return grid; } }
		Dictionary_2_tA7174790C4087AFD9B4BB6F8B9928209F44B7F65* L_0 = __this->___grid_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_op_Addition_m395CFA571AB48E2286EECC12AEEA718CA1A32C70_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___a0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___b1, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___a0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___b1), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___a0), NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___b1), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_4), ((int32_t)il2cpp_codegen_add(L_0, L_1)), ((int32_t)il2cpp_codegen_add(L_2, L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Equality_m0BACF220C29A50100740A626E2A928F9F96E6759_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___lhs0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___lhs0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___rhs1), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___lhs0), NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___rhs1), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_right_m921C9F23A09E5423E1905D5A4E5D0E02ED146AE7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Right_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_left_m0115A485CCFE776FDFABCBF6E5486095F2A658C9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Left_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_up_m870C1A8FD5977767F43B0A53A99FD12AD594432C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Up_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_down_m4695E9EBBC28CEA810728022456DF9639FD5BC62_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Down_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Bank_get_CurrentBalance_m4155C4A5226E56C5E398B24D1544B25F38086816_inline (Bank_tCDD37C590E984EE8812DFCABBEE1A329C556C96E* __this, const RuntimeMethod* method) 
{
	{
		// public int CurrentBalance { get { return currentBalance; } } //CurrentBalance must be accessed from elsewhere, too.
		int32_t L_0 = __this->___currentBalance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t6F788E07042D753A519E870A5BB1F7A1FE726AA2 Enumerator_get_Current_m95E00F3578F490956A3625933D4756814604A2C3_gshared_inline (Enumerator_t6947C7682E007DBAB15EC55150B30357DB5A5550* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t6F788E07042D753A519E870A5BB1F7A1FE726AA2 L_0 = (KeyValuePair_2_t6F788E07042D753A519E870A5BB1F7A1FE726AA2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m9C25318B39214FC63CE60D19D565828C56D8CCEB_gshared_inline (KeyValuePair_2_t6F788E07042D753A519E870A5BB1F7A1FE726AA2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
