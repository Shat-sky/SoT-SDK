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

// Enum PrioritisedPrompts.EPromptEvaluatedType
enum class EPromptEvaluatedType : uint8_t
{
	EPromptEvaluatedType__ShowPrompt = 0,
	EPromptEvaluatedType__ShowNoPrompt = 1,
	EPromptEvaluatedType__CompleteCoordinator = 2,
	EPromptEvaluatedType__EPromptEvaluatedType_MAX = 3
};


// Enum PrioritisedPrompts.EPromptStartStop
enum class EPromptStartStop : uint8_t
{
	EPromptStartStop__Start        = 0,
	EPromptStartStop__Stop         = 1,
	EPromptStartStop__EPromptStartStop_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
