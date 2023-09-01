// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GuildMastPlaque_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetOutputsToMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GuildMastPlaque_C::ApplyRenderTargetOutputsToMIDs()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetOutputsToMIDs"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::UpdateBevelIcon(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelIcon"));

	struct
	{
		class UCanvas*                 Canvas;
	} params;

	params.Canvas = Canvas;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::UpdateBevelRank(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelRank"));

	struct
	{
		class UCanvas*                 Canvas;
	} params;

	params.Canvas = Canvas;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::UpdateBevelText(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelText"));

	struct
	{
		class UCanvas*                 Canvas;
	} params;

	params.Canvas = Canvas;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::UpdateIcon(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateIcon"));

	struct
	{
		class UCanvas*                 Canvas;
	} params;

	params.Canvas = Canvas;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::UpdateRank(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateRank"));

	struct
	{
		class UCanvas*                 Canvas;
	} params;

	params.Canvas = Canvas;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetTextScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               FontSizeInScreenSpace          (Parm, ZeroConstructor, IsPlainOldData)
// float                          AdjustedFontScalar             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::GetTextScale(const struct FVector2D& FontSizeInScreenSpace, float* AdjustedFontScalar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetTextScale"));

	struct
	{
		struct FVector2D               FontSizeInScreenSpace;
		float                          AdjustedFontScalar;
	} params;

	params.FontSizeInScreenSpace = FontSizeInScreenSpace;

	UObject::ProcessEvent(fn, &params);

	if (AdjustedFontScalar != nullptr)
		*AdjustedFontScalar = params.AdjustedFontScalar;
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::UpdateBevelMaterials(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelMaterials"));

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


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::UpdateText(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateText"));

	struct
	{
		class UCanvas*                 Canvas;
	} params;

	params.Canvas = Canvas;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetToMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GuildMastPlaque_C::ApplyRenderTargetToMIDs()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetToMIDs"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetMedallionColour
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Gold_Threshold                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Silver_Threshold               (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank_Index                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Medallion_Colour               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::GetMedallionColour(float Gold_Threshold, float Silver_Threshold, int Rank_Index, struct FLinearColor* Medallion_Colour)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetMedallionColour"));

	struct
	{
		float                          Gold_Threshold;
		float                          Silver_Threshold;
		int                            Rank_Index;
		struct FLinearColor            Medallion_Colour;
	} params;

	params.Gold_Threshold = Gold_Threshold;
	params.Silver_Threshold = Silver_Threshold;
	params.Rank_Index = Rank_Index;

	UObject::ProcessEvent(fn, &params);

	if (Medallion_Colour != nullptr)
		*Medallion_Colour = params.Medallion_Colour;
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.AssignMedallionColour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Medallion_Colour               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::AssignMedallionColour(const struct FLinearColor& Medallion_Colour)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.AssignMedallionColour"));

	struct
	{
		struct FLinearColor            Medallion_Colour;
	} params;

	params.Medallion_Colour = Medallion_Colour;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.Create_MIDs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GuildMastPlaque_C::Create_MIDs()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.Create_MIDs"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GuildMastPlaque_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_GuildMastPlaque_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::OnCanvasUpdate_Text(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text"));

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


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.RefreshGuildPlaqueRender
// (Event, Public, BlueprintEvent)

void ABP_GuildMastPlaque_C::RefreshGuildPlaqueRender()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.RefreshGuildPlaqueRender"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::OnCanvasUpdate_Rank(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank"));

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


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::OnCanvasUpdate_Icon(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon"));

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


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text_Bevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::OnCanvasUpdate_Text_Bevel(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text_Bevel"));

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


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank_Bevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::OnCanvasUpdate_Rank_Bevel(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank_Bevel"));

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


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon_Bevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::OnCanvasUpdate_Icon_Bevel(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon_Bevel"));

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


// Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ExecuteUbergraph_BP_GuildMastPlaque
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GuildMastPlaque_C::ExecuteUbergraph_BP_GuildMastPlaque(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ExecuteUbergraph_BP_GuildMastPlaque"));

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
