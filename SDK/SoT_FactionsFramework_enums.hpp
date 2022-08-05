#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FactionsFramework.EFactionDefenderLootLevel
enum class EFactionDefenderLootLevel : uint8_t
{
	EFactionDefenderLootLevel__NotDefended = 0,
	EFactionDefenderLootLevel__NoLoot = 1,
	EFactionDefenderLootLevel__Low = 2,
	EFactionDefenderLootLevel__Medium = 3,
	EFactionDefenderLootLevel__High = 4,
	EFactionDefenderLootLevel__EFactionDefenderLootLevel_MAX = 5
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
