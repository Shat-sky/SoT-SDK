// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicDensityFogVolume_Tunnels_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.OnRep_Visible
// (BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_Tunnels_C::OnRep_Visible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.OnRep_Visible"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_Tunnels_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_DynamicDensityFogVolume_Tunnels_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_DynamicDensityFogVolume_Tunnels_C::BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.SetFogVisibility
// (NetReliable, BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_Tunnels_C::SetFogVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.SetFogVisibility"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_Tunnels_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.OnTransitionDynamicFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTunnelOfTheDamnedTransitionDynamicFogEvent Event                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_Tunnels_C::OnTransitionDynamicFog(const struct FTunnelOfTheDamnedTransitionDynamicFogEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.OnTransitionDynamicFog"));

	struct
	{
		struct FTunnelOfTheDamnedTransitionDynamicFogEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.ExecuteUbergraph_BP_DynamicDensityFogVolume_Tunnels
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_Tunnels_C::ExecuteUbergraph_BP_DynamicDensityFogVolume_Tunnels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C.ExecuteUbergraph_BP_DynamicDensityFogVolume_Tunnels"));

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
