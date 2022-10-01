// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Rowboat_Cannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Rowboat_Cannon.BP_Anim_Rowboat_Cannon_C.ExecuteUbergraph_BP_Anim_Rowboat_Cannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Rowboat_Cannon_C::ExecuteUbergraph_BP_Anim_Rowboat_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Rowboat_Cannon.BP_Anim_Rowboat_Cannon_C.ExecuteUbergraph_BP_Anim_Rowboat_Cannon"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
