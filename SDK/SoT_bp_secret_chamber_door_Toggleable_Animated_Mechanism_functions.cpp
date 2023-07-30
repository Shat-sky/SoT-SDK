// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_secret_chamber_door_Toggleable_Animated_Mechanism_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_secret_chamber_door_Toggleable_Animated_Mechanism_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.BndEvt__MechanismActionComponent_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismActionState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_secret_chamber_door_Toggleable_Animated_Mechanism_C::BndEvt__MechanismActionComponent_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.BndEvt__MechanismActionComponent_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature"));

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


// Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.ExecuteUbergraph_bp_secret_chamber_door_Toggleable_Animated_Mechanism
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_secret_chamber_door_Toggleable_Animated_Mechanism_C::ExecuteUbergraph_bp_secret_chamber_door_Toggleable_Animated_Mechanism(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.ExecuteUbergraph_bp_secret_chamber_door_Toggleable_Animated_Mechanism"));

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
