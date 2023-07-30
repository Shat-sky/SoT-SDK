#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_NPC_ReapersBones_Skeleton_InCage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_ReapersBones_Skeleton_InCage.BP_NPC_ReapersBones_Skeleton_InCage_C
// 0x0018 (0x06D0 - 0x06B8)
class ABP_NPC_ReapersBones_Skeleton_InCage_C : public ACompanyShopkeeper
{
public:
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_NPC_ReapersBones_Skeleton_InCage.BP_NPC_ReapersBones_Skeleton_InCage_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
