// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ChecklistMaps_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChecklistMaps.NamedChecklistEventActionData.EventsSource
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UNamedChecklistEventActionData::EventsSource()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ChecklistMaps.NamedChecklistEventActionData.EventsSource"));

	struct
	{
		TArray<class FString>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChecklistMaps.ChecklistMap.RefreshContents
// (Final, RequiredAPI, Native, Public, BlueprintCallable)

void AChecklistMap::RefreshContents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ChecklistMaps.ChecklistMap.RefreshContents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChecklistMaps.ChecklistMap.OnTextCanvasUpdate
// (Final, Native, Private)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AChecklistMap::OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ChecklistMaps.ChecklistMap.OnTextCanvasUpdate"));

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


// Function ChecklistMaps.ChecklistMap.OnRep_Contents
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FChecklistMapContents   InPreviousContents             (ConstParm, Parm, OutParm, ReferenceParm)

void AChecklistMap::OnRep_Contents(const struct FChecklistMapContents& InPreviousContents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ChecklistMaps.ChecklistMap.OnRep_Contents"));

	struct
	{
		struct FChecklistMapContents   InPreviousContents;
	} params;

	params.InPreviousContents = InPreviousContents;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
