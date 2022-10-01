#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_FireworkFramework_enums.hpp"
#include "SoT_RareAudio_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Maths_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FireworkFramework.FireworkAmbientLightData
// 0x0014
struct FFireworkAmbientLightData
{
	float                                              FadeInTimer;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTimer;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifetimeTimer;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientIntensity;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FireworkFramework.WeightedFireworkVFXData
// 0x0030
struct FWeightedFireworkVFXData
{
	class UObject*                                     VFX;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Sfx;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 SecondarySFX;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                AmbientLightColour;                                       // 0x001C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FireworkFramework.FireworkExplosionData
// 0x0040
struct FFireworkExplosionData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     VFX;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Sfx;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SecondarySFX;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct FireworkFramework.GeneratedFireworkData
// 0x0058
struct FGeneratedFireworkData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
	struct FFireworkAmbientLightData                   FireworkAmbientLightData;                                 // 0x000C(0x0014)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	TArray<struct FFireworkExplosionData>              ExplosionData;                                            // 0x0028(0x0010) (ZeroConstructor)
	class UWwiseObjectPoolWrapper*                     SfxPool;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LaunchSfx;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	class UFireworkFeedbackDataAsset*                  FireworkFeedbackData;                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FireworkFramework.WeightedProjectileMeshAnimationData
// 0x0178
struct FWeightedProjectileMeshAnimationData
{
	struct FRuntimeVectorCurve                         AnimationCurve;                                           // 0x0000(0x0170) (Edit, DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
