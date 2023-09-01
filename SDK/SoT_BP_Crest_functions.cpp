// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Crest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Crest.BP_Crest_C.SetupCrestMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Crest_C::SetupCrestMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.SetupCrestMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.GetTextScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               TextSize                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Crest_C::GetTextScale(const struct FVector2D& TextSize, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.GetTextScale"));

	struct
	{
		struct FVector2D               TextSize;
		float                          Scale;
	} params;

	params.TextSize = TextSize;

	UObject::ProcessEvent(fn, &params);

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function BP_Crest.BP_Crest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Crest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Crest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.UpdateTextCanvas
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crest_C::UpdateTextCanvas(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.UpdateTextCanvas"));

	struct
	{
		class UCanvas*                 Canvas;
		int                            Width;
		int                            Height;
	} params;

	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.UpdateBlurredCanvas
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crest_C::UpdateBlurredCanvas(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.UpdateBlurredCanvas"));

	struct
	{
		class UCanvas*                 Canvas;
		int                            Width;
		int                            Height;
	} params;

	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.UpdateBevelCanvas
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crest_C::UpdateBevelCanvas(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.UpdateBevelCanvas"));

	struct
	{
		class UCanvas*                 Canvas;
		int                            Width;
		int                            Height;
	} params;

	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.ReceiveMeshLoaded
// (Event, Public, BlueprintEvent)

void ABP_Crest_C::ReceiveMeshLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.ReceiveMeshLoaded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.RefreshShipNameRender
// (Event, Public, BlueprintEvent)

void ABP_Crest_C::RefreshShipNameRender()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.RefreshShipNameRender"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.HideShipName
// (Event, Public, BlueprintEvent)

void ABP_Crest_C::HideShipName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.HideShipName"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.InscribeShipName
// (Event, Public, BlueprintEvent)

void ABP_Crest_C::InscribeShipName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.InscribeShipName"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.UpdateShipNameRender
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeInTime                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crest_C::UpdateShipNameRender(float FadeInTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.UpdateShipNameRender"));

	struct
	{
		float                          FadeInTime;
	} params;

	params.FadeInTime = FadeInTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Crest.BP_Crest_C.ExecuteUbergraph_BP_Crest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crest_C::ExecuteUbergraph_BP_Crest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Crest.BP_Crest_C.ExecuteUbergraph_BP_Crest"));

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
