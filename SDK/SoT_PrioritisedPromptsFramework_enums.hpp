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

// Enum PrioritisedPromptsFramework.EPromptPriority
enum class EPromptPriority : uint8_t
{
	EPromptPriority__Low           = 0,
	EPromptPriority__High          = 1,
	EPromptPriority__EPromptPriority_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
