#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaMediaPlaybackGameLayer_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackStateEvent
// 0x0018
struct FVideoPlaybackStateEvent
{
	class FString                                      MediaTextureName;                                         // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EAthenaMediaState>                     State;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoSubtitleEvent
// 0x0028
struct FVideoSubtitleEvent
{
	class FString                                      MediaTextureName;                                         // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      SubtitleString;                                           // 0x0010(0x0010) (ZeroConstructor)
	double                                             SubtitleDuration;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackStopEvent
// 0x0010
struct FVideoPlaybackStopEvent
{
	class FString                                      MediaTextureName;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackPauseEvent
// 0x0010
struct FVideoPlaybackPauseEvent
{
	class FString                                      MediaTextureName;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackStartEvent
// 0x0010
struct FVideoPlaybackStartEvent
{
	class FString                                      MediaTextureName;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackLoadEvent
// 0x0020
struct FVideoPlaybackLoadEvent
{
	class FString                                      MediaTextureName;                                         // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      VideoUri;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.MediaPlayedTelemetryEvent
// 0x0040
struct FMediaPlayedTelemetryEvent
{
	class FString                                      MediaName;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FIntPoint                                   LowestResolution;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   MedianResolution;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   HighestResolution;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TimestampWhenEnded;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalMediaLength;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           LowestBitrate;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MedianBitrate;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HighestBitrate;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
