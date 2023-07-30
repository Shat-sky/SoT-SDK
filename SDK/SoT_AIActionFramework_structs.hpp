#pragma once

// Sea of Thieves (2.8.4) SDK

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

// ScriptStruct AIActionFramework.ActivityActionSpotContainer
// 0x0010
struct FActivityActionSpotContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AIActionFramework.RegionActionSpotContainer
// 0x0050
struct FRegionActionSpotContainer
{
	TMap<class UClass*, struct FActivityActionSpotContainer> RegisteredActionSpotsByActivity;                          // 0x0000(0x0050) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
