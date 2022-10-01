#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CommodityManifestBook_MerchantAlliance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CommodityManifestBook_MerchantAlliance.BP_CommodityManifestBook_MerchantAlliance_C
// 0x0010 (0x0520 - 0x0510)
class ABP_CommodityManifestBook_MerchantAlliance_C : public AModalInteractionProxy
{
public:
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CommodityManifestBook_MerchantAlliance.BP_CommodityManifestBook_MerchantAlliance_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
