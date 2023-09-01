// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Rugs_Large_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Rugs_Large.BP_Rugs_Large_C.GetRugMeshComponents
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UStaticMeshComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UStaticMeshComponent*> ABP_Rugs_Large_C::GetRugMeshComponents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rugs_Large.BP_Rugs_Large_C.GetRugMeshComponents"));

	struct
	{
		TArray<class UStaticMeshComponent*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Rugs_Large.BP_Rugs_Large_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Rugs_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rugs_Large.BP_Rugs_Large_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
