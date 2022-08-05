// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Seagull_AnimInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Seagull_AnimInst.BP_Seagull_AnimInst_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_Seagull_AnimInst_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seagull_AnimInst.BP_Seagull_AnimInst_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Seagull_AnimInst.BP_Seagull_AnimInst_C.ExecuteUbergraph_BP_Seagull_AnimInst
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Seagull_AnimInst_C::ExecuteUbergraph_BP_Seagull_AnimInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seagull_AnimInst.BP_Seagull_AnimInst_C.ExecuteUbergraph_BP_Seagull_AnimInst"));

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
