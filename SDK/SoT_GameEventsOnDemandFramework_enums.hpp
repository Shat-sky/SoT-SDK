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

// Enum GameEventsOnDemandFramework.EGameEventCategory
enum class EGameEventCategory : uint8_t
{
	EGameEventCategory__MainEvent  = 0,
	EGameEventCategory__SubEvent   = 1,
	EGameEventCategory__EGameEventCategory_MAX = 2
};


// Enum GameEventsOnDemandFramework.EAvailabilityState
enum class EAvailabilityState : uint8_t
{
	EAvailabilityState__Inactive   = 0,
	EAvailabilityState__Available_Active = 1,
	EAvailabilityState__Available_ActiveEngaged = 2,
	EAvailabilityState__Unavailable_CrewLimitReached = 3,
	EAvailabilityState__Unavailable_Cooldown = 4,
	EAvailabilityState__Unavailable_ProgressedPastLimit = 5,
	EAvailabilityState__EAvailabilityState_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
