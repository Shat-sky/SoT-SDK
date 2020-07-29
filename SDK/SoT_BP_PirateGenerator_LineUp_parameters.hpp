#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateGenerator_LineUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.GetPirateSelector
struct ABP_PirateGenerator_LineUp_C_GetPirateSelector_Params
{
	class UPirateSelector*                             PirateSelectorComponent;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Reset
struct ABP_PirateGenerator_LineUp_C_Reset_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.DelayBasedOnAngle
struct ABP_PirateGenerator_LineUp_C_DelayBasedOnAngle_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.FadeProps
struct ABP_PirateGenerator_LineUp_C_FadeProps_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ActivateGhostMaterial
struct ABP_PirateGenerator_LineUp_C_ActivateGhostMaterial_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ClearProps
struct ABP_PirateGenerator_LineUp_C_ClearProps_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.SetProp
struct ABP_PirateGenerator_LineUp_C_SetProp_Params
{
	struct FBP_LineUp_Props                            BP_LineUp_Props;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               Primary_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UpdateAnimation
struct ABP_PirateGenerator_LineUp_C_UpdateAnimation_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirate
struct ABP_PirateGenerator_LineUp_C_RandomizePirate_Params
{
	int                                                PoseIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPirateDescription                          PirateDesc;                                               // (Parm)
	TArray<class UClass*>                              Outfit;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UserConstructionScript
struct ABP_PirateGenerator_LineUp_C_UserConstructionScript_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.PlayMontage
struct ABP_PirateGenerator_LineUp_C_PlayMontage_Params
{
	class UAnimInstance*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               OutOf;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LoopAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimInstance*                               Prop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               OutOf02;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PropLoop;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Highlighted
struct ABP_PirateGenerator_LineUp_C_Highlighted_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OutOfHighlight
struct ABP_PirateGenerator_LineUp_C_OutOfHighlight_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Selected
struct ABP_PirateGenerator_LineUp_C_Selected_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnEndGeneratingPirate
struct ABP_PirateGenerator_LineUp_C_OnEndGeneratingPirate_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnBeginGeneratingPirate
struct ABP_PirateGenerator_LineUp_C_OnBeginGeneratingPirate_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirateEvent
struct ABP_PirateGenerator_LineUp_C_RandomizePirateEvent_Params
{
	struct FPirateDescription                          PirateDesc;                                               // (Parm)
	TArray<class UClass*>                              Outfit;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ShipSelect
struct ABP_PirateGenerator_LineUp_C_ShipSelect_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ReceiveTick
struct ABP_PirateGenerator_LineUp_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnSignalSpawnIn
struct ABP_PirateGenerator_LineUp_C_OnSignalSpawnIn_Params
{
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ExecuteUbergraph_BP_PirateGenerator_LineUp
struct ABP_PirateGenerator_LineUp_C_ExecuteUbergraph_BP_PirateGenerator_LineUp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.LineUpPirateInitializedDispatcher__DelegateSignature
struct ABP_PirateGenerator_LineUp_C_LineUpPirateInitializedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
