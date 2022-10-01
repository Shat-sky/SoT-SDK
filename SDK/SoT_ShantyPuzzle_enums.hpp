#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ShantyPuzzle.EShantyPuzzleCompletionReactionState
enum class EShantyPuzzleCompletionReactionState : uint8_t
{
	EShantyPuzzleCompletionReactionState__None = 0,
	EShantyPuzzleCompletionReactionState__CompletionStarted = 1,
	EShantyPuzzleCompletionReactionState__CompletionAborted = 2,
	EShantyPuzzleCompletionReactionState__UnlockComplete = 3,
	EShantyPuzzleCompletionReactionState__EShantyPuzzleCompletionReactionState_MAX = 4
};


// Enum ShantyPuzzle.EGlitterBeardPlayerPuzzleOutcome
enum class EGlitterBeardPlayerPuzzleOutcome : uint8_t
{
	EGlitterBeardPlayerPuzzleOutcome__WrongTime = 0,
	EGlitterBeardPlayerPuzzleOutcome__WrongInstrument = 1,
	EGlitterBeardPlayerPuzzleOutcome__WrongShanty = 2,
	EGlitterBeardPlayerPuzzleOutcome__ConditionsMetForThisPosition = 3,
	EGlitterBeardPlayerPuzzleOutcome__EGlitterBeardPlayerPuzzleOutcome_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
