#pragma once

// Sea of Thieves (2) SDK

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
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomMysteriousNotes.CustomPlayerNoteList
// 0x0010
struct FCustomPlayerNoteList
{
	TArray<struct FNotesRemoteServiceNoteDetailModel>  Notes;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomMysteriousNotes.DestroyMysteriousNoteGameServerRequestModel
// 0x0014
struct FDestroyMysteriousNoteGameServerRequestModel
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       NoteGUID;                                                 // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomMysteriousNotes.CreateMysteriousNoteGameServerResponseModel
// 0x0014
struct FCreateMysteriousNoteGameServerResponseModel
{
	bool                                               Success;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGuid                                       NoteId;                                                   // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomMysteriousNotes.CreateMysteriousNoteGameServerRequestModel
// 0x0038
struct FCreateMysteriousNoteGameServerRequestModel
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      NoteType;                                                 // 0x0008(0x0010) (ZeroConstructor)
	class FString                                      NoteTitle;                                                // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      NoteBody;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
