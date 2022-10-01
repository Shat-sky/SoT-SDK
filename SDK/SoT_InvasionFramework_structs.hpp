#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_InvasionFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_FactionsFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InvasionFramework.InvasionCrewData
// 0x0020
struct FInvasionCrewData
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInvasionStatus>                       InvasionStatus;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       FactionIdentifier;                                        // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ReadyForInvasion;                                         // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct InvasionFramework.InvasionParticipatingCrewData
// 0x0070
struct FInvasionParticipatingCrewData
{
	TArray<struct FInvasionCrewData>                   CrewIds;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<class UCrewVoyageParticipant*>              Participants;                                             // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) MISSED OFFSET
};

// ScriptStruct InvasionFramework.TimeStampedInvasionMusicState
// 0x0018
struct FTimeStampedInvasionMusicState
{
	class UCompany*                                    Faction;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInvasionMusicState>                   InvasionMusicState;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	double                                             EnteredStateServerTimeStamp;                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct InvasionFramework.ReplicatedInvasionCrewMusicState
// 0x0028
struct FReplicatedInvasionCrewMusicState
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FTimeStampedInvasionMusicState              CurrentTimeStampedMusicState;                             // 0x0010(0x0018)
};

// ScriptStruct InvasionFramework.InvasionCrewMusicStateChangedClientEvent
// 0x0018
struct FInvasionCrewMusicStateChangedClientEvent
{
	struct FTimeStampedInvasionMusicState              InvasionCrewMusicState;                                   // 0x0000(0x0018)
};

// ScriptStruct InvasionFramework.InvasionEndedTelemetryEvent
// 0x0050
struct FInvasionEndedTelemetryEvent
{
	TArray<struct FInvasionCrewData>                   Participants;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FInvasionCrewData                           Winner;                                                   // 0x0010(0x0020) (BlueprintVisible, BlueprintReadOnly)
	float                                              InvasionDurationInSeconds;                                // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FCrewFactionTelemetryData>           ParticipantFactionData;                                   // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EInvasionEndedReason>                  InvasionEndedReason;                                      // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
