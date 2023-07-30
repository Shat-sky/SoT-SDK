#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_secret_chamber_door_Toggleable_Animated_Mechanism_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C
// 0x0038 (0x05A8 - 0x0570)
class Abp_secret_chamber_door_Toggleable_Animated_Mechanism_C : public AToggleAnimatedMechanismAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    DoorDust;                                                 // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        sod_bld_wall_broken_04_a;                                 // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        sod_bld_wall_sml_03_b;                                    // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent02;                                    // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__MechanismActionComponent_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, class AActor* Instigator);
	void ExecuteUbergraph_bp_secret_chamber_door_Toggleable_Animated_Mechanism(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
