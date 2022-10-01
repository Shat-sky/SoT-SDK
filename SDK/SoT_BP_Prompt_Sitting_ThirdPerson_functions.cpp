// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_Sitting_ThirdPerson_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_Sitting_ThirdPerson_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_Sitting_ThirdPerson_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_Sitting_ThirdPerson_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventLocalPlayerEnteredSittingState Event                          (Parm)

void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerEnteredSittingState(const struct FEventLocalPlayerEnteredSittingState& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingState"));

	struct
	{
		struct FEventLocalPlayerEnteredSittingState Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerExitedSittingState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventLocalPlayerExittedSittingState Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerExitedSittingState(const struct FEventLocalPlayerExittedSittingState& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerExitedSittingState"));

	struct
	{
		struct FEventLocalPlayerExittedSittingState Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingThirdPersonCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventLocalPlayerEnteredSittingThirdPersonCameraState Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerEnteredSittingThirdPersonCamera(const struct FEventLocalPlayerEnteredSittingThirdPersonCameraState& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingThirdPersonCamera"));

	struct
	{
		struct FEventLocalPlayerEnteredSittingThirdPersonCameraState Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_Sitting_ThirdPerson_C::ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson"));

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
