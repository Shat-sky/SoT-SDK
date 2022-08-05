#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_WieldableIMapZoom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_WieldableIMapZoom.BP_Prompt_WieldableIMapZoom_C
// 0x0000 (0x01F8 - 0x01F8)
class UBP_Prompt_WieldableIMapZoom_C : public UBP_Prompt_WieldableItemZoom_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_WieldableIMapZoom.BP_Prompt_WieldableIMapZoom_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
