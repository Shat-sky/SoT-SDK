// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Occlusion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Occlusion.OcclusionService.OnPrimaryActorEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UOcclusionService::OnPrimaryActorEndPlay(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Occlusion.OcclusionService.OnPrimaryActorEndPlay"));

	struct
	{
		class AActor*                  InActor;
	} params;

	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Occlusion.OcclusionService.OnIgnoredActorEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UOcclusionService::OnIgnoredActorEndPlay(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Occlusion.OcclusionService.OnIgnoredActorEndPlay"));

	struct
	{
		class AActor*                  InActor;
	} params;

	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Occlusion.OcclusionService.AutomationSetShouldDisableAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InShouldDisableAsync           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UOcclusionService::AutomationSetShouldDisableAsync(bool InShouldDisableAsync)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Occlusion.OcclusionService.AutomationSetShouldDisableAsync"));

	struct
	{
		bool                           InShouldDisableAsync;
	} params;

	params.InShouldDisableAsync = InShouldDisableAsync;

	UObject::ProcessEvent(fn, &params);
}


// Function Occlusion.OcclusionService.AutomationGetShouldDisableAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOcclusionService::AutomationGetShouldDisableAsync()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Occlusion.OcclusionService.AutomationGetShouldDisableAsync"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
