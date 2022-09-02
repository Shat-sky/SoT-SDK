// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_TavernBoard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_TavernBoard_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_TavernBoard_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_TavernBoard_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.OnApproachedTavernBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FApproachedPlayerGeneratedMapsContainer Event                          (Parm)

void UBP_Prompt_TavernBoard_C::OnApproachedTavernBoard(const struct FApproachedPlayerGeneratedMapsContainer& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.OnApproachedTavernBoard"));

	struct
	{
		struct FApproachedPlayerGeneratedMapsContainer Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.ExecuteUbergraph_BP_Prompt_TavernBoard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_TavernBoard_C::ExecuteUbergraph_BP_Prompt_TavernBoard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.ExecuteUbergraph_BP_Prompt_TavernBoard"));

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
