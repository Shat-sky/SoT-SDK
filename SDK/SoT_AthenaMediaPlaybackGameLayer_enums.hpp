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

// Enum AthenaMediaPlaybackGameLayer.EAthenaMediaState
enum class EAthenaMediaState : uint8_t
{
	EAthenaMediaState__Closed      = 0,
	EAthenaMediaState__Opened      = 1,
	EAthenaMediaState__Error       = 2,
	EAthenaMediaState__Buffering   = 3,
	EAthenaMediaState__Playing     = 4,
	EAthenaMediaState__Paused      = 5,
	EAthenaMediaState__Ended       = 6,
	EAthenaMediaState__EAthenaMediaState_MAX = 7
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
