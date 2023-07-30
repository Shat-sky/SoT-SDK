#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PL_Fort_AthenaCalmWaterZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PL_Fort_AthenaCalmWaterZone.BP_PL_Fort_AthenaCalmWaterZone_C
// 0x0000 (0x03F0 - 0x03F0)
class ABP_PL_Fort_AthenaCalmWaterZone_C : public AAthenaCalmWaterZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PL_Fort_AthenaCalmWaterZone.BP_PL_Fort_AthenaCalmWaterZone_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
