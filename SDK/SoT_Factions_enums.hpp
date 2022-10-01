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

// Enum Factions.EStreakPartType
enum class EStreakPartType : uint8_t
{
	EStreakPartType__LeftHull      = 0,
	EStreakPartType__RightHull     = 1,
	EStreakPartType__Foremast      = 2,
	EStreakPartType__EStreakPartType_MAX = 3
};


// Enum Factions.EFactionType
enum class EFactionType : uint8_t
{
	EFactionType__FactionG         = 0,
	EFactionType__FactionB         = 1,
	EFactionType__EFactionType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
