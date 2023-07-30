#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Music_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Music.MusicZoneInterface
// 0x0000 (0x0028 - 0x0028)
class UMusicZoneInterface : public UInterface
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
// 0x00C0 (0x03A0 - 0x02E0)
class UMusicZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationRTPC;                                             // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LocalRTPC;                                                // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 PlayEvent;                                                // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         OneShotEvents;                                            // 0x0310(0x0010) (Edit, ZeroConstructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // 0x0320(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisableAfterPlayThrough;                                  // 0x0328(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateOnBeginPlay;                                      // 0x0329(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMusicZoneStarted;                                       // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0340(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.MusicZoneComponent"));
		return ptr;
	}


	struct FWwiseEmitter GetEmitter();
	void DisableZone();
	void Client_StopMusicAndDisableZone();
	void Client_PlayOneShot(int Index);
	void ActivateZone();
};


// Class Music.AISpawnerMusicZoneComponent
// 0x0030 (0x03D0 - 0x03A0)
class UAISpawnerMusicZoneComponent : public UMusicZoneComponent
{
public:
	class UWwiseEvent*                                 BattleWonEvent;                                           // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAISpawner*                                  AISpawner;                                                // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APawn*>                               SpawnerPawns;                                             // 0x03B0(0x0010) (Net, ZeroConstructor)
	TEnumAsByte<EAISpawnerMusicZoneState>              SpawnerState;                                             // 0x03C0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x03C1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Music.AISpawnerMusicZoneComponent"));
		return ptr;
	}


	void OnRep_SpawnerState();
};


// Class Music.SynchedMusicZoneComponent
// 0x0030 (0x03D0 - 0x03A0)
class USynchedMusicZoneComponent : public UMusicZoneComponent
{
public:
	float                                              StartDelayTime;                                           // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayFromStartTimeMS;                                      // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x03A8(0x0028) MISSED OFFSET

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
