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

// Enum Tales.ETaleQuestStepBeginMode
enum class ETaleQuestStepBeginMode : uint8_t
{
	ETaleQuestStepBeginMode__Cold  = 0,
	ETaleQuestStepBeginMode__Warm  = 1,
	ETaleQuestStepBeginMode__ETaleQuestStepBeginMode_MAX = 2
};


// Enum Tales.ETaleQuestStepState
enum class ETaleQuestStepState : uint8_t
{
	ETaleQuestStepState__Inactive  = 0,
	ETaleQuestStepState__Active    = 1,
	ETaleQuestStepState__PendingCompletion = 2,
	ETaleQuestStepState__Completed = 3,
	ETaleQuestStepState__ETaleQuestStepState_MAX = 4
};


// Enum Tales.ETaleQuestQueryableStateDataIntComparison
enum class ETaleQuestQueryableStateDataIntComparison : uint8_t
{
	ETaleQuestQueryableStateDataIntComparison__Equal = 0,
	ETaleQuestQueryableStateDataIntComparison__Greater = 1,
	ETaleQuestQueryableStateDataIntComparison__GreaterOrEqual = 2,
	ETaleQuestQueryableStateDataIntComparison__Less = 3,
	ETaleQuestQueryableStateDataIntComparison__LessOrEqual = 4,
	ETaleQuestQueryableStateDataIntComparison__ETaleQuestQueryableStateDataIntComparison_MAX = 5
};


// Enum Tales.ETaleInteractionState
enum class ETaleInteractionState : uint8_t
{
	ETaleInteractionState__Enabled = 0,
	ETaleInteractionState__Disabled = 1,
	ETaleInteractionState__ETaleInteractionState_MAX = 2
};


// Enum Tales.ELostShipmentsIslandTypes
enum class ELostShipmentsIslandTypes : uint8_t
{
	ELostShipmentsIslandTypes__Feature = 0,
	ELostShipmentsIslandTypes__Resource = 1,
	ELostShipmentsIslandTypes__Seapost = 2,
	ELostShipmentsIslandTypes__Outpost = 3,
	ELostShipmentsIslandTypes__Fort = 4,
	ELostShipmentsIslandTypes__ELostShipmentsIslandTypes_MAX = 5
};


// Enum Tales.EModifyAtIndexType
enum class EModifyAtIndexType : uint8_t
{
	EModifyAtIndexType__AddPageAtIndex = 0,
	EModifyAtIndexType__ReplacePageAtIndex = 1,
	EModifyAtIndexType__ReplacePageFromIndex = 2,
	EModifyAtIndexType__EModifyAtIndexType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
