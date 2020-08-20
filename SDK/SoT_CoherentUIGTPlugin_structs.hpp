#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8_t
{
	ECoherentUIGTKeys__LeftMouseButton = 0,
	ECoherentUIGTKeys__MiddleMouseButton = 1,
	ECoherentUIGTKeys__ThumbMouseButton = 2,
	ECoherentUIGTKeys__ThumbMouseButton2 = 3,
	ECoherentUIGTKeys__Tab         = 4,
	ECoherentUIGTKeys__Enter       = 5,
	ECoherentUIGTKeys__Pause       = 6,
	ECoherentUIGTKeys__Escape      = 7,
	ECoherentUIGTKeys__SpaceBar    = 8,
	ECoherentUIGTKeys__PageUp      = 9,
	ECoherentUIGTKeys__End         = 10,
	ECoherentUIGTKeys__Home        = 11,
	ECoherentUIGTKeys__Left        = 12,
	ECoherentUIGTKeys__Right       = 13,
	ECoherentUIGTKeys__Down        = 14,
	ECoherentUIGTKeys__Insert      = 15,
	ECoherentUIGTKeys__Zero        = 16,
	ECoherentUIGTKeys__One         = 17,
	ECoherentUIGTKeys__Two         = 18,
	ECoherentUIGTKeys__Four        = 19,
	ECoherentUIGTKeys__Five        = 20,
	ECoherentUIGTKeys__Six         = 21,
	ECoherentUIGTKeys__Eight       = 22,
	ECoherentUIGTKeys__Nine        = 23,
	ECoherentUIGTKeys__A           = 24,
	ECoherentUIGTKeys__C           = 25,
	ECoherentUIGTKeys__D           = 26,
	ECoherentUIGTKeys__E           = 27,
	ECoherentUIGTKeys__G           = 28,
	ECoherentUIGTKeys__H           = 29,
	ECoherentUIGTKeys__I           = 30,
	ECoherentUIGTKeys__K           = 31,
	ECoherentUIGTKeys__L           = 32,
	ECoherentUIGTKeys__M           = 33,
	ECoherentUIGTKeys__O           = 34,
	ECoherentUIGTKeys__P           = 35,
	ECoherentUIGTKeys__Q           = 36,
	ECoherentUIGTKeys__S           = 37,
	ECoherentUIGTKeys__T           = 38,
	ECoherentUIGTKeys__U           = 39,
	ECoherentUIGTKeys__W           = 40,
	ECoherentUIGTKeys__X           = 41,
	ECoherentUIGTKeys__Y           = 42,
	ECoherentUIGTKeys__NumPadZero  = 43,
	ECoherentUIGTKeys__NumPadOne   = 44,
	ECoherentUIGTKeys__NumPadTwo   = 45,
	ECoherentUIGTKeys__NumPadFour  = 46,
	ECoherentUIGTKeys__NumPadFive  = 47,
	ECoherentUIGTKeys__NumPadSix   = 48,
	ECoherentUIGTKeys__NumPadEight = 49,
	ECoherentUIGTKeys__NumPadNine  = 50,
	ECoherentUIGTKeys__Multiply    = 51,
	ECoherentUIGTKeys__Subtract    = 52,
	ECoherentUIGTKeys__Decimal     = 53,
	ECoherentUIGTKeys__Divide      = 54,
	ECoherentUIGTKeys__F2          = 55,
	ECoherentUIGTKeys__F3          = 56,
	ECoherentUIGTKeys__F4          = 57,
	ECoherentUIGTKeys__F6          = 58,
	ECoherentUIGTKeys__F7          = 59,
	ECoherentUIGTKeys__F8          = 60,
	ECoherentUIGTKeys__F10         = 61,
	ECoherentUIGTKeys__F11         = 62,
	ECoherentUIGTKeys__F12         = 63,
	ECoherentUIGTKeys__Gamepad_Special_Right = 64,
	ECoherentUIGTKeys__MouseScrollUp = 65,
	ECoherentUIGTKeys__MouseScrollDown = 66,
	ECoherentUIGTKeys__Gamepad_RightStick_Up = 67,
	ECoherentUIGTKeys__Gamepad_RightStick_Right = 68,
	ECoherentUIGTKeys__Gamepad_RightStick_Down = 69,
	ECoherentUIGTKeys__ScrollLock  = 70,
	ECoherentUIGTKeys__LeftShift   = 71,
	ECoherentUIGTKeys__RightShift  = 72,
	ECoherentUIGTKeys__RightControl = 73,
	ECoherentUIGTKeys__LeftAlt     = 74,
	ECoherentUIGTKeys__RightAlt    = 75,
	ECoherentUIGTKeys__RightCommand = 76,
	ECoherentUIGTKeys__Semicolon   = 77,
	ECoherentUIGTKeys__Equals      = 78,
	ECoherentUIGTKeys__Underscore  = 79,
	ECoherentUIGTKeys__Period      = 80,
	ECoherentUIGTKeys__Slash       = 81,
	ECoherentUIGTKeys__LeftBracket = 82,
	ECoherentUIGTKeys__Backslash   = 83,
	ECoherentUIGTKeys__RightBracket = 84,
	ECoherentUIGTKeys__Unknown     = 85,
	ECoherentUIGTKeys__ECoherentUIGTKeys_MAX = 86
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	ECoherentUIGTInputPropagationBehaviour__None = 0,
	ECoherentUIGTInputPropagationBehaviour__Joystick = 1,
	ECoherentUIGTInputPropagationBehaviour__KeyboardAndJoystick = 2,
	ECoherentUIGTInputPropagationBehaviour__ECoherentUIGTInputPropagationBehaviour_MAX = 3
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t
{
	EGamepadBehaviourOnFocusLost_MAX = 0
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t
{

};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t
{

};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t
{
	ECoherentUIGTMSAA__MSAA_1x     = 0,
	ECoherentUIGTMSAA__MSAA_4x     = 1,
	ECoherentUIGTMSAA__MSAA_MAX    = 2
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	ECoherentUIGTSettingsSeverity__Trace = 0,
	ECoherentUIGTSettingsSeverity__Info = 1,
	ECoherentUIGTSettingsSeverity__Warning = 2,
	ECoherentUIGTSettingsSeverity__AssertFailure = 3,
	ECoherentUIGTSettingsSeverity__ECoherentUIGTSettingsSeverity_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTLoadingScreenSettings
// 0x0018
struct FCoherentUIGTLoadingScreenSettings
{
	float                                              MinimumLoadingScreenDisplayTime;                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCompleteWhenLoadingCompletes;                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitForManualStop;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class FString                                      URL;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTViewInfo
// 0x0014
struct FCoherentUIGTViewInfo
{
	int                                                Width;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTransparent;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ClickThroughAlphaThreshold;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimationFrameDefer;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
