#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Factions_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_FactionsFramework_classes.hpp"
#include "SoT_EmissaryLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Factions.LootLevelReward
// 0x0028
struct FLootLevelReward
{
	TEnumAsByte<EDefenderLootLevel>                    LootLevel;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FRewardId                                   RewardId;                                                 // 0x0004(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FFactionServicePopUpData>            LootLevelPopUpMessageDesc;                                // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                PopUpIndex;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
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

// ScriptStruct Factions.StreakMesh
// 0x0010
struct FStreakMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStreakPartType>                       PartType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Factions.CinematicFactionEvent
// 0x0088
struct FCinematicFactionEvent
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCinematicQuestEvent                        CinematicData;                                            // 0x0008(0x0080) (Edit, DisableEditOnInstance)
};

// ScriptStruct Factions.StreakMaterialValue
// 0x0008
struct FStreakMaterialValue
{
	int                                                Streak;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Length;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Factions.StreakMaterial
// 0x0010
struct FStreakMaterial
{
	class UMaterialInstance*                           Material;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStreakPartType>                       PartType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Factions.StreakCompanyMaterials
// 0x0018
struct FStreakCompanyMaterials
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStreakMaterial>                     Materials;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Factions.StreakDynamicMaterials
// 0x0018
struct FStreakDynamicMaterials
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Factions.FactionStreakData
// 0x0010
struct FFactionStreakData
{
	class UClass*                                      Faction;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StreakLevel;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Factions.KillStreakRibbonEvent
// 0x000C
struct FKillStreakRibbonEvent
{
	int                                                HourGlassPreValue;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HourGlassPostValue;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HourGlassIncrement;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.KillStreakHideEvent
// 0x0001
struct FKillStreakHideEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Factions.KillStreakShowEvent
// 0x0001
struct FKillStreakShowEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Factions.UpdateKillStreakEvent
// 0x0004
struct FUpdateKillStreakEvent
{
	int                                                NewLevel;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.DeactivateKillStreakEvent
// 0x0001
struct FDeactivateKillStreakEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Factions.ActivateKillStreakEvent
// 0x0001
struct FActivateKillStreakEvent
{
	TEnumAsByte<EFactionType>                          FactionId;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.DeactivateKillStreakNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FDeactivateKillStreakNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct Factions.ActivateKillStreakNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FActivateKillStreakNetworkEvent : public FNetworkEventStruct
{
	TEnumAsByte<EFactionType>                          FactionId;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Factions.FactionShipSunkUIEvent
// 0x0020
struct FFactionShipSunkUIEvent
{
	TEnumAsByte<EFactionType>                          OpponentFaction;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      ShipName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	int                                                MyKillStreak;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TheirKillStreak;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.FactionShipSunkNetworkEvent
// 0x0028 (0x0038 - 0x0010)
struct FFactionShipSunkNetworkEvent : public FNetworkEventStruct
{
	TEnumAsByte<EFactionType>                          OpponentFaction;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       OpponentCrewId;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                MyKillStreak;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TheirKillStreak;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SandsOfFateBefore;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SandsOfFateAfter;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsIntraFactionBattle;                                     // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct Factions.FactionPopupEvent
// 0x0008 (0x0018 - 0x0010)
struct FFactionPopupEvent : public FNetworkEventStruct
{
	class UDataAsset*                                  PopUpDesc;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.FactionBlockedTaleVoteConsensusReached
// 0x0010
struct FFactionBlockedTaleVoteConsensusReached
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.FactionBlockedTaleVoteAdded
// 0x0008
struct FFactionBlockedTaleVoteAdded
{
	class AActor*                                      Voter;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.FactionVoteAdded
// 0x0020
struct FFactionVoteAdded
{
	class AActor*                                      Voter;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               VotePassed;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Factions.EventLocalPlayerApproachedHourglass
// 0x0001
struct FEventLocalPlayerApproachedHourglass
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
