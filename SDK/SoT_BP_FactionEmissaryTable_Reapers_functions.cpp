// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FactionEmissaryTable_Reapers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FactionEmissaryTable_Reapers.BP_FactionEmissaryTable_Reapers_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FactionEmissaryTable_Reapers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FactionEmissaryTable_Reapers.BP_FactionEmissaryTable_Reapers_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FactionEmissaryTable_Reapers.BP_FactionEmissaryTable_Reapers_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_FactionEmissaryTable_Reapers_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FactionEmissaryTable_Reapers.BP_FactionEmissaryTable_Reapers_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FactionEmissaryTable_Reapers.BP_FactionEmissaryTable_Reapers_C.ExecuteUbergraph_BP_FactionEmissaryTable_Reapers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FactionEmissaryTable_Reapers_C::ExecuteUbergraph_BP_FactionEmissaryTable_Reapers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FactionEmissaryTable_Reapers.BP_FactionEmissaryTable_Reapers_C.ExecuteUbergraph_BP_FactionEmissaryTable_Reapers"));

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
