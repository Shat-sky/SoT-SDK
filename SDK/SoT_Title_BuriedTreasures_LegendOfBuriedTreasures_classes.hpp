#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_BuriedTreasures_LegendOfBuriedTreasures_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_BuriedTreasures_LegendOfBuriedTreasures.Title_BuriedTreasures_LegendOfBuriedTreasures_C
// 0x0000 (0x00D0 - 0x00D0)
class UTitle_BuriedTreasures_LegendOfBuriedTreasures_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_BuriedTreasures_LegendOfBuriedTreasures.Title_BuriedTreasures_LegendOfBuriedTreasures_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif