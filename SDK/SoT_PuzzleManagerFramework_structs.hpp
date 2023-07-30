#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PuzzleManagerFramework.PuzzleSwitchResetEvent
// 0x0001
struct FPuzzleSwitchResetEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct PuzzleManagerFramework.PuzzleSwitchActivationRequestedAtIndexEvent
// 0x0004
struct FPuzzleSwitchActivationRequestedAtIndexEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct PuzzleManagerFramework.PuzzleSwitchActionStateChangedAtIndexEvent
// 0x0008
struct FPuzzleSwitchActionStateChangedAtIndexEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
