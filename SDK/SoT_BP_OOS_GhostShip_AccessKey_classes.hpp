#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OOS_GhostShip_AccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OOS_GhostShip_AccessKey.BP_OOS_GhostShip_AccessKey_C
// 0x0000 (0x0038 - 0x0038)
class UBP_OOS_GhostShip_AccessKey_C : public UGenericVoyagePrioritisedPrompt_PromptAccessKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_OOS_GhostShip_AccessKey.BP_OOS_GhostShip_AccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
