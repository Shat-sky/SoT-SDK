// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_IPGLineUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Asot_frontend_01_a_IPGLineUp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.showPlayerMarker
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_IPGLineUp_C::showPlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.showPlayerMarker"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.hidePlayerMarker
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_IPGLineUp_C::hidePlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.hidePlayerMarker"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ExecuteUbergraph_sot_frontend_01_a_IPGLineUp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_IPGLineUp_C::ExecuteUbergraph_sot_frontend_01_a_IPGLineUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ExecuteUbergraph_sot_frontend_01_a_IPGLineUp"));

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
