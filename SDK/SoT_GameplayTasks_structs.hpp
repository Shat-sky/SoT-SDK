#pragma once

// Sea of Thieves (2.0.17) SDK

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

// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop = 0,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX = 1
};


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized = 0,
	EGameplayTaskState__Paused     = 1,
	EGameplayTaskState__Active     = 2,
	EGameplayTaskState__Finished   = 3
};


// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error  = 0,
	EGameplayTaskRunResult__Success_Paused = 1,
	EGameplayTaskRunResult__Success_Active = 2,
	EGameplayTaskRunResult__Success_Finished = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002
struct FGameplayResourceSet
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
