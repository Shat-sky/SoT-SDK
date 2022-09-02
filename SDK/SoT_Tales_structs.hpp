#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Tales_enums.hpp"
#include "SoT_MerchantContracts_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_EmissaryFramework_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_PrioritisedPrompts_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_TaleMaps_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tales.QuestVariableAny
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableAny : public FQuestVariable
{

};

// ScriptStruct Tales.IslandTypeWeights
// 0x0014
struct FIslandTypeWeights
{
	float                                              FeatureIslandWeight;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResourceIslandWeight;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutpostIslandWeight;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeapostIslandWeight;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FortIslandWeight;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

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

// ScriptStruct Tales.TrackedActorData
// 0x0010
struct FTrackedActorData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Tales.CriticalActorDelegateData
// 0x0048
struct FCriticalActorDelegateData
{
	class AActor*                                      CriticalActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       FailureMessage;                                           // 0x0008(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Tales.SnapshottedActorData
// 0x0060
struct FSnapshottedActorData
{
	TScriptInterface<class USnapshotOwnerInterface>    Instagator;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SnapshotID;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               ActorWasCritical;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ActorWasTracked;                                          // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FText                                       FailureMessage;                                           // 0x0028(0x0038)
};

// ScriptStruct Tales.PhasedActor
// 0x0020
struct FPhasedActor
{
	class AActor*                                      MapActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Tales.PhasedItem
// 0x0028
struct FPhasedItem
{
	class AItemProxy*                                  ItemProxy;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ItemInfo;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Tracked;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct Tales.MigrationActionPair
// 0x0010
struct FMigrationActionPair
{
	struct FTaleResourceHandle                         AllocatedResourceHandle;                                  // 0x0000(0x0008)
	class UTaleMigrationAction*                        MigrationAction;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.BodyFramePair
// 0x0028
struct FBodyFramePair
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UTaleQuestIndexedFrame*                      Frame;                                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UTaleQuestStepInterface>    Body;                                                     // 0x0018(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableSetEQSTaleContextValue
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableSetEQSTaleContextValue : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableLinkEQSContext
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableLinkEQSContext : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableItemDescType
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableItemDescType : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableItemInfo
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableItemInfo : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableCollection
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableCollection : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableGuidArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableGuidArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariablePrioritisedPrompt
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariablePrioritisedPrompt : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableBountyTargetArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableBountyTargetArray : public FQuestVariable
{

};

// ScriptStruct Tales.TaleQuestDeliverableItem
// 0x0040
struct FTaleQuestDeliverableItem
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableMerchantItemArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableMerchantItemArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableMerchantItem
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableMerchantItem : public FQuestVariable
{

};

// ScriptStruct Tales.TaleActorSpawnParameters
// 0x0003
struct FTaleActorSpawnParameters
{
	bool                                               Tracked;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GatherForMigration;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DeferredSpawning;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.CompondNodePinDesc
// 0x0048
struct FCompondNodePinDesc
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0038)
	struct FGuid                                       PinId;                                                    // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.TaleQuestDesc
// 0x0058 (0x0080 - 0x0028)
struct FTaleQuestDesc : public FQuestDesc
{
	class UTaleQuestStepDesc*                          Root;                                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Definition;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       TaleFailMessage;                                          // 0x0038(0x0038)
	struct FName                                       TaleFailBannerTag;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFireStartTallTaleTrackedObjective;                  // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Development;                                              // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestToggledDefinition
// 0x0010
struct FTaleQuestToggledDefinition
{
	struct FName                                       FeatureToggle;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Definition;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.CriticalActorWrapper
// 0x0040
struct FCriticalActorWrapper
{
	class AActor*                                      CriticalActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Tales.QuestVariableActorArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableActorArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableObjectArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableObjectArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableClassArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableClassArray : public FQuestVariable
{

};

// ScriptStruct Tales.ParticpantToolGroup
// 0x0020
struct FParticpantToolGroup
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Tales.QuestVariableRotator
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableRotator : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableActorAssetType
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableActorAssetType : public FQuestVariable
{

};

// ScriptStruct Tales.TaleQuestForEachCrewTask
// 0x0028
struct FTaleQuestForEachCrewTask
{
	TScriptInterface<class UTaleQuestStepInterface>    Task;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Tales.QuestVariableTaleResourceHandle
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableTaleResourceHandle : public FQuestVariable
{

};

// ScriptStruct Tales.ActorSpawnedAutomationEvent
// 0x0008
struct FActorSpawnedAutomationEvent
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.EventSpawnedTallTaleQuestItem
// 0x0001
struct FEventSpawnedTallTaleQuestItem
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestSelectorServiceSeedSetTelemetryEvent
// 0x0004
struct FTaleQuestSelectorServiceSeedSetTelemetryEvent
{
	int                                                Seed;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.PlaySequencerAutomationEvent
// 0x0018
struct FPlaySequencerAutomationEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Tales.EventModalInteractionStateChanged
// 0x0001
struct FEventModalInteractionStateChanged
{
	bool                                               IsInteractionBlocked;                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.ToggleModalInteractionNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FToggleModalInteractionNetworkEvent : public FBoxedRpc
{
	class AActor*                                      TargetActor;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               InteractionBlocked;                                       // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Tales.StepMerchantItemDesc
// 0x0040
struct FStepMerchantItemDesc
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableActorAssetTypeArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableActorAssetTypeArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableItemDescTypeArray
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableItemDescTypeArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariablePageLayout
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariablePageLayout : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableTexture
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableTexture : public FQuestVariable
{

};

// ScriptStruct Tales.TaleQuestFailedEvent
// 0x0020
struct FTaleQuestFailedEvent
{
	TArray<struct FGuid>                               CrewIds;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       QuestId;                                                  // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.TaleQuestContextInvalidTelemetryEvent
// 0x0010
struct FTaleQuestContextInvalidTelemetryEvent
{
	struct FName                                       StepType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Tale;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableAISpawner
// 0x0000 (0x0020 - 0x0020)
struct FQuestVariableAISpawner : public FQuestVariable
{

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
