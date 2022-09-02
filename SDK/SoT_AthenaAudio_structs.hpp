#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_StoryFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAudio.StoryDrivenAudioPortalSetting
// 0x0018
struct FStoryDrivenAudioPortalSetting
{
	struct FStoryFlag                                  StoryFlag;                                                // 0x0000(0x0008) (Edit)
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
