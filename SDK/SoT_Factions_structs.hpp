#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Factions_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_FactionsFramework_classes.hpp"
#include "SoT_EmissaryLevel_classes.hpp"
#include "SoT_Athena_classes.hpp"

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

// ScriptStruct Factions.StreakMesh
// 0x0010
struct FStreakMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStreakPartType>                       PartType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Factions.StreakParticles
// 0x0010
struct FStreakParticles
{
	class UParticleSystem*                             Particles;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStreakPartType>                       PartType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Factions.StreakCompanyParticles
// 0x0018
struct FStreakCompanyParticles
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStreakParticles>                    ParticleData;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
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
	bool                                               IsUpdate;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
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
// 0x0020 (0x0030 - 0x0010)
struct FFactionShipSunkNetworkEvent : public FNetworkEventStruct
{
	TEnumAsByte<EFactionType>                          OpponentFaction;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       OpponentCrewId;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                MyKillStreak;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TheirKillStreak;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Factions.FactionPopupEvent
// 0x0008 (0x0018 - 0x0010)
struct FFactionPopupEvent : public FNetworkEventStruct
{
	class UDataAsset*                                  PopUpDesc;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
