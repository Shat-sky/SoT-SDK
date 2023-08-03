#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_skd_ResourceIslandSunkenMerchantCommoditiesSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_skd_ResourceIslandSunkenMerchantCommoditiesSpawner.BP_skd_ResourceIslandSunkenMerchantCommoditiesSpawner_C
// 0x0000 (0x0580 - 0x0580)
class UBP_skd_ResourceIslandSunkenMerchantCommoditiesSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_skd_ResourceIslandSunkenMerchantCommoditiesSpawner.BP_skd_ResourceIslandSunkenMerchantCommoditiesSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
