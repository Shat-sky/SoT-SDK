// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_DiceEmote_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventEmoteStarted      EventEmoteStarted              (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_DiceEmote_C::OnEmoteStartedFunc(const struct FEventEmoteStarted& EventEmoteStarted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc"));

	struct
	{
		struct FEventEmoteStarted      EventEmoteStarted;
	} params;

	params.EventEmoteStarted = EventEmoteStarted;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_DiceEmote_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_DiceEmote_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_DiceEmote_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventEmoteStarted      EmoteStartedEvent              (Parm)

void UBP_PromptCoordinator_DiceEmote_C::OnEmoteStarted(const struct FEventEmoteStarted& EmoteStartedEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted"));

	struct
	{
		struct FEventEmoteStarted      EmoteStartedEvent;
	} params;

	params.EmoteStartedEvent = EmoteStartedEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_DiceEmote_C::ExecuteUbergraph_BP_PromptCoordinator_DiceEmote(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote"));

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
