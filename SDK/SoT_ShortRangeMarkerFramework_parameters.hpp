#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShortRangeMarkerFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp
struct AShortRangeMarker_Multicast_OnCleanUp_Params
{
};

// Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
struct UShortRangeMarkerBlueprintFunctionLibrary_RegisterActorsWithShortRangeMarker_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InMarker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              InActors;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
