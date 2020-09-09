#pragma once

// Sea of Thieves (2.0.18) SDK

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

// Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation
struct UShockwaveDamagerInterface_StartShockwaveAtLocation_Params
{
	struct FVector                                     StartLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Damagers.ShockwaveDamagerInterface.StartShockwave
struct UShockwaveDamagerInterface_StartShockwave_Params
{
};

// Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip
struct UShockwaveDamagerInterface_IgnoreGhostShip_Params
{
	class AAggressiveGhostShip*                        Ship;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius
struct UShockwaveDamagerInterface_GetShockwaveRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave
struct UShockwaveDamagerComponent_Multi_StartShockwave_Params
{
	struct FVector                                     InStartLocation;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
