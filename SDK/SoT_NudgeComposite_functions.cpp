// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NudgeComposite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NudgeComposite.NudgeFromStormPolicy.IncrementTimer
// (Final, Native, Private)

void UNudgeFromStormPolicy::IncrementTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NudgeComposite.NudgeFromStormPolicy.IncrementTimer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
