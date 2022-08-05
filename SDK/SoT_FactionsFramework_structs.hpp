#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_FactionsFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FactionsFramework.CrewFactionEntryData
// 0x0048
struct FCrewFactionEntryData
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SessionId;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Faction;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Streak;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SandsOfFate;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CooldownTimeStamp;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInInvasion;                                             // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0035(0x0013) MISSED OFFSET
};

// ScriptStruct FactionsFramework.CrewFactionTelemetryData
// 0x0030
struct FCrewFactionTelemetryData
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Faction;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Streak;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SandsOfFate;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               CrewsAlreadySunk;                                         // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct FactionsFramework.CrewsSunkShipEvent
// 0x0020
struct FCrewsSunkShipEvent
{
	TArray<struct FGuid>                               AttackingCrewIds;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       SunkShipCrewId;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactionsFramework.CrewLeftFaction
// 0x0020
struct FCrewLeftFaction
{
	struct FGuid                                       LeavingCrewId;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FactionLeft;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactionLeftReason>                    FactionLeftReason;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FactionsFramework.CrewJoinedFaction
// 0x0018
struct FCrewJoinedFaction
{
	struct FGuid                                       JoiningCrewId;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FactionJoined;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
