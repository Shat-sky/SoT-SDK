#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InventoryPersistenceFramework.PlayerItemCategorySnapshots
// 0x0018
struct FPlayerItemCategorySnapshots
{
	class UClass*                                      ItemCategory;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FItemSnapshot>                       ItemSnapshots;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct InventoryPersistenceFramework.InventoryPersistencePlayerData
// 0x0098
struct FInventoryPersistencePlayerData
{
	struct FPirateIdentity                             PirateIdentity;                                           // 0x0000(0x0078)
	struct FGuid                                       PirateCrewId;                                             // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerItemCategorySnapshots>        ItemCategorySnapshots;                                    // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct InventoryPersistenceFramework.EventPlayerLoggedInPersistence
// 0x0008
struct FEventPlayerLoggedInPersistence
{
	class AController*                                 PlayerController;                                         // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct InventoryPersistenceFramework.EventPlayerPawnLeavingGame
// 0x0001
struct FEventPlayerPawnLeavingGame
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
