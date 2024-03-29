#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_fod_KrakenMeatRawBite1_00_a_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_fod_KrakenMeatRawBite1_00_a_ItemInfo.BP_fod_KrakenMeatRawBite1_00_a_ItemInfo_C
// 0x0018 (0x0590 - 0x0578)
class ABP_fod_KrakenMeatRawBite1_00_a_ItemInfo_C : public ABP_MeatItemInfo_C
{
public:
	class UMaterialManipulationSettingsComponent*      MaterialManipulationSettings;                             // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCookableComponent*                          Cookable;                                                 // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_fod_KrakenMeatRawBite1_00_a_ItemInfo.BP_fod_KrakenMeatRawBite1_00_a_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
