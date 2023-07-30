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

// Enum WaterSlide.ERideDirection
enum class ERideDirection : uint8_t
{
	ERideDirection__Forwards       = 0,
	ERideDirection__Backwards      = 1,
	ERideDirection__ERideDirection_MAX = 2
};


// Enum WaterSlide.EZiplineAttachPointConfig
enum class EZiplineAttachPointConfig : uint8_t
{
	EZiplineAttachPointConfig__NoAttachPoints = 0,
	EZiplineAttachPointConfig__AttachPointAtStart = 1,
	EZiplineAttachPointConfig__AttachPointAtEnd = 2,
	EZiplineAttachPointConfig__AttachPointAtStartAndEnd = 3,
	EZiplineAttachPointConfig__EZiplineAttachPointConfig_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
