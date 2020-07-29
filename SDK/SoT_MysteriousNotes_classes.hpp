#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext
// 0x0000 (0x0028 - 0x0028)
class UHasPlayerMysteriousNotesRadialContext : public URadialContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNoteDesc
// 0x0000 (0x0130 - 0x0130)
class UMysteriousNoteDesc : public UItemWithoutIconsDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNoteDesc"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset
// 0x0010 (0x0038 - 0x0028)
class UMysteriousNotesCompletionEventsModelDataAsset : public UDataAsset
{
public:
	TArray<struct FMysteriousNotesCompletionEventsModel> MysteriousNoteCompletionEvents;                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNotesServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMysteriousNotesServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNotesServiceInterface"));
		return ptr;
	}

};


// Class MysteriousNotes.WieldableMysteriousNoteLayout
// 0x0068 (0x0090 - 0x0028)
class UWieldableMysteriousNoteLayout : public UDataAsset
{
public:
	TArray<struct FWieldableMysteriousNoteLayoutItem>  Items;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMysteriousNoteTheme>                Themes;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      NoteTitleWidgetText;                                      // 0x0048(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      NoteBodyWidgetText;                                       // 0x0068(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoteScale;                                                // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNoteLayout"));
		return ptr;
	}

};


// Class MysteriousNotes.WieldableMysteriousNoteDataAsset
// 0x0010 (0x0038 - 0x0028)
class UWieldableMysteriousNoteDataAsset : public UDataAsset
{
public:
	class UClass*                                      WieldableNoteDesc;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWieldableMysteriousNoteLayout*              NoteLayout;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNoteDataAsset"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNotesService
// 0x0038 (0x0448 - 0x0410)
class AMysteriousNotesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0410(0x0028) MISSED OFFSET
	class UWieldableMysteriousNoteDataAsset*           NoteDataAsset;                                            // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0440(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNotesService"));
		return ptr;
	}

};


// Class MysteriousNotes.PlayerMysteriousNoteInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerMysteriousNoteInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.PlayerMysteriousNoteInterface"));
		return ptr;
	}

};


// Class MysteriousNotes.PlayerMysteriousNoteComponent
// 0x0088 (0x0150 - 0x00C8)
class UPlayerMysteriousNoteComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<struct FMysteriousNoteInfo>                 PendingNotes;                                             // 0x00D0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x00E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.PlayerMysteriousNoteComponent"));
		return ptr;
	}


	void Server_NoteCompletionStepReceived(class ACharacter* InCharacter, const struct FName& InCompletionID);
	void Server_MarkNoteAsRead(class ACharacter* InCharacter, const struct FGuid& NoteId);
	void OnRep_PendingNotes();
};


// Class MysteriousNotes.WieldableMysteriousNote
// 0x00F0 (0x08A0 - 0x07B0)
class AWieldableMysteriousNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B0(0x0008) MISSED OFFSET
	class UWieldableMysteriousNoteLayout*              NoteLayout;                                               // 0x07B8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CanvasWidth;                                              // 0x07C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x07C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x07C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x07CC(0x0044) MISSED OFFSET
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                          // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0820(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        TextRenderTarget;                                         // 0x0828(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x70];                                      // 0x0830(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNote"));
		return ptr;
	}


	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
