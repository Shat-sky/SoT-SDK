// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SeasonProgressionUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed
// (Final, Native, Private)

void USeasonProgressionUIComponent::OnHUDDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
