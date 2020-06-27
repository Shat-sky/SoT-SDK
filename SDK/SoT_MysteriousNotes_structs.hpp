#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MysteriousNotes.EClientMysteriousNoteType
enum class EClientMysteriousNoteType : uint8_t
{
	EClientMysteriousNoteType__Default = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MysteriousNotes.MysteriousNoteItemModel
// 0x0010
struct FMysteriousNoteItemModel
{
	struct FGuid                                       NoteID;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.ClientMysteriousNoteItem
// 0x0024
struct FClientMysteriousNoteItem
{
	struct FGuid                                       OriginalNoteID;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LocalisedTitle;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LocalisedBody;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EClientMysteriousNoteType>             NoteType;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.MysteriousNoteItemResponseModel
// 0x0010
struct FMysteriousNoteItemResponseModel
{
	TArray<struct FMysteriousNoteItemModel>            NoteList;                                                 // 0x0000(0x0010) (ZeroConstructor)
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

// ScriptStruct MysteriousNotes.EventMysteriousNoteRemoved
// 0x0010
struct FEventMysteriousNoteRemoved
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.MysteriousNoteRequest
// 0x0030
struct FMysteriousNoteRequest
{
	class ACharacter*                                  Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPirateIdentity                             PirateIdentity;                                           // 0x0008(0x0028)
};

// ScriptStruct MysteriousNotes.ClientMysteriousNoteTheme
// 0x0001
struct FClientMysteriousNoteTheme
{
	TEnumAsByte<EClientMysteriousNoteType>             NoteType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
