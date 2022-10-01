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

// Enum InvasionFramework.EInvasionStatus
enum class EInvasionStatus : uint8_t
{
	EInvasionStatus__None          = 0,
	EInvasionStatus__Aggressive    = 1,
	EInvasionStatus__Passive       = 2,
	EInvasionStatus__EInvasionStatus_MAX = 3
};


// Enum InvasionFramework.EInvasionMusicState
enum class EInvasionMusicState : uint8_t
{
	EInvasionMusicState__None      = 0,
	EInvasionMusicState__EnteringDive = 1,
	EInvasionMusicState__Emerging  = 2,
	EInvasionMusicState__EInvasionMusicState_MAX = 3
};


// Enum InvasionFramework.EInvasionEndedReason
enum class EInvasionEndedReason : uint8_t
{
	EInvasionEndedReason__ShipSunk = 0,
	EInvasionEndedReason__ParticipantLeftFaction = 1,
	EInvasionEndedReason__ParticipantLeftServer = 2,
	EInvasionEndedReason__InvasionTimeout = 3,
	EInvasionEndedReason__None     = 4,
	EInvasionEndedReason__EInvasionEndedReason_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
