#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SecretChamberDoorManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C
// 0x0029 (0x03F1 - 0x03C8)
class ABP_SecretChamberDoorManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMechanismActionComponent*                   MechanismAction;                                          // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMechanismTriggerComponent*                  MechanismTrigger;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Abp_secret_chamber_door_Toggleable_Animated_Mechanism_C* ChamberDoor;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               ToggleActive;                                             // 0x03F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C"));
		return ptr;
	}


	void OnRep_ToggleActive();
	void UserConstructionScript();
	void BndEvt__MechanismAction_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, class AActor* Instigator);
	void BndEvt__MechanismAction_K2Node_ComponentBoundEvent_90_OnMechanismResetDelegate__DelegateSignature(const TScriptInterface<class UMechanismResetInterface>& Mechanism);
	void ExecuteUbergraph_BP_SecretChamberDoorManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
