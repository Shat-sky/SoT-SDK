// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Blocking_Sphere_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Placement_Blocking_Sphere_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.Set Bomb Parameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Placement_Blocking_Sphere_C::Set_Bomb_Parameters(float Radius, int Seed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.Set Bomb Parameters"));

	struct
	{
		float                          Radius;
		int                            Seed;
	} params;

	params.Radius = Radius;
	params.Seed = Seed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.Interface Trigger
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Placement_Blocking_Sphere_C::Interface_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.Interface Trigger"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.Delete Overlapping Placement
// (BlueprintCallable, BlueprintEvent)

void ABP_Placement_Blocking_Sphere_C::Delete_Overlapping_Placement()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.Delete Overlapping Placement"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.ExecuteUbergraph_BP_Placement_Blocking_Sphere
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Placement_Blocking_Sphere_C::ExecuteUbergraph_BP_Placement_Blocking_Sphere(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C.ExecuteUbergraph_BP_Placement_Blocking_Sphere"));

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
