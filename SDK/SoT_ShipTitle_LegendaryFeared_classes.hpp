#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipTitle_LegendaryFeared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShipTitle_LegendaryFeared.ShipTitle_LegendaryFeared_C
// 0x0000 (0x00F8 - 0x00F8)
class UShipTitle_LegendaryFeared_C : public UShipTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ShipTitle_LegendaryFeared.ShipTitle_LegendaryFeared_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
