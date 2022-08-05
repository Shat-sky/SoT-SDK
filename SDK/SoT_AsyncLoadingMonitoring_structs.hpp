#pragma once

// Sea of Thieves (2.6.0) SDK

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

// ScriptStruct AsyncLoadingMonitoring.AsyncExcessiveLoadTelemetryEvent
// 0x0028
struct FAsyncExcessiveLoadTelemetryEvent
{
	int                                                FrameCounter;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	double                                             ExpectedAsyncLoadingTime;                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             ActualAsyncLoadingTime;                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              AssetRequestList;                                         // 0x0018(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
