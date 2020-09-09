#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup
struct UPlayerMysteriousNoteComponent_TriggerNotesReceivedPopup_Params
{
};

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

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
struct UPlayerMysteriousNoteComponent_Server_MarkNoteAsDeleted_Params
{
	class APlayerController*                           InPlayerController;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       NoteId;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
struct UPlayerMysteriousNoteComponent_OnRep_NoteData_Params
{
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
struct UPlayerMysteriousNoteComponent_AddFakeNote_Params
{
	class FString                                      NoteType;                                                 // (Parm, ZeroConstructor)
	class FString                                      NoteTitle;                                                // (Parm, ZeroConstructor)
	class FString                                      NoteBody;                                                 // (Parm, ZeroConstructor)
	TArray<class FString>                              CompletionStrings;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
struct AWieldableMysteriousNote_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout
struct AWieldableMysteriousNote_OnRep_NoteLayout_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
