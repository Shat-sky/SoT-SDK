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

// Enum Tutorial.ETutorialType
enum class ETutorialType : uint8_t
{
	ETutorialType__Undecided       = 0,
	ETutorialType__NoTutorial      = 1,
	ETutorialType__MaidenVoyage    = 2,
	ETutorialType__BeachNPCSpawnFlow = 3,
	ETutorialType__CompanyOnBoarding = 4,
	ETutorialType__Captaincy       = 5,
	ETutorialType__ETutorialType_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
