#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Adv7_Chapter2PermEntitlement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Adv7_Chapter2PermEntitlement.Adv7_Chapter2PermEntitlement_C
// 0x0000 (0x00C8 - 0x00C8)
class UAdv7_Chapter2PermEntitlement_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Adv7_Chapter2PermEntitlement.Adv7_Chapter2PermEntitlement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif