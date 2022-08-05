#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TrinketFramework.ChestEntitlementTrinketItem
// 0x0028
struct FChestEntitlementTrinketItem
{
	class FString                                      ItemDesc;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                PlacedValue;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlacedThreshold;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      OwnerGamerTag;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct TrinketFramework.TrinketLoadoutEntry
// 0x0018
struct FTrinketLoadoutEntry
{
	class UClass*                                      Trinket;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      TrinketOwnerPlayerXuid;                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct TrinketFramework.TrinketLoadout
// 0x0010
struct FTrinketLoadout
{
	TArray<struct FTrinketLoadoutEntry>                TrinketEntries;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct TrinketFramework.EquipTrinketOnServerLoadoutRpc
// 0x0028 (0x0038 - 0x0010)
struct FEquipTrinketOnServerLoadoutRpc : public FBoxedRpc
{
	struct FNetSubObjectPtr                            TrinketLoadoutComponent;                                  // 0x0010(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      TrinketToEquip;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LocationIndex;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct TrinketFramework.RemoveInteractingPlayerFromTrinketMountpointRpc
// 0x0018 (0x0028 - 0x0010)
struct FRemoveInteractingPlayerFromTrinketMountpointRpc : public FBoxedRpc
{
	struct FNetSubObjectPtr                            TrinketMountpointManager;                                 // 0x0010(0x0014)
	int                                                MountpointIndex;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TrinketFramework.UnequipAllTrinketsOfClassOnServerLoadoutRpc
// 0x0020 (0x0030 - 0x0010)
struct FUnequipAllTrinketsOfClassOnServerLoadoutRpc : public FBoxedRpc
{
	struct FNetSubObjectPtr                            TrinketLoadoutComponent;                                  // 0x0010(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      TrinketToUnequip;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TrinketFramework.TrinketLoadoutUpdatedEvent
// 0x0010
struct FTrinketLoadoutUpdatedEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TrinketFramework.TrinketLoadoutModelEntry
// 0x0020
struct FTrinketLoadoutModelEntry
{
	struct FName                                       EntitlementId;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LocationIndex;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      UserId;                                                   // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct TrinketFramework.TrinketLoadoutModel
// 0x000F (0x0010 - 0x0001)
struct FTrinketLoadoutModel : public FPersistenceModel
{
	TArray<struct FTrinketLoadoutModelEntry>           Trinkets;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct TrinketFramework.EventTrinketSetReady
// 0x0010
struct FEventTrinketSetReady
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TrinketFramework.RequestTrinketChestItemInfoEvent
// 0x0001
struct FRequestTrinketChestItemInfoEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct TrinketFramework.RequestTrinketLoadoutUIEvent
// 0x0010
struct FRequestTrinketLoadoutUIEvent
{
	TArray<class FString>                              Categories;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct TrinketFramework.RequestTrinketEntitlementsUIEvent
// 0x0010
struct FRequestTrinketEntitlementsUIEvent
{
	class FString                                      TrinketCategory;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct TrinketFramework.RequestUnequipTrinketsOfClassUIEvent
// 0x0010
struct FRequestUnequipTrinketsOfClassUIEvent
{
	class FString                                      TrinketDesc;                                              // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
