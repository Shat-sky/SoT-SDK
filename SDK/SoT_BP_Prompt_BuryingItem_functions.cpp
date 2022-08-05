// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_BuryingItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventObjectWielded EventObjectWielded             (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_BuryingItem_C::OnWieldFunc(const struct FAthena_FEventObjectWielded& EventObjectWielded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldFunc"));

	struct
	{
		struct FAthena_FEventObjectWielded EventObjectWielded;
	} params;

	params.EventObjectWielded = EventObjectWielded;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_BuryingItem_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_BuryingItem_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_BuryingItem_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventObjectWielded OnWieldEvent                   (Parm)

void UBP_Prompt_BuryingItem_C::OnWieldEvent(const struct FAthena_FEventObjectWielded& OnWieldEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldEvent"));

	struct
	{
		struct FAthena_FEventObjectWielded OnWieldEvent;
	} params;

	params.OnWieldEvent = OnWieldEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.ExecuteUbergraph_BP_Prompt_BuryingItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_BuryingItem_C::ExecuteUbergraph_BP_Prompt_BuryingItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.ExecuteUbergraph_BP_Prompt_BuryingItem"));

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
