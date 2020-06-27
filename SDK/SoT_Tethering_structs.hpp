#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Tethering.ETetherConstrainMode
enum class ETetherConstrainMode : uint8_t
{
	ETetherConstrainMode__ShrinkLength = 0,
	None                           = 1,
	EWieldableItemBlockingAnimState__Main = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tethering.TetherProjectileImpact
// 0x0008
struct FTetherProjectileImpact
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
