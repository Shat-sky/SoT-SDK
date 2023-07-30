// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AdventureOnDemandFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdventureOnDemandFramework.AdventureOnDemandTaleFunctionLibrary.CompareOnDemandQuestResumeConditionMetReason
// (Final, Native, Static, Public)
// Parameters:
// TEnumAsByte<EOnDemandQuestResumeConditionMetReason> Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EOnDemandQuestResumeConditionMetReason> Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAdventureOnDemandTaleFunctionLibrary::CompareOnDemandQuestResumeConditionMetReason(TEnumAsByte<EOnDemandQuestResumeConditionMetReason> Left, TEnumAsByte<EOnDemandQuestResumeConditionMetReason> Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AdventureOnDemandFramework.AdventureOnDemandTaleFunctionLibrary.CompareOnDemandQuestResumeConditionMetReason"));

	struct
	{
		TEnumAsByte<EOnDemandQuestResumeConditionMetReason> Left;
		TEnumAsByte<EOnDemandQuestResumeConditionMetReason> Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
