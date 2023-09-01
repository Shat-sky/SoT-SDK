// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FactionEmissaryTable_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FactionEmissaryTable_Athena.BP_FactionEmissaryTable_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FactionEmissaryTable_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FactionEmissaryTable_Athena.BP_FactionEmissaryTable_Athena_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FactionEmissaryTable_Athena.BP_FactionEmissaryTable_Athena_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_FactionEmissaryTable_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FactionEmissaryTable_Athena.BP_FactionEmissaryTable_Athena_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FactionEmissaryTable_Athena.BP_FactionEmissaryTable_Athena_C.ExecuteUbergraph_BP_FactionEmissaryTable_Athena
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FactionEmissaryTable_Athena_C::ExecuteUbergraph_BP_FactionEmissaryTable_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FactionEmissaryTable_Athena.BP_FactionEmissaryTable_Athena_C.ExecuteUbergraph_BP_FactionEmissaryTable_Athena"));

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
