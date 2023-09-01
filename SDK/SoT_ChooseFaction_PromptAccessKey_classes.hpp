#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ChooseFaction_PromptAccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChooseFaction_PromptAccessKey.ChooseFaction_PromptAccessKey_C
// 0x0000 (0x0038 - 0x0038)
class UChooseFaction_PromptAccessKey_C : public UWarMap_PromptAccessKey_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ChooseFaction_PromptAccessKey.ChooseFaction_PromptAccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
