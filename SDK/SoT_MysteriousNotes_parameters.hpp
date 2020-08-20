#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
struct UPlayerMysteriousNoteComponent_Server_NoteCompletionStepReceived_Params
{
	class APlayerController*                           InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCompletionID;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
struct UPlayerMysteriousNoteComponent_Server_MarkNoteAsRead_Params
{
	class APlayerController*                           InPlayerController;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       NoteId;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_PendingNotes
struct UPlayerMysteriousNoteComponent_OnRep_PendingNotes_Params
{
};

// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
struct AWieldableMysteriousNote_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
