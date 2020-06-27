// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LotS_reward007_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LotS_reward007.BP_LotS_reward007_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LotS_reward007_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LotS_reward007.BP_LotS_reward007_C.UserConstructionScript");

	ABP_LotS_reward007_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
