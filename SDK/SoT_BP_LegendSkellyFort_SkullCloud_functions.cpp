// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LegendSkellyFort_SkullCloud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LegendSkellyFort_SkullCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LegendSkellyFort_SkullCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.ExecuteUbergraph_BP_LegendSkellyFort_SkullCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LegendSkellyFort_SkullCloud_C::ExecuteUbergraph_BP_LegendSkellyFort_SkullCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.ExecuteUbergraph_BP_LegendSkellyFort_SkullCloud"));

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
