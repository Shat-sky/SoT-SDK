// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_lantern_stand_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_lantern_stand.bsp_lantern_stand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_lantern_stand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_lantern_stand.bsp_lantern_stand_C.UserConstructionScript"));

	struct
	{
	} params;

	UObject::ProcessEvent(fn, &params);

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif