#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft
struct UItemProxyWatercraftTrackerComponent_OnRep_CurrentWatercraft_Params
{
};

// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed
struct UItemProxyWatercraftTrackerComponent_OnCurrentWatercraftDestroyed_Params
{
	class AActor*                                      DestroyedWatercraft;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.Watercraft.OnRigidBodyWake
struct AWatercraft_OnRigidBodyWake_Params
{
	struct FName                                       InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.Watercraft.OnRigidBodySleep
struct AWatercraft_OnRigidBodySleep_Params
{
	struct FName                                       InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
struct ARowboat_SetAlwaysEnabledInteractables_Params
{
	TArray<class UChildActorComponent*>                InAlwaysEnabledInteractables;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Watercrafts.Rowboat.OnRep_IsSinking
struct ARowboat_OnRep_IsSinking_Params
{
};

// Function Watercrafts.RowingCompositeInputHandler.OnUseRightOar
struct URowingCompositeInputHandler_OnUseRightOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Watercrafts.RowingCompositeInputHandler.OnUseLeftOar
struct URowingCompositeInputHandler_OnUseLeftOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Watercrafts.RowingCompositeInputHandler.OnStopUseRightOar
struct URowingCompositeInputHandler_OnStopUseRightOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Watercrafts.RowingCompositeInputHandler.OnStopUseLeftOar
struct URowingCompositeInputHandler_OnStopUseLeftOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Watercrafts.RowingCompositeInputHandler.OnBrakeRightOar
struct URowingCompositeInputHandler_OnBrakeRightOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Watercrafts.RowingCompositeInputHandler.OnBrakeLeftOar
struct URowingCompositeInputHandler_OnBrakeLeftOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
struct UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WatercraftClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWatercraft*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed
struct UWatercraftTrackerComponent_OnWatercraftDestroyed_Params
{
	class AActor*                                      WatercraftActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
