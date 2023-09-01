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


// Enum WaterSlide.EZiplineInitialSwingDirection
enum class EZiplineInitialSwingDirection : uint8_t
{
	EZiplineInitialSwingDirection__Right = 0,
	EZiplineInitialSwingDirection__Left = 1,
	EZiplineInitialSwingDirection__EZiplineInitialSwingDirection_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
