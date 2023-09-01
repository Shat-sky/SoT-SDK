#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Music_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Music.EmitterManipulatorInterface
// 0x0000 (0x0028 - 0x0028)
class UEmitterManipulatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.EmitterManipulatorInterface"));
		return ptr;
	}

};


// Class Music.MusicZoneInterface
// 0x0000 (0x0028 - 0x0028)
class UMusicZoneInterface : public UEmitterManipulatorInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneInterface"));
		return ptr;
	}


	bool CanPlayForPlayer(class AActor* Player);
};


// Class Music.MusicZoneComponent
// 0x00F0 (0x03D0 - 0x02E0)
class UMusicZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationRTPC;                                             // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlaybackPositionRTPC;                                     // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LocalRTPC;                                                // 0x0300(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 PlayEvent;                                                // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x0310(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         OneShotEvents;                                            // 0x0318(0x0010) (Edit, ZeroConstructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisableAfterPlayThrough;                                  // 0x0330(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateOnBeginPlay;                                      // 0x0331(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0332(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMusicZoneStarted;                                       // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0348(0x0028) MISSED OFFSET
	struct FMusicZoneRemoteValues                      EmitterRemoteValues;                                      // 0x0370(0x0020) (Net)
	unsigned char                                      UnknownData04[0x40];                                      // 0x0390(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneComponent"));
		return ptr;
	}


	bool SetPlaybackPositionRtpc(float* OutTimeInSeconds);
	void OnRep_EmitterRemoteValues();
	struct FWwiseEmitter GetEmitter();
	void DisableZone();
	void Client_StopMusicAndDisableZone();
	void Client_PlayOneShot(int Index);
	void Client_ActivateZone();
	void ActivateZone();
};


// Class Music.AISpawnerMusicZoneComponent
// 0x0020 (0x03F0 - 0x03D0)
class UAISpawnerMusicZoneComponent : public UMusicZoneComponent
{
public:
	class UAISpawner*                                  AISpawner;                                                // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APawn*>                               SpawnerPawns;                                             // 0x03D8(0x0010) (Net, ZeroConstructor)
	TEnumAsByte<EAISpawnerMusicZoneState>              SpawnerState;                                             // 0x03E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.AISpawnerMusicZoneComponent"));
		return ptr;
	}


	void OnRep_SpawnerState();
};


// Class Music.SynchedMusicZoneComponent
// 0x0030 (0x0400 - 0x03D0)
class USynchedMusicZoneComponent : public UMusicZoneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.SynchedMusicZoneComponent"));
		return ptr;
	}

};


// Class Music.MusicZoneServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMusicZoneServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneServiceInterface"));
		return ptr;
	}

};


// Class Music.MusicZoneService
// 0x00C8 (0x0490 - 0x03C8)
class AMusicZoneService : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x03C8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneService"));
		return ptr;
	}

};


// Class Music.NetMusicZoneActor
// 0x0008 (0x03D0 - 0x03C8)
class ANetMusicZoneActor : public AActor
{
public:
	class UMusicZoneComponent*                         MusicZone;                                                // 0x03C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.NetMusicZoneActor"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
