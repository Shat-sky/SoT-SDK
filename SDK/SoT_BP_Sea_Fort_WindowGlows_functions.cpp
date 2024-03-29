// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Sea_Fort_WindowGlows_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.CreateDynamicMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Sea_Fort_WindowGlows_C::CreateDynamicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.CreateDynamicMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Sea_Fort_WindowGlows_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.FadeCurve__FinishedFunc
// (BlueprintEvent)

void ABP_Sea_Fort_WindowGlows_C::FadeCurve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.FadeCurve__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.FadeCurve__UpdateFunc
// (BlueprintEvent)

void ABP_Sea_Fort_WindowGlows_C::FadeCurve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.FadeCurve__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Sea_Fort_WindowGlows_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.Activate
// (BlueprintCallable, BlueprintEvent)

void ABP_Sea_Fort_WindowGlows_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.Activate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void ABP_Sea_Fort_WindowGlows_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.Deactivate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.SetSeaFortDistantLightsEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           InLightsEnabled                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sea_Fort_WindowGlows_C::SetSeaFortDistantLightsEnabled(bool InLightsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.SetSeaFortDistantLightsEnabled"));

	struct
	{
		bool                           InLightsEnabled;
	} params;

	params.InLightsEnabled = InLightsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.ExecuteUbergraph_BP_Sea_Fort_WindowGlows
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sea_Fort_WindowGlows_C::ExecuteUbergraph_BP_Sea_Fort_WindowGlows(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.ExecuteUbergraph_BP_Sea_Fort_WindowGlows"));

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
