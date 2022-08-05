#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Firework_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Firework_Wieldable.BP_Firework_Wieldable_C
// 0x0028 (0x07A8 - 0x0780)
class ABP_Firework_Wieldable_C : public AStaticMeshWieldableItem
{
public:
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UConsumableWieldableComponent*               ConsumableWieldable;                                      // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItem;                                            // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Firework_Wieldable.BP_Firework_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
