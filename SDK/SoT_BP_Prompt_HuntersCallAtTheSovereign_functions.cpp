// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_HuntersCallAtTheSovereign_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.OnItemWieldedFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     Object                         (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_HuntersCallAtTheSovereign_C::OnItemWieldedFunc(const struct FEventObjectWielded& Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.OnItemWieldedFunc"));

	struct
	{
		struct FEventObjectWielded     Object;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_HuntersCallAtTheSovereign_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.InitializeAndStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_HuntersCallAtTheSovereign_C::InitializeAndStart(class AAthenaPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.InitializeAndStart"));

	struct
	{
		class AAthenaPlayerController* PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_HuntersCallAtTheSovereign_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_HuntersCallAtTheSovereign_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.OnWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     Object                         (Parm)

void UBP_Prompt_HuntersCallAtTheSovereign_C::OnWielded(const struct FEventObjectWielded& Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.OnWielded"));

	struct
	{
		struct FEventObjectWielded     Object;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.ExecuteUbergraph_BP_Prompt_HuntersCallAtTheSovereign
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_HuntersCallAtTheSovereign_C::ExecuteUbergraph_BP_Prompt_HuntersCallAtTheSovereign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C.ExecuteUbergraph_BP_Prompt_HuntersCallAtTheSovereign"));

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
