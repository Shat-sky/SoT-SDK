#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostSands_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LostSands.LostSandsRowboatGunpowderBarrel
// 0x0240 (0x0608 - 0x03C8)
class ALostSandsRowboatGunpowderBarrel : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x03C8(0x00B8) MISSED OFFSET
	class UActionRulesComponent*                       ActionRulesComponent;                                     // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0488(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshComponent;                                      // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFlammableWieldableComponent*                FlammableComponent;                                       // 0x0498(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    StatusEffectComponent;                                    // 0x04A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UItemHealthComponent*                        ItemHealthComponent;                                      // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class URewindComponent*                            RewindComponent;                                          // 0x04B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      ToggleFuseInputId;                                        // 0x04C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       LightFuseDescription;                                     // 0x04C8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       ExtinguishFuseDescription;                                // 0x0500(0x0038) (Edit, DisableEditOnInstance)
	struct FName                                       NamedPointsGroupName;                                     // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class AActor>                            RangeReferenceNamedPointActor;                            // 0x0540(0x0020) (Edit, DisableEditOnInstance)
	TArray<float>                                      DistanceFromNamedPoints;                                  // 0x0560(0x0010) (Edit, ZeroConstructor)
	struct FPlayerStat                                 RowboatDestroyedAtGoldenSandsStat;                        // 0x0570(0x0004) (Edit, DisableEditOnInstance)
	struct FPlayerStat                                 RowboatDestroyedAwayFromGoldenSandsStat;                  // 0x0574(0x0004) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0578(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostSands.LostSandsRowboatGunpowderBarrel"));
		return ptr;
	}


	bool IsFuseEnabled();
	bool IsExplosionAtGoldenSandsOutpost(const struct FVector& InLocation);
	void EnableFuse();
	void DisableFuse();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
