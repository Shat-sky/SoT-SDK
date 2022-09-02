#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FactionsFramework.EEnemyFactionShipRangeState
enum class EEnemyFactionShipRangeState : uint8_t
{
	EEnemyFactionShipRangeState__OutOfRange = 0,
	EEnemyFactionShipRangeState__InRangeForEmergent = 1,
	EEnemyFactionShipRangeState__InRangeForInvasion = 2,
	EEnemyFactionShipRangeState__EEnemyFactionShipRangeState_MAX = 3
};


// Enum FactionsFramework.EFactionLeftReason
enum class EFactionLeftReason : uint8_t
{
	EFactionLeftReason__Defeated   = 0,
	EFactionLeftReason__Voted      = 1,
	EFactionLeftReason__CrewDestroyed = 2,
	EFactionLeftReason__EFactionLeftReason_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
