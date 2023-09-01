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

// Enum WwiseAudioCore.EWwiseEventDurationType
enum class EWwiseEventDurationType : uint8_t
{
	EWwiseEventDurationType__OneShot = 0,
	EWwiseEventDurationType__Mixed = 1,
	EWwiseEventDurationType__Infinite = 2,
	EWwiseEventDurationType__Unknown = 3,
	EWwiseEventDurationType__EWwiseEventDurationType_MAX = 4
};


// Enum WwiseAudioCore.EWwiseAsyncIOPriorityDisplay
enum class EWwiseAsyncIOPriorityDisplay : uint8_t
{
	EWwiseAsyncIOPriorityDisplay__Low = 0,
	EWwiseAsyncIOPriorityDisplay__BelowNormal = 1,
	EWwiseAsyncIOPriorityDisplay__Normal = 2,
	EWwiseAsyncIOPriorityDisplay__High = 3,
	EWwiseAsyncIOPriorityDisplay__EWwiseAsyncIOPriorityDisplay_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
