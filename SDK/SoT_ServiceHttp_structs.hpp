#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ServiceHttp.EServiceHttpMetricsLevel
enum class EServiceHttpMetricsLevel : uint8_t
{
	EServiceHttpMetricsLevel__None = 0,
	EServiceHttpMetricsLevel__All  = 1,
	EServiceHttpMetricsLevel__EServiceHttpMetricsLevel_MAX = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
