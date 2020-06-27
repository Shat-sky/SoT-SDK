#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Renderer.ERefChangeFadPhase
enum class ERefChangeFadPhase : uint8_t
{
	NoFading                       = 0,
	None                           = 1,
	ESimulationQuery__CollisionOverlap = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
