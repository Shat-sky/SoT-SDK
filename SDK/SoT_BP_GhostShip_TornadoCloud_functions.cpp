// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GhostShip_TornadoCloud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.IntializeGhostMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostShip_TornadoCloud_C::IntializeGhostMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.IntializeGhostMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.CheckShowLightning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShip_TornadoCloud_C::CheckShowLightning(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.CheckShowLightning"));

	struct
	{
		float                          Alpha;
	} params;

	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UpdateTornadoMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CloudAlpha                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShip_TornadoCloud_C::UpdateTornadoMaterials(float CloudAlpha, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UpdateTornadoMaterials"));

	struct
	{
		float                          CloudAlpha;
		float                          Alpha;
	} params;

	params.CloudAlpha = CloudAlpha;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.HideTornadoMeshParts
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostShip_TornadoCloud_C::HideTornadoMeshParts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.HideTornadoMeshParts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.IntializeTornadoMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostShip_TornadoCloud_C::IntializeTornadoMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.IntializeTornadoMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.CollectMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostShip_TornadoCloud_C::CollectMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.CollectMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostShip_TornadoCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_GhostShip_TornadoCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UpdateMaterialVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            SignalVisibilityLerpValue      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShip_TornadoCloud_C::UpdateMaterialVisibility(const struct FLinearColor& SignalVisibilityLerpValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UpdateMaterialVisibility"));

	struct
	{
		struct FLinearColor            SignalVisibilityLerpValue;
	} params;

	params.SignalVisibilityLerpValue = SignalVisibilityLerpValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.ExecuteUbergraph_BP_GhostShip_TornadoCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostShip_TornadoCloud_C::ExecuteUbergraph_BP_GhostShip_TornadoCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.ExecuteUbergraph_BP_GhostShip_TornadoCloud"));

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
