// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ship_surface_wet_decal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ship_surface_wet_decal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.HideWetDecals
// (BlueprintCallable, BlueprintEvent)

void ABP_ship_surface_wet_decal_C::HideWetDecals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.HideWetDecals"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ship_surface_wet_decal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.StartResurfaceEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          InServerStartTime              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ship_surface_wet_decal_C::StartResurfaceEffect(float InServerStartTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.StartResurfaceEffect"));

	struct
	{
		float                          InServerStartTime;
	} params;

	params.InServerStartTime = InServerStartTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.ExecuteUbergraph_BP_ship_surface_wet_decal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ship_surface_wet_decal_C::ExecuteUbergraph_BP_ship_surface_wet_decal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.ExecuteUbergraph_BP_ship_surface_wet_decal"));

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
