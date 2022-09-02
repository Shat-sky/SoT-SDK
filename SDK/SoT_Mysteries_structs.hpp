#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Mysteries.AbandonedNoteWeightedTextEntry
// 0x0078
struct FAbandonedNoteWeightedTextEntry
{
	struct FText                                       Title;                                                    // 0x0000(0x0038) (Edit)
	struct FText                                       Body;                                                     // 0x0038(0x0038) (Edit)
	float                                              Weight;                                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Mysteries.SirenPuzzleLockState
// 0x0030
struct FSirenPuzzleLockState
{
	struct FGuid                                       LockId;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandmarkReactionKeyFrame>           UnlockReactions;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGuid>                               UnlockingCrews;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mysteries.SirenPuzzleCompleteEvent
// 0x0001
struct FSirenPuzzleCompleteEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
