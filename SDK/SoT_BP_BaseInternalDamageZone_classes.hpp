#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseInternalDamageZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C
// 0x003F (0x0870 - 0x0831)
class ABP_BaseInternalDamageZone_C : public ABP_DamageZone_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0838(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RepairWood;                                               // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Start_Repair_Cue;                                         // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwiseEmitter                               RepairEmitter;                                            // 0x0850(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C"));
		return ptr;
	}


	void OnRepairMounted();
	bool GetRepairMountLocation(class USceneComponent** MountLocation, struct FName* MountSocket);
	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_BaseInternalDamageZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
