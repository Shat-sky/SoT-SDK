#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelAssetCaching.WorldRegionSetup
// 0x0028
struct FWorldRegionSetup
{
	struct FVector2D                                   WorldBoundsOrigin;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RegionSize;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   GridSize;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               RegionNames;                                              // 0x0018(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
