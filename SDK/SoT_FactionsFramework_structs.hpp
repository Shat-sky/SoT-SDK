#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_FactionsFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
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
	int                                                SinkingCrewStreak;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SunkCrewStreak;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SandsOfFateReward;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewFactionEntry
// 0x0020
struct FCrewFactionEntry
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Faction;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnemyFactionShipRangeState>           EnemyFactionShipRangeState;                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FactionsFramework.CrewFactionEntryData
// 0x0048
struct FCrewFactionEntryData
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SessionId;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Faction;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Streak;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SandsOfFate;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CooldownTimeStamp;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInInvasion;                                             // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0035(0x0013) MISSED OFFSET
};

// ScriptStruct FactionsFramework.CrewFactionTelemetryData
// 0x0030
struct FCrewFactionTelemetryData
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Faction;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Streak;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SandsOfFate;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               CrewsAlreadySunk;                                         // 0x0020(0x0010) (ZeroConstructor)
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
// 0x0010
struct FCrewJoinedFactionSuccess
{
	struct FGuid                                       JoiningCrewId;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewJoinedFaction
// 0x0018
struct FCrewJoinedFaction
{
	struct FGuid                                       JoiningCrewId;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FactionJoined;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
