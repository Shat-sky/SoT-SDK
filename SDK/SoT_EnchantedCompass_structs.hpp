#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EnchantedCompass.ETargetUpdateReason
enum class ETargetUpdateReason : uint8_t
{
	ETargetUpdateReason__Update    = 0,
	ETargetUpdateReason__ETargetUpdateReason_MAX = 1
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
