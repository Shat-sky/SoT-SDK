#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RareAudio.WwiseEmitterComponent
// 0x0030 (0x0310 - 0x02E0)
class UWwiseEmitterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	struct FWwiseEmitter                               Emitter;                                                  // 0x02E8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class UWwiseObjectPoolWrapper*                     WwiseObjectPoolWrapper;                                   // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseEmitterComponent"));
		return ptr;
	}

};


// Class RareAudio.AnimNotifyWwiseEmitterComponent
// 0x0000 (0x0310 - 0x0310)
class UAnimNotifyWwiseEmitterComponent : public UWwiseEmitterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotifyWwiseEmitterComponent"));
		return ptr;
	}

};


// Class RareAudio.AnimNotify_WwiseSound
// 0x0048 (0x0080 - 0x0038)
class UAnimNotify_WwiseSound : public UAnimNotify
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               OwnedByWorld;                                             // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FVector                                     OwnedByWorldEmitterOffset;                                // 0x0044(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_WwiseSound_PerspectiveRestriction> PerspectiveRestriction;                                   // 0x0050(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     OwnedByWorldWisePoolToUse;                                // 0x0058(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotify_WwiseSound"));
		return ptr;
	}

};


// Class RareAudio.AnimNotify_WwiseSoundMeshSwitch
// 0x0018 (0x0098 - 0x0080)
class UAnimNotify_WwiseSoundMeshSwitch : public UAnimNotify_WwiseSound
{
public:
	struct FName                                       SkeletalMeshSwitchGroup;                                  // 0x0080(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimNotify_SoundSwitch>             MeshOverrides;                                            // 0x0088(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotify_WwiseSoundMeshSwitch"));
		return ptr;
	}

};


// Class RareAudio.AnimNotifyState_WwiseSound
// 0x0060 (0x0090 - 0x0030)
class UAnimNotifyState_WwiseSound : public UAnimNotifyState
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEventEnd;                                            // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotifyState_WwiseSound"));
		return ptr;
	}

};


// Class RareAudio.WwiseEmitterBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseEmitterBlueprintLibrary"));
		return ptr;
	}


	static void WwiseStopGlobalEvent(class UWwiseEvent* Event, float FadeTime);
	static void WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue);
	static void WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue);
	static void WwisePostOneShotOnOwner(class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FWwiseEmitterCreationParams& CreationParams, const struct FVector& Offset, TEnumAsByte<EEmitterRelationship> Relationship);
	static int WwisePostGlobalEvent(class UWwiseEvent* Event);
	static int WwisePostEventAtLocation(class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, struct FWwiseEmitter* Emitter);
	static bool WwiseIsGlobalEvent(class UWwiseEvent* Event);
	static bool WwiseGetListenerInfo(int Viewport, struct FWwiseListenerInfo* InfoOut);
	static bool WwiseGetListenerEmitter(class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitter* Emitter);
	static bool WwiseGetGlobalRTPC(const struct FName& RTPCName, float* RTPCValue);
	static bool WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	static bool WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime);
	static bool WwiseEmitterSetSwitch(const struct FWwiseEmitter& Emitter, const struct FName& SwitchGroup, const struct FName& Value);
	static bool WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value);
	static bool WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value);
	static bool WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params);
	static bool WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location);
	static TArray<int> WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	static int WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	static bool WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter);
	static bool WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event);
	static bool WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value);
	static void WwiseEmitterDestroy(struct FWwiseEmitter* Emitter);
	static bool WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value);
	static bool WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value);
	static TArray<int> WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	static int WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	static bool WwiseCreateEmitter(const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset, struct FWwiseEmitter* Emitter);
	static int WwiseCreateDetachedEmitter(const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const struct FVector& Forward, struct FWwiseEmitter* Emitter);
	static bool SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID);
	static bool GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs);
};


// Class RareAudio.WwiseEmitterComponentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterComponentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseEmitterComponentBlueprintLibrary"));
		return ptr;
	}


	static bool GetNamedEmitter(const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn, struct FWwiseEmitter* OutEmitter);
	static bool GetClosestNEmitters(const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn, TArray<struct FWwiseEmitter>* OutEmitters);
	static bool GetClosestEmitter(const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn, struct FWwiseEmitter* OutEmitter);
};


// Class RareAudio.WwiseObjectPoolWrapper
// 0x0050 (0x0078 - 0x0028)
class UWwiseObjectPoolWrapper : public UObject
{
public:
	struct FName                                       PoolName;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxResources;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableOcclusion;                                         // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableReverb;                                            // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	struct FWwiseNativeEmitterPoolDensityParams        PoolDensityParams;                                        // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseObjectPoolWrapper"));
		return ptr;
	}

};


// Class RareAudio.AudioIslandStaticMeshAssociatorBase
// 0x0000 (0x03C8 - 0x03C8)
class AAudioIslandStaticMeshAssociatorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioIslandStaticMeshAssociatorBase"));
		return ptr;
	}

};


// Class RareAudio.AudioSpaceDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAudioSpaceDataAsset : public UDataAsset
{
public:
	struct FName                                       RtpcToUpdate;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AmbienceToStart;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AmbienceToStop;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioSpaceDataAsset"));
		return ptr;
	}


	struct FName GetRtpcName();
};


// Class RareAudio.RareAudioHardwareDeviceService
// 0x0010 (0x0050 - 0x0040)
class URareAudioHardwareDeviceService : public UAudioHardwareDeviceService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.RareAudioHardwareDeviceService"));
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioDataAsset
// 0x0010 (0x0038 - 0x0028)
class UStaticMeshAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FStaticMeshAudioAssociation>         MeshToAudioAssociations;                                  // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.StaticMeshAudioDataAsset"));
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioEmittersComponent
// 0x0010 (0x02F0 - 0x02E0)
class UStaticMeshAudioEmittersComponent : public USceneComponent
{
public:
	TArray<struct FStaticMeshComponentAudioAssociation> InstanceAssociations;                                     // 0x02E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.StaticMeshAudioEmittersComponent"));
		return ptr;
	}


	void PopulateInstanceAssociations();
};


// Class RareAudio.TritonAcousticMap
// 0x0040 (0x0068 - 0x0028)
class UTritonAcousticMap : public UObject
{
public:
	class FString                                      TritonMapFilename;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	float                                              CustomCacheRatio;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x003C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.TritonAcousticMap"));
		return ptr;
	}

};


// Class RareAudio.TritonComponent
// 0x0010 (0x02F0 - 0x02E0)
class UTritonComponent : public USceneComponent
{
public:
	class UTritonAcousticMap*                          TritonMapAsset;                                           // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TritonEffectRadius;                                       // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.TritonComponent"));
		return ptr;
	}

};


// Class RareAudio.TritonService
// 0x0128 (0x0150 - 0x0028)
class UTritonService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class UTritonComponent*>                    RegisteredTritonComponents;                               // 0x0038(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0048(0x00A8) MISSED OFFSET
	class UTritonComponent*                            CachedListenerInfo;                                       // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x00F8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.TritonService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
