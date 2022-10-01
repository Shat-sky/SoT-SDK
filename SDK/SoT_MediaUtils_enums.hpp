#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting = 0,
	EMediaPlayerOptionBooleanOverride__Enabled = 1,
	EMediaPlayerOptionBooleanOverride__Disabled = 2,
	EMediaPlayerOptionBooleanOverride__EMediaPlayerOptionBooleanOverride_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
