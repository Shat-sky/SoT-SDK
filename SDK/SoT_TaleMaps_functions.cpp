// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleMaps_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TaleMaps.TaleQuestCustomMapFunctionLibrary.UpdateStrikeThoughTextElement
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   MapGuid                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGuid                   ElementGuid                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           StrikeThroughEnabled           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestCustomMapFunctionLibrary::UpdateStrikeThoughTextElement(const struct FGuid& MapGuid, const struct FGuid& ElementGuid, bool StrikeThroughEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleMaps.TaleQuestCustomMapFunctionLibrary.UpdateStrikeThoughTextElement"));

	struct
	{
		struct FGuid                   MapGuid;
		struct FGuid                   ElementGuid;
		bool                           StrikeThroughEnabled;
	} params;

	params.MapGuid = MapGuid;
	params.ElementGuid = ElementGuid;
	params.StrikeThroughEnabled = StrikeThroughEnabled;

	UObject::ProcessEvent(fn, &params);
}


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
