#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AIGoalFramework_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_ConditionalFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIGoals.BestActionSpotSelectionCriteria
// 0x0024
struct FBestActionSpotSelectionCriteria
{
	bool                                               PreferActionSpotsRelativeToTargetForwardFacingDirection;  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ForwardFacingPreferenceMinAngleInDegrees;                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForwardFacingPreferenceMaxAngleInDegrees;                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForwardFacingPreferenceMinDistance;                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForwardFacingPreferenceMaxDistance;                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PreferStayingAtCurrentSpotOverMovingToNewSpot;            // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              StayingPreferenceDistance;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAlwaysRefreshWhileMoving;                           // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldRefreshAfterStayingForTooLong;                      // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              RefreshTimeInSeconds;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIGoals.HasAllActionContextTagsCondition
// 0x0018 (0x0040 - 0x0028)
struct FHasAllActionContextTagsCondition : public FTargetedPayloadConditionBase
{
	TArray<class UClass*>                              RequiredContextTags;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
	bool                                               ExpectedValue;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
