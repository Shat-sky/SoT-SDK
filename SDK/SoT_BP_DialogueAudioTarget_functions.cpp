// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DialogueAudioTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DialogueAudioTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.TriggerAudioEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWwiseEvent*             AudioEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DialogueAudioTarget_C::TriggerAudioEvent(class UWwiseEvent* AudioEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.TriggerAudioEvent"));

	struct
	{
		class UWwiseEvent*             AudioEvent;
	} params;

	params.AudioEvent = AudioEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.Multicast_TriggerAudioEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Event_Idx                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DialogueAudioTarget_C::Multicast_TriggerAudioEvent(int Event_Idx)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.Multicast_TriggerAudioEvent"));

	struct
	{
		int                            Event_Idx;
	} params;

	params.Event_Idx = Event_Idx;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.StopCurrentAudioEvent
// (Event, Public, BlueprintEvent)

void ABP_DialogueAudioTarget_C::StopCurrentAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.StopCurrentAudioEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.ExecuteUbergraph_BP_DialogueAudioTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DialogueAudioTarget_C::ExecuteUbergraph_BP_DialogueAudioTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogueAudioTarget.BP_DialogueAudioTarget_C.ExecuteUbergraph_BP_DialogueAudioTarget"));

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
