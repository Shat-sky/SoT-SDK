// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NudgeComposite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NudgeComposite.NudgeFromStormPolicy.OnTimerCompleted
// (Final, Native, Private)

void UNudgeFromStormPolicy::OnTimerCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NudgeComposite.NudgeFromStormPolicy.OnTimerCompleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
