// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_ScuttleShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.IsOnFerryOfTheDamned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOnFerryOfTheDamned           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_ScuttleShip_C::IsOnFerryOfTheDamned(bool* IsOnFerryOfTheDamned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.IsOnFerryOfTheDamned"));

	struct
	{
		bool                           IsOnFerryOfTheDamned;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsOnFerryOfTheDamned != nullptr)
		*IsOnFerryOfTheDamned = params.IsOnFerryOfTheDamned;
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.IsDeathConsideredSpawnKill
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpawnKill                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameTime               TimeOfDeath                    (Parm, OutParm)

void UBP_Prompt_ScuttleShip_C::IsDeathConsideredSpawnKill(bool* SpawnKill, struct FGameTime* TimeOfDeath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.IsDeathConsideredSpawnKill"));

	struct
	{
		bool                           SpawnKill;
		struct FGameTime               TimeOfDeath;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SpawnKill != nullptr)
		*SpawnKill = params.SpawnKill;
	if (TimeOfDeath != nullptr)
		*TimeOfDeath = params.TimeOfDeath;
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.IsPvPDeath
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterDead     Event                          (Parm)
// bool                           PvPDeath                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_ScuttleShip_C::IsPvPDeath(const struct FEventCharacterDead& Event, bool* PvPDeath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.IsPvPDeath"));

	struct
	{
		struct FEventCharacterDead     Event;
		bool                           PvPDeath;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);

	if (PvPDeath != nullptr)
		*PvPDeath = params.PvPDeath;
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.OnCharacterDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterDead     Event                          (Parm)

void UBP_Prompt_ScuttleShip_C::OnCharacterDead(const struct FEventCharacterDead& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.OnCharacterDead"));

	struct
	{
		struct FEventCharacterDead     Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_ScuttleShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_ScuttleShip_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.OnCharacterDeadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterDead     Event                          (Parm)

void UBP_Prompt_ScuttleShip_C::OnCharacterDeadEvent(const struct FEventCharacterDead& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.OnCharacterDeadEvent"));

	struct
	{
		struct FEventCharacterDead     Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_ScuttleShip_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_ScuttleShip_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_ScuttleShip_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.OnWaitingToSpawnEndedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventWaitingToSpawnActionStateEndedClient Event                          (Parm)

void UBP_Prompt_ScuttleShip_C::OnWaitingToSpawnEndedEvent(const struct FEventWaitingToSpawnActionStateEndedClient& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.OnWaitingToSpawnEndedEvent"));

	struct
	{
		struct FEventWaitingToSpawnActionStateEndedClient Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.Start
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_ScuttleShip_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.ExecuteUbergraph_BP_Prompt_ScuttleShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_ScuttleShip_C::ExecuteUbergraph_BP_Prompt_ScuttleShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C.ExecuteUbergraph_BP_Prompt_ScuttleShip"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
