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

// Enum CompetitiveVoyages.ECompetitiveVoyagesMainVoyageState
enum class ECompetitiveVoyagesMainVoyageState : uint8_t
{
	ECompetitiveVoyagesMainVoyageState__None = 0,
	ECompetitiveVoyagesMainVoyageState__TreasureHunt = 1,
	ECompetitiveVoyagesMainVoyageState__HandIn = 2,
	ECompetitiveVoyagesMainVoyageState__Max = 3,
	ECompetitiveVoyagesMainVoyageState__ECompetitiveVoyagesMainVoyageState_MAX = 4
};


// Enum CompetitiveVoyages.ECompetitiveVoyagesOptInState
enum class ECompetitiveVoyagesOptInState : uint8_t
{
	ECompetitiveVoyagesOptInState__None = 0,
	ECompetitiveVoyagesOptInState__StartingVoyage = 1,
	ECompetitiveVoyagesOptInState__LoadingVoyage = 2,
	ECompetitiveVoyagesOptInState__Waiting = 3,
	ECompetitiveVoyagesOptInState__OptedIn = 4,
	ECompetitiveVoyagesOptInState__OptedOut = 5,
	ECompetitiveVoyagesOptInState__OptedInAborted = 6,
	ECompetitiveVoyagesOptInState__VoyageCompleted = 7,
	ECompetitiveVoyagesOptInState__Max = 8,
	ECompetitiveVoyagesOptInState__ECompetitiveVoyagesOptInState_MAX = 9
};


// Enum CompetitiveVoyages.ECompetitiveVoyagesState
enum class ECompetitiveVoyagesState : uint8_t
{
	ECompetitiveVoyagesState__None = 0,
	ECompetitiveVoyagesState__Locked = 1,
	ECompetitiveVoyagesState__Finished = 2,
	ECompetitiveVoyagesState__Max  = 3,
	ECompetitiveVoyagesState__ECompetitiveVoyagesState_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
