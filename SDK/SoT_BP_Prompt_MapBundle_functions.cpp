// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MapBundle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MapBundle_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MapBundle_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MapBundle_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.OnMapBundleBecameVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerBuriedItemsMapBundleBecameVisible Event                          (Parm)

void UBP_Prompt_MapBundle_C::OnMapBundleBecameVisible(const struct FPlayerBuriedItemsMapBundleBecameVisible& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.OnMapBundleBecameVisible"));

	struct
	{
		struct FPlayerBuriedItemsMapBundleBecameVisible Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.ExecuteUbergraph_BP_Prompt_MapBundle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_MapBundle_C::ExecuteUbergraph_BP_Prompt_MapBundle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.ExecuteUbergraph_BP_Prompt_MapBundle"));

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
