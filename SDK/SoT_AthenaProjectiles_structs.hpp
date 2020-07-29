#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AthenaProjectiles.EProjectileFiredFrom
enum class EProjectileFiredFrom : uint8_t
{
	EProjectileFiredFrom__Cannon   = 0,
	None                           = 1,
	EProjectileFiredFrom__EProjectileFiredFrom_MAX = 2,
	EPetDangerHearingTarget__None  = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaProjectiles.ThrottledProjectileTickPool
// 0x0018
struct FThrottledProjectileTickPool
{
	int                                                MaxNumberToTickPerFrame;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Projectiles;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaProjectiles.GlobalProjectileSettings
// 0x0008
struct FGlobalProjectileSettings
{
	TEnumAsByte<EProjectileFiredFrom>                  SettingsFor;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ProjectileDestroyDepth;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
