#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Adv8_Chp3_PostBattle_Entitlement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Adv8_Chp3_PostBattle_Entitlement.Adv8_Chp3_PostBattle_Entitlement_C
// 0x0000 (0x00C8 - 0x00C8)
class UAdv8_Chp3_PostBattle_Entitlement_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Adv8_Chp3_PostBattle_Entitlement.Adv8_Chp3_PostBattle_Entitlement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
