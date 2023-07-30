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

// Enum RareGameService.ERareGameServiceRole
enum class ERareGameServiceRole : uint8_t
{
	ERareGameServiceRole__None     = 0,
	ERareGameServiceRole__Server   = 1,
	ERareGameServiceRole__Client   = 2,
	ERareGameServiceRole__ServerAndClient = 3,
	ERareGameServiceRole__ERareGameServiceRole_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
