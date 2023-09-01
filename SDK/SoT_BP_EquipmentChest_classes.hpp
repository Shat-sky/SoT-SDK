#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EquipmentChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EquipmentChest.BP_EquipmentChest_C
// 0x0008 (0x05A8 - 0x05A0)
class ABP_EquipmentChest_C : public APossessionsChest
{
public:
	class UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent;// 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EquipmentChest.BP_EquipmentChest_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
