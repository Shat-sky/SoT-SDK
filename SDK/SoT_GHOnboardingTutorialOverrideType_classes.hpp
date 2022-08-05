#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GHOnboardingTutorialOverrideType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GHOnboardingTutorialOverrideType.GHOnboardingTutorialOverrideType_C
// 0x0000 (0x0028 - 0x0028)
class UGHOnboardingTutorialOverrideType_C : public UNPCDialogOverrideType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GHOnboardingTutorialOverrideType.GHOnboardingTutorialOverrideType_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
