// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_bottle_hanging_light_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_bottle_hanging_light_a.bsp_bottle_hanging_light_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_bottle_hanging_light_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_bottle_hanging_light_a.bsp_bottle_hanging_light_a_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
