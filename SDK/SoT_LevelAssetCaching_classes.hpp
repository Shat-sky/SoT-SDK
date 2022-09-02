#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LevelAssetCaching_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LevelAssetCaching.RegionalAssetCacheInterface
// 0x0000 (0x0028 - 0x0028)
class URegionalAssetCacheInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.RegionalAssetCacheInterface"));
		return ptr;
	}

};


// Class LevelAssetCaching.RegionLookupInterface
// 0x0000 (0x0028 - 0x0028)
class URegionLookupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.RegionLookupInterface"));
		return ptr;
	}

};


// Class LevelAssetCaching.LevelAssetCachingService
// 0x0048 (0x0070 - 0x0028)
class ULevelAssetCachingService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	struct FName                                       CurrentRegion;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class URegionalAssetCacheInterface> AssetCache;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class URegionLookupInterface>     RegionLookup;                                             // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        CachedPawn;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.LevelAssetCachingService"));
		return ptr;
	}

};


// Class LevelAssetCaching.RegionalAssetListDataAsset
// 0x0010 (0x0038 - 0x0028)
class URegionalAssetListDataAsset : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               RegionAssets;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.RegionalAssetListDataAsset"));
		return ptr;
	}

};


// Class LevelAssetCaching.RegionalAssetCache
// 0x00B0 (0x00D8 - 0x0028)
class URegionalAssetCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class URegionalAssetListDataAsset*                 CurrentListAsset;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0040(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.RegionalAssetCache"));
		return ptr;
	}

};


// Class LevelAssetCaching.RegionalAssetListSetupDataAsset
// 0x0050 (0x0078 - 0x0028)
class URegionalAssetListSetupDataAsset : public UDataAsset
{
public:
	TMap<struct FName, struct FStringAssetReference>   ListMapping;                                              // 0x0028(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.RegionalAssetListSetupDataAsset"));
		return ptr;
	}

};


// Class LevelAssetCaching.RegionalAssetListWorldSetupDataAsset
// 0x0050 (0x0078 - 0x0028)
class URegionalAssetListWorldSetupDataAsset : public UDataAsset
{
public:
	TMap<class FString, struct FWorldRegionSetup>      WorldSetups;                                              // 0x0028(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.RegionalAssetListWorldSetupDataAsset"));
		return ptr;
	}

};


// Class LevelAssetCaching.RegionLookupGeneratedGrid
// 0x0088 (0x00B0 - 0x0028)
class URegionLookupGeneratedGrid : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FWorldRegionSetup                           WorldSetup;                                               // 0x0030(0x0028) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.RegionLookupGeneratedGrid"));
		return ptr;
	}

};


// Class LevelAssetCaching.RegionLookupSeaId
// 0x0020 (0x0048 - 0x0028)
class URegionLookupSeaId : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelAssetCaching.RegionLookupSeaId"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
