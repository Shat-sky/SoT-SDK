#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_ConditionalFramework_classes.hpp"
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
	struct FStoryFlag                                  Story;                                                    // 0x0000(0x0008) (Edit)
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

// ScriptStruct StoryFramework.StorySpawnedActorsComponentList
// 0x0020
struct FStorySpawnedActorsComponentList
{
	struct FStoryFlag                                  Story;                                                    // 0x0000(0x0008) (Edit)
	TArray<struct FNamedPointsGroupActorLocation>      GroupLocations;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	class ULayerActorsDataAsset*                       LayerToSpawn;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StoryFramework.ActorLocationPair
// 0x0030
struct FActorLocationPair
{
	struct FStringAssetReference                       SpawnLocation;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            ActorToSpawn;                                             // 0x0010(0x0020) (Edit)
};

// ScriptStruct StoryFramework.NamedPointsActorLocation
// 0x0020
struct FNamedPointsActorLocation
{
	struct FStringAssetReference                       ActorWithNamedPointsComponent;                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNamedPointsGroupActorLocation>      GroupLocations;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StoryFramework.InstancedLayerLocation
// 0x0018
struct FInstancedLayerLocation
{
	struct FStringAssetReference                       ActorWithInstancedLayerComponent;                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	class ULayerActorsDataAsset*                       LayerToSpawn;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StoryFramework.StorySpawnedActorsList
// 0x0038
struct FStorySpawnedActorsList
{
	struct FStoryFlag                                  Story;                                                    // 0x0000(0x0008) (Edit)
	TArray<struct FActorLocationPair>                  ActorLocations;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNamedPointsActorLocation>           NamedPointsActorLocations;                                // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<struct FInstancedLayerLocation>             InstancedLayerLocations;                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
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

// ScriptStruct StoryFramework.IsStoryActiveConditionBase
// 0x0020 (0x0048 - 0x0028)
struct FIsStoryActiveConditionBase : public FTargetedPayloadConditionBase
{
	TArray<struct FStoryFlag>                          StoryFlags;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct StoryFramework.IsAllStoryActiveCondition
// 0x0000 (0x0048 - 0x0048)
struct FIsAllStoryActiveCondition : public FIsStoryActiveConditionBase
{

};

// ScriptStruct StoryFramework.IsAnyStoryActiveCondition
// 0x0000 (0x0048 - 0x0048)
struct FIsAnyStoryActiveCondition : public FIsStoryActiveConditionBase
{

};

// ScriptStruct StoryFramework.DuplicateStoriesReceivedTelemetryEvent
// 0x0010
struct FDuplicateStoriesReceivedTelemetryEvent
{
	TArray<class FString>                              DuplicateStoriesReceived;                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct StoryFramework.StoriesRefreshRequestedTelemetryEvent
// 0x0001
struct FStoriesRefreshRequestedTelemetryEvent
{
	bool                                               IsForcedRefresh;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
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
