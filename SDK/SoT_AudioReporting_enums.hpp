#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AudioReporting.EAudioReactionState
enum class EAudioReactionState : uint8_t
{
	Normal                         = 0,
	MaxDurationExceeded            = 1,
	MinDurationNotMet              = 2,
	EAudioReactionState_MAX        = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
