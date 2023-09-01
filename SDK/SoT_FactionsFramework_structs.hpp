#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_FactionsFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Sessions_classes.hpp"
#include "SoT_ContestMatchmaking_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FactionsFramework.CompanyFactionAlignment
// 0x0010
struct FCompanyFactionAlignment
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Faction;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactionsFramework.FactionServicePopUpData
// 0x0010
struct FFactionServicePopUpData
{
	class UClass*                                      Faction;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataAsset*                                  PopUpMessageDesc;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.FactionStreakLevelData
// 0x0008
struct FFactionStreakLevelData
{
	int                                                StreakLevel;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StreakCountThreshold;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactionsFramework.SandsOfFateData
// 0x000C
struct FSandsOfFateData
{
	int                                                SinkingCrewStreakLevel;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SunkCrewStreakLevel;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SandsOfFateReward;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewFactionEntry
// 0x0030
struct FCrewFactionEntry
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Faction;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnemyFactionShipRangeState>           EnemyFactionShipRangeState;                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                CurrentLootValue;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SandsOfFate;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Streak;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	double                                             LeaveFactionCooldownTimeStamp;                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewFactionEntryData
// 0x0078
struct FCrewFactionEntryData
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SessionId;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Faction;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Streak;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	double                                             CooldownTimeStamp;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInInvasion;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FGuid>                               EligibleLootBootyIds;                                     // 0x0040(0x0010) (ZeroConstructor)
	int                                                CurrentLootValue;                                         // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<bool>                                       HasDisplayedPromptForLootLevel;                           // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0068(0x0010) MISSED OFFSET
};

// ScriptStruct FactionsFramework.CrewFactionTelemetryData
// 0x0030
struct FCrewFactionTelemetryData
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SessionId;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Faction;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Streak;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SandsOfFate;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.FactionServicePostMigrationEvent
// 0x0018
struct FFactionServicePostMigrationEvent
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Faction;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.FactionShipDefeatedEvent
// 0x0020
struct FFactionShipDefeatedEvent
{
	TArray<struct FGuid>                               VictoriousCrewIds;                                        // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       DefeatedCrewId;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewStreakLevelIncreased
// 0x0014
struct FCrewStreakLevelIncreased
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                StreakLevel;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.ShipDestroyedByBattleBoundsEvent
// 0x0010
struct FShipDestroyedByBattleBoundsEvent
{
	struct FGuid                                       SunkShipCrewId;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewsSunkShipEvent
// 0x0020
struct FCrewsSunkShipEvent
{
	TArray<struct FGuid>                               AttackingCrewIds;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       SunkShipCrewId;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewLeftFaction
// 0x0020
struct FCrewLeftFaction
{
	struct FGuid                                       LeavingCrewId;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FactionLeft;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactionLeftReason>                    FactionLeftReason;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FactionsFramework.CrewLeavingFaction
// 0x0020
struct FCrewLeavingFaction
{
	struct FGuid                                       LeavingCrewId;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FactionToLeave;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactionLeftReason>                    FactionLeftReason;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FactionsFramework.CrewJoinedFactionSuccess
// 0x0018
struct FCrewJoinedFactionSuccess
{
	struct FGuid                                       JoiningCrewId;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FactionJoined;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewJoinedFaction
// 0x0018
struct FFactionsFramework_FCrewJoinedFaction
{
	struct FGuid                                       JoiningCrewId;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FactionJoined;                                            // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.FactionCrewAttackedPreviouslySunkCrewTelemetryEvent
// 0x0038
struct FFactionCrewAttackedPreviouslySunkCrewTelemetryEvent
{
	struct FGuid                                       FactionSessionId;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AlignedFactionName;                                       // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AttackingCrewId;                                          // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SunkCrewId;                                               // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.FactionStreakIncreasedTelemetryEvent
// 0x0030
struct FFactionStreakIncreasedTelemetryEvent
{
	struct FCrewFactionTelemetryData                   CrewFactionData;                                          // 0x0000(0x0030) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FactionsFramework.FactionLeftTelemetryEvent
// 0x001C
struct FFactionLeftTelemetryEvent
{
	struct FGuid                                       FactionSessionId;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AlignedFactionName;                                       // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactionLeftReason>                    LeftReason;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct FactionsFramework.FactionJoinedTelemetryEvent
// 0x0018
struct FFactionJoinedTelemetryEvent
{
	struct FGuid                                       FactionSessionId;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AlignedFactionName;                                       // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.FactionWaitTimesData
// 0x0010
struct FFactionWaitTimesData
{
	TEnumAsByte<EPvPFaction>                           Faction;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECrewSessionType>                      SessionType;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	int64_t                                            WaitTimeTicks;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
