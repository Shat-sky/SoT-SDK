#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlayerLootMarkerFramework.PlayerLootMarkerWorldEdgeBatchData
// 0x0020
struct FPlayerLootMarkerWorldEdgeBatchData
{
	struct FGuid                                       BatchId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct PlayerLootMarkerFramework.PlayerLootMarkerTelemetryEvent
// 0x0020
struct FPlayerLootMarkerTelemetryEvent
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              LootTypes;                                                // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
