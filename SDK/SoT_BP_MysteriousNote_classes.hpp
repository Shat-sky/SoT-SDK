#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MysteriousNote_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MysteriousNote.BP_MysteriousNote_C
// 0x0008 (0x0988 - 0x0980)
class ABP_MysteriousNote_C : public AWieldableMysteriousNote
{
public:
	class UZoomInOnWieldableItemComponent*             ZoomInOnWieldableItem;                                    // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MysteriousNote.BP_MysteriousNote_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
