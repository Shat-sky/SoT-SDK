#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OOSLetter_ExclusionEntitlement_Campaign052_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OOSLetter_ExclusionEntitlement_Campaign052.OOSLetter_ExclusionEntitlement_Campaign052_C
// 0x0000 (0x00C8 - 0x00C8)
class UOOSLetter_ExclusionEntitlement_Campaign052_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OOSLetter_ExclusionEntitlement_Campaign052.OOSLetter_ExclusionEntitlement_Campaign052_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif