// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MA_LS_BuoyantStorageBarrel_LockedToWater_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MA_LS_BuoyantStorageBarrel_LockedToWater.BP_MA_LS_BuoyantStorageBarrel_LockedToWater_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_MA_LS_BuoyantStorageBarrel_LockedToWater_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MA_LS_BuoyantStorageBarrel_LockedToWater.BP_MA_LS_BuoyantStorageBarrel_LockedToWater_C.GetPxActorCapacityForPhysXAggregate"));

	struct
	{
		unsigned char                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_MA_LS_BuoyantStorageBarrel_LockedToWater.BP_MA_LS_BuoyantStorageBarrel_LockedToWater_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MA_LS_BuoyantStorageBarrel_LockedToWater_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MA_LS_BuoyantStorageBarrel_LockedToWater.BP_MA_LS_BuoyantStorageBarrel_LockedToWater_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif