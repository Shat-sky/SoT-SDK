#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_gmp_fishing_rod_eas_01_a_v01_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_gmp_fishing_rod_eas_01_a_v01_Wieldable.BP_gmp_fishing_rod_eas_01_a_v01_Wieldable_C
// 0x0000 (0x0BF0 - 0x0BF0)
class ABP_gmp_fishing_rod_eas_01_a_v01_Wieldable_C : public ABP_FishingRod_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_gmp_fishing_rod_eas_01_a_v01_Wieldable.BP_gmp_fishing_rod_eas_01_a_v01_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif