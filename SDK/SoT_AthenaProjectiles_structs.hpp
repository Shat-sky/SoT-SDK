#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
