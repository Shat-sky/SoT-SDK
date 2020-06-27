#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EquipmentShopkeeper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EquipmentShopkeeper.BP_EquipmentShopkeeper_C
// 0x0008 (0x04C8 - 0x04C0)
class ABP_EquipmentShopkeeper_C : public AShopkeeperInteractionProxy
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_EquipmentShopkeeper.BP_EquipmentShopkeeper_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif