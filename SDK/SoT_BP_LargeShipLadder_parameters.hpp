#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipLadder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LargeShipLadder.BP_LargeShipLadder_C.GetDockableInfo
struct ABP_LargeShipLadder_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LargeShipLadder.BP_LargeShipLadder_C.Setup Spline
struct ABP_LargeShipLadder_C_Setup_Spline_Params
{
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Positions;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LargeShipLadder.BP_LargeShipLadder_C.CanInteract
struct ABP_LargeShipLadder_C_CanInteract_Params
{
	class AActor*                                      InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LargeShipLadder.BP_LargeShipLadder_C.UserConstructionScript
struct ABP_LargeShipLadder_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
