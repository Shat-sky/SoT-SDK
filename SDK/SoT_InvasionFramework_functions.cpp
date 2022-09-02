// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_InvasionFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldEmergentBattleDisplayBanners
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInvasionBlueprintFunctionLibrary::ShouldEmergentBattleDisplayBanners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldEmergentBattleDisplayBanners"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldAggressivePassiveTeleportUseEQS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInvasionBlueprintFunctionLibrary::ShouldAggressivePassiveTeleportUseEQS()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldAggressivePassiveTeleportUseEQS"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InvasionFramework.InvasionBlueprintFunctionLibrary.GetAggressivePassiveTeleportOffsetDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInvasionBlueprintFunctionLibrary::GetAggressivePassiveTeleportOffsetDistance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InvasionFramework.InvasionBlueprintFunctionLibrary.GetAggressivePassiveTeleportOffsetDistance"));

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
