// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.IsPlayerOnShip
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerOnShip                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipTemplate_C::IsPlayerOnShip(bool* PlayerOnShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.IsPlayerOnShip"));

	struct
	{
		bool                           PlayerOnShip;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerOnShip != nullptr)
		*PlayerOnShip = params.PlayerOnShip;
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_LargeShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate"));

	struct
	{
		unsigned char                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    LeftHoist                      (Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    RightHoist                     (Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    LeftAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    RightAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RiggingGroupName               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipTemplate_C::SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls"));

	struct
	{
		class UChildActorComponent*    LeftHoist;
		class UChildActorComponent*    RightHoist;
		class UChildActorComponent*    LeftAngle;
		class UChildActorComponent*    RightAngle;
		struct FName                   RiggingGroupName;
	} params;

	params.LeftHoist = LeftHoist;
	params.RightHoist = RightHoist;
	params.LeftAngle = LeftAngle;
	params.RightAngle = RightAngle;
	params.RiggingGroupName = RiggingGroupName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LargeShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.Timeline_DisableSplash1__FinishedFunc
// (BlueprintEvent)

void ABP_LargeShipTemplate_C::Timeline_DisableSplash1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.Timeline_DisableSplash1__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.Timeline_DisableSplash1__UpdateFunc
// (BlueprintEvent)

void ABP_LargeShipTemplate_C::Timeline_DisableSplash1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.Timeline_DisableSplash1__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.Timeline_Disable_Secondary__FinishedFunc
// (BlueprintEvent)

void ABP_LargeShipTemplate_C::Timeline_Disable_Secondary__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.Timeline_Disable_Secondary__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.Timeline_Disable_Secondary__UpdateFunc
// (BlueprintEvent)

void ABP_LargeShipTemplate_C::Timeline_Disable_Secondary__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.Timeline_Disable_Secondary__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.OnPlayerShipBeginSurface
// (Event, Public, BlueprintEvent)

void ABP_LargeShipTemplate_C::OnPlayerShipBeginSurface()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.OnPlayerShipBeginSurface"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.OnPlayerShipDive
// (Event, Public, BlueprintEvent)

void ABP_LargeShipTemplate_C::OnPlayerShipDive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.OnPlayerShipDive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.OnPlayerShipSailing
// (Event, Public, BlueprintEvent)

void ABP_LargeShipTemplate_C::OnPlayerShipSailing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.OnPlayerShipSailing"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.ExecuteUbergraph_BP_LargeShipTemplate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipTemplate_C::ExecuteUbergraph_BP_LargeShipTemplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.ExecuteUbergraph_BP_LargeShipTemplate"));

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
