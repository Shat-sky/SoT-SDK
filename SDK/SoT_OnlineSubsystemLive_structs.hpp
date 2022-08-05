#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_OnlineSubsystemUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemLive.AchievementProgressXblRequestModel
// 0x0018
struct FAchievementProgressXblRequestModel
{
	class FString                                      Id;                                                       // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           PercentComplete;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemLive.UpdateAchievementsXblRequestModel
// 0x0048
struct FUpdateAchievementsXblRequestModel
{
	TArray<struct FAchievementProgressXblRequestModel> Achievements;                                             // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Action;                                                   // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      ServiceConfigId;                                          // 0x0020(0x0010) (ZeroConstructor)
	uint32_t                                           TitleId;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class FString                                      UserId;                                                   // 0x0038(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
