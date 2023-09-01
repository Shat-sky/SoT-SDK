#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAudio.AthenaAudioConfig
// 0x00B0 (0x0108 - 0x0058)
class UAthenaAudioConfig : public UWwiseCoreAssets
{
public:
	class UWwiseObjectPoolWrapper*                     ItemProxyPool;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     AnimNotifyPool;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAthenaAudioGameStateSettings               GameStateSettings;                                        // 0x0068(0x0020) (Edit)
	struct FAthenaAudioBootflowEvents                  BootflowEvents;                                           // 0x0088(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AthenaAudioConfig"));
		return ptr;
	}

};


// Class AthenaAudio.AthenaAudioModuleSettings
// 0x0010 (0x0048 - 0x0038)
class UAthenaAudioModuleSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       AudioConfigAsset;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AthenaAudioModuleSettings"));
		return ptr;
	}

};


// Class AthenaAudio.AudioPortalComponent
// 0x0060 (0x0340 - 0x02E0)
class UAudioPortalComponent : public USceneComponent
{
public:
	float                                              PortalTriggerDistance;                                    // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InsideRtpcUpdateDistance;                                 // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutsideRtpcUpdateDistance;                                // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackAttachmentToActor;                                   // 0x02EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	class UAudioSpaceDataAsset*                        AudioInsideSpace;                                         // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        AudioOutsideSpace;                                        // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        ActiveAudioInsideSpace;                                   // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        ActiveAudioOutsideSpace;                                  // 0x0308(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStoryDrivenAudioPortalDataAsset*            CollectionAsset;                                          // 0x0310(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0318(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AudioPortalComponent"));
		return ptr;
	}


	void SetParentShip(class AActor* ParentShip);
};


// Class AthenaAudio.AudioPortalInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioPortalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AudioPortalInterface"));
		return ptr;
	}


	void UnregisterPortal(class UAudioPortalComponent* AudioPortal);
	void RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortals();
};


// Class AthenaAudio.AudioPortalService
// 0x00B0 (0x00D8 - 0x0028)
class UAudioPortalService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AudioPortalService"));
		return ptr;
	}

};


// Class AthenaAudio.AudioSpaceComponent
// 0x0030 (0x0650 - 0x0620)
class UAudioSpaceComponent : public UStaticMeshComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioSpace;                                               // 0x0620(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        ActiveAudioSpace;                                         // 0x0628(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStoryDrivenAudioPortalDataAsset*            CollectionAsset;                                          // 0x0630(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0638(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AudioSpaceComponent"));
		return ptr;
	}


	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};


// Class AthenaAudio.AudioSpaceTrackerComponent
// 0x0010 (0x00D8 - 0x00C8)
class UAudioSpaceTrackerComponent : public UActorComponent
{
public:
	TArray<class UAudioSpaceComponent*>                CurrentSpaces;                                            // 0x00C8(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AudioSpaceTrackerComponent"));
		return ptr;
	}


	class UAudioSpaceDataAsset* GetCurrentSpace();
};


// Class AthenaAudio.MultiEmitter
// 0x0010 (0x03D8 - 0x03C8)
class AMultiEmitter : public AActor
{
public:
	class UMultiEmitterRootComponent*                  MultiEmitterRootComponent;                                // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.MultiEmitter"));
		return ptr;
	}


	void ResetNamingCount();
	void CreateAndAddMergedEmitterComponentToRoot(const struct FName& InName, const struct FVector& InOffset, class UWwiseEvent* InWwiseEvent, class UWwiseObjectPoolWrapper* InPool);
};


// Class AthenaAudio.StoryDrivenAudioPortalDataAsset
// 0x0030 (0x0058 - 0x0028)
class UStoryDrivenAudioPortalDataAsset : public UDataAsset
{
public:
	struct FFeatureFlag                                Feature;                                                  // 0x0028(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FStoryDrivenAudioPortalSetting>      StoryResponses;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UStoryDrivenAudioPortalDataAsset*>    AssetsList;                                               // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.StoryDrivenAudioPortalDataAsset"));
		return ptr;
	}

};


// Class AthenaAudio.WwiseEventsTriggerRegionComponent
// 0x0090 (0x0370 - 0x02E0)
class UWwiseEventsTriggerRegionComponent : public USceneComponent
{
public:
	class UWwiseObjectPoolWrapper*                     TriggerRegionPool;                                        // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         TriggerRegionPlayEvents;                                  // 0x02E8(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         TriggerRegionStopEvents;                                  // 0x02F8(0x0010) (Edit, ZeroConstructor)
	float                                              TriggerEnterRadiusInCms;                                  // 0x0308(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TriggerExitRadiusInCms;                                   // 0x030C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EmitterOffset;                                            // 0x0310(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x031C(0x0014) MISSED OFFSET
	class ACharacter*                                  LocalPlayer;                                              // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0338(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.WwiseEventsTriggerRegionComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
