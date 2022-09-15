// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LiveWireLightning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LiveWireLightning.BP_LiveWireLightning_C.ForceShowWire
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LiveWireLightning_C::ForceShowWire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.ForceShowWire"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.HideWire
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LiveWireLightning_C::HideWire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.HideWire"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.UpdateWire
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetVector                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LiveWireLightning_C::UpdateWire(const struct FVector& TargetVector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.UpdateWire"));

	struct
	{
		struct FVector                 TargetVector;
	} params;

	params.TargetVector = TargetVector;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LiveWireLightning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.StrikeTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_LiveWireLightning_C::StrikeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.StrikeTimeline__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.StrikeTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_LiveWireLightning_C::StrikeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.StrikeTimeline__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.FadeOutTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_LiveWireLightning_C::FadeOutTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.FadeOutTimeline__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.FadeOutTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_LiveWireLightning_C::FadeOutTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.FadeOutTimeline__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LiveWireLightning_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.LightningShooter
// (BlueprintCallable, BlueprintEvent)

void ABP_LiveWireLightning_C::LightningShooter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.LightningShooter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.FadeInWire
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_LiveWireLightning_C::FadeInWire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.FadeInWire"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.FadeOutWire
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_LiveWireLightning_C::FadeOutWire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.FadeOutWire"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LiveWireLightning.BP_LiveWireLightning_C.ExecuteUbergraph_BP_LiveWireLightning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LiveWireLightning_C::ExecuteUbergraph_BP_LiveWireLightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LiveWireLightning.BP_LiveWireLightning_C.ExecuteUbergraph_BP_LiveWireLightning"));

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
