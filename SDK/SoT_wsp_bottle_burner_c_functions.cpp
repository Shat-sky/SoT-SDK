// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_bottle_burner_c_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_bottle_burner_c.wsp_bottle_burner_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_bottle_burner_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_bottle_burner_c.wsp_bottle_burner_c_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif