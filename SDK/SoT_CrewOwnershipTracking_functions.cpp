// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CrewOwnershipTracking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrewOwnershipTracking.CrewOwnershipTrackingComponent.GetSpawningCrewIdByCopy
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UCrewOwnershipTrackingComponent::GetSpawningCrewIdByCopy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrewOwnershipTracking.CrewOwnershipTrackingComponent.GetSpawningCrewIdByCopy"));

	struct
	{
		struct FGuid                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
