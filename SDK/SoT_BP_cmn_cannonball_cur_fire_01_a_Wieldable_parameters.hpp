#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_cannonball_cur_fire_01_a_Wieldable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.SetLightVisibility
struct ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_SetLightVisibility_Params
{
	bool                                               Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.OnRep_IsWielded
struct ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_OnRep_IsWielded_Params
{
};

// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.UserConstructionScript
struct ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_UserConstructionScript_Params
{
};

// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ReceiveBeginPlay
struct ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_ReceiveBeginPlay_Params
{
};

// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.OnIsWielded
struct ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_OnIsWielded_Params
{
	struct FEventWieldableItemSetIsWielded             NewParam;                                                 // (Parm)
};

// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ReceiveEndPlay
struct ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable
struct ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
