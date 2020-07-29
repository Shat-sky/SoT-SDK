#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Weapondealer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapondealer.BP_Weapondealer_C
// 0x0020 (0x0608 - 0x05E8)
class ABP_Weapondealer_C : public AShopkeeper
{
public:
	class UCargoRunParticipantComponent*               CargoRunParticipant;                                      // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapondealer.BP_Weapondealer_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
