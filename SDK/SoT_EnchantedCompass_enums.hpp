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

// Enum EnchantedCompass.ETargetUpdateReason
enum class ETargetUpdateReason : uint8_t
{
	ETargetUpdateReason__Update    = 0,
	ETargetUpdateReason__Replace   = 1,
	ETargetUpdateReason__ETargetUpdateReason_MAX = 2
};


// Enum EnchantedCompass.ERotatingCompassRotationStates
enum class ERotatingCompassRotationStates : uint8_t
{
	ERotatingCompassRotationStates__RotationSequence = 0,
	ERotatingCompassRotationStates__SplinePath = 1,
	ERotatingCompassRotationStates__MAX = 2,
	ERotatingCompassRotationStates__ERotatingCompassRotationStates_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
