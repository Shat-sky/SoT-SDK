// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Effigy_L_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_TT_Effigy_L.BP_Anim_TT_Effigy_L_C.ExecuteUbergraph_BP_Anim_TT_Effigy_L
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Effigy_L_C::ExecuteUbergraph_BP_Anim_TT_Effigy_L(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_TT_Effigy_L.BP_Anim_TT_Effigy_L_C.ExecuteUbergraph_BP_Anim_TT_Effigy_L");

	UBP_Anim_TT_Effigy_L_C_ExecuteUbergraph_BP_Anim_TT_Effigy_L_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif