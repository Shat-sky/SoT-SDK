#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SunkenKingdomDeepSeaRegion_Shrine_2A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SunkenKingdomDeepSeaRegion_Shrine_2A.BP_SunkenKingdomDeepSeaRegion_Shrine_2A_C
// 0x0000 (0x0448 - 0x0448)
class ABP_SunkenKingdomDeepSeaRegion_Shrine_2A_C : public ABP_DeepSeaRegion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SunkenKingdomDeepSeaRegion_Shrine_2A.BP_SunkenKingdomDeepSeaRegion_Shrine_2A_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
