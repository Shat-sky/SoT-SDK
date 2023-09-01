#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Music_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_RareAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Music.MusicZoneEmitterSwitch
// 0x0010
struct FMusicZoneEmitterSwitch
{
	struct FName                                       SwitchGroup;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Music.MusicZoneEmitterRTPC
// 0x000C
struct FMusicZoneEmitterRTPC
{
	struct FName                                       RTPC;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Music.MusicZoneRemoteValues
// 0x0020
struct FMusicZoneRemoteValues
{
	TArray<struct FMusicZoneEmitterSwitch>             Switches;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMusicZoneEmitterRTPC>               RTPCs;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Music.MusicZoneDestroyedEvent
// 0x0010
struct FMusicZoneDestroyedEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Music.MusicZoneSpawnedEvent
// 0x0010
struct FMusicZoneSpawnedEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
