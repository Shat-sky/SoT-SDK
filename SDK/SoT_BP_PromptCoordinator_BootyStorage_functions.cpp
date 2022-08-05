// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_BootyStorage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::OnBootyRetrieveActorDespawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectStowed      Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnStowedFunc(const struct FEventObjectStowed& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc"));

	struct
	{
		struct FEventObjectStowed      Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::OnBootyRetrieveActorSpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasTreasure                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_BootyStorage_C::CrewHasLootToRetrieve(bool* HasTreasure)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve"));

	struct
	{
		bool                           HasTreasure;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasTreasure != nullptr)
		*HasTreasure = params.HasTreasure;
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InSunkenKingdom                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_BootyStorage_C::IsInSunkenKingdom(bool* InSunkenKingdom)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom"));

	struct
	{
		bool                           InSunkenKingdom;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InSunkenKingdom != nullptr)
		*InSunkenKingdom = params.InSunkenKingdom;
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOnCrewStorageUpdate Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageUpdateFunc(const struct FEventOnCrewStorageUpdate& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc"));

	struct
	{
		struct FEventOnCrewStorageUpdate Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOnCrewStorageFull Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageFullFunc(const struct FEventOnCrewStorageFull& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc"));

	struct
	{
		struct FEventOnCrewStorageFull Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventObjectWielded Object                         (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnWieldedFunc(const struct FAthena_FEventObjectWielded& Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc"));

	struct
	{
		struct FAthena_FEventObjectWielded Object;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_BootyStorage_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_BootyStorage_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable
// (Event, Public, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::Uninitialize_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete
// (BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::SetPromptComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt
// (BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::ResetLootPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt
// (BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_BootyStorage_C::ResetMermaidPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectStowed      Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnStowed(const struct FEventObjectStowed& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed"));

	struct
	{
		struct FEventObjectStowed      Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventObjectWielded Object                         (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnWielded(const struct FAthena_FEventObjectWielded& Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded"));

	struct
	{
		struct FAthena_FEventObjectWielded Object;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOnCrewStorageFull Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageChange_Event(const struct FEventOnCrewStorageFull& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event"));

	struct
	{
		struct FEventOnCrewStorageFull Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOnCrewStorageUpdate Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnCrewStorageFull_Event(const struct FEventOnCrewStorageUpdate& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event"));

	struct
	{
		struct FEventOnCrewStorageUpdate Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventItemsRetrieved    Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnItemsRetrieved_Event(const struct FEventItemsRetrieved& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event"));

	struct
	{
		struct FEventItemsRetrieved    Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRetrieveBootyActorDespawnedEvent Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnBootyActorDespawned_Event(const struct FRetrieveBootyActorDespawnedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event"));

	struct
	{
		struct FRetrieveBootyActorDespawnedEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRetrieveBootyActorSpawnedEvent Event                          (Parm)

void UBP_PromptCoordinator_BootyStorage_C::OnBootyActorSpawned_Event(const struct FRetrieveBootyActorSpawnedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event"));

	struct
	{
		struct FRetrieveBootyActorSpawnedEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_BootyStorage_C::ExecuteUbergraph_BP_PromptCoordinator_BootyStorage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage"));

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
