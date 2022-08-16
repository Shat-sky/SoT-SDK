#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleBook_Shroudbreaker_GalleonsGraveOutpost_AdditionalPuzzles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TaleBook_Shroudbreaker_GalleonsGraveOutpost_AdditionalPuzzles.BP_TaleBook_Shroudbreaker_GalleonsGraveOutpost_AdditionalPuzzles_C
// 0x0030 (0x07B0 - 0x0780)
class ABP_TaleBook_Shroudbreaker_GalleonsGraveOutpost_AdditionalPuzzles_C : public AVoyageProposalContainer
{
public:
	class UChildActorComponent*                        TaleSelectionSlot_6;                                      // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_5;                                      // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_4;                                      // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_3;                                      // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_2;                                      // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_1;                                      // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TaleBook_Shroudbreaker_GalleonsGraveOutpost_AdditionalPuzzles.BP_TaleBook_Shroudbreaker_GalleonsGraveOutpost_AdditionalPuzzles_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
