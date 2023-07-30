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

// Enum AdventureOnDemandFramework.EOnDemandQuestResumeConditionMetReason
enum class EOnDemandQuestResumeConditionMetReason : uint8_t
{
	EOnDemandQuestResumeConditionMetReason__ArrivalTunnelComplete = 0,
	EOnDemandQuestResumeConditionMetReason__DiveCancelled = 1,
	EOnDemandQuestResumeConditionMetReason__CrewNotDiving = 2,
	EOnDemandQuestResumeConditionMetReason__None = 3,
	EOnDemandQuestResumeConditionMetReason__EOnDemandQuestResumeConditionMetReason_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
