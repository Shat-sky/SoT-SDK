// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_frt_spotlight_movement_function_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Afrt_spotlight_movement_function_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Afrt_spotlight_movement_function_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ExecuteUbergraph_frt_spotlight_movement_function
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Afrt_spotlight_movement_function_C::ExecuteUbergraph_frt_spotlight_movement_function(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ExecuteUbergraph_frt_spotlight_movement_function"));

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
