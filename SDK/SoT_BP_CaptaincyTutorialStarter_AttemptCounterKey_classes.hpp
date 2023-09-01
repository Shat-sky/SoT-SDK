#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptaincyTutorialStarter_AttemptCounterKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaptaincyTutorialStarter_AttemptCounterKey.BP_CaptaincyTutorialStarter_AttemptCounterKey_C
// 0x0000 (0x0038 - 0x0038)
class UBP_CaptaincyTutorialStarter_AttemptCounterKey_C : public UPromptCounterAccessKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CaptaincyTutorialStarter_AttemptCounterKey.BP_CaptaincyTutorialStarter_AttemptCounterKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
