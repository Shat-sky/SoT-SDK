// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StoryFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoryFramework.StoryDrivenBlendedLightingZoneComponent.OnRep_CurrentStoryResponse
// (Final, Native, Private)

void UStoryDrivenBlendedLightingZoneComponent::OnRep_CurrentStoryResponse()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StoryFramework.StoryDrivenBlendedLightingZoneComponent.OnRep_CurrentStoryResponse"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StoryFramework.StoryService.OnRep_ActiveStories
// (Final, Native, Private)

void AStoryService::OnRep_ActiveStories()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StoryFramework.StoryService.OnRep_ActiveStories"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
