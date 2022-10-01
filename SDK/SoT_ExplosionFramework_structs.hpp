#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ExplosionFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_StatusEffects_classes.hpp"
#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ExplosionFramework.EventAffectedByExplosion
// 0x0018
struct FEventAffectedByExplosion
{
	class UClass*                                      DamagerType;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct ExplosionFramework.EventExplosionIgnitedActor
// 0x0008
struct FEventExplosionIgnitedActor
{
	class AActor*                                      IgnitedActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ExplosionFramework.EventOnExploded
// 0x000C
struct FEventOnExploded
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ExplosionFramework.EventExplosionOverlap
// 0x0008
struct FEventExplosionOverlap
{
	class UClass*                                      DamagerType;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
