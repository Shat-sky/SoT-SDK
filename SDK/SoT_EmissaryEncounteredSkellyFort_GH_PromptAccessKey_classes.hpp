#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryEncounteredSkellyFort_GH_PromptAccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmissaryEncounteredSkellyFort_GH_PromptAccessKey.EmissaryEncounteredSkellyFort_GH_PromptAccessKey_C
// 0x0000 (0x0038 - 0x0038)
class UEmissaryEncounteredSkellyFort_GH_PromptAccessKey_C : public UPromptCounterAccessKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EmissaryEncounteredSkellyFort_GH_PromptAccessKey.EmissaryEncounteredSkellyFort_GH_PromptAccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
