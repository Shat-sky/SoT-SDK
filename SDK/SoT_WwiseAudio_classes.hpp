#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WwiseAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WwiseAudio.WwiseCoreAssets
// 0x0030 (0x0058 - 0x0028)
class UWwiseCoreAssets : public UDataAsset
{
public:
	class UWwiseEvent*                                 PauseEventStart;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PauseEventRelease;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopAllEvent;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseMediaSoundComponentEvent;                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseNonShippingAudioRootAsset*             NonShippingAudioRootAsset;                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseIDsDatabase*                           WwiseIDsDatabase;                                         // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseCoreAssets"));
		return ptr;
	}

};


// Class WwiseAudio.AnimNotifyWwiseEmitterComponentRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimNotifyWwiseEmitterComponentRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.AnimNotifyWwiseEmitterComponentRetrievalInterface"));
		return ptr;
	}

};


// Class WwiseAudio.AudioReporterSubSystem
// 0x0050 (0x0078 - 0x0028)
class UAudioReporterSubSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.AudioReporterSubSystem"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkAudioEventSection
// 0x0008 (0x00A0 - 0x0098)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	class UWwiseEvent*                                 Event;                                                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkAudioEventSection"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkAudioRTPCSection
// 0x0090 (0x0128 - 0x0098)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class FString                                      Name;                                                     // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x00B0(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkAudioRTPCSection"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkTrack
// 0x0018 (0x00A0 - 0x0088)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0088(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0098(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkTrack"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x00A0 - 0x00A0)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkAudioEventTrack"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x00A0 - 0x00A0)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkAudioRTPCTrack"));
		return ptr;
	}

};


// Class WwiseAudio.MultiEmitterRootComponent
// 0x0020 (0x0300 - 0x02E0)
class UMultiEmitterRootComponent : public USceneComponent
{
public:
	TArray<struct FMultiEmitterData>                   MultiEmitterDataArray;                                    // 0x02E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWwiseEmitter>                       PlayingEmitters;                                          // 0x02F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MultiEmitterRootComponent"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseDebugManager
// 0x0060 (0x0088 - 0x0028)
class UWwiseDebugManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseDebugManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseEmitterInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseEmitterInterface"));
		return ptr;
	}

};


// Class WwiseAudio.MergedMultiEmitterComponent
// 0x0010 (0x0320 - 0x0310)
class UMergedMultiEmitterComponent : public UWwiseEmitterComponent
{
public:
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayEvent;                                                // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MergedMultiEmitterComponent"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseEmitterManager
// 0x0020 (0x0048 - 0x0028)
class UWwiseEmitterManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseEmitterManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseInputManagerInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseInputManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseInputManagerInterface"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseInputManager
// 0x0028 (0x0050 - 0x0028)
class UWwiseInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseInputManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseMediaManager
// 0x0050 (0x0078 - 0x0028)
class UWwiseMediaManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseMediaManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwisePoolManager
// 0x00D8 (0x0100 - 0x0028)
class UWwisePoolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwisePoolManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseSoundFrameManager
// 0x0020 (0x0048 - 0x0028)
class UWwiseSoundFrameManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseSoundFrameManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseEvent
// 0x0028 (0x0050 - 0x0028)
class UWwiseEvent : public UObject
{
public:
	class UWwiseBank*                                  RequiredBank;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               WaitForBankToLoad;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	uint32_t                                           WwiseId;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DurationMin;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DurationMax;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxAttenuation;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EWwiseEventDurationType>               DurationType;                                             // 0x0044(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CookedIsStopEvent;                                        // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0046(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseEvent"));
		return ptr;
	}


	bool IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos, float AttenuationScaler);
	float GetMaxAttenuation();
	TEnumAsByte<EWwiseEventDurationType> GetDurationType();
	float GetDurationMin();
	float GetDurationMax();
};


// Class WwiseAudio.WwiseIDsDatabase
// 0x0080 (0x00A8 - 0x0028)
class UWwiseIDsDatabase : public UDataAsset
{
public:
	TArray<uint32_t>                                   StateGroupIDs;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               StateGroupNames;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   StateValueIDs;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               StateValueNames;                                          // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   SwitchGroupIDs;                                           // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               SwitchGroupNames;                                         // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   SwitchStateIDs;                                           // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               SwitchStateNames;                                         // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseIDsDatabase"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseNonShippingAudioAsset
// 0x0030 (0x0058 - 0x0028)
class UWwiseNonShippingAudioAsset : public UDataAsset
{
public:
	class FString                                      CodeName;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      UAssetRelativePath;                                       // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      StreamRelativePath;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseNonShippingAudioAsset"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseNonShippingAudioRootAsset
// 0x0020 (0x0048 - 0x0028)
class UWwiseNonShippingAudioRootAsset : public UDataAsset
{
public:
	TArray<class UWwiseNonShippingAudioAsset*>         NonShippingAudioAssets;                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseNonShippingAudioRootAsset"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseBank
// 0x0048 (0x0070 - 0x0028)
class UWwiseBank : public UObject
{
public:
	class FString                                      path;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	uint32_t                                           WwiseId;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UWwiseBank*                                  InitBank;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseBank"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseDDSEvent
// 0x0010 (0x0060 - 0x0050)
class UWwiseDDSEvent : public UWwiseEvent
{
public:
	TArray<uint32_t>                                   DDSArgumentsGroupsIDs;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseDDSEvent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
