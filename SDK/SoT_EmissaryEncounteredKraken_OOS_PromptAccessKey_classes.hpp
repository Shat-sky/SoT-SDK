#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryEncounteredKraken_OOS_PromptAccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmissaryEncounteredKraken_OOS_PromptAccessKey.EmissaryEncounteredKraken_OOS_PromptAccessKey_C
// 0x0000 (0x0038 - 0x0038)
class UEmissaryEncounteredKraken_OOS_PromptAccessKey_C : public UPromptCounterAccessKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EmissaryEncounteredKraken_OOS_PromptAccessKey.EmissaryEncounteredKraken_OOS_PromptAccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
