// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Firework_ItemInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Firework_ItemInfo.BP_Firework_ItemInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Firework_ItemInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Firework_ItemInfo.BP_Firework_ItemInfo_C.UserConstructionScript"));

	struct
	{
	} params;

	UObject::ProcessEvent(fn, &params);

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
