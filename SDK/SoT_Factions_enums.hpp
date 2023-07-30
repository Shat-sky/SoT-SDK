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

// Enum Factions.EStreakPartType
enum class EStreakPartType : uint8_t
{
	EStreakPartType__LeftHull      = 0,
	EStreakPartType__RightHull     = 1,
	EStreakPartType__Foremast      = 2,
	EStreakPartType__EStreakPartType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
