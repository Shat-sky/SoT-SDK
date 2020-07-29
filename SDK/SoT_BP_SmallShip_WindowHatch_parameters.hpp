#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_WindowHatch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.GetClosestInteractionPoint
struct ABP_SmallShip_WindowHatch_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.UserConstructionScript
struct ABP_SmallShip_WindowHatch_C_UserConstructionScript_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationStarted
struct ABP_SmallShip_WindowHatch_C_OnAnimationStarted_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationCompleted
struct ABP_SmallShip_WindowHatch_C_OnAnimationCompleted_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.ExecuteUbergraph_BP_SmallShip_WindowHatch
struct ABP_SmallShip_WindowHatch_C_ExecuteUbergraph_BP_SmallShip_WindowHatch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
