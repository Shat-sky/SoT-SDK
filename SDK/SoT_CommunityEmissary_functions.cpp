// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CommunityEmissary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CommunityEmissary.CommunityEmissaryFlagComponent.Multicast_UpdateCommunityEmissaryFlag
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            FlagDataIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommunityEmissaryFlagComponent::Multicast_UpdateCommunityEmissaryFlag(int FlagDataIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CommunityEmissary.CommunityEmissaryFlagComponent.Multicast_UpdateCommunityEmissaryFlag"));

	struct
	{
		int                            FlagDataIndex;
	} params;

	params.FlagDataIndex = FlagDataIndex;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
