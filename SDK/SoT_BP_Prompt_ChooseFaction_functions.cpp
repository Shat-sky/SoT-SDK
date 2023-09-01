// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_ChooseFaction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.GetPrompt2FromCurrentFaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrioritisedPromptWithHandle Prompt                         (Parm, OutParm)

void UBP_Prompt_ChooseFaction_C::GetPrompt2FromCurrentFaction(struct FPrioritisedPromptWithHandle* Prompt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.GetPrompt2FromCurrentFaction"));

	struct
	{
		struct FPrioritisedPromptWithHandle Prompt;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Prompt != nullptr)
		*Prompt = params.Prompt;
}


// Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.GetPrompt1FromCurrentFaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrioritisedPromptWithHandle Prompt                         (Parm, OutParm)

void UBP_Prompt_ChooseFaction_C::GetPrompt1FromCurrentFaction(struct FPrioritisedPromptWithHandle* Prompt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.GetPrompt1FromCurrentFaction"));

	struct
	{
		struct FPrioritisedPromptWithHandle Prompt;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Prompt != nullptr)
		*Prompt = params.Prompt;
}


// Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_ChooseFaction_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_ChooseFaction_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_ChooseFaction_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.CrewJoinedFaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFactionsFramework_FCrewJoinedFaction Event                          (Parm)

void UBP_Prompt_ChooseFaction_C::CrewJoinedFaction(const struct FFactionsFramework_FCrewJoinedFaction& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.CrewJoinedFaction"));

	struct
	{
		struct FFactionsFramework_FCrewJoinedFaction Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_ChooseFaction_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.ExecuteUbergraph_BP_Prompt_ChooseFaction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_ChooseFaction_C::ExecuteUbergraph_BP_Prompt_ChooseFaction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C.ExecuteUbergraph_BP_Prompt_ChooseFaction"));

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
