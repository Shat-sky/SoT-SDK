#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AudioReporting_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_DebugMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioReporting.EventReactionDesc
// 0x0028
struct FEventReactionDesc
{
	class UClass*                                      ReactionType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDuration;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class UWwiseEvent*>                         TriggerEvents;                                            // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AudioReporting.ActiveAudioReaction
// 0x0010
struct FActiveAudioReaction
{
	class UAudioReportReaction*                        Reaction;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
