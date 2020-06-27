#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd
struct AStatusEffectOverlapZone_OnStatusDelayEnd_Params
{
	int                                                InStatusIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
struct UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_SetDebugDrawColour_Params
{
};

// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
struct UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_DebugBoxDimensions_Params
{
};

// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
struct ULightWeightStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<struct FActiveStatusEffect>                 OldEffects;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
struct ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params
{
	TArray<struct FActiveStatusEffect>                 ActivatedEffects;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
struct UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params
{
	class AActor*                                      Recipient;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatus                                     Status;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
struct UStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<struct FActiveStatusEffect>                 OldEffects;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
struct UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params
{
	TArray<struct FActiveStatusEffect>                 ActivatedEffects;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
