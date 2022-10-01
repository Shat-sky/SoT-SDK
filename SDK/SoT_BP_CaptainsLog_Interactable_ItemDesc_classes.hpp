#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptainsLog_Interactable_ItemDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaptainsLog_Interactable_ItemDesc.BP_CaptainsLog_Interactable_ItemDesc_C
// 0x0000 (0x0138 - 0x0138)
class UBP_CaptainsLog_Interactable_ItemDesc_C : public UBP_CaptainsLog_ItemDesc_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CaptainsLog_Interactable_ItemDesc.BP_CaptainsLog_Interactable_ItemDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
