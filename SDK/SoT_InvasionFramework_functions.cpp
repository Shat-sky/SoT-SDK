// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_InvasionFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InvasionFramework.InvasionServiceInterface.GetCachedFactionIdentifierForMatchmakingCrew
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   InCrewId                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UInvasionServiceInterface::GetCachedFactionIdentifierForMatchmakingCrew(const struct FGuid& InCrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionServiceInterface.GetCachedFactionIdentifierForMatchmakingCrew"));

	struct
	{
		struct FGuid                   InCrewId;
		struct FName                   ReturnValue;
	} params;

	params.InCrewId = InCrewId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.InvasionServiceInterface.GetCachedFactionIdentifierForInvadingCrew
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   InCrewId                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UInvasionServiceInterface::GetCachedFactionIdentifierForInvadingCrew(const struct FGuid& InCrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionServiceInterface.GetCachedFactionIdentifierForInvadingCrew"));

	struct
	{
		struct FGuid                   InCrewId;
		struct FName                   ReturnValue;
	} params;

	params.InCrewId = InCrewId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.InvasionBattleBounds.OnRep_InnerRadius
// (Final, Native, Private)

void AInvasionBattleBounds::OnRep_InnerRadius()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionBattleBounds.OnRep_InnerRadius"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InvasionFramework.InvasionBattleBounds.Multicast_ExplodeShip
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AActor*                  Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void AInvasionBattleBounds::Multicast_ExplodeShip(class AActor* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionBattleBounds.Multicast_ExplodeShip"));

	struct
	{
		class AActor*                  Ship;
	} params;

	params.Ship = Ship;

	UObject::ProcessEvent(fn, &params);
}


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


// Function InvasionFramework.InvasionService.OnRep_ReplicatedInvasionCrewMusicStates
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FReplicatedInvasionCrewMusicState> StaleMusicStates               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AInvasionService::OnRep_ReplicatedInvasionCrewMusicStates(TArray<struct FReplicatedInvasionCrewMusicState> StaleMusicStates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionService.OnRep_ReplicatedInvasionCrewMusicStates"));

	struct
	{
		TArray<struct FReplicatedInvasionCrewMusicState> StaleMusicStates;
	} params;

	params.StaleMusicStates = StaleMusicStates;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
