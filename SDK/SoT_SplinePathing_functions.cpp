// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SplinePathing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SplinePathing.FixedSplinePathingActor.SetSplineActor
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AFixedSplinePathingActor::SetSplineActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SplinePathing.FixedSplinePathingActor.SetSplineActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function SplinePathing.FixedSplinePathingActor.OnRep_SplineActor
// (Final, Native, Private)

void AFixedSplinePathingActor::OnRep_SplineActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SplinePathing.FixedSplinePathingActor.OnRep_SplineActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SplinePathing.FixedSplinePathingActor.OnRep_CanTick
// (Final, RequiredAPI, Native, Private)

void AFixedSplinePathingActor::OnRep_CanTick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SplinePathing.FixedSplinePathingActor.OnRep_CanTick"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
