// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Damagers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Damagers.RadialDamagerComponent.SetDamageRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void URadialDamagerComponent::SetDamageRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.RadialDamagerComponent.SetDamageRadius"));

	struct
	{
		float                          Radius;
	} params;

	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.RadialDamagerComponent.EndDamage
// (Final, Native, Public, BlueprintCallable)

void URadialDamagerComponent::EndDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.RadialDamagerComponent.EndDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.RadialDamagerComponent.BeginDamage
// (Final, Native, Public, BlueprintCallable)

void URadialDamagerComponent::BeginDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.RadialDamagerComponent.BeginDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Damagers.ShipDamagerComponent.SetShape
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InShape                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShipDamagerComponent::SetShape(class UPrimitiveComponent* InShape)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Damagers.ShipDamagerComponent.SetShape"));

	struct
	{
		class UPrimitiveComponent*     InShape;
	} params;

	params.InShape = InShape;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
