#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BreakableActorFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BreakableActorFramework.BreakableActorAudioComponent
// 0x00E0 (0x01A8 - 0x00C8)
class UBreakableActorAudioComponent : public UActorComponent
{
public:
	bool                                               UseParentEmitter;                                         // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     AudioPool;                                                // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PlayMusicEvent;                                           // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopMusicEvent;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PlayDamagedEvent;                                         // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PlayDestroyedEvent;                                       // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x00F8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BreakableActorFramework.BreakableActorAudioComponent"));
		return ptr;
	}

};


// Class BreakableActorFramework.BreakableActorBase
// 0x0180 (0x0548 - 0x03C8)
class ABreakableActorBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C8(0x0020) MISSED OFFSET
	float                                              DespawnDelay;                                             // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBreakableActorDamaged;                                  // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBreakableActorDestroyed;                                // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UPrimitiveComponent*                         ThirdPersonMesh;                                          // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBreakableActorAudioComponent*               AudioComponent;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBreakableActorVfxComponent*                 VFXComponent;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBreakableActorDynamicMaterialComponent*     DamageMaterialComponent;                                  // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   DamageableComponent;                                      // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x108];                                     // 0x0440(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BreakableActorFramework.BreakableActorBase"));
		return ptr;
	}


	void Multicast_WasDefeated(class AActor* InInstigator, class AActor* InDirectInstigator);
};


// Class BreakableActorFramework.BreakableSarcophagus
// 0x0000 (0x0548 - 0x0548)
class ABreakableSarcophagus : public ABreakableActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BreakableActorFramework.BreakableSarcophagus"));
		return ptr;
	}

};


// Class BreakableActorFramework.BreakableActorDynamicMaterialComponent
// 0x0128 (0x01F0 - 0x00C8)
class UBreakableActorDynamicMaterialComponent : public UActorComponent
{
public:
	uint32_t                                           MaterialElementIndex;                                     // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MagicColourPropertyName;                                  // 0x00CC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageLevelPropertyName;                                  // 0x00D4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TimeBasedPropertyName;                                    // 0x00DC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HitPositionPropertyName;                                  // 0x00E4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CollapseStartTimePropertyName;                            // 0x00EC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         TargetMesh;                                               // 0x00F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0100(0x0010) (BlueprintVisible, ZeroConstructor)
	class ABreakableActorBase*                         BreakableActor;                                           // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0118(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BreakableActorFramework.BreakableActorDynamicMaterialComponent"));
		return ptr;
	}

};


// Class BreakableActorFramework.BreakableActorItemSpawnComponent
// 0x0070 (0x04B0 - 0x0440)
class UBreakableActorItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0440(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BreakableActorFramework.BreakableActorItemSpawnComponent"));
		return ptr;
	}

};


// Class BreakableActorFramework.BreakableActorVfxComponent
// 0x00D8 (0x01A0 - 0x00C8)
class UBreakableActorVfxComponent : public UActorComponent
{
public:
	struct FColor                                      VFXTintColour;                                            // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class UObject*                                     DamagedParticleSystem;                                    // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     DestroyedParticleSystem;                                  // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GlowMaterialIndex;                                        // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       GlowMaterialPropertyName;                                 // 0x00E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlowMaterialScale;                                        // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlowMaterialBias;                                         // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlowUpdateSpeed;                                          // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class ABreakableActorBase*                         BreakableActor;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GlowMaterial;                                             // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0108(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BreakableActorFramework.BreakableActorVfxComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
