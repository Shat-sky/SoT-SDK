// Sea of Thieves (2.6.0) SDK

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
// struct FSetShouldUseRevivalFlowData SetShouldUseRevivalFlowData    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetShouldUseRevivalFlow(const struct FSetShouldUseRevivalFlowData& SetShouldUseRevivalFlowData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow"));

	struct
	{
		struct FSetShouldUseRevivalFlowData SetShouldUseRevivalFlowData;
	} params;

	params.SetShouldUseRevivalFlowData = SetShouldUseRevivalFlowData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
// (Native, Public, HasOutParms)
// Parameters:
// struct FSetShouldSkipFerryOfTheDamnedData SetShouldSkipFerryOfTheDamnedData (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetShouldSkipFerryOfTheDamned(const struct FSetShouldSkipFerryOfTheDamnedData& SetShouldSkipFerryOfTheDamnedData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned"));

	struct
	{
		struct FSetShouldSkipFerryOfTheDamnedData SetShouldSkipFerryOfTheDamnedData;
	} params;

	params.SetShouldSkipFerryOfTheDamnedData = SetShouldSkipFerryOfTheDamnedData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameModeDeathPenaltyRespawnTimerData GameModeDeathPenaltyRespawnTimerData (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetGameModeDeathPenaltyRespawnTimer(const struct FGameModeDeathPenaltyRespawnTimerData& GameModeDeathPenaltyRespawnTimerData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer"));

	struct
	{
		struct FGameModeDeathPenaltyRespawnTimerData GameModeDeathPenaltyRespawnTimerData;
	} params;

	params.GameModeDeathPenaltyRespawnTimerData = GameModeDeathPenaltyRespawnTimerData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// struct FSetCustomPlayerStartData SetCustomPlayerStartData       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomDeathInterface::SetCustomPlayerStart(const struct FSetCustomPlayerStartData& SetCustomPlayerStartData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart"));

	struct
	{
		struct FSetCustomPlayerStartData SetCustomPlayerStartData;
		bool                           ReturnValue;
	} params;

	params.SetCustomPlayerStartData = SetCustomPlayerStartData;

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


// Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
// (Native, Public, HasOutParms)
// Parameters:
// struct FResetCustomConfigForPlayerData ResetCustomConfigForPlayerData (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::ResetCustomConfigForPlayer(const struct FResetCustomConfigForPlayerData& ResetCustomConfigForPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer"));

	struct
	{
		struct FResetCustomConfigForPlayerData ResetCustomConfigForPlayerData;
	} params;

	params.ResetCustomConfigForPlayerData = ResetCustomConfigForPlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.KillPlayer
// (Native, Public, HasOutParms)
// Parameters:
// struct FKillPlayerData         KillPlayerData                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::KillPlayer(const struct FKillPlayerData& KillPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.KillPlayer"));

	struct
	{
		struct FKillPlayerData         KillPlayerData;
	} params;

	params.KillPlayerData = KillPlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.KillCrew
// (Native, Public, HasOutParms)
// Parameters:
// struct FKillCrewData           KillCrewData                   (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomDeathInterface::KillCrew(const struct FKillCrewData& KillCrewData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.KillCrew"));

	struct
	{
		struct FKillCrewData           KillCrewData;
	} params;

	params.KillCrewData = KillCrewData;

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
// struct FForcePlayerRespawnData ForcePlayerRespawnData         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::ForcePlayerRespawn(const struct FForcePlayerRespawnData& ForcePlayerRespawnData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn"));

	struct
	{
		struct FForcePlayerRespawnData ForcePlayerRespawnData;
	} params;

	params.ForcePlayerRespawnData = ForcePlayerRespawnData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// struct FDestroyCustomPlayerStartData DestroyCustomPlayerStartData   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomDeathInterface::DestroyCustomPlayerStart(const struct FDestroyCustomPlayerStartData& DestroyCustomPlayerStartData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart"));

	struct
	{
		struct FDestroyCustomPlayerStartData DestroyCustomPlayerStartData;
		int                            ReturnValue;
	} params;

	params.DestroyCustomPlayerStartData = DestroyCustomPlayerStartData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// struct FCustomPlayerStartConfigData CustomPlayerStartConfigData    (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomDeathInterface::CreateNewCustomPlayerStart(const struct FCustomPlayerStartConfigData& CustomPlayerStartConfigData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart"));

	struct
	{
		struct FCustomPlayerStartConfigData CustomPlayerStartConfigData;
		int                            ReturnValue;
	} params;

	params.CustomPlayerStartConfigData = CustomPlayerStartConfigData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
