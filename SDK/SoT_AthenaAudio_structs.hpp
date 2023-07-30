#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_WwiseAudio_classes.hpp"
#include "SoT_StoryFramework_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAudio.AthenaAudioGameStateSettings
// 0x0020
struct FAthenaAudioGameStateSettings
{
	struct FName                                       AudioGameStateGroupName;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AudioGameStateFrontend;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AudioGameStateLoading;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AudioGameStateIngame;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAudio.AthenaAudioBootflowEvents
// 0x0080
struct FAthenaAudioBootflowEvents
{
	TArray<class UWwiseEvent*>                         EventsToPlayOnLobbyStart;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLobbyEnd;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         EventsToPlayOnEngageStart;                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         EventsToPlayOnEngageEnd;                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingStart;                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingEnd;                                 // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingStart;                     // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingEnd;                       // 0x0070(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAudio.StoryDrivenAudioPortalSetting
// 0x0018
struct FStoryDrivenAudioPortalSetting
{
	struct FStoryFlag                                  Story;                                                    // 0x0000(0x0008) (Edit)
	class UAudioSpaceDataAsset*                        AudioInsideSpace;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        AudioOutsideSpace;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAudio.AnimNotify_SoundSwitch
// 0x0018
struct FAnimNotify_SoundSwitch
{
	struct FStringAssetReference                       SkeletalMeshReference;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FName                                       SkeletalMeshCategoryName;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
