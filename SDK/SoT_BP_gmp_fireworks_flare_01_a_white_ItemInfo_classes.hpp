#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_gmp_fireworks_flare_01_a_white_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_gmp_fireworks_flare_01_a_white_ItemInfo.BP_gmp_fireworks_flare_01_a_white_ItemInfo_C
// 0x0000 (0x0538 - 0x0538)
class ABP_gmp_fireworks_flare_01_a_white_ItemInfo_C : public ABP_Firework_ItemInfo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_gmp_fireworks_flare_01_a_white_ItemInfo.BP_gmp_fireworks_flare_01_a_white_ItemInfo_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
