#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Damagers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Damagers.RadialDamagerComponent.SetDamageRadius
struct URadialDamagerComponent_SetDamageRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Damagers.RadialDamagerComponent.EndDamage
struct URadialDamagerComponent_EndDamage_Params
{
};

// Function Damagers.RadialDamagerComponent.BeginDamage
struct URadialDamagerComponent_BeginDamage_Params
{
};

// Function Damagers.ShipDamagerComponent.SetShape
struct UShipDamagerComponent_SetShape_Params
{
	class UPrimitiveComponent*                         InShape;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
