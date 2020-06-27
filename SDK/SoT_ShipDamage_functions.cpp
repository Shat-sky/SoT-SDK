// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageableActor                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageablePartsInterface::UnregisterDamageablePart(class AActor* DamageableActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart");

	UDamageablePartsInterface_UnregisterDamageablePart_Params params;
	params.DamageableActor = DamageableActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageableActor                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageablePartsInterface::RegisterDamageablePart(class AActor* DamageableActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart");

	UDamageablePartsInterface_RegisterDamageablePart_Params params;
	params.DamageableActor = DamageableActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ShipDamage.DamageablePartsInterface.GetDamageableParts
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UDamageablePartsInterface::GetDamageableParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.GetDamageableParts");

	UDamageablePartsInterface_GetDamageableParts_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
