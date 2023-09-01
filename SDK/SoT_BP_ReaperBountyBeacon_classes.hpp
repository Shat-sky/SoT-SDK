#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ReaperBountyBeacon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReaperBountyBeacon.BP_ReaperBountyBeacon_C
// 0x0008 (0x0420 - 0x0418)
class ABP_ReaperBountyBeacon_C : public AMovingWorldMarkerBeaconActor
{
public:
	class UParticleSystemComponent*                    VFX_ReapersBounty_Beacon;                                 // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReaperBountyBeacon.BP_ReaperBountyBeacon_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
