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

// Enum WwiseAudio.EAnimNotify_WwiseSound_PerspectiveRestriction
enum class EAnimNotify_WwiseSound_PerspectiveRestriction : uint8_t
{
	EAnimNotify_WwiseSound_PerspectiveRestriction__NoRestriction = 0,
	EAnimNotify_WwiseSound_PerspectiveRestriction__FirstPersonOnly = 1,
	EAnimNotify_WwiseSound_PerspectiveRestriction__ThirdPersonOnly = 2,
	EAnimNotify_WwiseSound_PerspectiveRestriction__EAnimNotify_WwiseSound_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
