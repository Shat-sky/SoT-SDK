#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CrewSkillRating.ReportMatchConclusionResponse
// 0x0008
struct FReportMatchConclusionResponse
{
	int                                                WinningCrewNewSkillValue;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LosingCrewNewSkillValue;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CrewSkillRating.ReportMatchConclusionRequest
// 0x0020
struct FReportMatchConclusionRequest
{
	TArray<class FString>                              WinningUserIds;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              LosingUserIds;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct CrewSkillRating.GetPvPSkillForCrewResponseModel
// 0x0004
struct FGetPvPSkillForCrewResponseModel
{
	int                                                CrewSkillRating;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CrewSkillRating.GetPvPSkillForCrewRequestModel
// 0x0010
struct FGetPvPSkillForCrewRequestModel
{
	TArray<class FString>                              CrewMemberIds;                                            // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
