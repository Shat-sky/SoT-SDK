// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PlayerGenderInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFemale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerGenderInterface_C::CheckIsFemale(bool* IsFemale)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale");

	UPlayerGenderInterface_C_CheckIsFemale_Params params;

	UObject::ProcessEvent(fn, &params);

	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
