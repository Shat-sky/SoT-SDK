#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_hulllivery_sunkenkingdom_hull_01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass hulllivery_sunkenkingdom_hull_01_CustomizationDesc.hulllivery_sunkenkingdom_hull_01_CustomizationDesc_C
// 0x0000 (0x00F8 - 0x00F8)
class Uhulllivery_sunkenkingdom_hull_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass hulllivery_sunkenkingdom_hull_01_CustomizationDesc.hulllivery_sunkenkingdom_hull_01_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif