#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OoSLetter_ExclusionEntitlementCampaign018_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OoSLetter_ExclusionEntitlementCampaign018.OoSLetter_ExclusionEntitlementCampaign018_C
// 0x0000 (0x00C8 - 0x00C8)
class UOoSLetter_ExclusionEntitlementCampaign018_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OoSLetter_ExclusionEntitlementCampaign018.OoSLetter_ExclusionEntitlementCampaign018_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
