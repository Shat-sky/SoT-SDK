#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_QuestTable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_QuestTable.BP_LargeShip_QuestTable_C
// 0x0050 (0x08C8 - 0x0878)
class ABP_LargeShip_QuestTable_C : public AVoyageTable
{
public:
	class UChildActorComponent*                        WarMap;                                                   // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FactionHourglass;                                         // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CancelAdventure;                                          // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        PlayerBuiredItemsMapBundleInteractionPoint;               // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CancelTale;                                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CancelVoyage;                                             // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        VoyageSelectionSlot4;                                     // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        VoyageSelectionSlot3;                                     // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        VoyageSelectionSlot2;                                     // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        VoyageSelectionSlot1;                                     // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LargeShip_QuestTable.BP_LargeShip_QuestTable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
