#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaServerMigration.IncomingMigrationPreventionZone
// 0x000C
struct FIncomingMigrationPreventionZone
{
	struct FVector2D                                   Location;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupCompleteEvent
// 0x0001
struct FServerMigrationSetupCompleteEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupRequestEvent
// 0x0001
struct FServerMigrationSetupRequestEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationReadyToTransferActors
// 0x0090
struct FServerMigrationReadyToTransferActors
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationAboutToStartEvent
// 0x0020
struct FServerMigrationAboutToStartEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationAbortEvent
// 0x0010
struct FServerMigrationAbortEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationCompleteEvent
// 0x0001
struct FServerMigrationCompleteEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationRefusedEvent
// 0x0020
struct FServerMigrationRefusedEvent
{
	struct FGuid                                       MigrationId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               CrewIds;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaServerMigration.ServerMigrationInstanceEventBase
// 0x0020
struct FServerMigrationInstanceEventBase
{
	struct FGuid                                       ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MigrationId;                                              // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationAbortedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationAbortedEvent : public FServerMigrationInstanceEventBase
{

};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationCompletedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationCompletedEvent : public FServerMigrationInstanceEventBase
{

};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationStartedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationStartedEvent : public FServerMigrationInstanceEventBase
{

};

// ScriptStruct AthenaServerMigration.ServerMigrationRequestEvent
// 0x0050
struct FServerMigrationRequestEvent
{
	struct FGuid                                       MigrationId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      DestinationAddress;                                       // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               CrewIds;                                                  // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      SubMode;                                                  // 0x0030(0x0010) (ZeroConstructor)
	TArray<TEnumAsByte<EClientMatchmakingRequestReason>> MatchmakingReasons;                                       // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaServerMigration.ServerMigrationRequestBroadcastEvent
// 0x0020
struct FServerMigrationRequestBroadcastEvent
{
	class FString                                      DestinationAddress;                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       CrewId;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaServerMigration.PrepareForWorldSwitchRpc
// 0x0000 (0x0010 - 0x0010)
struct FPrepareForWorldSwitchRpc : public FBoxedRpc
{

};

// ScriptStruct AthenaServerMigration.AthenaServerMigrationClientContext
// 0x0010
struct FAthenaServerMigrationClientContext
{
	class FString                                      StampId;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
