// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EquipAndHandInCaptainsLog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_EquipAndHandInCaptainsLog_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_EquipAndHandInCaptainsLog_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnWield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventObjectWielded Event                          (Parm)

void UBP_Prompt_EquipAndHandInCaptainsLog_C::OnWield(const struct FAthena_FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnWield"));

	struct
	{
		struct FAthena_FEventObjectWielded Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnStowed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectStowed      Event                          (Parm)

void UBP_Prompt_EquipAndHandInCaptainsLog_C::OnStowed(const struct FEventObjectStowed& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnStowed"));

	struct
	{
		struct FEventObjectStowed      Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnCaptainsLogSold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTreasureChestSoldClientPredictionEvent Event                          (Parm)

void UBP_Prompt_EquipAndHandInCaptainsLog_C::OnCaptainsLogSold(const struct FTreasureChestSoldClientPredictionEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnCaptainsLogSold"));

	struct
	{
		struct FTreasureChestSoldClientPredictionEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.ExecuteUbergraph_BP_Prompt_EquipAndHandInCaptainsLog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EquipAndHandInCaptainsLog_C::ExecuteUbergraph_BP_Prompt_EquipAndHandInCaptainsLog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.ExecuteUbergraph_BP_Prompt_EquipAndHandInCaptainsLog"));

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
