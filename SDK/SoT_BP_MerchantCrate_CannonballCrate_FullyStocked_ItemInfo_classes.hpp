#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo.BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo_C
// 0x0018 (0x0738 - 0x0720)
class ABP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo_C : public ABootyItemInfo
{
public:
	class UCommoditySourceComponent*                   CommoditySource;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCrateFillerComponent*                       CrateFiller;                                              // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo.BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
