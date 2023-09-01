// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.IsPlayerOnShip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerOnShip                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipTemplate_C::IsPlayerOnShip(bool* IsPlayerOnShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.IsPlayerOnShip"));

	struct
	{
		bool                           IsPlayerOnShip;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsPlayerOnShip != nullptr)
		*IsPlayerOnShip = params.IsPlayerOnShip;
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_SmallShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.GetPxActorCapacityForPhysXAggregate"));

	struct
	{
		unsigned char                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_DisableSplash__FinishedFunc
// (BlueprintEvent)

void ABP_SmallShipTemplate_C::Timeline_DisableSplash__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_DisableSplash__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_DisableSplash__UpdateFunc
// (BlueprintEvent)

void ABP_SmallShipTemplate_C::Timeline_DisableSplash__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_DisableSplash__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_Disable_Secondary__FinishedFunc
// (BlueprintEvent)

void ABP_SmallShipTemplate_C::Timeline_Disable_Secondary__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_Disable_Secondary__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_Disable_Secondary__UpdateFunc
// (BlueprintEvent)

void ABP_SmallShipTemplate_C::Timeline_Disable_Secondary__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_Disable_Secondary__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipBeginSurface
// (Event, Public, BlueprintEvent)

void ABP_SmallShipTemplate_C::OnPlayerShipBeginSurface()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipBeginSurface"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipDive
// (Event, Public, BlueprintEvent)

void ABP_SmallShipTemplate_C::OnPlayerShipDive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipDive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipSailing
// (Event, Public, BlueprintEvent)

void ABP_SmallShipTemplate_C::OnPlayerShipSailing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipSailing"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.ExecuteUbergraph_BP_SmallShipTemplate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipTemplate_C::ExecuteUbergraph_BP_SmallShipTemplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.ExecuteUbergraph_BP_SmallShipTemplate"));

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
