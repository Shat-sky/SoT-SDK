#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GHLetter_ExclusionEntitlement_Campaign018_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GHLetter_ExclusionEntitlement_Campaign018.GHLetter_ExclusionEntitlement_Campaign018_C
// 0x0000 (0x00C8 - 0x00C8)
class UGHLetter_ExclusionEntitlement_Campaign018_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GHLetter_ExclusionEntitlement_Campaign018.GHLetter_ExclusionEntitlement_Campaign018_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
