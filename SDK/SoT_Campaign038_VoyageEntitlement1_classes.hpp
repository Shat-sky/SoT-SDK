#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Campaign038_VoyageEntitlement1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Campaign038_VoyageEntitlement1.Campaign038_VoyageEntitlement1_C
// 0x0000 (0x00C8 - 0x00C8)
class UCampaign038_VoyageEntitlement1_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Campaign038_VoyageEntitlement1.Campaign038_VoyageEntitlement1_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
