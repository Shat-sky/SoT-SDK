#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AHuntersCry_Larinna_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AHuntersCry_Larinna.BP_AHuntersCry_Larinna_C
// 0x0018 (0x06B8 - 0x06A0)
class ABP_AHuntersCry_Larinna_C : public ABP_SoleTrader_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AHuntersCry_Larinna.BP_AHuntersCry_Larinna_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
