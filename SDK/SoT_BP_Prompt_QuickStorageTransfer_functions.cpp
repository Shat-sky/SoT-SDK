// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_QuickStorageTransfer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.IsStorageContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class UWieldableInterface> Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_QuickStorageTransfer_C::IsStorageContainer(const TScriptInterface<class UWieldableInterface>& Object, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.IsStorageContainer"));

	struct
	{
		TScriptInterface<class UWieldableInterface> Object;
		bool                           Result;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.GetShowPrompt
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPromptEvaluation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPromptEvaluation UBP_Prompt_QuickStorageTransfer_C::GetShowPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.GetShowPrompt"));

	struct
	{
		struct FPromptEvaluation       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.EvaluatePromptDisplayState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPromptEvaluation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPromptEvaluation UBP_Prompt_QuickStorageTransfer_C::EvaluatePromptDisplayState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.EvaluatePromptDisplayState"));

	struct
	{
		struct FPromptEvaluation       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_QuickStorageTransfer_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_QuickStorageTransfer_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.OnObjectWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventObjectWielded Event                          (Parm)

void UBP_Prompt_QuickStorageTransfer_C::OnObjectWielded(const struct FAthena_FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.OnObjectWielded"));

	struct
	{
		struct FAthena_FEventObjectWielded Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.ExecuteUbergraph_BP_Prompt_QuickStorageTransfer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_QuickStorageTransfer_C::ExecuteUbergraph_BP_Prompt_QuickStorageTransfer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.ExecuteUbergraph_BP_Prompt_QuickStorageTransfer"));

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
