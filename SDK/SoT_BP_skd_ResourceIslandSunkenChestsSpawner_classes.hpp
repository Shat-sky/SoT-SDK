#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_skd_ResourceIslandSunkenChestsSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_skd_ResourceIslandSunkenChestsSpawner.BP_skd_ResourceIslandSunkenChestsSpawner_C
// 0x0000 (0x0580 - 0x0580)
class UBP_skd_ResourceIslandSunkenChestsSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_skd_ResourceIslandSunkenChestsSpawner.BP_skd_ResourceIslandSunkenChestsSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif