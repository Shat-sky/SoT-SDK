#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WorldEdgeItemFramework.WorldEdgeItemServiceBatchCompletedEvent
// 0x0010
struct FWorldEdgeItemServiceBatchCompletedEvent
{
	struct FGuid                                       BatchId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WorldEdgeItemFramework.WorldEdgeItemBatchTelemetryEvent
// 0x001C
struct FWorldEdgeItemBatchTelemetryEvent
{
	struct FVector                                     ShipLocation;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TeleportLocation;                                         // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                NumItems;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WorldEdgeItemFramework.WorldEdgeItemDroppedInRedSeaTelemetryEvent
// 0x0018
struct FWorldEdgeItemDroppedInRedSeaTelemetryEvent
{
	struct FVector                                     DropLocation;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TeleportLocation;                                         // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
