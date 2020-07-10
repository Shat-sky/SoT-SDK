// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EnchantedCompass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EnchantedCompass.MultiTargetEnchantedCompass.CalculateDesiredYaw
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FRotator                CompassRotation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMultiTargetEnchantedCompass::CalculateDesiredYaw(const struct FRotator& CompassRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnchantedCompass.MultiTargetEnchantedCompass.CalculateDesiredYaw"));

	struct
	{
		struct FRotator                CompassRotation;
		float                          ReturnValue;
	} params;

	params.CompassRotation = CompassRotation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
