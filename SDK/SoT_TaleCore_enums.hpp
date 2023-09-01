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

// Enum TaleCore.ETaleStructStatus
enum class ETaleStructStatus : uint8_t
{
	ETaleStructStatus__Dirty       = 0,
	ETaleStructStatus__UpToData    = 1,
	ETaleStructStatus__Error       = 2,
	ETaleStructStatus__ETaleStructStatus_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
