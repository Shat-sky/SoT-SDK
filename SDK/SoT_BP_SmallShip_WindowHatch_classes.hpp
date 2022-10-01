#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_WindowHatch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C
// 0x0020 (0x0588 - 0x0568)
class ABP_SmallShip_WindowHatch_C : public ASwitchMechanismTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent;// 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_mid_serving_hatch_R_01_a;                             // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void OnAnimationStarted();
	void OnAnimationCompleted();
	void ExecuteUbergraph_BP_SmallShip_WindowHatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
