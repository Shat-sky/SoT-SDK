#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CustomServerAssetCatalog_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomServerAssetCatalog.GameAssetModel
// 0x0028
struct FGameAssetModel
{
	class FString                                      fullPath;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      FriendlyName;                                             // 0x0010(0x0010) (ZeroConstructor)
	int                                                performanceWeight;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerAssetCatalog.GameAssetCatalogModel
// 0x00A0
struct FGameAssetCatalogModel
{
	TMap<class FString, struct FGameAssetModel>        gameAssetItems;                                           // 0x0000(0x0050) (ZeroConstructor)
	TMap<class FString, struct FGameAssetModel>        gameAssetSkeletons;                                       // 0x0050(0x0050) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
