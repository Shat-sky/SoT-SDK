#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ActionStateMachine_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ZoomInOnWieldableItems.ZoomedInOnWieldableItemActionStateConstructionInfo
// 0x0018 (0x0048 - 0x0030)
struct FZoomedInOnWieldableItemActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	float                                              ZoomedInFov;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FreelookPitch;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FreelookYaw;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FreelookOutInterpolationRate;                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LookSensitivityScaler;                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
