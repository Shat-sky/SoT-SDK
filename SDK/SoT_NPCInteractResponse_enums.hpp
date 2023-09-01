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

// Enum NPCInteractResponse.EInteractResponseTypeID
enum class EInteractResponseTypeID : uint8_t
{
	EInteractResponseTypeID__Default = 0,
	EInteractResponseTypeID__Positive = 1,
	EInteractResponseTypeID__Negative = 2,
	EInteractResponseTypeID__None  = 3,
	EInteractResponseTypeID__EInteractResponseTypeID_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
