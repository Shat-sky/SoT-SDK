#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_ZoomableQuestbook_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_ZoomableQuestbook.BP_PromptActor_ZoomableQuestbook_C
// 0x0000 (0x0418 - 0x0418)
class ABP_PromptActor_ZoomableQuestbook_C : public ABP_PromptActor_ZoomableWieldableItem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_ZoomableQuestbook.BP_PromptActor_ZoomableQuestbook_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
