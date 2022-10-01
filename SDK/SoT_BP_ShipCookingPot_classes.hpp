#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipCookingPot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipCookingPot.BP_ShipCookingPot_C
// 0x0010 (0x05F0 - 0x05E0)
class ABP_ShipCookingPot_C : public ABP_CookingPotBase_C
{
public:
	class UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent;// 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCookerIgnitionComponent*                    CookerIgnition;                                           // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipCookingPot.BP_ShipCookingPot_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
