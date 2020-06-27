#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_IslandCosmeticChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IslandCosmeticChest.BP_IslandCosmeticChest_C
// 0x0008 (0x05C0 - 0x05B8)
class ABP_IslandCosmeticChest_C : public AShipCustomizationChest
{
public:
	class UHarbourComponent*                           Harbour;                                                  // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_IslandCosmeticChest.BP_IslandCosmeticChest_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
