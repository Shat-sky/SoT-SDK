// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AICannon_Phantom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AICannon_Phantom.BP_AICannon_Phantom_C.TurnOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AICannon_Phantom_C::TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AICannon_Phantom.BP_AICannon_Phantom_C.TurnOff"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AICannon_Phantom.BP_AICannon_Phantom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AICannon_Phantom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AICannon_Phantom.BP_AICannon_Phantom_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
