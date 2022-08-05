// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleMaps_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TaleMaps.TaleQuestCustomMapFunctionLibrary.AddCustomMap
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TAssetPtr<class UCustomMapData> Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGuid                   MapGuid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCustomMapFunctionLibrary::AddCustomMap(TAssetPtr<class UCustomMapData> Data, struct FGuid* MapGuid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleMaps.TaleQuestCustomMapFunctionLibrary.AddCustomMap"));

	struct
	{
		TAssetPtr<class UCustomMapData> Data;
		struct FGuid                   MapGuid;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	if (MapGuid != nullptr)
		*MapGuid = params.MapGuid;
}


// Function TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc.EventsSource
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UTaleQuestTriggerNamedChecklistEventStepDesc::EventsSource()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc.EventsSource"));

	struct
	{
		TArray<class FString>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
