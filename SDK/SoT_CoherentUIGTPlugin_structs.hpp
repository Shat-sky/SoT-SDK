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
	None                           = 1,
	ECoherentUIGTKeys__ThumbMouseButton2 = 2,
	None01                         = 3,
	ECoherentUIGTKeys__Pause       = 4,
	None02                         = 5,
	ECoherentUIGTKeys__PageUp      = 6,
	None03                         = 7,
	ECoherentUIGTKeys__Left        = 8,
	None04                         = 9,
	ECoherentUIGTKeys__Insert      = 10,
	None05                         = 11,
	ECoherentUIGTKeys__Two         = 12,
	None06                         = 13,
	ECoherentUIGTKeys__Six         = 14,
	None07                         = 15,
	ECoherentUIGTKeys__A           = 16,
	None08                         = 17,
	ECoherentUIGTKeys__E           = 18,
	None09                         = 19,
	ECoherentUIGTKeys__I           = 20,
	None10                         = 21,
	ECoherentUIGTKeys__M           = 22,
	None11                         = 23,
	ECoherentUIGTKeys__Q           = 24,
	None12                         = 25,
	ECoherentUIGTKeys__U           = 26,
	None13                         = 27,
	ECoherentUIGTKeys__Y           = 28,
	None14                         = 29,
	ECoherentUIGTKeys__NumPadTwo   = 30,
	None15                         = 31,
	ECoherentUIGTKeys__NumPadSix   = 32,
	None16                         = 33,
	ECoherentUIGTKeys__Multiply    = 34,
	None17                         = 35,
	ECoherentUIGTKeys__Divide      = 36,
	None18                         = 37,
	ECoherentUIGTKeys__F4          = 38,
	None19                         = 39,
	ECoherentUIGTKeys__F8          = 40,
	None20                         = 41,
	ECoherentUIGTKeys__F12         = 42,
	None21                         = 43,
	ECoherentUIGTKeys__MouseScrollDown = 44,
	None22                         = 45,
	ECoherentUIGTKeys__Gamepad_RightStick_Down = 46,
	None23                         = 47,
	ECoherentUIGTKeys__RightShift  = 48,
	None24                         = 49,
	ECoherentUIGTKeys__RightAlt    = 50,
	None25                         = 51,
	ECoherentUIGTKeys__Equals      = 52,
	None26                         = 53,
	ECoherentUIGTKeys__Slash       = 54,
	None27                         = 55,
	ECoherentUIGTKeys__RightBracket = 56,
	None28                         = 57,
	EBootflowError__None           = 58,
	None29                         = 59,
	EBootflowError__AthenaGameInstanceActiveConnectionToServerTimedOut = 60,
	None30                         = 61,
	EBootflowError__AthenaGameInstanceGameVersionMismatch = 62,
	None31                         = 63,
	EBootflowError__AthenaGameInstanceRPCSpamDetected = 64,
	None32                         = 65,
	EBootflowError__AthenaGameInstanceGenericTravelError = 66,
	None33                         = 67,
	EBootflowError__ClientBootflowPrimaryPlayerSignedOut = 68,
	None34                         = 69
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	ECoherentUIGTInputPropagationBehaviour__None = 0,
	None                           = 1,
	ECoherentUIGTInputPropagationBehaviour__ECoherentUIGTInputPropagationBehaviour_MAX = 2
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t
{
	ResetState                     = 0,
	None                           = 1,
	GTInputLineTrace_Single        = 2
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t
{
	GTInputLineTrace_Single        = 0,
	None                           = 1
};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t
{
	RaycastQuality_Fast            = 0,
	None                           = 1,
	ECoherentUIGTMSAA__MSAA_1x     = 2
};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t
{
	ECoherentUIGTMSAA__MSAA_1x     = 0,
	None                           = 1
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	ECoherentUIGTSettingsSeverity__Trace = 0,
	None                           = 1,
	ECoherentUIGTSettingsSeverity__AssertFailure = 2,
	None01                         = 3
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
