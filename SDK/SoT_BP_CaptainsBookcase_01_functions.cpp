// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptainsBookcase_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CaptainsBookcase_01.BP_CaptainsBookcase_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CaptainsBookcase_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CaptainsBookcase_01.BP_CaptainsBookcase_01_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CaptainsBookcase_01.BP_CaptainsBookcase_01_C.GatherIndicators
// (Event, Protected, BlueprintEvent)

void ABP_CaptainsBookcase_01_C::GatherIndicators()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CaptainsBookcase_01.BP_CaptainsBookcase_01_C.GatherIndicators"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CaptainsBookcase_01.BP_CaptainsBookcase_01_C.ExecuteUbergraph_BP_CaptainsBookcase_01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptainsBookcase_01_C::ExecuteUbergraph_BP_CaptainsBookcase_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CaptainsBookcase_01.BP_CaptainsBookcase_01_C.ExecuteUbergraph_BP_CaptainsBookcase_01"));

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
