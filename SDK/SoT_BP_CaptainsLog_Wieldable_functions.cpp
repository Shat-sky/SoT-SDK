// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptainsLog_Wieldable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.GetObjectDisplayName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_CaptainsLog_Wieldable_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.GetObjectDisplayName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.GetStashedMeshMemoryConstraintComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshMemoryConstraintComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMeshMemoryConstraintComponent* ABP_CaptainsLog_Wieldable_C::GetStashedMeshMemoryConstraintComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.GetStashedMeshMemoryConstraintComponent"));

	struct
	{
		class USkeletalMeshMemoryConstraintComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CaptainsLog_Wieldable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CaptainsLog_Wieldable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.ExecuteUbergraph_BP_CaptainsLog_Wieldable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptainsLog_Wieldable_C::ExecuteUbergraph_BP_CaptainsLog_Wieldable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C.ExecuteUbergraph_BP_CaptainsLog_Wieldable"));

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
