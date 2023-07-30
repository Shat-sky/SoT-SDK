#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_WwiseAudio_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_MovieScene_classes.hpp"
#include "SoT_RareAudio_classes.hpp"
#include "SoT_WwiseAudioCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WwiseAudio.MultiEmitterData
// 0x0028
struct FMultiEmitterData
{
	class UWwiseObjectPoolWrapper*                     PoolWrapper;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	class UWwiseEvent*                                 PlayEvent;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WwiseAudio.WwiseAudioAcousticSurfaceParams
// 0x0008
struct FWwiseAudioAcousticSurfaceParams
{
	float                                              Thickness;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Reflectivity;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseEmitterParams
// 0x0002
struct FWwiseEmitterParams
{
	bool                                               bEnableObstructionAndOcclusion;                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAccoustics;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseListenerInfo
// 0x003C
struct FWwiseListenerInfo
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Front;                                                    // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseNativeEmitterPoolDensityParams
// 0x0028
struct FWwiseNativeEmitterPoolDensityParams
{
	bool                                               PlayPoolDensityAudio;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 PoolDensityAudioPlayEvent;                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PoolDensityAudioStopEvent;                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DensityRtpcName;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FullDensityAmount;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DensityDistance;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseExternalSource
// 0x0010
struct FWwiseExternalSource
{
	class FString                                      path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WwiseAudio.WwiseSubtitle
// 0x0010
struct FWwiseSubtitle
{
	class FString                                      Subtitle;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WwiseAudio.MovieSceneAkAudioEventTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct WwiseAudio.MovieSceneAkAudioRTPCTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct WwiseAudio.MovieSceneAkAudioRTPCSectionData
// 0x0088
struct FMovieSceneAkAudioRTPCSectionData
{
	class FString                                      RTPCName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FRichCurve                                  RTPCCurve;                                                // 0x0010(0x0078)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
