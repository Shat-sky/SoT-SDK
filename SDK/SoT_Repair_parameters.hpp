#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Repair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Repair.RepairableInterface.HandleDestroy
struct URepairableInterface_HandleDestroy_Params
{
};

// Function Repair.RepairableInterface.GetRepairType
struct URepairableInterface_GetRepairType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Repair.RepairableInterface.GetRepairTime
struct URepairableInterface_GetRepairTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Repair.RepairableInterface.GetRepairableState
struct URepairableInterface_GetRepairableState_Params
{
	TEnumAsByte<ERepairableState>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Repair.RepairingInterface.GetRepairType
struct URepairingInterface_GetRepairType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
