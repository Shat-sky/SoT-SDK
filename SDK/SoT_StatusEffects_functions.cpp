// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd
// (Final, Native, Private)
// Parameters:
// int                            InStatusIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorRef                       (Parm, ZeroConstructor, IsPlainOldData)

void AStatusEffectOverlapZone::OnStatusDelayEnd(int InStatusIndex, class AActor* ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd");

	AStatusEffectOverlapZone_OnStatusDelayEnd_Params params;
	params.InStatusIndex = InStatusIndex;
	params.ActorRef = ActorRef;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
// (Final, Native, Private)

void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_SetDebugDrawColour()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour");

	UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_SetDebugDrawColour_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
// (Final, Native, Private)

void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_DebugBoxDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions");

	UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_DebugBoxDimensions_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects");

	ULightWeightStatusEffectManagerComponent_OnRep_ActiveEffects_Params params;
	params.OldEffects = OldEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> ActivatedEffects               (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> ActivatedEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus");

	ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params;
	params.ActivatedEffects = ActivatedEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Recipient                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FStatus                 Status                         (ConstParm, Parm, OutParm, ReferenceParm)

void UStatusEffectHelperFunctionLibrary::STATIC_ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus");

	UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params params;
	params.Recipient = Recipient;
	params.Status = Status;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects");

	UStatusEffectManagerComponent_OnRep_ActiveEffects_Params params;
	params.OldEffects = OldEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> ActivatedEffects               (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> ActivatedEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus");

	UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params;
	params.ActivatedEffects = ActivatedEffects;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
