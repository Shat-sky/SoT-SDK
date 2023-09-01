// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIGoals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIGoals.WhileBlackboardKeySetAIGoal.GetAllowedBlackboardKeys
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UWhileBlackboardKeySetAIGoal::GetAllowedBlackboardKeys()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIGoals.WhileBlackboardKeySetAIGoal.GetAllowedBlackboardKeys"));

	struct
	{
		TArray<class FString>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
