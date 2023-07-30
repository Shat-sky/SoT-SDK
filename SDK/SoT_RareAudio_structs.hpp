#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_RareAudio_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AthenaAudio_classes.hpp"
#include "SoT_WwiseAudio_classes.hpp"
#include "SoT_RareEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RareAudio.WwiseEmitter
// 0x0020
struct FWwiseEmitter
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct RareAudio.EventToComponentMapping
// 0x0020
struct FEventToComponentMapping
{
	class UWwiseEvent*                                 PlayEvent;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct RareAudio.WWiseEmitterCreationRTPCSetting
// 0x000C
struct FWWiseEmitterCreationRTPCSetting
{
	struct FName                                       RTPCName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RTPCValue;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RareAudio.WWiseEmitterCreationSwitchSetting
// 0x0010
struct FWWiseEmitterCreationSwitchSetting
{
	struct FName                                       SwitchGroup;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchValue;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RareAudio.WwiseEmitterCreationParams
// 0x0028
struct FWwiseEmitterCreationParams
{
	class UWwiseEvent*                                 Event;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWWiseEmitterCreationRTPCSetting>    RTPCs;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWWiseEmitterCreationSwitchSetting>  Switches;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshWwiseEmitterData
// 0x0038
struct FStaticMeshWwiseEmitterData
{
	class UWwiseObjectPoolWrapper*                     Pool;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalOriginOffset;                                        // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class UWwiseEvent*>                         StartEvents;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         StopEvents;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshAudioAssociation
// 0x0020
struct FStaticMeshAudioAssociation
{
	TArray<struct FStaticMeshWwiseEmitterData>         PlaybackDataArray;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UStaticMesh*>                         Meshes;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshComponentAudioAssociation
// 0x0068
struct FStaticMeshComponentAudioAssociation
{
	struct FStaticMeshWwiseEmitterData                 PlaybackData;                                             // 0x0000(0x0038) (Edit)
	struct FVector                                     EmitterPositionRelativeToComponentOrigin;                 // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0044(0x0024) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
