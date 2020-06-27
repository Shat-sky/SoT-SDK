#pragma once

// Sea of Thieves (1.4.16) SDK

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
	None                           = 1,
	EInputControllerType__GamePad  = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
