#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GHLetter_ExclusionEntitlement_Campaign046_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GHLetter_ExclusionEntitlement_Campaign046.GHLetter_ExclusionEntitlement_Campaign046_C
// 0x0000 (0x00C8 - 0x00C8)
class UGHLetter_ExclusionEntitlement_Campaign046_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GHLetter_ExclusionEntitlement_Campaign046.GHLetter_ExclusionEntitlement_Campaign046_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
