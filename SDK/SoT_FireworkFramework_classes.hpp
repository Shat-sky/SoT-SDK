#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FireworkFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FireworkFramework.FireworkAmbientLightComponent
// 0x0050 (0x04F0 - 0x04A0)
class UFireworkAmbientLightComponent : public UAmbientLightSourceComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x04A0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkAmbientLightComponent"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkDamagerType
// 0x0000 (0x0028 - 0x0028)
class UFireworkDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkDamagerType"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkFeedbackDataAsset
// 0x0020 (0x0048 - 0x0028)
class UFireworkFeedbackDataAsset : public UDataAsset
{
public:
	float                                              MaxExplosionRadius;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UClass*                                      CameraShake;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeInnerRadiusMultiplier;                         // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        ExplosionRumble;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkFeedbackDataAsset"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkDataAsset
// 0x0128 (0x0150 - 0x0028)
class UFireworkDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           PercentageTimeUntilTrailDisappears;                       // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeUntilExplosion;                                       // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	bool                                               IsFlare;                                                  // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldCastAmbientLight;                                   // 0x0089(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	struct FFireworkAmbientLightData                   FireworkAmbientLightData;                                 // 0x008C(0x0014) (Edit, DisableEditOnInstance)
	TArray<struct FWeightedFireworkVFXData>            Explosions;                                               // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumExplosions;                                            // 0x00B0(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenExplosions;                                    // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           ExplosionLocationOffset;                                  // 0x0100(0x0030) (Edit, DisableEditOnInstance)
	float                                              FlashbangRadius;                                          // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     ExplosionSfxPool;                                         // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 LaunchSfx;                                                // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFireworkFeedbackDataAsset*                  FireworkFeedbackData;                                     // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkDataAsset"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkExplosion
// 0x00D8 (0x04A0 - 0x03C8)
class AFireworkExplosion : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FGeneratedFireworkData                      GeneratedFireworkData;                                    // 0x03D0(0x0058) (Transient)
	class USceneComponent*                             RootSceneComponent;                                       // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFireworkAmbientLightComponent*              FireworkAmbientLightComponent;                            // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedExplosionParticles;                                // 0x0438(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FWwiseEmitter                               AudioEmitter;                                             // 0x0440(0x0020) (Transient)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0460(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkExplosion"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkItemInfo
// 0x0020 (0x0530 - 0x0510)
class AFireworkItemInfo : public AItemInfo
{
public:
	class ULoadableFireworkComponent*                  LoadableProjectileComponent;                              // 0x0510(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FStringAssetReference                       FireworkDataAsset;                                        // 0x0518(0x0010) (Edit, ZeroConstructor)
	int                                                GeneratedDataRNGSeed;                                     // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x052C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkItemInfo"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UFireworkServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkServiceInterface"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkProjectile
// 0x0108 (0x0708 - 0x0600)
class AFireworkProjectile : public ALaunchableProjectile
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0600(0x0010) MISSED OFFSET
	class USphereComponent*                            CollisionComponent;                                       // 0x0610(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UFireworkStatsComponent*                     FireworkStatsComponent;                                   // 0x0628(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MeshDirectionComponent;                                   // 0x0630(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UProjectileAnimationComponent*               AnimationComponent;                                       // 0x0638(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FGeneratedFireworkData                      GeneratedFireworkData;                                    // 0x0640(0x0058) (Transient)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0698(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkProjectile"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkService
// 0x0098 (0x0460 - 0x03C8)
class AFireworkService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x03C8(0x0078) MISSED OFFSET
	int                                                NumberOfCachedFlares;                                     // 0x0440(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0444(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkService"));
		return ptr;
	}

};


// Class FireworkFramework.FireworksSettings
// 0x0018 (0x0050 - 0x0038)
class UFireworksSettings : public UDeveloperSettings
{
public:
	float                                              FlashbangRadius;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashbangFlashTimer;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashbangFadeOutTimer;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashbangCooldown;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadedFuseTimer;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworksSettings"));
		return ptr;
	}

};


// Class FireworkFramework.FireworksSettingsDataAsset
// 0x0040 (0x0068 - 0x0028)
class UFireworksSettingsDataAsset : public UDataAsset
{
public:
	float                                              LoadedFuseTimer;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     FuseSoundWisePool;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 FuseActivateSoundPlayEvent;                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 FuseSoundPlayEvent;                                       // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 FuseSoundStopEvent;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     FuseParticleSystem;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       FuseMeshAssetReference;                                   // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworksSettingsDataAsset"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkStatsComponent
// 0x00C0 (0x0188 - 0x00C8)
class UFireworkStatsComponent : public UActorComponent
{
public:
	float                                              FlareRadius;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	int                                                NumberOfFireworksFiredAtNight;                            // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireworksFiredAtNightRadius;                              // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiredFireworksAtNightTimer;                               // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xAC];                                      // 0x00DC(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkStatsComponent"));
		return ptr;
	}

};


// Class FireworkFramework.ImpactProjectileIdFirework
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileIdFirework : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.ImpactProjectileIdFirework"));
		return ptr;
	}

};


// Class FireworkFramework.LoadableFireworkComponent
// 0x0010 (0x0140 - 0x0130)
class ULoadableFireworkComponent : public ULoadableProjectileComponent
{
public:
	bool                                               ShouldProjectileTrailDoReflections;                       // 0x0130(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseGlobalOverrideFuseTimer;                         // 0x0131(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseGlobalOverrideFuseSfx;                           // 0x0132(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseGlobalOverrideFuseVfx;                           // 0x0133(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseGlobalOverrideFuseMesh;                          // 0x0134(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	class UFireworksSettingsDataAsset*                 FireworksSettingsDataAsset;                               // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.LoadableFireworkComponent"));
		return ptr;
	}

};


// Class FireworkFramework.ProjectileAnimationComponent
// 0x01C8 (0x0290 - 0x00C8)
class UProjectileAnimationComponent : public UActorComponent
{
public:
	TArray<struct FWeightedProjectileMeshAnimationData> ProjectileAnimationCurves;                                // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FRuntimeVectorCurve                         AnimationOffsetCurve;                                     // 0x00E0(0x0170) (Transient)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0250(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.ProjectileAnimationComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif