#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_MediaAssets_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_MediaUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0048
struct FMediaCaptureDevice
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0038) (BlueprintVisible, BlueprintReadOnly, Transient)
	class FString                                      URL;                                                      // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct MediaAssets.PlatformPlayerEntry
// 0x0018
struct FPlatformPlayerEntry
{
	class FString                                      Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       Value;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
