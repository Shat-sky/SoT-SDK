// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tales.TaleQuestCargoRunContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTaleQuestCargoRunContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTaleQuestCargoRunContract* UTaleQuestCargoRunContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestCargoRunContractsService.GetContract");

	UTaleQuestCargoRunContractsService_GetContract_Params params;
	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestCargoRunContractsService.AddContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          InItems                        (Parm, ZeroConstructor)
// class AActor*                  InCollectFromNPC               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InDeliverToNPC                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            InTimeLimitInMinutes           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestCargoRunContractsService::AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestCargoRunContractsService.AddContract");

	UTaleQuestCargoRunContractsService_AddContract_Params params;
	params.InItems = InItems;
	params.InCollectFromNPC = InCollectFromNPC;
	params.InDeliverToNPC = InDeliverToNPC;
	params.InTimeLimitInMinutes = InTimeLimitInMinutes;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTaleQuestMerchantContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTaleQuestMerchantContract* UTaleQuestMerchantContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMerchantContractsService.GetContract");

	UTaleQuestMerchantContractsService_GetContract_Params params;
	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.AddContract
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FTaleQuestDeliveryRequest> Requests                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   InDeliveryDestination          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeLimit                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestMerchantContractsService::AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMerchantContractsService.AddContract");

	UTaleQuestMerchantContractsService_AddContract_Params params;
	params.Requests = Requests;
	params.InDeliveryDestination = InDeliveryDestination;
	params.InTimeLimit = InTimeLimit;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMapService.UpdateMerchantMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTaleQuestDeliverableItem Deliverable                    (Parm)

void UTaleQuestMapService::UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMapService.UpdateMerchantMap");

	UTaleQuestMapService_UpdateMerchantMap_Params params;
	params.MapId = MapId;
	params.Index = Index;
	params.Deliverable = Deliverable;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestMapService.AdvanceRiddleMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestMapService::AdvanceRiddleMap(const struct FName& MapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMapService.AdvanceRiddleMap");

	UTaleQuestMapService_AdvanceRiddleMap_Params params;
	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
