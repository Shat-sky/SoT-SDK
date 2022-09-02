#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ContestMatchmaking_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ContestMatchmaking.ContestMatchmakingFactionMapEntry
// 0x0010
struct FContestMatchmakingFactionMapEntry
{
	class UClass*                                      GameFaction;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPvPFaction>                           MatchmakingFaction;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ContestMatchmaking.ServerQueueWaitTimeModel
// 0x0020
struct FServerQueueWaitTimeModel
{
	class FString                                      QueueScopeId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FTimespan                                   AvgWaitTime;                                              // 0x0010(0x0008) (ZeroConstructor)
	struct FTimespan                                   MaxWaitTime;                                              // 0x0018(0x0008) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ServerQueueWaitTimesResponseModel
// 0x0010
struct FServerQueueWaitTimesResponseModel
{
	TArray<struct FServerQueueWaitTimeModel>           QueueWaitTimes;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ServerQueueWaitTimesRequestModel
// 0x0048
struct FServerQueueWaitTimesRequestModel
{
	class FString                                      ServerLocation;                                           // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           FeatureHash;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      PrivateServerId;                                          // 0x0018(0x0010) (ZeroConstructor)
	TArray<class FString>                              PlayModeTags;                                             // 0x0028(0x0010) (ZeroConstructor)
	class FString                                      PlayModeState;                                            // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ServerCrewModel
// 0x0090
struct FServerCrewModel
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            UserId;                                                   // 0x0010(0x0018)
	struct FGuid                                       ServerId;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      ServerAddress;                                            // 0x0038(0x0010) (ZeroConstructor)
	int                                                SessionType;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           Positions;                                                // 0x0050(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Resources;                                                // 0x0060(0x0010) (ZeroConstructor)
	TEnumAsByte<EPvPFaction>                           PvPFaction;                                               // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                PvPSkillLevel;                                            // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       RivalCrewId;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EClientMatchmakingRequestReason>       MatchmakingRequestReason;                                 // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct ContestMatchmaking.ContestMatchmakingServerRequestModel
// 0x00A0
struct FContestMatchmakingServerRequestModel
{
	struct FGuid                                       ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      ServerAddress;                                            // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      VmId;                                                     // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      PrivateServerId;                                          // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      ServerLocation;                                           // 0x0040(0x0010) (ZeroConstructor)
	uint32_t                                           FeatureHash;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<class FString>                              PlayModeTags;                                             // 0x0058(0x0010) (ZeroConstructor)
	TArray<class FString>                              PlayModeStates;                                           // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FServerCrewModel>                    Crews;                                                    // 0x0078(0x0010) (ZeroConstructor)
	TEnumAsByte<EClientMatchmakingRequestReason>       MatchmakingRequestReason;                                 // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FGuid                                       RequestCorrelationId;                                     // 0x008C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct ContestMatchmaking.ServerCrewResponseModel
// 0x0078
struct FServerCrewResponseModel
{
	TArray<struct FServerCrewModel>                    Crews;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TMap<class FString, class FString>                 OptionalPlayModeInfo;                                     // 0x0010(0x0050) (ZeroConstructor)
	struct FTimespan                                   RetryAfter;                                               // 0x0060(0x0008) (ZeroConstructor)
	struct FTimespan                                   MigrationThreshold;                                       // 0x0068(0x0008) (ZeroConstructor)
	struct FTimespan                                   ExpireAfter;                                              // 0x0070(0x0008) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.OptionalPlayModeModel
// 0x0050
struct FOptionalPlayModeModel
{
	TMap<class FString, class FString>                 OptionalPlayModeMap;                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ExistingServerCrewModel
// 0x0028
struct FExistingServerCrewModel
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                SessionType;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPvPFaction>                           AlignedFaction;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                PvPSkillLevel;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FTimespan                                   TimeInMatchmaking;                                        // 0x0020(0x0008) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ServerRegionModel
// 0x000C
struct FServerRegionModel
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ContestMatchmaking.ServerContendedModel
// 0x0030
struct FServerContendedModel
{
	TArray<struct FVector2D>                           Positions;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FServerRegionModel>                  Regions;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Resources;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ServerCrewRequestModel
// 0x00D0
struct FServerCrewRequestModel
{
	struct FGuid                                       ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      VmId;                                                     // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      PrivateServerId;                                          // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      ServerLocation;                                           // 0x0030(0x0010) (ZeroConstructor)
	uint32_t                                           FeatureHash;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<class FString>                              PlayModeTags;                                             // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      PlayModeState;                                            // 0x0058(0x0010) (ZeroConstructor)
	int                                                CrewCount;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrewCountBucket;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrewMin;                                                  // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrewMax;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        CrewSessionTypes;                                         // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FExistingServerCrewModel>            Crews;                                                    // 0x0088(0x0010) (ZeroConstructor)
	struct FTimespan                                   Uptime;                                                   // 0x0098(0x0008) (ZeroConstructor)
	struct FServerContendedModel                       Contended;                                                // 0x00A0(0x0030)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
