#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AIGoalFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIGoalFramework.AIGoalMovementModeFilter
// 0x0020
struct FAIGoalMovementModeFilter
{
	TArray<TEnumAsByte<EMovementMode>>                 DisallowedMovementModes;                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<ECustomMovementModeId>>         DisallowedCustomMovementModes;                            // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AIGoalFramework.EventAIGoalHighPriorityTargetSuggestion
// 0x0008
struct FEventAIGoalHighPriorityTargetSuggestion
{
	class AActor*                                      HighPriorityTarget;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AIGoalFramework.EventAIGoalTargetActorChanged
// 0x0018
struct FEventAIGoalTargetActorChanged
{
	class AActor*                                      PreviousTargetActor;                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      NewTargetActor;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EAIGoalTargetChangedReason>            TargetChangedReason;                                      // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         InvalidMovementMode;                                      // 0x0011(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
