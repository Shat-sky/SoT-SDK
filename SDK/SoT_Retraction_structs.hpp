#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Retraction.RetractorOrientationAdjustmentFlags
// 0x0003
struct FRetractorOrientationAdjustmentFlags
{
	bool                                               AdjustPitch;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AdjustRoll;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AdjustYaw;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Retraction.EventItemProxyMovedFromSlot
// 0x000C
struct FEventItemProxyMovedFromSlot
{
	struct FVector                                     ItemLocation;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Retraction.EventAttachedRetractableToItemProxy
// 0x0008
struct FEventAttachedRetractableToItemProxy
{
	class AActor*                                      Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
