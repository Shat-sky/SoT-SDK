#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Animation.ECharacterIKLimb
enum class ECharacterIKLimb : uint8_t
{
	ECharacterIKLimb__None         = 0,
	None                           = 1,
	IntProperty                    = 2,
	ECharacterIKLimb__RightFoot    = 3,
	None01                         = 4,
	CameraFacing_NoneUP            = 5
};


// Enum Animation.ELimbIKSpace
enum class ELimbIKSpace : uint8_t
{
	ELimbIKSpace__Local            = 0,
	None                           = 1,
	EDockableSocketOverlapUpdates__AllowUpdate = 2
};


// Enum Animation.EDockableSocketOverlapUpdates
enum class EDockableSocketOverlapUpdates : uint8_t
{
	EDockableSocketOverlapUpdates__AllowUpdate = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Animation.CharacterAnimationIKUpdateParams
// 0x0040
struct FCharacterAnimationIKUpdateParams
{
	float                                              CurrentAlpha;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslationStrength;                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationStrength;                                         // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Orientation;                                              // 0x0020(0x0010) (BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EHIKEffectorSpace>                     EffectorSpace;                                            // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FName                                       ParentBone;                                               // 0x0034(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Animation.LimbIK
// 0x0060
struct FLimbIK
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Animation.AnimDataEntryStructWrapper
// 0x0018
struct FAnimDataEntryStructWrapper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Animation.AnimationDataStoreEntry
// 0x0010
struct FAnimationDataStoreEntry
{
	class UClass*                                      AnimDataId;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimationData*                              AnimData;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Animation.AnimationDataStoreLoadingEntry
// 0x0040
struct FAnimationDataStoreLoadingEntry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
	class UClass*                                      AnimDataId;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.AnimationDataStoreAssetEntry
// 0x0010
struct FAnimationDataStoreAssetEntry
{
	class UClass*                                      AnimDataId;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimDataTypeCooked;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.AnimationDataStoreAssetWeakReferenceEntry
// 0x0028
struct FAnimationDataStoreAssetWeakReferenceEntry
{
	class UClass*                                      AnimDataId;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            AnimData;                                                 // 0x0008(0x001C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Animation.CosmeticItems
// 0x0010
struct FCosmeticItems
{
	TArray<class AActor*>                              CosmeticItemArray;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Animation.CosmeticItemAnimationSetLoopData
// 0x0018
struct FCosmeticItemAnimationSetLoopData
{
	class UAnimSequenceBase*                           Into;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Loop;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LoopSyncGroup;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Animation.DockableInfo
// 0x0018
struct FDockableInfo
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SceneComponent;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EDockableSocketOverlapUpdates>         ShouldOverlapsUpdateOnParentUpdate;                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Animation.Docker
// 0x0050
struct FDocker
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Animation.ActorVelocityData
// 0x0018
struct FActorVelocityData
{
	struct FVector                                     ActorsVelocityVector;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActorSpeed;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCharacterMoving;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              WantedMovementSpeed;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.TransformBlendCurve
// 0x0500
struct FTransformBlendCurve
{
	bool                                               UseLocationCurve;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeVectorCurve                         LocationCurve;                                            // 0x0008(0x0170) (Edit)
	bool                                               UseRotationCurve;                                         // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FRuntimeVectorCurve                         RotationCurve;                                            // 0x0180(0x0170) (Edit)
	bool                                               UseScaleCurve;                                            // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FRuntimeVectorCurve                         ScaleCurve;                                               // 0x02F8(0x0170) (Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	struct FTransform                                  SourceTransform;                                          // 0x0470(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x04A0(0x0030) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x04D0(0x0030) MISSED OFFSET
};

// ScriptStruct Animation.WeightedAnimationData
// 0x0018
struct FWeightedAnimationData
{
	struct FStringAssetReference                       Animation;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Weighting;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Animation.EventCosmeticItemAttachmentSwitched
// 0x0008
struct FEventCosmeticItemAttachmentSwitched
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.EventCosmeticItemSpawned
// 0x0010
struct FEventCosmeticItemSpawned
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCosmeticItemAnimationSetDataAsset*          CosmeticData;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.EventDockableObjectDestroyed
// 0x0001
struct FEventDockableObjectDestroyed
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Animation.EventAnimationHappyReact
// 0x0001
struct FEventAnimationHappyReact
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Animation.EventHitReactAnimationFinished
// 0x0001
struct FEventHitReactAnimationFinished
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Animation.EventHitReactAnimationRequested
// 0x001C
struct FEventHitReactAnimationRequested
{
	struct FVector                                     HitNormal;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         ReactionAnimType;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Animation.HitReactionAnimationData
// 0x0008
struct FHitReactionAnimationData
{
	class UBlendSpace1D*                               HitReactBlendSpace;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.HitReactionAnimationState
// 0x0028
struct FHitReactionAnimationState
{
	float                                              Yaw;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveBlend;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         ReactType;                                                // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateNewHitReact;                                      // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x000A(0x001E) MISSED OFFSET
};

// ScriptStruct Animation.AnimNode_WeightedLoadOnDemandSquencePlayer
// 0x0030 (0x0070 - 0x0040)
struct FAnimNode_WeightedLoadOnDemandSquencePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              PlayRate;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UWeightedAnimSequenceLoadOnDemand*           WeightedAnimSequenceLoadOnDemand;                         // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GroupIndex;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UAnimSequence*                               CurrentSequence;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               NextSequence;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Animation.EventPreviewCharacterAnimationRequest
// 0x0008
struct FEventPreviewCharacterAnimationRequest
{
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.AnimationStateCompleteEvent
// 0x0008
struct FAnimationStateCompleteEvent
{
	class UClass*                                      CompletedStateId;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Animation.WeightedAnimationTimeout
// 0x0014
struct FWeightedAnimationTimeout
{
	struct FFloatRange                                 TimeoutRange;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weighting;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Animation.WeightedAnimationTimeoutSelector
// 0x0010
struct FWeightedAnimationTimeoutSelector
{
	TArray<struct FWeightedAnimationTimeout>           Weightings;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
