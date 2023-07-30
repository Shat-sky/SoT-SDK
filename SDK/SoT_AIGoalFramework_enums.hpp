#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AIGoalFramework.EAIGoalTargetChangedReason
enum class EAIGoalTargetChangedReason : uint8_t
{
	EAIGoalTargetChangedReason__NoPreviousTarget = 0,
	EAIGoalTargetChangedReason__TargetOutOfRange = 1,
	EAIGoalTargetChangedReason__TargetEnteredInvalidMovementMode = 2,
	EAIGoalTargetChangedReason__HigherPriorityTargetFound = 3,
	EAIGoalTargetChangedReason__EAIGoalTargetChangedReason_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
