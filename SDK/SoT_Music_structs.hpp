#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_RareAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Music.EAISpawnerMusicZoneState
enum class EAISpawnerMusicZoneState : uint8_t
{
	EAISpawnerMusicZoneState__Passive = 0,
	None                           = 1,
	EHullDamageDeck__Bottom        = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

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
