#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WaterSlide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WaterSlide.Ride
// 0x0018 (0x03E0 - 0x03C8)
class ARide : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class USplineComponent*                            SplineComponent;                                          // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.Ride"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideParamsDataAsset
// 0x0028 (0x0050 - 0x0028)
class UWaterSlideParamsDataAsset : public UDataAsset
{
public:
	struct FWaterSlideParams                           WaterSlideParams;                                         // 0x0028(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideParamsDataAsset"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlide
// 0x0040 (0x0420 - 0x03E0)
class AWaterSlide : public ARide
{
public:
	class UWaterSlideParamsDataAsset*                  WaterSlideParamsDataAsset;                                // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         EntranceCollisionComponent;                               // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWaterSlide*                                 ContinuedWaterSlideRoute;                                 // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AWaterSlide*                                 LeftWaterSlideRoute;                                      // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AWaterSlide*                                 RightWaterSlideRoute;                                     // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEndOfSlide;                                             // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	struct FVector                                     EndOfSlideLaunchForce;                                    // 0x040C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class UWaterSlideAudioParams*                      WaterSlideAudioParams;                                    // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlide"));
		return ptr;
	}


	void SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent);
	void ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
};


// Class WaterSlide.Zipline
// 0x0350 (0x0730 - 0x03E0)
class AZipline : public ARide
{
public:
	TEnumAsByte<EZiplineAttachPointConfig>             ZiplineStartPointConfig;                                  // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldLaunchPlayer;                                       // 0x03E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03E2(0x0002) MISSED OFFSET
	float                                              LaunchForceMultiplier;                                    // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FZiplineFeelParameters                      ZiplineFeelParameters;                                    // 0x03E8(0x0310) (Edit)
	class UZiplineFXParams*                            ZiplineFXParams;                                          // 0x06F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0700(0x0008) MISSED OFFSET
	class UStaticMesh*                                 ZiplineGeometry;                                          // 0x0708(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ZiplineTrolleyGeometry;                                   // 0x0710(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ZiplineGeometryMaterialOverride;                          // 0x0718(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ZiplineGeometryMaterialScalerParameterName;               // 0x0720(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0728(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.Zipline"));
		return ptr;
	}

};


// Class WaterSlide.InteractableZipline
// 0x0038 (0x0768 - 0x0730)
class AInteractableZipline : public AZipline
{
public:
	class UInteractableComponentWithActionRules*       ZiplineStartInteractionPoint;                             // 0x0730(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractableComponentWithActionRules*       ZiplineEndInteractionPoint;                               // 0x0738(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PressedNotificationInputId;                               // 0x0740(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ReleasedNotificationInputId;                              // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AttachPointLocationOffset;                                // 0x0750(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttachPointSize;                                          // 0x0758(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoldTime;                                                 // 0x075C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OptionalItem;                                             // 0x0760(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.InteractableZipline"));
		return ptr;
	}

};


// Class WaterSlide.RidePlayerInterface
// 0x0000 (0x0028 - 0x0028)
class URidePlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.RidePlayerInterface"));
		return ptr;
	}

};


// Class WaterSlide.RidePlayerComponent
// 0x0068 (0x0148 - 0x00E0)
class URidePlayerComponent : public UDoubleIntentComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    PlayerWaterSlideVFXComponent;                             // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             PlayerWaterSlideVFX;                                      // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerWaterSlideVFXSpawnLocationZOffset;                  // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    PlayerZiplineWindVFXComponent;                            // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PlayerZiplineTrailVFXComponent;                           // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             PlayerZiplineTrailVFX;                                    // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PlayerZiplineWindVFX;                                     // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerZiplineTrailVFXSpawnLocation;                       // 0x0120(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x012C(0x0014) MISSED OFFSET
	class ARide*                                       CurrentRide;                                              // 0x0140(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.RidePlayerComponent"));
		return ptr;
	}

};


// Class WaterSlide.RideTransitionActionStateId
// 0x0000 (0x0028 - 0x0028)
class URideTransitionActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.RideTransitionActionStateId"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideActionStateId
// 0x0000 (0x0028 - 0x0028)
class UWaterSlideActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideActionStateId"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideAudioParams
// 0x0030 (0x0058 - 0x0028)
class UWaterSlideAudioParams : public UDataAsset
{
public:
	class UWwiseEvent*                                 WaterSlideStart;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaterSlideEnd;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaterSlideIsEndOneShot;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaterSlideChangeForkOneShot;                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerSpeedOnWaterSlideRTPC;                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeedThatMapsToOne;                                 // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeedThatMapsToZero;                                // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideAudioParams"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideInputComponent
// 0x0010 (0x02B0 - 0x02A0)
class UWaterSlideInputComponent : public ULookAtOffsetInputComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideInputComponent"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideVeeringAnalogInputId
// 0x0000 (0x0038 - 0x0038)
class UWaterSlideVeeringAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideVeeringAnalogInputId"));
		return ptr;
	}

};


// Class WaterSlide.ZiplineActionStateId
// 0x0000 (0x0028 - 0x0028)
class UZiplineActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.ZiplineActionStateId"));
		return ptr;
	}

};


// Class WaterSlide.ZiplineEditorComponent
// 0x0000 (0x0850 - 0x0850)
class UZiplineEditorComponent : public UCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.ZiplineEditorComponent"));
		return ptr;
	}

};


// Class WaterSlide.ZiplineFXParams
// 0x0048 (0x0070 - 0x0028)
class UZiplineFXParams : public UDataAsset
{
public:
	class UWwiseEvent*                                 ZiplineStartSFX;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ZiplineAdditiveOneShotSFX;                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ZiplineLoopStartSFX;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ZiplineEndSFX;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ZiplineLoopEndSFX;                                        // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerSpeedOnZiplineRTPC;                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PlayerZiplineWindVFX;                                     // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PlayerZiplineTrailVFX;                                    // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpawnParticleSpeedThreshold;                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.ZiplineFXParams"));
		return ptr;
	}

};


// Class WaterSlide.ZiplineInputComponent
// 0x0008 (0x02A8 - 0x02A0)
class UZiplineInputComponent : public ULookAtOffsetInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.ZiplineInputComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
