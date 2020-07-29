#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Maths_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Water.EWaterQueryResult
enum class EWaterQueryResult : uint8_t
{
	EWaterQueryResult__Success     = 0,
	None                           = 1,
	EWaterQueryResult__EWaterQueryResult_MAX = 2,
	EAttitudeTowardActor__Friendly = 3
};


// Enum Water.EBuoyancyDragSampleType
enum class EBuoyancyDragSampleType : uint8_t
{
	EBuoyancyDragSampleType__Spherical = 0,
	None                           = 1
};


// Enum Water.EBuoyancySampleType
enum class EBuoyancySampleType : uint8_t
{
	EBuoyancySampleType__Spherical = 0,
	None                           = 1,
	EShipAlignmentType__None       = 2
};


// Enum Water.EWaterSplashProbeType
enum class EWaterSplashProbeType : uint8_t
{
	EWaterSplashProbeType__ThresholdedRateOfChange = 0,
	None                           = 1,
	EWaterSplashProbeType__Continuous = 2,
	None01                         = 3,
	EAimSensitivitySettingCategory__Invalid = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Water.WaterInformation
// 0x0010
struct FWaterInformation
{
	class UClass*                                      WaterType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               CanSwim;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Water.BuoyancyVolumeSample
// 0x0058
struct FBuoyancyVolumeSample
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuoyancySampleType>                   Type;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelevantForSubmersionVolumeCalculation;                  // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              Scalar;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingScalar;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForce;                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForceSecondary;                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistUnderwaterVSBuoyancyForceTertiary;                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FakeZOffsetGeneratorCurve;                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FakeZOffsetAmp;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FakeZOffsetGeneratorTimeScale;                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Water.BuoyancyDragSample
// 0x0090
struct FBuoyancyDragSample
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuoyancyDragSampleType>               Type;                                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x63];                                      // 0x002D(0x0063) MISSED OFFSET
};

// ScriptStruct Water.WaterBuoyancy
// 0x0130
struct FWaterBuoyancy
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              OverallBuyoancyScalar;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingPerSample;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalAngularDampingWhenSubmerged;                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FBuoyancyVolumeSample>               VolumeSamples;                                            // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBuoyancyDragSample>                 DragSamples;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 BuyoancySampleZSpeedVSDampeningScalar;                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              QuadSubmersionTestSampleResolution;                       // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xEC];                                      // 0x0044(0x00EC) MISSED OFFSET
};

// ScriptStruct Water.BuoyancySampleMovementConfigurationEntry
// 0x0018
struct FBuoyancySampleMovementConfigurationEntry
{
	struct FVector                                     SampleOffset;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BuoyancyScaleCurve;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.BuoyancySampleMovementConfiguration
// 0x0038
struct FBuoyancySampleMovementConfiguration
{
	class UCurveVector*                                CenterOfMassOffsetCurve;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuoyancySampleMovementConfigurationEntry> SampleMoveData;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              OverallBuoyancyScalar;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 OverallBuoyancyScalarBlendCurve;                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ProbeMovementBlendCurve;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Water.BuoyancySampleMovement
// 0x0068
struct FBuoyancySampleMovement
{
	TArray<struct FBuoyancySampleMovementConfiguration> Configurations;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
	class UCurveFloat*                                 BuoyancyScalarCurve;                                      // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCurveFloat*                                 ProbeMovementCurve;                                       // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};

// ScriptStruct Water.WaterSplashProbe
// 0x00D8
struct FWaterSplashProbe
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      ProbeDebugName;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FVector                                     LocalOffset;                                              // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RateOfChangeThreshold;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalOffsetAdjustment;                                    // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LocalOffsetAdjustmentDuration;                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterSplashProbeType>                 Type;                                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8F];                                      // 0x0049(0x008F) MISSED OFFSET
};

// ScriptStruct Water.WaterSpout
// 0x0070
struct FWaterSpout
{
	struct FTransform                                  SpoutLocatorTransform;                                    // 0x0000(0x0030) (Edit, IsPlainOldData)
	class UParticleSystemComponent*                    SpoutParticleSystem;                                      // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SplashParticleSystem;                                     // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
};

// ScriptStruct Water.WaterSplashProbesContainer
// 0x0018
struct FWaterSplashProbesContainer
{
	TArray<struct FWaterSplashProbe>                   Probes;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              ProbeSamplingTime;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Water.EventCurrentWaterPlaneChange
// 0x0010
struct FEventCurrentWaterPlaneChange
{
	class UBaseWaterComponent*                         FormerWaterPlane;                                         // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBaseWaterComponent*                         NewWaterPlane;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Water.EventLeftWaterExclusionZone
// 0x0001
struct FEventLeftWaterExclusionZone
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Water.EventEnteredWaterExclusionZone
// 0x0001
struct FEventEnteredWaterExclusionZone
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Water.FFTWaterQueryResult
// 0x001C
struct FFFTWaterQueryResult
{
	float                                              Height;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Choppiness;                                               // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQueryResult>                     WaterQueryResult;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Water.FFTWaterTickFunction
// 0x0020 (0x0068 - 0x0048)
struct FFFTWaterTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
