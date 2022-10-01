// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SimpleOverlaps_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
// (Final, Native, Private)

void UDebugSimpleOverlapZoneVisualizerComponent::OnRep_SetDebugDrawColour()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
// (Final, Native, Private)

void UDebugSimpleOverlapZoneVisualizerComponent::OnRep_DebugBoxDimensions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
