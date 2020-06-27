#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tales.TaleQuestCargoRunContractsService.GetContract
struct UTaleQuestCargoRunContractsService_GetContract_Params
{
	struct FGuid                                       Guid;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTaleQuestCargoRunContract*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestCargoRunContractsService.AddContract
struct UTaleQuestCargoRunContractsService_AddContract_Params
{
	TArray<class UClass*>                              InItems;                                                  // (Parm, ZeroConstructor)
	class AActor*                                      InCollectFromNPC;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InDeliverToNPC;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTimeLimitInMinutes;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestMerchantContractsService.GetContract
struct UTaleQuestMerchantContractsService_GetContract_Params
{
	struct FGuid                                       Guid;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTaleQuestMerchantContract*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestMerchantContractsService.AddContract
struct UTaleQuestMerchantContractsService_AddContract_Params
{
	TArray<struct FTaleQuestDeliveryRequest>           Requests;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       InDeliveryDestination;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTimeLimit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestMapService.UpdateMerchantMap
struct UTaleQuestMapService_UpdateMerchantMap_Params
{
	struct FName                                       MapId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTaleQuestDeliverableItem                   Deliverable;                                              // (Parm)
};

// Function Tales.TaleQuestMapService.AdvanceRiddleMap
struct UTaleQuestMapService_AdvanceRiddleMap_Params
{
	struct FName                                       MapId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
