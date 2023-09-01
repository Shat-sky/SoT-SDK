#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIGoalFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIGoalFramework.AIAreaOfOperationInterface
// 0x0000 (0x0028 - 0x0028)
class UAIAreaOfOperationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoalFramework.AIAreaOfOperationInterface"));
		return ptr;
	}

};


// Class AIGoalFramework.AIAreaOfOperationComponent
// 0x0010 (0x00D8 - 0x00C8)
class UAIAreaOfOperationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	bool                                               UseAreaOfOperationOnSpawn;                                // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              InitialRadius;                                            // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoalFramework.AIAreaOfOperationComponent"));
		return ptr;
	}

};


// Class AIGoalFramework.AIGoal
// 0x0010 (0x0038 - 0x0028)
class UAIGoal : public UObject
{
public:
	class UBehaviorTree*                               BehaviorTree;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoalFramework.AIGoal"));
		return ptr;
	}

};


// Class AIGoalFramework.AIGoalAssetList
// 0x0010 (0x0038 - 0x0028)
class UAIGoalAssetList : public UDataAsset
{
public:
	TArray<class UAIGoal*>                             GoalTemplates;                                            // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoalFramework.AIGoalAssetList"));
		return ptr;
	}

};


// Class AIGoalFramework.AIGoalProcessorInterface
// 0x0000 (0x0028 - 0x0028)
class UAIGoalProcessorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoalFramework.AIGoalProcessorInterface"));
		return ptr;
	}

};


// Class AIGoalFramework.AIGoalProcessorComponent
// 0x0060 (0x0128 - 0x00C8)
class UAIGoalProcessorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<class UAIGoal*>                             Goals;                                                    // 0x00D0(0x0010) (ZeroConstructor, Transient)
	class UAIGoalAssetList*                            AIGoalAssetList;                                          // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIGoal*                                     ActiveGoal;                                               // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIGoalAssetList*>                    AdditionalGoalLists;                                      // 0x00F0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoalFramework.AIGoalProcessorComponent"));
		return ptr;
	}

};


// Class AIGoalFramework.FirstActionableAIGoalProcessorComponent
// 0x0000 (0x0128 - 0x0128)
class UFirstActionableAIGoalProcessorComponent : public UAIGoalProcessorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIGoalFramework.FirstActionableAIGoalProcessorComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
