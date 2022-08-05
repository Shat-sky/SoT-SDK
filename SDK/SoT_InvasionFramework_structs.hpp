#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_InvasionFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_FactionsFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InvasionFramework.InvasionCrewData
// 0x0014
struct FInvasionCrewData
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInvasionStatus>                       InvasionStatus;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct InvasionFramework.InvasionParticipatingCrewData
// 0x0038
struct FInvasionParticipatingCrewData
{
	TArray<struct FInvasionCrewData>                   CrewIds;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<class UCrewVoyageParticipant*>              Participants;                                             // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct InvasionFramework.InvasionEndedTelemetryEvent
// 0x0040
struct FInvasionEndedTelemetryEvent
{
	TArray<struct FInvasionCrewData>                   Participants;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FInvasionCrewData                           Winner;                                                   // 0x0010(0x0014) (BlueprintVisible, BlueprintReadOnly)
	float                                              InvasionDurationInSeconds;                                // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FCrewFactionTelemetryData>           ParticipantFactionData;                                   // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EInvasionEndedReason>                  InvasionEndedReason;                                      // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
