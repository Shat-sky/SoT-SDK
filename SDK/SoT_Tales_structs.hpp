#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_MerchantContracts_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_EmissaryFramework_classes.hpp"
#include "SoT_PrioritisedPrompts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Tales.ETaleQuestStepBeginMode
enum class ETaleQuestStepBeginMode : uint8_t
{
	ETaleQuestStepBeginMode__Cold  = 0,
	ETaleQuestStepBeginMode__ETaleQuestStepBeginMode_MAX = 1
};


// Enum Tales.ETaleQuestStepState
enum class ETaleQuestStepState : uint8_t
{
	ETaleQuestStepState__Inactive  = 0,
	ETaleQuestStepState__PendingCompletion = 1,
	ETaleQuestStepState__Completed = 2,
	ETaleQuestStepState__ETaleQuestStepState_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tales.SplineFootprintPathTool
// 0x0001
struct FSplineFootprintPathTool
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestCargoRunContractItem
// 0x0018
struct FTaleQuestCargoRunContractItem
{
	class UClass*                                      ItemToCollect;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestDeliveryRequest
// 0x0038
struct FTaleQuestDeliveryRequest
{
	int                                                Id;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FMerchantContractItemDesc                   Item;                                                     // 0x0008(0x0028) (Edit, BlueprintVisible)
	int                                                NumToDeliver;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumToAllocate;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariablePrioritisedPrompt
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariablePrioritisedPrompt : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableAny
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableAny : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableBountyTargetArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableBountyTargetArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableMerchantItemArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItemArray : public FQuestVariable
{

};

// ScriptStruct Tales.TaleQuestDeliverableItem
// 0x0040
struct FTaleQuestDeliverableItem
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableMerchantItem
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItem : public FQuestVariable
{

};

// ScriptStruct Tales.ParticpantToolGroup
// 0x0020
struct FParticpantToolGroup
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Tales.StepMerchantItemDesc
// 0x0040
struct FStepMerchantItemDesc
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.TaleQuestDesc
// 0x0058 (0x0080 - 0x0028)
struct FTaleQuestDesc : public FQuestDesc
{
	class UTaleQuestStepDesc*                          Root;                                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Definition;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       TaleFailMessage;                                          // 0x0038(0x0038)
	struct FName                                       TaleFailBannerTag;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Development;                                              // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct Tales.StepBountyTargetDesc
// 0x0040
struct FStepBountyTargetDesc
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Portrait;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
