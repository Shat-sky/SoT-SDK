#pragma once

// Sea of Thieves (1.4.16) SDK

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
	UInt16Property                 = 12,
	ECoherentUIGTKeys__Two         = 13,
	None06                         = 14,
	ECoherentUIGTKeys__Six         = 15,
	None07                         = 16,
	ECoherentUIGTKeys__A           = 17,
	None08                         = 18,
	ECoherentUIGTKeys__E           = 19,
	None09                         = 20,
	ECoherentUIGTKeys__I           = 21,
	None10                         = 22,
	ECoherentUIGTKeys__M           = 23,
	None11                         = 24,
	ECoherentUIGTKeys__Q           = 25,
	None12                         = 26,
	ECoherentUIGTKeys__U           = 27,
	None13                         = 28,
	ECoherentUIGTKeys__Y           = 29,
	None14                         = 30,
	ECoherentUIGTKeys__NumPadTwo   = 31,
	None15                         = 32,
	ECoherentUIGTKeys__NumPadSix   = 33,
	None16                         = 34,
	ECoherentUIGTKeys__Multiply    = 35,
	None17                         = 36,
	ECoherentUIGTKeys__Divide      = 37,
	None18                         = 38,
	ECoherentUIGTKeys__F4          = 39,
	None19                         = 40,
	ECoherentUIGTKeys__F8          = 41,
	None20                         = 42,
	ECoherentUIGTKeys__F12         = 43,
	None21                         = 44,
	ECoherentUIGTKeys__MouseScrollDown = 45,
	None22                         = 46,
	ECoherentUIGTKeys__Gamepad_RightStick_Down = 47,
	None23                         = 48,
	ECoherentUIGTKeys__RightShift  = 49,
	None24                         = 50,
	ECoherentUIGTKeys__RightAlt    = 51,
	None25                         = 52,
	Actor                          = 53,
	ECoherentUIGTKeys__Equals      = 54,
	None26                         = 55,
	ECoherentUIGTKeys__Slash       = 56,
	None27                         = 57,
	ECoherentUIGTKeys__RightBracket = 58,
	None28                         = 59,
	None29                         = 60,
	EBootflowError__None           = 61,
	None30                         = 62,
	EBootflowError__AthenaGameInstanceActiveConnectionToServerTimedOut = 63,
	None31                         = 64,
	EBootflowError__AthenaGameInstanceGameVersionMismatch = 65,
	None32                         = 66,
	EBootflowError__AthenaGameInstanceRPCSpamDetected = 67,
	None33                         = 68,
	EBootflowError__AthenaGameInstanceGenericTravelError = 69,
	None34                         = 70,
	EBootflowError__ClientBootflowPrimaryPlayerSignedOut = 71,
	None35                         = 72
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
	None01                         = 3,
	IsActorAckedForPlayer          = 4
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
