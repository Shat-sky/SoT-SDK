// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Soveriegn_LiftMechanism_Toggle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Soveriegn_LiftMechanism_Toggle.BP_Soveriegn_LiftMechanism_Toggle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Soveriegn_LiftMechanism_Toggle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Soveriegn_LiftMechanism_Toggle.BP_Soveriegn_LiftMechanism_Toggle_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Soveriegn_LiftMechanism_Toggle.BP_Soveriegn_LiftMechanism_Toggle_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Soveriegn_LiftMechanism_Toggle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Soveriegn_LiftMechanism_Toggle.BP_Soveriegn_LiftMechanism_Toggle_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Soveriegn_LiftMechanism_Toggle.BP_Soveriegn_LiftMechanism_Toggle_C.ExecuteUbergraph_BP_Soveriegn_LiftMechanism_Toggle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Soveriegn_LiftMechanism_Toggle_C::ExecuteUbergraph_BP_Soveriegn_LiftMechanism_Toggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Soveriegn_LiftMechanism_Toggle.BP_Soveriegn_LiftMechanism_Toggle_C.ExecuteUbergraph_BP_Soveriegn_LiftMechanism_Toggle"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
