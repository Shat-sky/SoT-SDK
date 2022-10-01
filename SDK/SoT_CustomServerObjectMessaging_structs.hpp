#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomServerObjectMessaging.CustomServerEvent
// 0x0018
struct FCustomServerEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       EventID;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ServerTimeUTC;                                            // 0x0010(0x0008) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.EntityCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FEntityCustomServerEvent : public FCustomServerEvent
{
	int                                                EntityNetId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.OnRelaodAmmoCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FOnRelaodAmmoCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                AvailableAmmoToAdd;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoAfterReload;                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.OnItemPlacedInChestCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FOnItemPlacedInChestCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                ChestId;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.OnCannonBallHitShipCustomServerEvent
// 0x0018 (0x0038 - 0x0020)
struct FOnCannonBallHitShipCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      CannonBallType;                                           // 0x0020(0x0010) (ZeroConstructor)
	int                                                ShipId;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerCharacterEnteredShipCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerCharacterEnteredShipCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                UserId;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShipId;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.FortKeyUsedCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FFortKeyUsedCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.TreasureSoldCustomServerEvent
// 0x0040 (0x0060 - 0x0020)
struct FTreasureSoldCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      CrewId;                                                   // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      TreasureType;                                             // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      VendorId;                                                 // 0x0040(0x0010) (ZeroConstructor)
	class FString                                      CompanyId;                                                // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.TreasurePickedUpCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FTreasurePickedUpCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.TreasureFoundCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FTreasureFoundCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      TreasureType;                                             // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.TreasureDroppedCustomServerEvent
// 0x0020 (0x0040 - 0x0020)
struct FTreasureDroppedCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      TreasureType;                                             // 0x0020(0x0010) (ZeroConstructor)
	struct FVector                                     Position;                                                 // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.TinySharkDespawnCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FTinySharkDespawnCustomServerEvent : public FEntityCustomServerEvent
{
	unsigned char                                      Reason;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.KrakenDespawnCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FKrakenDespawnCustomServerEvent : public FEntityCustomServerEvent
{
	unsigned char                                      Reason;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.KrakenTentacleDestroyedCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FKrakenTentacleDestroyedCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.CookStartCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FCookStartCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      FoodType;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.CookEndCustomServerEvent
// 0x0020 (0x0040 - 0x0020)
struct FCookEndCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      FoodType;                                                 // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      CookedState;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ShipSpawnedCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FShipSpawnedCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      ShipType;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ShipRepairCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FShipRepairCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                UserId;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShipId;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.ShipOnFireEndCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FShipOnFireEndCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.ShipMastCollapseStateCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FShipMastCollapseStateCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                ShipId;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MastId;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.ShipDestroyedCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FShipDestroyedCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.ShipDamagedCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FShipDamagedCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                Damage;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.ProjectileWeaponFiredCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FProjectileWeaponFiredCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.ProjectileHitCustomServerEvent
// 0x0018 (0x0038 - 0x0020)
struct FProjectileHitCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      ProjectileType;                                           // 0x0020(0x0010) (ZeroConstructor)
	int                                                RecipientId;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectActivatedCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FPlayerStatusEffectActivatedCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      Effect;                                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectDeactivatedCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FPlayerStatusEffectDeactivatedCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      Effect;                                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerSpawnCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerSpawnCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                PlayerStateId;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CharacterType;                                            // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerSetFootLocationCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FPlayerSetFootLocationCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      IslandName;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerRevivalCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerRevivalCustomServerEvent : public FEntityCustomServerEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerRadialChatCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerRadialChatCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerLeftGhostShipCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerLeftGhostShipCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerKillAICustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerKillAICustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemUsageStartCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerItemUsageStartCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemUsageEndCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerItemUsageEndCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemRetrievalFromContainerCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FPlayerItemRetrievalFromContainerCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      RetrievedItemName;                                        // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemEquipCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerItemEquipCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemAddToContainerCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerItemAddToContainerCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerInReviveableStateCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerInReviveableStateCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerHeartbeatCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerHeartbeatCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerHealthChangeCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerHealthChangeCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerGameFishingStartedCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerGameFishingStartedCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterStartCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerEncounterStartCustomServerEvent : public FEntityCustomServerEvent
{
	unsigned char                                      EncounterType;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterEndCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerEncounterEndCustomServerEvent : public FEntityCustomServerEvent
{
	unsigned char                                      EncounterType;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerEmoteEndCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FPlayerEmoteEndCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      Emote;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerEmoteStartCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FPlayerEmoteStartCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      Emote;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerDeathCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerDeathCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                KillerID;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedShipLoadoutCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerChangedShipLoadoutCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                ShipId;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedLoadoutCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerChangedLoadoutCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageStartCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerCapstanUsageStartCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                ShipId;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageEndCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerCapstanUsageEndCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                ShipId;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CapstanState;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketScoopCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FPlayerBucketScoopCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketEmptyCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerBucketEmptyCustomServerEvent : public FEntityCustomServerEvent
{
	bool                                               AtWielder;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCannonCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FPlayerActionCannonCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                ShipId;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FPlayerActionCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      Action;                                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.MermaidUsedCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FMermaidUsedCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.MeleeWeaponAttackCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FMeleeWeaponAttackCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                Type;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapEndCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FCustomTriggerOverlapEndCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                OtherNetId;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapBeginCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FCustomTriggerOverlapBeginCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                OtherNetId;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.AISpawnCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FAISpawnCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      AIType;                                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.AIShipSpawnCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FAIShipSpawnCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.AIShipDespawnCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FAIShipDespawnCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.AIShipDamagedCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FAIShipDamagedCustomServerEvent : public FEntityCustomServerEvent
{
	float                                              AIShipWaterLevel;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.OnCannonballLoadedOnCannonCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FOnCannonballLoadedOnCannonCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.OnPlayerFiredFromCannonCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FOnPlayerFiredFromCannonCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.OnEnemyDeathCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FOnEnemyDeathCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                KillerPlayerID;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerDigCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FOnPlayerDigCustomServerEvent : public FEntityCustomServerEvent
{
	struct FVector                                     Location;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerStartsNPCInteractionCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FOnPlayerStartsNPCInteractionCustomServerEvent : public FEntityCustomServerEvent
{
	class FString                                      NPCName;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerJoinsMapTableCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FOnPlayerJoinsMapTableCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.OnHarpoonShotHitCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FOnHarpoonShotHitCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                ActorTetheredTo;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.OnHarpoonShotShotCustomServerEvent
// 0x0008 (0x0028 - 0x0020)
struct FOnHarpoonShotShotCustomServerEvent : public FEntityCustomServerEvent
{
	int                                                HarpoonId;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerInsideCannonCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FOnPlayerInsideCannonCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.OnPlayerAteCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FOnPlayerAteCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.ShipSinkingCustomServerEvent
// 0x0000 (0x0020 - 0x0020)
struct FShipSinkingCustomServerEvent : public FEntityCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.HoleFixedForShipCustomServerEvent
// 0x0010 (0x0030 - 0x0020)
struct FHoleFixedForShipCustomServerEvent : public FEntityCustomServerEvent
{
	float                                              RepairPercentage;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RepairingActor;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               RepairCompleted;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.GlobalCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FGlobalCustomServerEvent : public FCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.MermaidSpawnedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FMermaidSpawnedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FVector                                     Position;                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.PlayerLookingAtMapCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerLookingAtMapCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.OnQuestStartedCustomServerEvent
// 0x0018 (0x0030 - 0x0018)
struct FOnQuestStartedCustomServerEvent : public FGlobalCustomServerEvent
{
	unsigned char                                      QuestType;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FGuid                                       CrewId;                                                   // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.OnVoyageStartedCustomServerEvent
// 0x0038 (0x0050 - 0x0018)
struct FOnVoyageStartedCustomServerEvent : public FGlobalCustomServerEvent
{
	class FString                                      CompanyDisplayName;                                       // 0x0018(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      Title;                                                    // 0x0030(0x0010) (ZeroConstructor)
	struct FGuid                                       CrewId;                                                   // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.OnVoyageCancelledCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FOnVoyageCancelledCustomServerEvent : public FGlobalCustomServerEvent
{
	class FString                                      AssociatedCrew;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.OnVoyageAcceptedCustomServerEvent
// 0x0028 (0x0040 - 0x0018)
struct FOnVoyageAcceptedCustomServerEvent : public FGlobalCustomServerEvent
{
	class FString                                      CompanyDisplayName;                                       // 0x0018(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      Title;                                                    // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.OnQuestAcceptedCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FOnQuestAcceptedCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.WatercraftDespawnCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FWatercraftDespawnCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                WatercraftId;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.TreasureSpawnedCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FTreasureSpawnedCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.KrakenSpawnCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FKrakenSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FVector                                     SpawnLocation;                                            // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                TrackedShipId;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KrakenId;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfTentacles;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfKilledTentaclesToDismissKraken;                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.WatercraftSpawnCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FWatercraftSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                EntityNetId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.ActorSpawnCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FActorSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                EntityNetId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.ItemSpawnCustomServerEvent
// 0x0018 (0x0030 - 0x0018)
struct FItemSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                EntityNetId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class FString                                      ItemType;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.FortWaveCompletedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FFortWaveCompletedCustomServerEvent : public FGlobalCustomServerEvent
{
	class FString                                      InCrewId;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.CrewSessionLeaveCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FCrewSessionLeaveCustomServerEvent : public FGlobalCustomServerEvent
{
	class FString                                      CrewId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.CrewPlayerLeftCustomServerEvent
// 0x0018 (0x0030 - 0x0018)
struct FCrewPlayerLeftCustomServerEvent : public FGlobalCustomServerEvent
{
	class FString                                      CrewId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	int                                                PlayerId;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.TinySharkSpawnCustomServerEvent
// 0x0018 (0x0030 - 0x0018)
struct FTinySharkSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                TinySharkId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                TrackedShipId;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
