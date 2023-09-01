#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_ObjectMessaging_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SplinePathing.FixedSplinePathingActorMovementEndedEvent
// 0x0001
struct FFixedSplinePathingActorMovementEndedEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SplinePathing.FixedSplinePathingActorMovementStartedEvent
// 0x0001
struct FFixedSplinePathingActorMovementStartedEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SplinePathing.SplinePathingActorAtDestination
// 0x0008
struct FSplinePathingActorAtDestination
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
