#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_GameEventsOnDemandFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameEventsOnDemandFramework.GameEventAvailabilityData
// 0x0030
struct FGameEventAvailabilityData
{
	class FString                                      EventName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EGameEventCategory>                    EventCategory;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAvailabilityState>                    AvailabilityState;                                        // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	class UClass*                                      ShipSizeLimit;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               ParticipatingCrewIds;                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewSentToSinkingTunnel
// 0x0010
struct FGameEventOnDemandCrewSentToSinkingTunnel
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandDeactivated
// 0x0010
struct FGameEventOnDemandDeactivated
{
	TArray<struct FGuid>                               OnDemandCrewIds;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandDeactivatedTelemetryEvent
// 0x0030
struct FGameEventOnDemandDeactivatedTelemetryEvent
{
	class FString                                      ShipSizeLimit;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               ParticipatingOnDemandCrews;                               // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               ParticipatingCrews;                                       // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandActivatedTelemetryEvent
// 0x0004
struct FGameEventOnDemandActivatedTelemetryEvent
{
	int                                                NumCrewsOnDemandLimit;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewCancelledVoyageTelemetryEvent
// 0x0001
struct FGameEventOnDemandCrewCancelledVoyageTelemetryEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewSinkingTelemetryEvent
// 0x0001
struct FGameEventOnDemandCrewSinkingTelemetryEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewScuttledTelemetryEvent
// 0x0001
struct FGameEventOnDemandCrewScuttledTelemetryEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewJoinedTelemetryEvent
// 0x0010
struct FGameEventOnDemandCrewJoinedTelemetryEvent
{
	class FString                                      ShipType;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandBaseTelemetryFragmentInput
// 0x001F (0x0020 - 0x0001)
struct FGameEventOnDemandBaseTelemetryFragmentInput : public FTelemetryFragmentInput
{
	class FString                                      GameEventType;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       GameEventOnDemandId;                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandBaseTelemetryFragment
// 0x0020
struct FGameEventOnDemandBaseTelemetryFragment
{
	class FString                                      GameEventType;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       GameEventOnDemandId;                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameEventsOnDemandFramework.SkellyFortGameEventOnDemandDeactivatedTelemetryEvent
// 0x0018 (0x0048 - 0x0030)
struct FSkellyFortGameEventOnDemandDeactivatedTelemetryEvent : public FGameEventOnDemandDeactivatedTelemetryEvent
{
	struct FName                                       FortName;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       FortId;                                                   // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameEventsOnDemandFramework.SkellyFortGameEventOnDemandActivatedTelemetryEvent
// 0x0018 (0x001C - 0x0004)
struct FSkellyFortGameEventOnDemandActivatedTelemetryEvent : public FGameEventOnDemandActivatedTelemetryEvent
{
	struct FName                                       FortName;                                                 // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       FortId;                                                   // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
