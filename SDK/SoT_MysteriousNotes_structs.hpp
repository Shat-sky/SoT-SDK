#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModel
// 0x0008
struct FMysteriousNotesCompletionEventsModel
{
	struct FName                                       CompletionIdent;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.WieldableMysteriousNoteLayoutItem
// 0x0040
struct FWieldableMysteriousNoteLayoutItem
{
	class FString                                      Theme;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UFont*                                       Font;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTreasureMapWidgetTexture                   Image;                                                    // 0x0018(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct MysteriousNotes.MysteriousNoteTheme
// 0x0010
struct FMysteriousNoteTheme
{
	class FString                                      NoteType;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct MysteriousNotes.MysteriousNoteInfo
// 0x0014
struct FMysteriousNoteInfo
{
	struct FGuid                                       NoteId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               NoteRead;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventNoteClientCompletionStep
// 0x0010
struct FEventNoteClientCompletionStep
{
	class ACharacter*                                  Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompletionStepID;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventNoteCompletionStep
// 0x0010
struct FEventNoteCompletionStep
{
	class ACharacter*                                  Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompletionStepID;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventNotesUpdated
// 0x0001
struct FEventNotesUpdated
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventMarkNoteRead
// 0x0018
struct FEventMarkNoteRead
{
	class ACharacter*                                  Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       NoteId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventPlayerCharacterUnpossessed
// 0x0008
struct FEventPlayerCharacterUnpossessed
{
	class ACharacter*                                  Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventPlayerCharacterPossessed
// 0x0008
struct FEventPlayerCharacterPossessed
{
	class ACharacter*                                  Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteContentUpdated
// 0x0030
struct FEventMysteriousNoteContentUpdated
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteRemoved
// 0x0010
struct FEventMysteriousNoteRemoved
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.ActiveNoteData
// 0x0020
struct FActiveNoteData
{
	TArray<struct FNotesRemoteServiceNoteModel>        NotesRemoteServiceNoteModels;                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              PendingCompletionIDs;                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MysteriousNotes.MysteriousNoteRequest
// 0x0030
struct FMysteriousNoteRequest
{
	class ACharacter*                                  Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPirateIdentity                             PirateIdentity;                                           // 0x0008(0x0028)
};

// ScriptStruct MysteriousNotes.PlayerMysteriousNoteItem
// 0x0040
struct FPlayerMysteriousNoteItem
{
	struct FGuid                                       OriginalNoteID;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      LocalisedTitle;                                           // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      LocalisedBody;                                            // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      NoteType;                                                 // 0x0030(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
