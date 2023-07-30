// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow
// (Native, Public, HasOutParms)
// Parameters:
// struct FSetShouldUseRevivalFlowGameServerRequestModel SetShouldUseRevivalFlowGameServerRequestModel (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetShouldUseRevivalFlow(const struct FSetShouldUseRevivalFlowGameServerRequestModel& SetShouldUseRevivalFlowGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow"));

	struct
	{
		struct FSetShouldUseRevivalFlowGameServerRequestModel SetShouldUseRevivalFlowGameServerRequestModel;
	} params;

	params.SetShouldUseRevivalFlowGameServerRequestModel = SetShouldUseRevivalFlowGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
// (Native, Public, HasOutParms)
// Parameters:
// struct FSetShouldSkipFerryOfTheDamnedGameServerRequestModel SetShouldSkipFerryOfTheDamnedGameServerRequestModel (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetShouldSkipFerryOfTheDamned(const struct FSetShouldSkipFerryOfTheDamnedGameServerRequestModel& SetShouldSkipFerryOfTheDamnedGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned"));

	struct
	{
		struct FSetShouldSkipFerryOfTheDamnedGameServerRequestModel SetShouldSkipFerryOfTheDamnedGameServerRequestModel;
	} params;

	params.SetShouldSkipFerryOfTheDamnedGameServerRequestModel = SetShouldSkipFerryOfTheDamnedGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameModeDeathPenaltyRespawnTimerGameServerRequestModel GameModeDeathPenaltyRespawnTimerGameServerRequestModel (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetGameModeDeathPenaltyRespawnTimer(const struct FGameModeDeathPenaltyRespawnTimerGameServerRequestModel& GameModeDeathPenaltyRespawnTimerGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer"));

	struct
	{
		struct FGameModeDeathPenaltyRespawnTimerGameServerRequestModel GameModeDeathPenaltyRespawnTimerGameServerRequestModel;
	} params;

	params.GameModeDeathPenaltyRespawnTimerGameServerRequestModel = GameModeDeathPenaltyRespawnTimerGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// struct FSetCustomPlayerStartGameServerRequestModel SetCustomPlayerStartGameServerRequestModel (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomDeathInterface::SetCustomPlayerStart(const struct FSetCustomPlayerStartGameServerRequestModel& SetCustomPlayerStartGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart"));

	struct
	{
		struct FSetCustomPlayerStartGameServerRequestModel SetCustomPlayerStartGameServerRequestModel;
		bool                           ReturnValue;
	} params;

	params.SetCustomPlayerStartGameServerRequestModel = SetCustomPlayerStartGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer
// (Native, Public, HasOutParms)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FCustomDeathConfiguration CustomDeathConfiguration       (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomDeathInterface::SetCustomConfigForPlayer(int PlayerId, const struct FCustomDeathConfiguration& CustomDeathConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer"));

	struct
	{
		int                            PlayerId;
		struct FCustomDeathConfiguration CustomDeathConfiguration;
	} params;

	params.PlayerId = PlayerId;
	params.CustomDeathConfiguration = CustomDeathConfiguration;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetCrewBasedDeathPenaltyRespawnTimes
// (Native, Public, HasOutParms)
// Parameters:
// struct FCrewBasedRespawnTimes  CrewBasedRespawnTimes          (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomDeathInterface::SetCrewBasedDeathPenaltyRespawnTimes(const struct FCrewBasedRespawnTimes& CrewBasedRespawnTimes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetCrewBasedDeathPenaltyRespawnTimes"));

	struct
	{
		struct FCrewBasedRespawnTimes  CrewBasedRespawnTimes;
	} params;

	params.CrewBasedRespawnTimes = CrewBasedRespawnTimes;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
// (Native, Public, HasOutParms)
// Parameters:
// struct FResetCustomConfigForPlayerGameServerRequestModel ResetCustomConfigForPlayerGameServerRequestModel (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::ResetCustomConfigForPlayer(const struct FResetCustomConfigForPlayerGameServerRequestModel& ResetCustomConfigForPlayerGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer"));

	struct
	{
		struct FResetCustomConfigForPlayerGameServerRequestModel ResetCustomConfigForPlayerGameServerRequestModel;
	} params;

	params.ResetCustomConfigForPlayerGameServerRequestModel = ResetCustomConfigForPlayerGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.KillPlayer
// (Native, Public, HasOutParms)
// Parameters:
// struct FKillPlayerGameServerRequestModel KillPlayerGameServerRequestModel (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::KillPlayer(const struct FKillPlayerGameServerRequestModel& KillPlayerGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.KillPlayer"));

	struct
	{
		struct FKillPlayerGameServerRequestModel KillPlayerGameServerRequestModel;
	} params;

	params.KillPlayerGameServerRequestModel = KillPlayerGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.KillCrew
// (Native, Public, HasOutParms)
// Parameters:
// struct FKillCrewGameServerRequestModel KillCrewGameServerRequestModel (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomDeathInterface::KillCrew(const struct FKillCrewGameServerRequestModel& KillCrewGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.KillCrew"));

	struct
	{
		struct FKillCrewGameServerRequestModel KillCrewGameServerRequestModel;
	} params;

	params.KillCrewGameServerRequestModel = KillCrewGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow
// (Native, Public)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDefaultValue                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomDeathInterface::GetShouldUseRevivalFlow(int PlayerId, bool bDefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow"));

	struct
	{
		int                            PlayerId;
		bool                           bDefaultValue;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;
	params.bDefaultValue = bDefaultValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned
// (Native, Public)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomDeathInterface::GetShouldSkipFerryOfTheDamned(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned"));

	struct
	{
		int                            PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart
// (Native, Public)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerStart*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerStart* UCustomDeathInterface::GetCustomPlayerStart(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart"));

	struct
	{
		int                            PlayerId;
		class APlayerStart*            ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn
// (Native, Public, HasOutParms)
// Parameters:
// struct FForcePlayerRespawnGameServerRequestModel ForcePlayerRespawnGameServerRequestModel (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::ForcePlayerRespawn(const struct FForcePlayerRespawnGameServerRequestModel& ForcePlayerRespawnGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn"));

	struct
	{
		struct FForcePlayerRespawnGameServerRequestModel ForcePlayerRespawnGameServerRequestModel;
	} params;

	params.ForcePlayerRespawnGameServerRequestModel = ForcePlayerRespawnGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// struct FDestroyCustomPlayerStartGameServerRequestModel DestroyCustomPlayerStartGameServerRequestModel (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomDeathInterface::DestroyCustomPlayerStart(const struct FDestroyCustomPlayerStartGameServerRequestModel& DestroyCustomPlayerStartGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart"));

	struct
	{
		struct FDestroyCustomPlayerStartGameServerRequestModel DestroyCustomPlayerStartGameServerRequestModel;
		int                            ReturnValue;
	} params;

	params.DestroyCustomPlayerStartGameServerRequestModel = DestroyCustomPlayerStartGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// struct FCustomPlayerStartConfigGameServerRequestModel CustomPlayerStartConfigGameServerRequestModel (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomDeathInterface::CreateNewCustomPlayerStart(const struct FCustomPlayerStartConfigGameServerRequestModel& CustomPlayerStartConfigGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart"));

	struct
	{
		struct FCustomPlayerStartConfigGameServerRequestModel CustomPlayerStartConfigGameServerRequestModel;
		int                            ReturnValue;
	} params;

	params.CustomPlayerStartConfigGameServerRequestModel = CustomPlayerStartConfigGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
