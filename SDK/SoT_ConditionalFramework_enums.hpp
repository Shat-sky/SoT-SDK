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

// Enum ConditionalFramework.EPayloadObjectOption
enum class EPayloadObjectOption : uint8_t
{
	EPayloadObjectOption__Object   = 0,
	EPayloadObjectOption__PawnObject = 1,
	EPayloadObjectOption__ControllerObject = 2,
	EPayloadObjectOption__EPayloadObjectOption_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
