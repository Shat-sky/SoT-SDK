// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InCompletionID                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerMysteriousNoteComponent::Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const struct FName& InCompletionID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived"));

	struct
	{
		class APlayerController*       InPlayerController;
		struct FName                   InCompletionID;
	} params;

	params.InPlayerController = InPlayerController;
	params.InCompletionID = InCompletionID;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerMysteriousNoteComponent::Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead"));

	struct
	{
		class APlayerController*       InPlayerController;
		struct FGuid                   NoteId;
	} params;

	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_PendingNotes
// (Final, RequiredAPI, Native, Private)

void UPlayerMysteriousNoteComponent::OnRep_PendingNotes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_PendingNotes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
// (Final, Native, Private)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void AWieldableMysteriousNote::OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
