#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipTitle_LegendaryGoldSeeker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShipTitle_LegendaryGoldSeeker.ShipTitle_LegendaryGoldSeeker_C
// 0x0000 (0x00F8 - 0x00F8)
class UShipTitle_LegendaryGoldSeeker_C : public UShipTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ShipTitle_LegendaryGoldSeeker.ShipTitle_LegendaryGoldSeeker_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif