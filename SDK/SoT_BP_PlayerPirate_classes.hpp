#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerPirate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerPirate.BP_PlayerPirate_C
// 0x00DC (0x203C - 0x1F60)
class ABP_PlayerPirate_C : public AAthenaPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorldVelocityTrackerComponent*              WorldVelocityTracker;                                     // 0x1F68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChainLightningReceiverComponent*            ChainLightningReceiver;                                   // 0x1F70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatusApplicationMonitorComponent*          StatusApplicationMonitor;                                 // 0x1F78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReviveComponent*                            ReviveComponent;                                          // 0x1F80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x1F88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVomitComponent*                             Vomit;                                                    // 0x1F90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoiseMakerComponent*                        NoiseMaker;                                               // 0x1F98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerNameplateComponent*                   PlayerNameplate;                                          // 0x1FA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBodyLightControllerComponent*               BodyLightController;                                      // 0x1FA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmbientLightSourceComponent*                BodyLight;                                                // 0x1FB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceTrackerComponent*                 AudioSpaceTracker;                                        // 0x1FB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerAtmosphericsAudioComponent*           PlayerAtmosphericsAudio;                                  // 0x1FC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_CharacterVFXComponent_C*                 BP_CharacterVFXComponent;                                 // 0x1FC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x1FD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_CharacterAudioComponent_C*               BP_PlayerAudioComponent;                                  // 0x1FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                      // 0x1FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerOceanAudioComponent*                  PlayerOceanAudio;                                         // 0x1FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TattooGlowDuration;                                       // 0x1FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1FF4(0x0004) MISSED OFFSET
	class UStaticMesh*                                 CurrentStaticMesh;                                        // 0x1FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               CurrentSkeletalMesh;                                      // 0x2000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMesh*>                       SkeletalMeshArray;                                        // 0x2008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMesh*>                         StaticMeshArray;                                          // 0x2018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSkeletalMesh;                                           // 0x2028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2029(0x0003) MISSED OFFSET
	int                                                ItemSelectArray;                                          // 0x202C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ItemScale;                                                // 0x2030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerPirate.BP_PlayerPirate_C"));
		return ptr;
	}


	unsigned char GetPxActorCapacityForPhysXAggregate();
	void TattoGlowDynamicMaterials(class UMeshComponent* Mesh);
	struct FVector GetMouthPosition();
	void UserConstructionScript();
	void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const struct FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const struct FTransform& TransformUpdate);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void ReceiveBeginPlay();
	void TriggerTattooGlow();
	void ScaleMesh(const struct FVector& Scale, class UPrimitiveComponent* FirstPersonMesh, class UPrimitiveComponent* ThirdPersonMesh);
	void SkipToNextMesh();
	void SetWieldedItemMesh(class AWieldableItem* Wieldable_Item_Ref, class UStaticMesh* StaticMesh, class USkeletalMesh* SkeletalMesh, bool WieldItem, const struct FVector& ItemScale, bool UseItemScale, TArray<class UStaticMesh*>* StaticMeshArray, TArray<class USkeletalMesh*>* SkeletalMeshArray);
	void IncreaseWieldedObjectScale(const struct FVector& ItemScaleIncrement);
	void ExecuteUbergraph_BP_PlayerPirate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
