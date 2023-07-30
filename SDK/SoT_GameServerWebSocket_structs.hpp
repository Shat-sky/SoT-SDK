#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameServerWebSocket.GameServerWebSocketEntityEvent
// 0x0028
struct FGameServerWebSocketEntityEvent
{
	class FString                                      EventID;                                                  // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      ServerId;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FDateTime                                   ServerTimeUTC;                                            // 0x0020(0x0008) (ZeroConstructor)
};

// ScriptStruct GameServerWebSocket.EventOverMemoryThreshold
// 0x0020
struct FEventOverMemoryThreshold
{
	class FString                                      EventID;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FDateTime                                   ServerTimeUTC;                                            // 0x0010(0x0008) (ZeroConstructor)
	int                                                MemoryUsedPercentage;                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GameServerWebSocket.EventEntityIdsSwitch
// 0x0028
struct FEventEntityIdsSwitch
{
	struct FName                                       Event;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        EnableEntityIds;                                          // 0x0008(0x0010) (ZeroConstructor)
	TArray<int>                                        DisableEntityIds;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct GameServerWebSocket.EntityEventSubscriptionGameServerRequestModel
// 0x0030
struct FEntityEventSubscriptionGameServerRequestModel
{
	TArray<struct FEventEntityIdsSwitch>               EventsSwitched;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               EventsWithAllIdsEnabled;                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FName>                               EventsWithAllIdsDisabled;                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct GameServerWebSocket.GlobalEventSubscriptionGameServerRequestModel
// 0x0020
struct FGlobalEventSubscriptionGameServerRequestModel
{
	TArray<struct FName>                               EnableEvents;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               DisableEvents;                                            // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
