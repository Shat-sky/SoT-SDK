#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Watercrafts.CheckRowboatLiveriesStatCondition
// 0x0020 (0x0048 - 0x0028)
class UCheckRowboatLiveriesStatCondition : public UStatCondition
{
public:
	TAssetPtr<class UClass>                            RowboatLiveryEntitlement;                                 // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.CheckRowboatLiveriesStatCondition"));
		return ptr;
	}

};


// Class Watercrafts.CheckRowboatTypeStatCondition
// 0x0020 (0x0048 - 0x0028)
class UCheckRowboatTypeStatCondition : public UStatCondition
{
public:
	TAssetPtr<class UClass>                            RowboatType;                                              // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.CheckRowboatTypeStatCondition"));
		return ptr;
	}

};


// Class Watercrafts.ControllableOarsInterface
// 0x0000 (0x0028 - 0x0028)
class UControllableOarsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ControllableOarsInterface"));
		return ptr;
	}

};


// Class Watercrafts.FakeShip
// 0x0110 (0x04D8 - 0x03C8)
class AFakeShip : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	TArray<class AItemProxy*>                          AttachedItems;                                            // 0x03D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xF8];                                      // 0x03E0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.FakeShip"));
		return ptr;
	}


	void OnAttachedItemEndPlay(class AActor* Actor);
};


// Class Watercrafts.WatercraftTrackerInterface
// 0x0000 (0x0028 - 0x0028)
class UWatercraftTrackerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftTrackerInterface"));
		return ptr;
	}

};


// Class Watercrafts.ItemProxyWatercraftTrackerComponent
// 0x0098 (0x0160 - 0x00C8)
class UItemProxyWatercraftTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UItemProxyWatercraftTrackerComponentDataAsset* WatercraftTrackingData;                                   // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentWatercraft;                                        // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ItemProxyWatercraftTrackerComponent"));
		return ptr;
	}


	void OnRep_CurrentWatercraft(class AActor* PreviousWatercraft);
	void OnCurrentWatercraftDestroyed(class AActor* DestroyedWatercraft);
};


// Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset
// 0x0010 (0x0038 - 0x0028)
class UItemProxyWatercraftTrackerComponentDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              WatercraftTypes;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.RowboatAudioComponent
// 0x01E0 (0x04C0 - 0x02E0)
class URowboatAudioComponent : public USceneComponent
{
public:
	class URowboatAudioComponentParams*                Params;                                                   // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ARowboat*                                    ParentRowboat;                                            // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x02F0(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatAudioComponent"));
		return ptr;
	}

};


// Class Watercrafts.RowboatAudioComponentParams
// 0x00C0 (0x00E8 - 0x0028)
class URowboatAudioComponentParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     RowboatObjectPool;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatWakeStart;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatWakeStop;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowboatSpeedRtpcName;                                     // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RowboatMaxSpeedRtpc;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatLaunch;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStart;                              // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStop;                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatStrainStart;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatStrainStop;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowboatStrainRtpcName;                                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RowboatMaxStrainRtpc;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatTakenDamage;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountRequiredForNoiseToPlay;                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatAttach;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatDetach;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     WwiseOarEmitterPool;                                      // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarInOarLayer;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarInWaterLayer;                                      // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarOutOarLayer;                                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarOutWaterLayer;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarBrakingLoop;                                       // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopOarBrakingLoop;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarPullFinished;                                      // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatAudioComponentParams"));
		return ptr;
	}

};


// Class Watercrafts.RowboatCustomizationLoadoutInterface
// 0x0000 (0x0028 - 0x0028)
class URowboatCustomizationLoadoutInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatCustomizationLoadoutInterface"));
		return ptr;
	}

};


// Class Watercrafts.RowboatCustomizationLoadoutComponent
// 0x0048 (0x0110 - 0x00C8)
class URowboatCustomizationLoadoutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TAssetPtr<class UClass>                            DefaultCustomization;                                     // 0x00D0(0x0020) (Edit)
	class UClass*                                      EquippedCustomization;                                    // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatCustomizationLoadoutComponent"));
		return ptr;
	}

};


// Class Watercrafts.RowboatDescDataAsset
// 0x0020 (0x0048 - 0x0028)
class URowboatDescDataAsset : public UDataAsset
{
public:
	struct FPartDesc                                   PartDesc;                                                 // 0x0028(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatDescDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.RowboatDockedToShipConditionalStatTrigger
// 0x0000 (0x0030 - 0x0030)
class URowboatDockedToShipConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatDockedToShipConditionalStatTrigger"));
		return ptr;
	}

};


// Class Watercrafts.RowboatTypeCategory
// 0x0000 (0x0078 - 0x0078)
class URowboatTypeCategory : public UCategoryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatTypeCategory"));
		return ptr;
	}

};


// Class Watercrafts.RowboatEntitlementDesc
// 0x0010 (0x00D8 - 0x00C8)
class URowboatEntitlementDesc : public UEntitlementDesc
{
public:
	struct FStringClassReference                       Rowboat;                                                  // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatEntitlementDesc"));
		return ptr;
	}

};


// Class Watercrafts.RowboatInterface
// 0x0000 (0x0028 - 0x0028)
class URowboatInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatInterface"));
		return ptr;
	}

};


// Class Watercrafts.RowboatLiveryCategory
// 0x0000 (0x0078 - 0x0078)
class URowboatLiveryCategory : public UCategoryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatLiveryCategory"));
		return ptr;
	}

};


// Class Watercrafts.RowboatLiveryDesc
// 0x0010 (0x00D8 - 0x00C8)
class URowboatLiveryDesc : public UEntitlementDesc
{
public:
	struct FStringAssetReference                       RowboatDescDataAsset;                                     // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatLiveryDesc"));
		return ptr;
	}

};


// Class Watercrafts.RowboatLiveryPicker
// 0x0000 (0x0028 - 0x0028)
class URowboatLiveryPicker : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatLiveryPicker"));
		return ptr;
	}

};


// Class Watercrafts.RowboatLiveryPickerDataAsset
// 0x0020 (0x0048 - 0x0028)
class URowboatLiveryPickerDataAsset : public UDataAsset
{
public:
	TArray<struct FRowboatLiveryByWeight>              LiveriesInThisGroup;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FRowboatLiveryPickerDataAssetConditions> SubgroupsInPriorityOrder;                                 // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatLiveryPickerDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.DataAssetRowboatLiveryPicker
// 0x0008 (0x0030 - 0x0028)
class UDataAssetRowboatLiveryPicker : public URowboatLiveryPicker
{
public:
	class URowboatLiveryPickerDataAsset*               DataAsset;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.DataAssetRowboatLiveryPicker"));
		return ptr;
	}

};


// Class Watercrafts.FixedRowboatLiveryPicker
// 0x0020 (0x0048 - 0x0028)
class UFixedRowboatLiveryPicker : public URowboatLiveryPicker
{
public:
	TAssetPtr<class UClass>                            Livery;                                                   // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.FixedRowboatLiveryPicker"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsLeftForwardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsLeftForwardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsLeftForwardNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsLeftForwardDeactivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsRightForwardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsRightForwardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsRightForwardNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsRightForwardDeactivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsLeftBrakingActivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsLeftBrakingDeactivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsRightBrakingActivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class URowboatOarsRightBrakingDeactivatedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId"));
		return ptr;
	}

};


// Class Watercrafts.ScrapeableDamageDataAsset
// 0x0010 (0x0038 - 0x0028)
class UScrapeableDamageDataAsset : public UDataAsset
{
public:
	TArray<struct FScrapeableDamageSpeedEntry>         DamageSpeedParams;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ScrapeableDamageDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.ScrapeableInterface
// 0x0000 (0x0028 - 0x0028)
class UScrapeableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ScrapeableInterface"));
		return ptr;
	}

};


// Class Watercrafts.ScrapeableComponent
// 0x0030 (0x00F8 - 0x00C8)
class UScrapeableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	float                                              MinIntervalBetweenScrapeDamage;                           // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class UScrapeableDamageDataAsset*                  ScrapeDamageSettings;                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SafeZoneCenterDirection;                                  // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeZoneMaximumAngle;                                     // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScrapeDamagerType;                                        // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.ScrapeableComponent"));
		return ptr;
	}

};


// Class Watercrafts.Watercraft
// 0x0368 (0x0730 - 0x03C8)
class AWatercraft : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03C8(0x0038) MISSED OFFSET
	class UBuoyancyComponent*                          BuoyancyComponent;                                        // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FWatercraftRolloverCorrector                RolloverCorrector;                                        // 0x0408(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class UShipNosediveBrake*                          NosediveBrake;                                            // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBowSplashContainer*                         BowSplashContainer;                                       // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CraftMesh;                                                // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapHits;                                              // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WaterOcclusionVolume;                                     // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteractionComponent;                                // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientConvexHullCollisionProfile;                         // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNetTimeStampCalculator                     MovementTimeStamp;                                        // 0x0458(0x0070) (Net)
	struct FRigidBodyErrorCorrection                   PhysicsErrorCorrection;                                   // 0x04C8(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x04E4(0x003C) MISSED OFFSET
	struct FBuoyancySampleMovement                     BuoyancySampleMovement;                                   // 0x0520(0x0068) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 SpeedToChoppinessScalarCurve;                             // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepWaterSubmersionThreshold;                             // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyChoppinessWhileSinking;                           // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCritical;                                               // 0x0598(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RigidBodyAwake;                                           // 0x0599(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InContactWithLand;                                        // 0x059A(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InDeepWater;                                              // 0x059B(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	TScriptInterface<class UScrapeableInterface>       Scrapeable;                                               // 0x05A0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x180];                                     // 0x05B0(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.Watercraft"));
		return ptr;
	}


	void OnRigidBodyWake(const struct FName& InBoneName);
	void OnRigidBodySleep(const struct FName& InBoneName);
};


// Class Watercrafts.Rowboat
// 0x0378 (0x0AA8 - 0x0730)
class ARowboat : public AWatercraft
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0730(0x0048) MISSED OFFSET
	class UChildActorComponent*                        LeftSideClamberSpot;                                      // 0x0778(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RightSideClamberSpot;                                     // 0x0780(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ForceSpot;                                                // 0x0788(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lantern;                                                  // 0x0790(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RowingSeat;                                               // 0x0798(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        StorageSeat;                                              // 0x07A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class URowboatCustomizationLoadoutComponent*       CustomizationLoadoutComponent;                            // 0x07A8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UShipLiveryComponent*                        LiveryComponent;                                          // 0x07B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UReplicatedShipPartCustomizationComponent*   CustomizationComponent;                                   // 0x07B8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class URepairableComponent*                        RepairableComponent;                                      // 0x07C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     WaterExclusionOffset;                                     // 0x07C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07D4(0x0004) MISSED OFFSET
	class UTetherCustomisationComponent*               TetherCustomisationComponent;                             // 0x07D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x07E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                 // 0x07E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class URammableComponent*                          RammableComponent;                                        // 0x07F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UScrapeableComponent*                        ScrapeableComponent;                                      // 0x07F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class URowboatAudioComponent*                      RowboatAudio;                                             // 0x0800(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBaseHullDragDynamicsDesc*                   HullDragDynamicsDesc;                                     // 0x0808(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBowSplashContainer*                         OarSplashContainer;                                       // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMountableComponent*                         MountableComponent;                                       // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UActorActivationComponent*                   ActorActivationComponent;                                 // 0x0820(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 LinearDampingOverTimeWhileBeachedScalarCurve;             // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AngularDampingOverTimeWhileBeachedScalarCurve;            // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRowboatDamageEffectData                    DamageEffectData;                                         // 0x0838(0x0018) (Edit, DisableEditOnInstance)
	struct FRowboatStrainDamageData                    StrainDamageData;                                         // 0x0850(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UChildActorComponent*>                AlwaysEnabledInteractables;                               // 0x0870(0x0010) (ExportObject, ZeroConstructor)
	class UShroudBreakerTrackerComponent*              ShroudBreakerTrackerComponent;                            // 0x0880(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsBeingLaunched;                                          // 0x0888(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsSinking;                                                // 0x0889(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x088A(0x0002) MISSED OFFSET
	float                                              MaxPushingAngle;                                          // 0x088C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStrainAmount;                                      // 0x0890(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsDocked;                                                 // 0x0894(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0895(0x0001) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     CoverCollisionChannel;                                    // 0x0896(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0897(0x0001) MISSED OFFSET
	float                                              UnderCoverCheckInterval;                                  // 0x0898(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderCoverHeight;                                         // 0x089C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             RelativeUnderCoverProbeRoots;                             // 0x08A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ETrackedActorType>                     TrackedActorType;                                         // 0x08B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08B1(0x0003) MISSED OFFSET
	float                                              LightDamagedRepairTime;                                   // 0x08B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModerateDamagedRepairTime;                                // 0x08B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyDamagedRepairTime;                                   // 0x08BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightDamagedHealthThreshold;                              // 0x08C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModerateDamagedHealthThreshold;                           // 0x08C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyDamagedHealthThreshold;                              // 0x08C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1DC];                                     // 0x08CC(0x01DC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.Rowboat"));
		return ptr;
	}


	void SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables);
	void ReactToRepairableStateChanged(TEnumAsByte<ERepairableState> InNewState, TEnumAsByte<ERepairableState> InPreviousState, class URepairableComponent* InRepairableComponent);
	void OnRep_IsSinking();
};


// Class Watercrafts.RowboatPartInterface
// 0x0000 (0x0028 - 0x0028)
class URowboatPartInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatPartInterface"));
		return ptr;
	}

};


// Class Watercrafts.RowboatSpawnParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class URowboatSpawnParamsDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              RowboatTypes;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowboatSpawnParamsDataAsset"));
		return ptr;
	}

};


// Class Watercrafts.RowingActionStateId
// 0x0000 (0x0028 - 0x0028)
class URowingActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowingActionStateId"));
		return ptr;
	}

};


// Class Watercrafts.RowingInputComponent
// 0x0008 (0x02A8 - 0x02A0)
class URowingInputComponent : public ULookAtOffsetInputComponent
{
public:
	class ARowingSeat*                                 TargetOars;                                               // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.RowingInputComponent"));
		return ptr;
	}

};


// Class Watercrafts.StorageSeat
// 0x0030 (0x06B0 - 0x0680)
class AStorageSeat : public ASeat
{
public:
	class UClass*                                      StorageInteractionInput;                                  // 0x0680(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainerComponent;                                // 0x0688(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0690(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.StorageSeat"));
		return ptr;
	}

};


// Class Watercrafts.TaleQuestSinkWatercraftStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestSinkWatercraftStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.TaleQuestSinkWatercraftStep"));
		return ptr;
	}

};


// Class Watercrafts.TaleQuestWatercraftService
// 0x0028 (0x0088 - 0x0060)
class UTaleQuestWatercraftService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.TaleQuestWatercraftService"));
		return ptr;
	}

};


// Class Watercrafts.TaleQuestWatercraftServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestWatercraftServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.TaleQuestWatercraftServiceDesc"));
		return ptr;
	}

};


// Class Watercrafts.TaleQuestSinkWatercraftStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UTaleQuestSinkWatercraftStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableWatercraft                    Watercraft;                                               // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.TaleQuestSinkWatercraftStepDesc"));
		return ptr;
	}

};


// Class Watercrafts.TaleQuestSpawnWatercraftStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestSpawnWatercraftStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.TaleQuestSpawnWatercraftStep"));
		return ptr;
	}

};


// Class Watercrafts.TaleQuestSpawnWatercraftStepDesc
// 0x00A8 (0x0128 - 0x0080)
class UTaleQuestSpawnWatercraftStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableTransform                     SpawnLocation;                                            // 0x0080(0x0038) (Edit)
	TAssetPtr<class UClass>                            WatercraftClass;                                          // 0x00B8(0x0020) (Edit)
	TAssetPtr<class UClass>                            LiveryEntitlement;                                        // 0x00D8(0x0020) (Edit)
	struct FQuestVariableWatercraft                    Watercraft;                                               // 0x00F8(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.TaleQuestSpawnWatercraftStepDesc"));
		return ptr;
	}

};


// Class Watercrafts.TaleQuestWatercraftFunctionLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleQuestWatercraftFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.TaleQuestWatercraftFunctionLibrary"));
		return ptr;
	}


	class AWatercraft* GetFirstSpawnedWatercraft();
	void FilterPointsByDistanceFromWatercraft(float MinDistance, TArray<struct FOrientedPoint>* Points);
};


// Class Watercrafts.WatercraftBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWatercraftBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftBlueprintFunctionLibrary"));
		return ptr;
	}


	static class AWatercraft* SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation);
};


// Class Watercrafts.WatercraftServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UWatercraftServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftServiceInterface"));
		return ptr;
	}

};


// Class Watercrafts.WatercraftService
// 0x0008 (0x03D0 - 0x03C8)
class AWatercraftService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftService"));
		return ptr;
	}

};


// Class Watercrafts.WatercraftSpawnData
// 0x0030 (0x0088 - 0x0058)
class UWatercraftSpawnData : public UItemSpawnData
{
public:
	TAssetPtr<class UClass>                            WatercraftClass;                                          // 0x0058(0x0020) (Edit)
	class URowboatLiveryPicker*                        LiveryPicker;                                             // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MinDistanceToNearestWatercraftInMetres;                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftSpawnData"));
		return ptr;
	}

};


// Class Watercrafts.WatercraftsSettings
// 0x0020 (0x0058 - 0x0038)
class UWatercraftsSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       RowboatTypesEntitlementsMapDataAsset;                     // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       RowboatLiveryEntitlementsMapDataAsset;                    // 0x0048(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftsSettings"));
		return ptr;
	}

};


// Class Watercrafts.WatercraftTrackerComponent
// 0x0018 (0x00E0 - 0x00C8)
class UWatercraftTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<class AActor*>                              CurrentWatercrafts;                                       // 0x00D0(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Watercrafts.WatercraftTrackerComponent"));
		return ptr;
	}


	void OnWatercraftDestroyed(class AActor* WatercraftActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
