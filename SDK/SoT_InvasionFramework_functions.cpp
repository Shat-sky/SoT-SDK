// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_InvasionFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldAggressivePassiveTeleportUseEQS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInvasionBlueprintFunctionLibrary::ShouldAggressivePassiveTeleportUseEQS()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldAggressivePassiveTeleportUseEQS"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.InvasionBlueprintFunctionLibrary.GetAggressivePassiveTeleportOffsetDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInvasionBlueprintFunctionLibrary::GetAggressivePassiveTeleportOffsetDistance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionBlueprintFunctionLibrary.GetAggressivePassiveTeleportOffsetDistance"));

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.TaleQuestInvasionService.GetPassiveShip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UTaleQuestInvasionService::GetPassiveShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.TaleQuestInvasionService.GetPassiveShip"));

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.TaleQuestInvasionService.GetPassiveCrewId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestInvasionService::GetPassiveCrewId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.TaleQuestInvasionService.GetPassiveCrewId"));

	struct
	{
		struct FGuid                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.TaleQuestInvasionService.GetAggressiveShips
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UTaleQuestInvasionService::GetAggressiveShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.TaleQuestInvasionService.GetAggressiveShips"));

	struct
	{
		TArray<class AActor*>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.TaleQuestInvasionService.GetAggressiveCrewIds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGuid>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGuid> UTaleQuestInvasionService::GetAggressiveCrewIds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.TaleQuestInvasionService.GetAggressiveCrewIds"));

	struct
	{
		TArray<struct FGuid>           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
