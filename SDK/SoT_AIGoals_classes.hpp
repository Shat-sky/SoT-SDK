#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIGoals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIGoals.AlwaysEvaluatesTrueAIGoal
// 0x0000 (0x0038 - 0x0038)
class UAlwaysEvaluatesTrueAIGoal : public UAIGoal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoals.AlwaysEvaluatesTrueAIGoal"));
		return ptr;
	}

};


// Class AIGoals.BTService_SetBestActionSpotNearTarget
// 0x0098 (0x0108 - 0x0070)
class UBTService_SetBestActionSpotNearTarget : public UBTService
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      BestActionSpotKey;                                        // 0x0098(0x0028) (Edit)
	struct FBestActionSpotSelectionCriteria            BestActionSpotSelectionCriteria;                          // 0x00C0(0x002C) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00EC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoals.BTService_SetBestActionSpotNearTarget"));
		return ptr;
	}

};


// Class AIGoals.WhileActionSpotAvailableForPatrolAIGoal
// 0x0040 (0x0078 - 0x0038)
class UWhileActionSpotAvailableForPatrolAIGoal : public UAIGoal
{
public:
	float                                              MinTimeToChangePatrolSpot;                                // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeToChangePatrolSpot;                                // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PatrolActivityType;                                       // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UAIActionSpotInterface>     TargetActionSpotInterface;                                // 0x0048(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoals.WhileActionSpotAvailableForPatrolAIGoal"));
		return ptr;
	}

};


// Class AIGoals.WhileBlackboardKeySetAIGoal
// 0x0008 (0x0040 - 0x0038)
class UWhileBlackboardKeySetAIGoal : public UAIGoal
{
public:
	struct FName                                       BlackboardKey;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoals.WhileBlackboardKeySetAIGoal"));
		return ptr;
	}


	TArray<class FString> GetAllowedBlackboardKeys();
};


// Class AIGoals.WhileCanBeInteractedWithAndPlayerIsNearbyAIGoal
// 0x0038 (0x0070 - 0x0038)
class UWhileCanBeInteractedWithAndPlayerIsNearbyAIGoal : public UAIGoal
{
public:
	float                                              InnerRadius;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIGoalMovementModeFilter                   MovementModeFilter;                                       // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	bool                                               ShouldOnlyActivateWhileDocked;                            // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class APawn*                                       TargetPlayerPawn;                                         // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoals.WhileCanBeInteractedWithAndPlayerIsNearbyAIGoal"));
		return ptr;
	}

};


// Class AIGoals.WhilePlayerWithinAreaAIGoal
// 0x00B8 (0x00F0 - 0x0038)
class UWhilePlayerWithinAreaAIGoal : public UAIGoal
{
public:
	float                                              EnterAreaTriggerDistance;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitAreaTriggerDistance;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIGoalMovementModeFilter                   MovementModeFilter;                                       // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      WhileActiveActivityType;                                  // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       TargetPlayerPawn;                                         // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoals.WhilePlayerWithinAreaAIGoal"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
