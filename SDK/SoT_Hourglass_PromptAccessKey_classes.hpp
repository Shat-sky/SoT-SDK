#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Hourglass_PromptAccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hourglass_PromptAccessKey.Hourglass_PromptAccessKey_C
// 0x0000 (0x0038 - 0x0038)
class UHourglass_PromptAccessKey_C : public UWarMap_PromptAccessKey_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Hourglass_PromptAccessKey.Hourglass_PromptAccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
