#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BreakableActorFramework.EventBreakableActorWasDestroyed
// 0x0010
struct FEventBreakableActorWasDestroyed
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      DirectInstigator;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BreakableActorFramework.EventBreakableActorWasDamaged
// 0x0058
struct FEventBreakableActorWasDamaged
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // 0x0000(0x0058)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
