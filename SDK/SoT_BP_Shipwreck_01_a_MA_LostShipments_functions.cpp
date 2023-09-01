// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwreck_01_a_MA_LostShipments_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Shipwreck_01_a_MA_LostShipments_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Shipwreck_01_a_MA_LostShipments_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shipwreck_01_a_MA_LostShipments_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.OnResetTo
// (Event, Public, BlueprintEvent)

void ABP_Shipwreck_01_a_MA_LostShipments_C::OnResetTo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.OnResetTo"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.ExecuteUbergraph_BP_Shipwreck_01_a_MA_LostShipments
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shipwreck_01_a_MA_LostShipments_C::ExecuteUbergraph_BP_Shipwreck_01_a_MA_LostShipments(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shipwreck_01_a_MA_LostShipments.BP_Shipwreck_01_a_MA_LostShipments_C.ExecuteUbergraph_BP_Shipwreck_01_a_MA_LostShipments"));

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
