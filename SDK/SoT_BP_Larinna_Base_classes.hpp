#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Larinna_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Larinna_Base.BP_Larinna_Base_C
// 0x0018 (0x06C8 - 0x06B0)
class ABP_Larinna_Base_C : public ABP_SoleTrader_C
{
public:
	class UStaticMeshComponent*                        LeftHandPropMesh;                                         // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RightHandPropMesh;                                        // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Larinna_Base.BP_Larinna_Base_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
