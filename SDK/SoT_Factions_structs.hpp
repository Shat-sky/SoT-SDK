#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_FactionsFramework_classes.hpp"
#include "SoT_EmissaryLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Factions.SandsOfFateData
// 0x000C
struct FSandsOfFateData
{
	int                                                SinkingCrewStreak;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SunkCrewStreak;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SandsOfFateReward;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Factions.FactionStreakLevelData
// 0x0008
struct FFactionStreakLevelData
{
	int                                                StreakLevel;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StreakCountThreshold;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Factions.CrewFactionEntry
// 0x0018
struct FCrewFactionEntry
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Faction;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.CinematicFactionEvent
// 0x0088
struct FCinematicFactionEvent
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCinematicQuestEvent                        CinematicData;                                            // 0x0008(0x0080) (Edit, DisableEditOnInstance)
};

// ScriptStruct Factions.FactionDisplayInfo
// 0x00A0
struct FFactionDisplayInfo
{
	class UClass*                                      Faction;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0008(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0038) (Edit, DisableEditOnInstance)
	struct FVector2D                                   CardOffset;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       KeyArt;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       Icon;                                                     // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Factions.FactionRequest
// 0x0020
struct FFactionRequest
{
	class UClass*                                      Faction;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Factions.FigureheadFactionVFXParams
// 0x0030
struct FFigureheadFactionVFXParams
{
	class UParticleSystem*                             FBParticleSystem;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FGParticleSystem;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoDestroy;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OwnerOnlySee;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OwnerNoSee;                                               // 0x002A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Factions.FactionVoteRemovedEvent
// 0x0008
struct FFactionVoteRemovedEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.FactionVoteAddedEvent
// 0x0008
struct FFactionVoteAddedEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.FactionLeftTelemetryEvent
// 0x001C
struct FFactionLeftTelemetryEvent
{
	struct FGuid                                       FactionSessionId;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AlignedFactionName;                                       // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactionLeftReason>                    LeftReason;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Factions.FactionJoinedTelemetryEvent
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
