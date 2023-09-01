#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FlamesOfFateFramework.CycleFlameOfFateSequence
// 0x0018
struct FCycleFlameOfFateSequence
{
	TArray<TEnumAsByte<EFlameOfFateType>>              FlameTypeSequence;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FlamesOfFateFramework.FlameData
// 0x0002
struct FFlameData
{
	TEnumAsByte<EFlameOfFateType>                      FlameOfFateType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SkipChangeAnimation;                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FlamesOfFateFramework.PlayerTookFlameOfFateEvent
// 0x0018
struct FPlayerTookFlameOfFateEvent
{
	class ACharacter*                                  PlayerCharacter;                                          // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Source;                                                   // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFlameOfFateType>                      FlameOfFateType;                                          // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FlamesOfFateFramework.PlayerSetFlameOfFateEvent
// 0x0018
struct FPlayerSetFlameOfFateEvent
{
	class ACharacter*                                  PlayerCharacter;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFlameOfFateType>                      FlameOfFateType;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FlamesOfFateFramework.SetShipFlameOfFateEvent
// 0x0018
struct FSetShipFlameOfFateEvent
{
	TEnumAsByte<EFlameOfFateType>                      FlameOfFateType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     Source;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Ship;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FlamesOfFateFramework.SetFlameOfFateEvent
// 0x0010
struct FSetFlameOfFateEvent
{
	TEnumAsByte<EFlameOfFateType>                      FlameOfFateType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     Source;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
