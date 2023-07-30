// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SecretChamberDoorManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.OnRep_ToggleActive
// (BlueprintCallable, BlueprintEvent)

void ABP_SecretChamberDoorManager_C::OnRep_ToggleActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.OnRep_ToggleActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SecretChamberDoorManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.BndEvt__MechanismAction_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecretChamberDoorManager_C::BndEvt__MechanismAction_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.BndEvt__MechanismAction_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature"));

	struct
	{
		TScriptInterface<class UMechanismActionInterface> Action;
		TEnumAsByte<EMechanismActionState> PreviousState;
		TEnumAsByte<EMechanismActionState> NewState;
		class AActor*                  Instigator;
	} params;

	params.Action = Action;
	params.PreviousState = PreviousState;
	params.NewState = NewState;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.BndEvt__MechanismAction_K2Node_ComponentBoundEvent_90_OnMechanismResetDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Mechanism                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecretChamberDoorManager_C::BndEvt__MechanismAction_K2Node_ComponentBoundEvent_90_OnMechanismResetDelegate__DelegateSignature(const TScriptInterface<class UMechanismResetInterface>& Mechanism)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.BndEvt__MechanismAction_K2Node_ComponentBoundEvent_90_OnMechanismResetDelegate__DelegateSignature"));

	struct
	{
		TScriptInterface<class UMechanismResetInterface> Mechanism;
	} params;

	params.Mechanism = Mechanism;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.ExecuteUbergraph_BP_SecretChamberDoorManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecretChamberDoorManager_C::ExecuteUbergraph_BP_SecretChamberDoorManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.ExecuteUbergraph_BP_SecretChamberDoorManager"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
