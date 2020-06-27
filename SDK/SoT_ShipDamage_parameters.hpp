#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
struct UDamageablePartsInterface_UnregisterDamageablePart_Params
{
	class AActor*                                      DamageableActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
struct UDamageablePartsInterface_RegisterDamageablePart_Params
{
	class AActor*                                      DamageableActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShipDamage.DamageablePartsInterface.GetDamageableParts
struct UDamageablePartsInterface_GetDamageableParts_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
