// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShortRangeMarkerFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShortRangeMarker::Multicast_OnCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp");

	AShortRangeMarker_Multicast_OnCleanUp_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InMarker                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          InActors                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UShortRangeMarkerBlueprintFunctionLibrary::STATIC_RegisterActorsWithShortRangeMarker(class UObject* WorldContextObject, class AActor* InMarker, TArray<class AActor*>* InActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker");

	UShortRangeMarkerBlueprintFunctionLibrary_RegisterActorsWithShortRangeMarker_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InMarker = InMarker;

	UObject::ProcessEvent(fn, &params);

	if (InActors != nullptr)
		*InActors = params.InActors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
