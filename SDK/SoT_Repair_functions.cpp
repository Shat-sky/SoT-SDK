// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Repair_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Repair.RepairableInterface.HandleDestroy
// (Native, Public)

void URepairableInterface::HandleDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.HandleDestroy");

	URepairableInterface_HandleDestroy_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Repair.RepairableInterface.GetRepairType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* URepairableInterface::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairType");

	URepairableInterface_GetRepairType_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URepairableInterface::GetRepairTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairTime");

	URepairableInterface_GetRepairTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairableState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERepairableState>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERepairableState> URepairableInterface::GetRepairableState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairableState");

	URepairableInterface_GetRepairableState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Repair.RepairingInterface.GetRepairType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* URepairingInterface::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairingInterface.GetRepairType");

	URepairingInterface_GetRepairType_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
