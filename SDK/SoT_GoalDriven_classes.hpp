#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GoalDriven_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GoalDriven.GoalDrivenCharacter
// 0x0010 (0x0610 - 0x0600)
class AGoalDrivenCharacter : public ACharacterWithActionStateMachine
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0600(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GoalDriven.GoalDrivenCharacter"));
		return ptr;
	}

};


// Class GoalDriven.GoalDrivenCharacterAggregationComponent
// 0x0030 (0x00F8 - 0x00C8)
class UGoalDrivenCharacterAggregationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GoalDriven.GoalDrivenCharacterAggregationComponent"));
		return ptr;
	}

};


// Class GoalDriven.GoalDrivenCharacterAnimInstance
// 0x0000 (0x0440 - 0x0440)
class UGoalDrivenCharacterAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GoalDriven.GoalDrivenCharacterAnimInstance"));
		return ptr;
	}

};


// Class GoalDriven.GoalDrivenCharacterDockingPolicyDefinition
// 0x0000 (0x0028 - 0x0028)
class UGoalDrivenCharacterDockingPolicyDefinition : public UDockingPolicyDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GoalDriven.GoalDrivenCharacterDockingPolicyDefinition"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
