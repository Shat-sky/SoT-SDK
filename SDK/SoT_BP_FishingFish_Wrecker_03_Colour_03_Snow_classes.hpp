#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_Wrecker_03_Colour_03_Snow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_Wrecker_03_Colour_03_Snow.BP_FishingFish_Wrecker_03_Colour_03_Snow_C
// 0x0000 (0x0900 - 0x0900)
class ABP_FishingFish_Wrecker_03_Colour_03_Snow_C : public ABP_FishingFish_Wrecker_03_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_Wrecker_03_Colour_03_Snow.BP_FishingFish_Wrecker_03_Colour_03_Snow_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
