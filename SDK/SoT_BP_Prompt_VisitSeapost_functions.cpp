// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_VisitSeapost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.OnEventObjectWielded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventObjectWielded Event                          (Parm)

void UBP_Prompt_VisitSeapost_C::OnEventObjectWielded(const struct FAthena_FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.OnEventObjectWielded"));

	struct
	{
		struct FAthena_FEventObjectWielded Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_VisitSeapost_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.EventObjectWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventObjectWielded Event                          (Parm)

void UBP_Prompt_VisitSeapost_C::EventObjectWielded(const struct FAthena_FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.EventObjectWielded"));

	struct
	{
		struct FAthena_FEventObjectWielded Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_VisitSeapost_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_VisitSeapost_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.ExecuteUbergraph_BP_Prompt_VisitSeapost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_VisitSeapost_C::ExecuteUbergraph_BP_Prompt_VisitSeapost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.ExecuteUbergraph_BP_Prompt_VisitSeapost"));

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
