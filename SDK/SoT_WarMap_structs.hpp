#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Interaction_classes.hpp"
#include "SoT_Factions_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WarMap.WarMapVoteAddedEvent
// 0x0008
struct FWarMapVoteAddedEvent
{
	class AActor*                                      Voter;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WarMap.EventLocalPlayerOpenedWarMap
// 0x0008
struct FEventLocalPlayerOpenedWarMap
{
	class UCompany*                                    Faction;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WarMap.EventWarMapHardModeStateChanged
// 0x0001
struct FEventWarMapHardModeStateChanged
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct WarMap.EventWarMapStateChanged
// 0x0010
struct FEventWarMapStateChanged
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      WarMapProposalContainer;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
