#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_GameEventsOnDemandFramework_classes.hpp"
#include "SoT_ContestMatchmaking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameEventsOnDemand.GameEventAvailabilityTelemetryData
// 0x0018
struct FGameEventAvailabilityTelemetryData
{
	class FString                                      EventName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EGameEventCategory>                    EventCategory;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAvailabilityState>                    AvailabilityState;                                        // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct GameEventsOnDemand.ProcessGameEventOnDemandAvailabilityTelemetryEvent
// 0x0010
struct FProcessGameEventOnDemandAvailabilityTelemetryEvent
{
	TArray<struct FGameEventAvailabilityTelemetryData> GameEventAvailabilityData;                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GameEventsOnDemand.AdvertiseGameEventOnDemandAvailabilityTelemetryEvent
// 0x0020
struct FAdvertiseGameEventOnDemandAvailabilityTelemetryEvent
{
	struct FGameEventAvailabilityModel                 GameEventAvailability;                                    // 0x0000(0x0020)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
