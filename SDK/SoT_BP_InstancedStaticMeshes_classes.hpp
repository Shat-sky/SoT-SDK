#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InstancedStaticMeshes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InstancedStaticMeshes.BP_InstancedStaticMeshes_C
// 0x001C (0x03E4 - 0x03C8)
class ABP_InstancedStaticMeshes_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FInstance_Struct>                    Instances;                                                // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DrawDistance;                                             // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_InstancedStaticMeshes.BP_InstancedStaticMeshes_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
