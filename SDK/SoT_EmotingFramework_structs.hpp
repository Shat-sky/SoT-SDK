#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_EmotingFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AthenaInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmotingFramework.EmoteId
// 0x0008
struct FEmoteId
{
	struct FName                                       EmoteId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EmoteData
// 0x00A0
struct FEmoteData
{
	struct FEmoteId                                    EmoteId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EmoteDisplayName;                                         // 0x0008(0x0038) (Edit)
	struct FText                                       AudioDescription;                                         // 0x0040(0x0038) (Edit)
	float                                              DelayBeforeAllowingExit;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalOffsetFactorWhenZoomed;                           // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HideNameplate;                                            // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	class UEmotePropData*                              EmotePropDataAsset;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanPlayInSuccession;                                      // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDescriptionInTextChat;                                // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	class UAthenaSpringArmComponentParams*             CustomSpringArmParamsAsset;                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EmotePropRandomObjectInfo
// 0x0030
struct FEmotePropRandomObjectInfo
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          PossibleTransforms;                                       // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FName                                       RandomParameterName;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInt32Range                                 RandomParameterRange;                                     // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EmotePropRandomObjectResult
// 0x0050
struct FEmotePropRandomObjectResult
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               HasTransformValue;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	struct FName                                       TextureParameterName;                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TextureParameterValue;                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct EmotingFramework.EventEmoteEndRequested
// 0x000C
struct FEventEmoteEndRequested
{
	struct FName                                       EmoteIdentifier;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               EndForcedEmote;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct EmotingFramework.EventEndEmoteAnimation
// 0x0001
struct FEventEndEmoteAnimation
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmotingFramework.EventEmoteSwapped
// 0x00A0
struct FEventEmoteSwapped
{
	struct FEmoteData                                  EmoteData;                                                // 0x0000(0x00A0)
};

// ScriptStruct EmotingFramework.EventEmoteCompleted
// 0x000C
struct FEventEmoteCompleted
{
	struct FName                                       EmoteName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EmoteDuration;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EventEmoteStarted
// 0x00A0
struct FEventEmoteStarted
{
	struct FEmoteData                                  EmoteData;                                                // 0x0000(0x00A0) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct EmotingFramework.EventEmoteRequested
// 0x00B0
struct FEventEmoteRequested
{
	struct FEmoteData                                  EmoteData;                                                // 0x0000(0x00A0)
	struct FName                                       ForcedEmoteIdentifier;                                    // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ForcedEmote;                                              // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct EmotingFramework.EventDisableLookAtEmoteCamera
// 0x0001
struct FEventDisableLookAtEmoteCamera
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmotingFramework.EventEnableLookAtEmoteCamera
// 0x0008
struct FEventEnableLookAtEmoteCamera
{
	TWeakObjectPtr<class AActor>                       LookAtTarget;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EmoteDiceOutcomeTelemetryEvent
// 0x0014
struct FEmoteDiceOutcomeTelemetryEvent
{
	int                                                MaxLimit;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RollNumber;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrientationUsed;                                          // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EmoteRandomObjectOutcomeTelemetryEvent
// 0x0060
struct FEmoteRandomObjectOutcomeTelemetryEvent
{
	class FString                                      MeshName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class FString                                      TextureParameterName;                                     // 0x0040(0x0010) (ZeroConstructor)
	int                                                TextureParameterValue;                                    // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
