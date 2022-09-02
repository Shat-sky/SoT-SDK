#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Adv7_AdventureCompletePermEntitlement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Adv7_AdventureCompletePermEntitlement.Adv7_AdventureCompletePermEntitlement_C
// 0x0000 (0x00C8 - 0x00C8)
class UAdv7_AdventureCompletePermEntitlement_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Adv7_AdventureCompletePermEntitlement.Adv7_AdventureCompletePermEntitlement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
