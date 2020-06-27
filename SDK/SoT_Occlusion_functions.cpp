// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Occlusion_parameters.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function Occlusion.OcclusionService.OnPrimaryActorEndPlay");

	UOcclusionService_OnPrimaryActorEndPlay_Params params;
	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Occlusion.OcclusionService.OnIgnoredActorEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UOcclusionService::OnIgnoredActorEndPlay(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Occlusion.OcclusionService.OnIgnoredActorEndPlay");

	UOcclusionService_OnIgnoredActorEndPlay_Params params;
	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
