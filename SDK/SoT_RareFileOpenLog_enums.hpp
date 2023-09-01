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

// Enum RareFileOpenLog.EOpenOrderDataSource
enum class EOpenOrderDataSource : uint8_t
{
	EOpenOrderDataSource__LocalDisk = 0,
	EOpenOrderDataSource__DiagnosticsService = 1,
	EOpenOrderDataSource__EOpenOrderDataSource_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
