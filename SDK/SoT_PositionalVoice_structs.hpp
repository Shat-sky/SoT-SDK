#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_RareAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PositionalVoice.EVoiceChatState
enum class EVoiceChatState : uint8_t
{
	EVoiceChatState__Silent        = 0,
	EVoiceChatState__Muted         = 1,
	EVoiceChatState__Deafened      = 2,
	EVoiceChatState__EVoiceChatState_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
