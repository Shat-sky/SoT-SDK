#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ShipDamage_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_Repair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShipDamage.HullDamageHit
// 0x001C
struct FHullDamageHit
{
	struct FVector                                     HitPosition;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasDecal;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ShipDamage.HullDamageZoneInfo
// 0x0030
struct FHullDamageZoneInfo
{
	class FString                                      DamageZoneId;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                DamageLevel;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RepairedDamageLevel;                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERepairableState>                      RepairableState;                                          // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FHullDamageHit>                      ExternalHitList;                                          // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ShipDamage.HullDamagePersistenceModel
// 0x000F (0x0010 - 0x0001)
struct FHullDamagePersistenceModel : public FPersistenceModel
{
	TArray<struct FHullDamageZoneInfo>                 DamageZones;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShipDamage.DistanceAndLevelOfDamage
// 0x0008
struct FDistanceAndLevelOfDamage
{
	float                                              DistanceLimit;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LevelOfDamage;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShipDamage.ShipPartLevelsOfDamage
// 0x0040
struct FShipPartLevelsOfDamage
{
	TAssetPtr<class UClass>                            ActorClass;                                               // 0x0000(0x0020) (Edit)
	TArray<struct FDistanceAndLevelOfDamage>           DamagePerDistance;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FFeatureFlag                                FeatureName;                                              // 0x0030(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ShipDamage.ShipDamageParams
// 0x0010
struct FShipDamageParams
{
	TArray<struct FShipPartLevelsOfDamage>             DamageParams;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShipDamage.EventShipDamageApplied
// 0x0070
struct FEventShipDamageApplied
{
	class AActor*                                      Ship;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamagedShipPartIdentifier;                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewDamageLevel;                                           // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // 0x0018(0x0058) (BlueprintVisible)
};

// ScriptStruct ShipDamage.EventShipDamaged
// 0x0060
struct FEventShipDamaged
{
	class AActor*                                      Ship;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // 0x0008(0x0058) (BlueprintVisible)
};

// ScriptStruct ShipDamage.DamageZoneDamageLevelChanged
// 0x0010
struct FDamageZoneDamageLevelChanged
{
	class AActor*                                      DamageZone;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DamageLevel;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShipDamage.AppliedDamageToShipEvent
// 0x0010
struct FAppliedDamageToShipEvent
{
	class UClass*                                      ShipType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Ship;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShipDamage.ShipRestoredNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FShipRestoredNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct ShipDamage.SendShipRestoredRpc
// 0x0010 (0x0020 - 0x0010)
struct FSendShipRestoredRpc : public FBoxedRpc
{
	struct FGuid                                       CrewId;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShipDamage.EventRestoreShip
// 0x0001
struct FEventRestoreShip
{
	bool                                               OnlyRepaired;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
