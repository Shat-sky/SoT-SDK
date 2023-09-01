#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Repair_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Repair.ShipPartDamagePersistenceModel
// 0x001F (0x0020 - 0x0001)
struct FShipPartDamagePersistenceModel : public FPersistenceModel
{
	TArray<TEnumAsByte<ERepairableState>>              ComponentRepairableStates;                                // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Identifier;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Repair.DamageZoneRepairableStateChangedEvent
// 0x0010
struct FDamageZoneRepairableStateChangedEvent
{
	class AActor*                                      DamageZoneActor;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERepairableState>                      RepairableState;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Repair.RepairableComponentRepairableStateChangedEvent
// 0x0010
struct FRepairableComponentRepairableStateChangedEvent
{
	class UActorComponent*                             RepairableComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ERepairableState>                      RepairableState;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Repair.EventRepairableObjectRepairEndedEvent
// 0x0028
struct FEventRepairableObjectRepairEndedEvent
{
	class UObject*                                     Repairable;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AActor*                                      RepairerActor;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              RepairPercentage;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               RepairCompleted;                                          // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Repair.EventRepairableObjectDestroyed
// 0x0001
struct FEventRepairableObjectDestroyed
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Repair.EventPlayerUndoRepairEnd
// 0x0008
struct FEventPlayerUndoRepairEnd
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Repair.EventPlayerUndoRepairCompleted
// 0x0008
struct FEventPlayerUndoRepairCompleted
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Repair.EventPlayerUndoRepairStart
// 0x0008
struct FEventPlayerUndoRepairStart
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
