#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum EObjectTargetingStates.EObjectTargetingStates
enum class EObjectTargetingStates : uint8_t
{
	EObjectTargetingStates__NewEnumerator0 = 0,
	None                           = 1,
	EObjectTargetingStates__NewEnumerator4 = 2,
	None01                         = 3,
	NameProperty                   = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
