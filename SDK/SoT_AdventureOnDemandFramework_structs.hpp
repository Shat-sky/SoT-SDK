#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AdventureOnDemandFramework_enums.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AdventureOnDemandFramework.ExtraSpawnDistanceByIslandType
// 0x0008
struct FExtraSpawnDistanceByIslandType
{
	TEnumAsByte<EIslandType>                           IslandType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExtraSpawnDistance;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AdventureOnDemandFramework.ExtraSpawnDistanceFromIsland
// 0x0018
struct FExtraSpawnDistanceFromIsland
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FExtraSpawnDistanceByIslandType>     DistanceByIslandType;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionVoyageProposal
// 0x0018
struct FAdventureOnDemandVoyageSelectionVoyageProposal
{
	TArray<class UInteractionPrerequisiteBase*>        Prerequisites;                                            // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UClass*                                      Proposal;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionVoyageProposalGroup
// 0x0028
struct FAdventureOnDemandVoyageSelectionVoyageProposalGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UInteractionPrerequisiteBase*>        Prerequisites;                                            // 0x0008(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FAdventureOnDemandVoyageSelectionVoyageProposal> Proposals;                                                // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AdventureOnDemandFramework.OnDemandQuestResumeConditionMetReasonQuestVariable
// 0x0000 (0x0030 - 0x0030)
struct FOnDemandQuestResumeConditionMetReasonQuestVariable : public FQuestVariable
{

};

// ScriptStruct AdventureOnDemandFramework.GameEventOnDemandBannerTextData
// 0x00B8
struct FGameEventOnDemandBannerTextData
{
	TArray<class UClass*>                              GameEventTypes;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       OnShipSunkBannerText;                                     // 0x0010(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       OnVoyageCancelledBannerText;                              // 0x0048(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       OnGameEventCompletedBannerHeaderText;                     // 0x0080(0x0038) (Edit, DisableEditOnInstance)
};

// ScriptStruct AdventureOnDemandFramework.VoyageHintPopupDescEntry
// 0x0010
struct FVoyageHintPopupDescEntry
{
	TEnumAsByte<EQuestType>                            QuestType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPopUpMessageDesc*                           HintPopUpMessageDesc;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandCrewReadyToResurfaceEvent
// 0x0010
struct FAdventureOnDemandCrewReadyToResurfaceEvent
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandDiveCrewAlreadyAtDestinationEvent
// 0x0010
struct FAdventureOnDemandDiveCrewAlreadyAtDestinationEvent
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSurfaceTaleFinished
// 0x0001
struct FAdventureOnDemandVoyageSurfaceTaleFinished
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AdventureOnDemandFramework.SeaBasedGameEventOnDemandLocationRequestFailedTelemetryEvent
// 0x0010
struct FSeaBasedGameEventOnDemandLocationRequestFailedTelemetryEvent
{
	class FString                                      GameEventType;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AdventureOnDemandFramework.SeaBasedGameEventOnDemandLocationRequestCompletedTelemetryEvent
// 0x0018
struct FSeaBasedGameEventOnDemandLocationRequestCompletedTelemetryEvent
{
	class FString                                      GameEventType;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FVector2D                                   Result;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
