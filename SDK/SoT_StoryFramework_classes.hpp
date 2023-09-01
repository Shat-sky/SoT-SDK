#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StoryFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class StoryFramework.ActiveStorySpawnRequirement
// 0x0030 (0x0080 - 0x0050)
class UActiveStorySpawnRequirement : public USpawnRequirement
{
public:
	TArray<struct FName>                               StoryNames;                                               // 0x0050(0x0010) (Edit, ZeroConstructor)
	bool                                               AllStoriesRequired;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0061(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.ActiveStorySpawnRequirement"));
		return ptr;
	}

};


// Class StoryFramework.IsStoryActiveNPCDialogConditional
// 0x0018 (0x0048 - 0x0030)
class UIsStoryActiveNPCDialogConditional : public UNPCDialogConditional
{
public:
	struct FStoryFlag                                  StoryFlag;                                                // 0x0030(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.IsStoryActiveNPCDialogConditional"));
		return ptr;
	}

};


// Class StoryFramework.StoryClaimableResourceComponent
// 0x0028 (0x00F0 - 0x00C8)
class UStoryClaimableResourceComponent : public UActorComponent
{
public:
	struct FStoryFlag                                  ClaimedStoryFlag;                                         // 0x00C8(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryClaimableResourceComponent"));
		return ptr;
	}

};


// Class StoryFramework.StoryClaimedResourcesServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UStoryClaimedResourcesServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryClaimedResourcesServiceInterface"));
		return ptr;
	}

};


// Class StoryFramework.StoryClaimedResourcesService
// 0x00C0 (0x0488 - 0x03C8)
class AStoryClaimedResourcesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03C8(0x0060) MISSED OFFSET
	TArray<TWeakObjectPtr<class UStoryClaimableResourceComponent>> PendingClaims;                                            // 0x0428(0x0010) (ExportObject, ZeroConstructor, Transient)
	TMap<struct FName, struct FStoryClaimableResourcesList> StoriesToClaimableResourcesMap;                           // 0x0438(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryClaimedResourcesService"));
		return ptr;
	}

};


// Class StoryFramework.StoryDrivenBlendedLightingZoneComponent
// 0x0030 (0x0360 - 0x0330)
class UStoryDrivenBlendedLightingZoneComponent : public UBlendedLightingZoneComponent
{
public:
	struct FLightingZoneStoryRelatedSettings           CurrentStoryResponse;                                     // 0x0330(0x0010) (Net)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0340(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryDrivenBlendedLightingZoneComponent"));
		return ptr;
	}


	void OnRep_CurrentStoryResponse();
};


// Class StoryFramework.StoryDrivenBlendedLightingZoneComponentDataAsset
// 0x0030 (0x0058 - 0x0028)
class UStoryDrivenBlendedLightingZoneComponentDataAsset : public UDataAsset
{
public:
	struct FFeatureFlag                                Feature;                                                  // 0x0028(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FLightingZoneStoryRelatedSettings>   StoryResponses;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UStoryDrivenBlendedLightingZoneComponentDataAsset*> AssetsList;                                               // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryDrivenBlendedLightingZoneComponentDataAsset"));
		return ptr;
	}

};


// Class StoryFramework.StoryDrivenSalvageItemSpawnComponent
// 0x0020 (0x05F0 - 0x05D0)
class UStoryDrivenSalvageItemSpawnComponent : public USalvageItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryDrivenSalvageItemSpawnComponent"));
		return ptr;
	}

};


// Class StoryFramework.StorySpawnedActorsComponent
// 0x0040 (0x0108 - 0x00C8)
class UStorySpawnedActorsComponent : public UActorComponent
{
public:
	class UStorySpawnedActorsComponentDataAsset*       AssetsCollection;                                         // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x00D0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StorySpawnedActorsComponent"));
		return ptr;
	}

};


// Class StoryFramework.StorySpawnedActorsComponentDataAsset
// 0x0030 (0x0058 - 0x0028)
class UStorySpawnedActorsComponentDataAsset : public UDataAsset
{
public:
	struct FFeatureFlag                                Feature;                                                  // 0x0028(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FStorySpawnedActorsComponentList>    StoryResponses;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UStorySpawnedActorsComponentDataAsset*> AssetsList;                                               // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StorySpawnedActorsComponentDataAsset"));
		return ptr;
	}

};


// Class StoryFramework.StorySpawnedActorsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UStorySpawnedActorsDataAsset : public UDataAsset
{
public:
	struct FFeatureFlag                                Feature;                                                  // 0x0028(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FStorySpawnedActorsList>             StoryResponses;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UStorySpawnedActorsDataAsset*>        AssetsList;                                               // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StorySpawnedActorsDataAsset"));
		return ptr;
	}

};


// Class StoryFramework.StorySpawnedActorsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UStorySpawnedActorsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StorySpawnedActorsServiceInterface"));
		return ptr;
	}

};


// Class StoryFramework.StorySpawnedActorsService
// 0x0138 (0x0500 - 0x03C8)
class AStorySpawnedActorsService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C8(0x0018) MISSED OFFSET
	TArray<class UStorySpawnedActorsComponent*>        EarlyRegisteredComponents;                                // 0x03E0(0x0010) (ExportObject, ZeroConstructor)
	class UStorySpawnedActorsDataAsset*                Asset;                                                    // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x108];                                     // 0x03F8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StorySpawnedActorsService"));
		return ptr;
	}

};


// Class StoryFramework.StorySpawnedActorsSettings
// 0x0010 (0x0048 - 0x0038)
class UStorySpawnedActorsSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       StorySpawnActorsDataAssetLocation;                        // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StorySpawnedActorsSettings"));
		return ptr;
	}

};


// Class StoryFramework.DebugStoryServiceCheatInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugStoryServiceCheatInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.DebugStoryServiceCheatInterface"));
		return ptr;
	}

};


// Class StoryFramework.DebugStoryServiceCheat
// 0x0058 (0x0420 - 0x03C8)
class ADebugStoryServiceCheat : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	TArray<struct FStoryInfo>                          AllStories;                                               // 0x03D0(0x0010) (Net, ZeroConstructor)
	TArray<class FString>                              AllIncludeFilters;                                        // 0x03E0(0x0010) (Net, ZeroConstructor)
	TArray<class FString>                              AllExcludeFilters;                                        // 0x03F0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0400(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.DebugStoryServiceCheat"));
		return ptr;
	}

};


// Class StoryFramework.StorySettings
// 0x0010 (0x0048 - 0x0038)
class UStorySettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       StoryNamesCollectionDataAssetLocation;                    // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StorySettings"));
		return ptr;
	}

};


// Class StoryFramework.StoryNamesCollectionDataAsset
// 0x0020 (0x0048 - 0x0028)
class UStoryNamesCollectionDataAsset : public UDataAsset
{
public:
	TArray<struct FStoryNameInfo>                      Stories;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UStoryNamesCollectionDataAsset*>      StoriesAssets;                                            // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryNamesCollectionDataAsset"));
		return ptr;
	}

};


// Class StoryFramework.StoryServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UStoryServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryServiceInterface"));
		return ptr;
	}

};


// Class StoryFramework.StoryService
// 0x00D8 (0x04A0 - 0x03C8)
class AStoryService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03C8(0x0028) MISSED OFFSET
	TArray<struct FStoryInfo>                          Stories;                                                  // 0x03F0(0x0010) (ZeroConstructor)
	TArray<struct FStoryInfo>                          ActiveStories;                                            // 0x0400(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0410(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryService"));
		return ptr;
	}


	void OnRep_ActiveStories();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
