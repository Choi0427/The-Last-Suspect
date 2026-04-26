#include "pch-cpp.hpp"





template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8;
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
struct List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct XRMeshSubsystemDescriptorRemoteU5BU5D_tDC3DFABEB2AE04649E3BA92D7E43BBBB49421CA8;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
struct IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct String_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t7C736D740ECA31521354BD9B68631D1F9BA0734A;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
struct XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF;
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
struct XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196;
struct XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C;
struct _Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4;
struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAD26866D259E69AF57DF3DB641DDB14A2F1C61F0____1F197D4E5BDC8A8C1EF4A9C9281E4FB0759C54D6DDA0BFE7897FE3AF98F7D8D1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAD26866D259E69AF57DF3DB641DDB14A2F1C61F0____A419BC49662DC44ABC40EB34223EA618B25BFF89923D7EBC9BA2238CEEAA604D_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDCFDC5DC9F1674AC4BB77F1272EB5EAC757983FA;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t9BDE8315E0C23AF0DD70CA11994D9E6BE9F520E5 
{
};
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17  : public RuntimeObject
{
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE  : public RuntimeObject
{
	XRMeshSubsystemDescriptorRemoteU5BU5D_tDC3DFABEB2AE04649E3BA92D7E43BBBB49421CA8* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tAD26866D259E69AF57DF3DB641DDB14A2F1C61F0  : public RuntimeObject
{
};
struct Extensions_tEABED90A3DBD793302E985B155CE654DA227B896  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubsystemManagerRemote_t7864D943349A7291959FF00BF3C91B7800B030AC  : public RuntimeObject
{
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t7C736D740ECA31521354BD9B68631D1F9BA0734A  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF  : public RuntimeObject
{
	_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* ___Manager;
};
struct XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196  : public RuntimeObject
{
	String_t* ___U3CidU3Ek__BackingField;
};
struct XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C  : public RuntimeObject
{
};
struct _Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4  : public RuntimeObject
{
	_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* ___activeLoader;
};
struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D314_t45EE234070F0B9F9115C9795F37C0A8114990622 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D314_t45EE234070F0B9F9115C9795F37C0A8114990622__padding[314];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D451_t5740BD2E60D89164EE880C7B3F55FD3EE2EC658E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D451_t5740BD2E60D89164EE880C7B3F55FD3EE2EC658E__padding[451];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct MeshGenerationOptions_t02F6B880FD3AA0855F170CB030CF01E037E02192 
{
	int32_t ___value__;
};
struct MeshGenerationStatus_t1F91400BEB3E9E6B4DC12A43C85006812BD28EDE 
{
	int32_t ___value__;
};
struct MeshVertexAttributes_t7FBD9FC3EF4E4828FDD3CF71BE710543E12EEAB3 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};
struct NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField;
	int32_t ___U3CStatusU3Ek__BackingField;
	int32_t ___U3CAttributesU3Ek__BackingField;
	uint64_t ___U3CTimestampU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField;
};
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField;
	int32_t ___U3CStatusU3Ek__BackingField;
	int32_t ___U3CAttributesU3Ek__BackingField;
	uint64_t ___U3CTimestampU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField;
};
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField;
	int32_t ___U3CStatusU3Ek__BackingField;
	int32_t ___U3CAttributesU3Ek__BackingField;
	uint64_t ___U3CTimestampU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8  : public MulticastDelegate_t
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance;
	bool ___m_InitManagerOnStart;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager;
	bool ___m_ProviderIntialized;
	bool ___m_ProviderStarted;
};
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_InitializationComplete;
	bool ___m_RequiresSettingsUpdate;
	bool ___m_AutomaticLoading;
	bool ___m_AutomaticRunning;
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders;
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField;
};
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_StaticFields
{
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE_StaticFields
{
	XRMeshSubsystemDescriptorRemoteU5BU5D_tDC3DFABEB2AE04649E3BA92D7E43BBBB49421CA8* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tAD26866D259E69AF57DF3DB641DDB14A2F1C61F0_StaticFields
{
	__StaticArrayInitTypeSizeU3D314_t45EE234070F0B9F9115C9795F37C0A8114990622 ___1F197D4E5BDC8A8C1EF4A9C9281E4FB0759C54D6DDA0BFE7897FE3AF98F7D8D1;
	__StaticArrayInitTypeSizeU3D451_t5740BD2E60D89164EE880C7B3F55FD3EE2EC658E ___A419BC49662DC44ABC40EB34223EA618B25BFF89923D7EBC9BA2238CEEAA604D;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_StaticFields
{
	XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* ___Instance;
};
struct XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields
{
	RuntimeObject* ___subsystemDelegate;
};
struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_StaticFields
{
	RuntimeObject* ___subsystem;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___s_InvalidId;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	String_t* ___k_SettingsKey;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Loader_GetLoadedSubsystem_TisRuntimeObject_m49EC7EBC62A33C7E346C276CDC4058EB235DCFB7_gshared (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_InitializeLoaderSyncIfNotInitialized_m838CDF88A619EF2AA04F49D0FF9A874CD57ADBD9 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___0_settings, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
inline RuntimeObject* _Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3*, const RuntimeMethod*))_Loader_GetLoadedSubsystem_TisRuntimeObject_m49EC7EBC62A33C7E346C276CDC4058EB235DCFB7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Manager__ctor_m11E7810A82B29A9721801336E8959ECB179B66A8 (_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__ctor_mA52C21119F543D37C4925C9EEE085464F686D0D0 (XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__ctor_m6B54E50BC0A9C08EFDCC91981CF43A980CCFEDFD (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote__ctor_mDD727EE91F27DCA86A42F74511200E64F1889262 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) ;
inline void List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_inline (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemDescriptorRemote__ctor_mAE05AA8A1252F7192E196F09933E2811B8E23F7D (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* __this, const RuntimeMethod* method) ;
inline void List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_inline (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* __this, XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE*, XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRGeneralSettingsRemote_GetMeshSubsystem_m8D44B7AB2F8B7D7CA63E7391995A5A8492304FC8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
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
// Method Definition Index: 85086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBC05408D4C513BFBB17CA93A5B5F4EDEB8ECB756 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAD26866D259E69AF57DF3DB641DDB14A2F1C61F0____1F197D4E5BDC8A8C1EF4A9C9281E4FB0759C54D6DDA0BFE7897FE3AF98F7D8D1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAD26866D259E69AF57DF3DB641DDB14A2F1C61F0____A419BC49662DC44ABC40EB34223EA618B25BFF89923D7EBC9BA2238CEEAA604D_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)314));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAD26866D259E69AF57DF3DB641DDB14A2F1C61F0____1F197D4E5BDC8A8C1EF4A9C9281E4FB0759C54D6DDA0BFE7897FE3AF98F7D8D1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)451));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAD26866D259E69AF57DF3DB641DDB14A2F1C61F0____A419BC49662DC44ABC40EB34223EA618B25BFF89923D7EBC9BA2238CEEAA604D_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 3;
		(&V_0)->___TotalTypes = 8;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 85087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m35B2BEBDA0123A83428EA0CC5B6DED4C44A29B19 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t7C736D740ECA31521354BD9B68631D1F9BA0734A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshal_pinvoke(const MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F& unmarshaled, MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshal_pinvoke_back(const MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshaled_pinvoke& marshaled, MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshal_pinvoke_cleanup(MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshal_com(const MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F& unmarshaled, MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshal_com_back(const MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshaled_com& marshaled, MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshal_com_cleanup(MonoScriptData_tDE4EE779614071D0CCE132230A6AF2E34A56FB0F_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 85088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_InitializeLoaderSyncIfNotInitialized_m838CDF88A619EF2AA04F49D0FF9A874CD57ADBD9 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___0_settings, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/Extensions.cs:9>
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = ___0_settings;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/Extensions.cs:11>
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_2 = ___0_settings;
		NullCheck(L_2);
		XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D(L_2, NULL);
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/Extensions.cs:13>
		return;
	}
}
// Method Definition Index: 85089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_log_mE01AE254ECC14ECB25F1EA67728B495A46275C9A (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/Extensions.cs:17>
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/Extensions.cs:18>
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
// Method Definition Index: 85097
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRMeshSubsystemRemote_GetDelegate_mE45F27AC4622249066104E6B5AEB6361768F6FA0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:29>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		return L_0;
	}
}
// Method Definition Index: 85098
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_SetDelegate_mDF873C0B73F7613147C34E86BFE65F9DF8B710B9 (RuntimeObject* ___0_del, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:35>
		RuntimeObject* L_0 = ___0_del;
		((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate), (void*)L_0);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:36>
		return;
	}
}
// Method Definition Index: 85099
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ClearDelegate_mBB1DADDBC7B9E3BF96F024899C1F49EA738C4352 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:41>
		((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate), (void*)(RuntimeObject*)NULL);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:42>
		return;
	}
}
// Method Definition Index: 85100
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_TryGetMeshInfos_m7D339DC18E22B8AC5C629146A00BBBC80F7DA927 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___0_meshInfosOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:45>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_1 = ___0_meshInfosOut;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* >::Invoke(0, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 85101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_GenerateMeshAsync_m8C727EC945EACA8E234B580811DF4933A41A63E1 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_meshId, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___1_mesh, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___2_meshCollider, int32_t ___3_attributes, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___4_onMeshGenerationComplete, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:54>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1 = ___0_meshId;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___1_mesh;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_3 = ___2_meshCollider;
		int32_t L_4 = ___3_attributes;
		Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_5 = ___4_onMeshGenerationComplete;
		NullCheck(L_0);
		InterfaceActionInvoker5< MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*, int32_t, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* >::Invoke(1, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:55>
		return;
	}
}
// Method Definition Index: 85102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_get_meshDensity_m39A1D1FD382AA9935C6EC623C5AAADBA96647D9B (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:58>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(2, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 85103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_set_meshDensity_m7B52A223EDCEEBC439557635B1D0C41545CC3BFB (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:59>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		float L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< float >::Invoke(3, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Method Definition Index: 85104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_SetBoundingVolume_mF42FD069EA916DE4E312FC2E40E833EA925CD785 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_extents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:63>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_extents;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(4, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 85105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_UnityEngine_ISubsystem_Start_mFD9D4950DDDBBFD646729299CF6791DE4395AB3B (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:67>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_0);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:68>
		return;
	}
}
// Method Definition Index: 85106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_UnityEngine_ISubsystem_Stop_mABA4C38DB1AC542C0212C5552D4CFB80D59B6143 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:71>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_0);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:72>
		return;
	}
}
// Method Definition Index: 85107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_UnityEngine_ISubsystem_Destroy_m1D31792EC60644E0DEAF5FACDE2B4D3CCAE6CB52 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:75>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_0);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:76>
		return;
	}
}
// Method Definition Index: 85108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_UnityEngine_ISubsystem_get_running_mB59B2D3607662933A7745455347F30A0BE2FB7A8 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:78>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 85109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_GenerateMeshAsync_m6E81B4969CFF6D3458B490AA26FAC83BDA773ACD (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_meshId, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___1_mesh, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___2_meshCollider, int32_t ___3_attributes, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___4_onMeshGenerationComplete, int32_t ___5_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:88>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1 = ___0_meshId;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___1_mesh;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_3 = ___2_meshCollider;
		int32_t L_4 = ___3_attributes;
		Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_5 = ___4_onMeshGenerationComplete;
		int32_t L_6 = ___5_options;
		NullCheck(L_0);
		InterfaceActionInvoker6< MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*, int32_t, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*, int32_t >::Invoke(5, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:89>
		return;
	}
}
// Method Definition Index: 85110
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236 XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_GetUpdatedMeshTransforms_mCE55DA442C39F70F4CA22605CB472111324B84B5 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:92>
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate;
		int32_t L_1 = ___0_allocator;
		NullCheck(L_0);
		NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236, int32_t >::Invoke(6, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 85111
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_log_m0E9C645B80A89DDBE84FE8B17F2761C8C18FDA50 (String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:99>
		String_t* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:100>
		return;
	}
}
// Method Definition Index: 85112
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote__ctor_mDD727EE91F27DCA86A42F74511200E64F1889262 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 85113
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* XRGeneralSettingsRemote_GetRealSubsystem_mF6B39D067B28BA11E9C0C7968C8419CCF6C140CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* V_0 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* V_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:131>
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:132>
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:133>
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3 = V_0;
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_3, NULL);
		V_1 = L_4;
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:134>
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:136>
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7 = V_1;
		Extensions_InitializeLoaderSyncIfNotInitialized_m838CDF88A619EF2AA04F49D0FF9A874CD57ADBD9(L_7, NULL);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:138>
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_8 = V_1;
		NullCheck(L_8);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9;
		L_9 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_8, NULL);
		V_2 = L_9;
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:139>
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:140>
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_12 = V_2;
		NullCheck(L_12);
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_13;
		L_13 = GenericVirtualFuncInvoker0< XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var, L_12);
		return L_13;
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:145>
		return (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2*)NULL;
	}
}
// Method Definition Index: 85114
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRGeneralSettingsRemote_GetMeshSubsystem_m8D44B7AB2F8B7D7CA63E7391995A5A8492304FC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:150>
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* L_0 = ((XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* L_1 = L_0->___Manager;
		NullCheck(L_1);
		_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* L_2 = L_1->___activeLoader;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = _Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A(L_2, _Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A_RuntimeMethod_var);
		return L_3;
	}
}
// Method Definition Index: 85115
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__ctor_mA52C21119F543D37C4925C9EEE085464F686D0D0 (XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:127>
		_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* L_0 = (_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4*)il2cpp_codegen_object_new(_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4_il2cpp_TypeInfo_var);
		_Manager__ctor_m11E7810A82B29A9721801336E8959ECB179B66A8(L_0, NULL);
		__this->___Manager = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Manager), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 85116
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__cctor_m6A6F0DD1D82A3E31ED4EBA4EC52D430F46025ED7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:105>
		XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* L_0 = (XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF*)il2cpp_codegen_object_new(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		XRGeneralSettingsRemote__ctor_mA52C21119F543D37C4925C9EEE085464F686D0D0(L_0, NULL);
		((XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var))->___Instance = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var))->___Instance), (void*)L_0);
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
// Method Definition Index: 85117
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Manager__ctor_m11E7810A82B29A9721801336E8959ECB179B66A8 (_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:108>
		_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* L_0 = (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3*)il2cpp_codegen_object_new(_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var);
		_Loader__ctor_m6B54E50BC0A9C08EFDCC91981CF43A980CCFEDFD(L_0, NULL);
		__this->___activeLoader = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeLoader), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 85119
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__ctor_m6B54E50BC0A9C08EFDCC91981CF43A980CCFEDFD (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 85120
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__cctor_m730A96C2BBF97E53F538C97D3127ACCF32ED8392 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:112>
		XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* L_0 = (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C*)il2cpp_codegen_object_new(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		XRMeshSubsystemRemote__ctor_mDD727EE91F27DCA86A42F74511200E64F1889262(L_0, NULL);
		((_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_StaticFields*)il2cpp_codegen_static_fields_for(_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var))->___subsystem = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_StaticFields*)il2cpp_codegen_static_fields_for(_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var))->___subsystem), (void*)L_0);
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
// Method Definition Index: 85121
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManagerRemote_GetSubsystemDescriptors_m2169388FAB4A8FF717B1110C1F63EF9C677564D4 (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* ___0_sSubsystemDescriptors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:157>
		List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* L_0 = ___0_sSubsystemDescriptors;
		NullCheck(L_0);
		List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_inline(L_0, List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:158>
		List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* L_1 = ___0_sSubsystemDescriptors;
		XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* L_2 = (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196*)il2cpp_codegen_object_new(XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196_il2cpp_TypeInfo_var);
		XRMeshSubsystemDescriptorRemote__ctor_mAE05AA8A1252F7192E196F09933E2811B8E23F7D(L_2, NULL);
		NullCheck(L_1);
		List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_inline(L_1, L_2, List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:159>
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
// Method Definition Index: 85122
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRMeshSubsystemDescriptorRemote_get_id_m00EAFA42EC3A263AF9638D3041849EBB7B4052B6 (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:163>
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 85123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRMeshSubsystemDescriptorRemote_Create_m22EED3D7CDAAAA361CD6B47C93973B15C44C4B37 (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:166>
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = XRGeneralSettingsRemote_GetMeshSubsystem_m8D44B7AB2F8B7D7CA63E7391995A5A8492304FC8(NULL);
		return L_0;
	}
}
// Method Definition Index: 85124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemDescriptorRemote__ctor_mAE05AA8A1252F7192E196F09933E2811B8E23F7D (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCFDC5DC9F1674AC4BB77F1272EB5EAC757983FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.kyrylokuzyk.arfoundationremote@cd477b5983bd/Meshing/XRMeshSubsystemRemote.cs:163>
		__this->___U3CidU3Ek__BackingField = _stringLiteralDCFDC5DC9F1674AC4BB77F1272EB5EAC757983FA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)_stringLiteralDCFDC5DC9F1674AC4BB77F1272EB5EAC757983FA);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 84743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.management@e3a3882b360a/Runtime/XRManagerSettings.cs:134>
		bool L_0 = __this->___m_InitializationComplete;
		return L_0;
	}
}
// Method Definition Index: 84703
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.management@e3a3882b360a/Runtime/XRGeneralSettings.cs:44>
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance;
		return L_0;
	}
}
// Method Definition Index: 84701
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.management@e3a3882b360a/Runtime/XRGeneralSettings.cs:28>
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance;
		return L_0;
	}
}
// Method Definition Index: 84744
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.management@e3a3882b360a/Runtime/XRManagerSettings.cs:141>
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 21090
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 21082
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
