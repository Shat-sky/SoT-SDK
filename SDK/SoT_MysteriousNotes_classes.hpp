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
class UMysteriousNoteDesc : public UItemDesc
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


// Class MysteriousNotes.MysteriousNoteSettingsAsset
// 0x0030 (0x0058 - 0x0028)
class UMysteriousNoteSettingsAsset : public UDataAsset
{
public:
	int                                                LookAheadInMinutes;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequestTimeout;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       MysteriousNotesCompletionStringsAsset;                    // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       DefaultRadialIcon;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UWieldableMysteriousNoteDataAsset*           WieldableNoteDataAsset;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNoteSettingsAsset"));
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
// 0x0098 (0x00C0 - 0x0028)
class UWieldableMysteriousNoteLayout : public UDataAsset
{
public:
	struct FWieldableMysteriousNoteLayoutItem          DefaultNoteLayoutItem;                                    // 0x0028(0x0040) (Edit, DisableEditOnInstance)
	TArray<struct FWieldableMysteriousNoteLayoutItem>  NoteLayoutItems;                                          // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      NoteTitleWidgetText;                                      // 0x0078(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      NoteBodyWidgetText;                                       // 0x0098(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoteScale;                                                // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
// 0x0060 (0x04B8 - 0x0458)
class AMysteriousNotesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0458(0x0028) MISSED OFFSET
	class UMysteriousNoteSettingsAsset*                NoteSettingsDataAsset;                                    // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMysteriousNotesCompletionEventsModelDataAsset* MysteriousNotesCompletionEventsModelDataAsset;            // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0490(0x0028) MISSED OFFSET

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
// 0x0080 (0x0148 - 0x00C8)
class UPlayerMysteriousNoteComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<struct FMysteriousNoteInfo>                 PendingNotes;                                             // 0x00D0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x00E0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.PlayerMysteriousNoteComponent"));
		return ptr;
	}


	void Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const struct FName& InCompletionID);
	void Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId);
	void OnRep_PendingNotes();
};


// Class MysteriousNotes.WieldableMysteriousNote
// 0x0110 (0x0910 - 0x0800)
class AWieldableMysteriousNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0800(0x0008) MISSED OFFSET
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                             // 0x0808(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWieldableMysteriousNoteLayout*              NoteLayout;                                               // 0x0810(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CanvasWidth;                                              // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x081C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x0820(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0824(0x0054) MISSED OFFSET
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                          // 0x0878(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0880(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0888(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0890(0x0080) MISSED OFFSET

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
