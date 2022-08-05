#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StoryFramework.StoryFlag
// 0x0008
struct FStoryFlag
{
	struct FName                                       StoryName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct StoryFramework.StoryClaimableResourcesList
// 0x0020
struct FStoryClaimableResourcesList
{
	struct FStoryFlag                                  StoryFlag;                                                // 0x0000(0x0008)
	bool                                               AreResourcesClaimed;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<TWeakObjectPtr<class UStoryClaimableResourceComponent>> ClaimableResources;                                       // 0x0010(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct StoryFramework.LightingZoneStoryRelatedSettings
// 0x0010
struct FLightingZoneStoryRelatedSettings
{
	struct FStoryFlag                                  StoryFlag;                                                // 0x0000(0x0008) (Edit)
	float                                              TargetPointOnCurve;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StoryFramework.NamedPointsGroupActorLocation
// 0x0028
struct FNamedPointsGroupActorLocation
{
	struct FName                                       NamedPointsGroup;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            ActorToSpawn;                                             // 0x0008(0x0020) (Edit)
};

// ScriptStruct StoryFramework.StorySpawnedNamedPointsList
// 0x0018
struct FStorySpawnedNamedPointsList
{
	struct FStoryFlag                                  StoryFlag;                                                // 0x0000(0x0008) (Edit)
	TArray<struct FNamedPointsGroupActorLocation>      GroupLocations;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StoryFramework.ActorLocationPair
// 0x0040
struct FActorLocationPair
{
	struct FStringAssetReference                       SpawnLocation;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DevSpawnLocation;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            ActorToSpawn;                                             // 0x0020(0x0020) (Edit)
};

// ScriptStruct StoryFramework.NamedPointsActorLocation
// 0x0030
struct FNamedPointsActorLocation
{
	struct FStringAssetReference                       ActorWithNamedPointsComponent;                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DevActorWithNamedPointsComponent;                         // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNamedPointsGroupActorLocation>      GroupLocations;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StoryFramework.StorySpawnedActorsList
// 0x0028
struct FStorySpawnedActorsList
{
	struct FStoryFlag                                  StoryFlag;                                                // 0x0000(0x0008) (Edit)
	TArray<struct FActorLocationPair>                  ActorLocations;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNamedPointsActorLocation>           NamedPointsActorLocations;                                // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StoryFramework.StoryInfo
// 0x0018
struct FStoryInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            StartTimeTicks;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            EndTimeTicks;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StoryFramework.StoryNameInfo
// 0x0018
struct FStoryNameInfo
{
	struct FName                                       StoryName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      StoryDesc;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StoryFramework.StoryResourceStateChanged
// 0x0014
struct FStoryResourceStateChanged
{
	struct FName                                       StoryName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumResourcesClaimed;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumResourcesReleased;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumClaimsPending;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StoryFramework.StoryClaimedResourcesChangedTelemetryEvent
// 0x0010
struct FStoryClaimedResourcesChangedTelemetryEvent
{
	TArray<struct FStoryResourceStateChanged>          StoryResourceStateChanges;                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct StoryFramework.StorySpawnedActorsIndividualStoryInfo
// 0x0018
struct FStorySpawnedActorsIndividualStoryInfo
{
	class FString                                      StoryName;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                NumActorsSpawned;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumActorsDespawned;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StoryFramework.StorySpawnedActorsChangeTelemetryEvent
// 0x0020
struct FStorySpawnedActorsChangeTelemetryEvent
{
	TArray<struct FStorySpawnedActorsIndividualStoryInfo> StorySpawnedActors;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FStorySpawnedActorsIndividualStoryInfo> StoryDespawnedActors;                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct StoryFramework.StoriesChangedTelemetryEvent
// 0x0028
struct FStoriesChangedTelemetryEvent
{
	TArray<class FString>                              AllStories;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              ActiveStories;                                            // 0x0010(0x0010) (ZeroConstructor)
	bool                                               DidStoriesChange;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WereStoriesRefreshed;                                     // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
