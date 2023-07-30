// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Describables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Describables.DescribableComponent.SetTooltipActive
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsActive                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDescribableComponent::SetTooltipActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Describables.DescribableComponent.SetTooltipActive"));

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function Describables.DescribableComponent.OnRep_TooltipActive
// (Final, RequiredAPI, Native, Private)

void UDescribableComponent::OnRep_TooltipActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Describables.DescribableComponent.OnRep_TooltipActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
