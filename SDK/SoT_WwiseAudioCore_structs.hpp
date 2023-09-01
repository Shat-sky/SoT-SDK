#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_WwiseAudioCore_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WwiseAudioCore.WwisePlatformMapping
// 0x0020
struct FWwisePlatformMapping
{
	class FString                                      UnrealPlatform;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      WwisePlatform;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct WwiseAudioCore.WwisePlatformMappings
// 0x0020
struct FWwisePlatformMappings
{
	class FString                                      DefaultWwisePlatform;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FWwisePlatformMapping>               Mappings;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct WwiseAudioCore.ReverbPresetControllerSettings
// 0x0028
struct FReverbPresetControllerSettings
{
	uint32_t                                           VectorsPerSegment;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           TracesPerSegmentPerFrame;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           HorizontalSegments;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HorizontalConeSegmentElevationAngle;                      // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              UpwardsConeAngle;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TraceVectorLength;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeToDiscardSample;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceToDiscardSample;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BiasTowardsVerticalSegment;                               // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MaxNumSampleFramesInHistory;                              // 0x0024(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudioCore.WwiseAudioReverbPresets
// 0x0064
struct FWwiseAudioReverbPresets
{
	struct FName                                       ShortEarlyReflectionPresetName;                           // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       LongEarlyReflectionPresetName;                            // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       SpaceSizeRTPCName;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       EnclosedRatioRTPCName;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       MaterialThicknessRTPCName;                                // 0x0020(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       MaterialReflectivityRTPCName;                             // 0x0028(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     EnvironmentTraceChannel;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MinSpaceSizeWindowForEarlyReflections;                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSpaceSizeWindowforEarlyReflections;                    // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FReverbPresetControllerSettings             SamplingSettings;                                         // 0x003C(0x0028) (Edit, Config)
};

// ScriptStruct WwiseAudioCore.WwiseIOPriorityMappingConfig
// 0x0008
struct FWwiseIOPriorityMappingConfig
{
	int                                                WwisePriority;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EWwiseAsyncIOPriorityDisplay>          AsyncIOPriority;                                          // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct WwiseAudioCore.WwiseNetworkRelationship
// 0x0018
struct FWwiseNetworkRelationship
{
	struct FName                                       SwitchGroupName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       RemotePlayerSwitchValue;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       LocalPlayerSwitchValue;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudioCore.WwiseEventParam
// 0x0018
struct FWwiseEventParam
{
	TWeakObjectPtr<class UWwiseEvent>                  WwiseEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourcePath;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceObj;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
