#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	ETouchIndex__Touch1            = 0,
	ETouchIndex__Touch3            = 1,
	ETouchIndex__Touch4            = 2,
	ETouchIndex__Touch5            = 3,
	ETouchIndex__Touch7            = 4,
	ETouchIndex__Touch8            = 5,
	ETouchIndex__Touch9            = 6,
	ETouchIndex__ETouchIndex_MAX   = 7
};


// Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	ETouchType__Began              = 0,
	ETouchType__Stationary         = 1,
	ETouchType__Ended              = 2,
	ETouchType__NumTypes           = 3
};


// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None = 0,
	EConsoleForGamepadLabels__PS4  = 1,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX = 2
};


// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	EControllerHand__Left          = 0,
	EControllerHand__EControllerHand_MAX = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0020
struct FKey
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
