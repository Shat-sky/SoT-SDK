#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_HeraldOfTheFlame_AdventureComplete_Entitlement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HeraldOfTheFlame_AdventureComplete_Entitlement.HeraldOfTheFlame_AdventureComplete_Entitlement_C
// 0x0000 (0x00C8 - 0x00C8)
class UHeraldOfTheFlame_AdventureComplete_Entitlement_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HeraldOfTheFlame_AdventureComplete_Entitlement.HeraldOfTheFlame_AdventureComplete_Entitlement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
