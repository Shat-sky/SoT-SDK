// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_Hourglass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_PromptCoordinator_Hourglass_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_Hourglass_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_Hourglass_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_Hourglass_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventLocalPlayerApproachedHourglass Ev                             (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_Hourglass_C::CustomEvent_1(const struct FEventLocalPlayerApproachedHourglass& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.CustomEvent_1"));

	struct
	{
		struct FEventLocalPlayerApproachedHourglass Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.CrewJoinedFaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFactionsFramework_FCrewJoinedFaction Event                          (Parm)

void UBP_PromptCoordinator_Hourglass_C::CrewJoinedFaction(const struct FFactionsFramework_FCrewJoinedFaction& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.CrewJoinedFaction"));

	struct
	{
		struct FFactionsFramework_FCrewJoinedFaction Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.ExecuteUbergraph_BP_PromptCoordinator_Hourglass
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_Hourglass_C::ExecuteUbergraph_BP_PromptCoordinator_Hourglass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C.ExecuteUbergraph_BP_PromptCoordinator_Hourglass"));

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
