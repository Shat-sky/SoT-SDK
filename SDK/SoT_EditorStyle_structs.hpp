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

// Enum EditorStyle.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	CVD_NormalVision               = 0,
	None                           = 1,
	CVD_Protanopia                 = 2,
	None01                         = 3,
	CVD_MAX                        = 4,
	EWaitAttributeChangeComparison__None = 5,
	None02                         = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
