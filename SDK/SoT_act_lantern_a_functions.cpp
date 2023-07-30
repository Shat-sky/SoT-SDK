// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_act_lantern_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function act_lantern_a.act_lantern_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aact_lantern_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function act_lantern_a.act_lantern_a_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function act_lantern_a.act_lantern_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Aact_lantern_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function act_lantern_a.act_lantern_a_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function act_lantern_a.act_lantern_a_C.ExecuteUbergraph_act_lantern_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Aact_lantern_a_C::ExecuteUbergraph_act_lantern_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function act_lantern_a.act_lantern_a_C.ExecuteUbergraph_act_lantern_a"));

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
