// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelOfTheDamned_MediumShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TunnelOfTheDamned_MediumShip.BP_TunnelOfTheDamned_MediumShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TunnelOfTheDamned_MediumShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TunnelOfTheDamned_MediumShip.BP_TunnelOfTheDamned_MediumShip_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif