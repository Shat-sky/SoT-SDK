// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SeaFort_Cannon_AI_TopFloor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SeaFort_Cannon_AI_TopFloor.BP_SeaFort_Cannon_AI_TopFloor_C.GetProjectileFiredFrom
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProjectileFiredFrom> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EProjectileFiredFrom> ABP_SeaFort_Cannon_AI_TopFloor_C::GetProjectileFiredFrom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SeaFort_Cannon_AI_TopFloor.BP_SeaFort_Cannon_AI_TopFloor_C.GetProjectileFiredFrom"));

	struct
	{
		TEnumAsByte<EProjectileFiredFrom> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SeaFort_Cannon_AI_TopFloor.BP_SeaFort_Cannon_AI_TopFloor_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_SeaFort_Cannon_AI_TopFloor_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SeaFort_Cannon_AI_TopFloor.BP_SeaFort_Cannon_AI_TopFloor_C.GetDockableInfo"));

	struct
	{
		struct FDockableInfo           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SeaFort_Cannon_AI_TopFloor.BP_SeaFort_Cannon_AI_TopFloor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SeaFort_Cannon_AI_TopFloor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SeaFort_Cannon_AI_TopFloor.BP_SeaFort_Cannon_AI_TopFloor_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
