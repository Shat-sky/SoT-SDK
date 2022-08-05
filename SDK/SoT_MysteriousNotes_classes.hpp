#pragma once

// Sea of Thieves (2.6.0) SDK

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


// Class MysteriousNotes.LookingAtMysteriousNoteInputComponent
// 0x0030 (0x02D0 - 0x02A0)
class ULookingAtMysteriousNoteInputComponent : public ULookingAtWieldableInputComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.LookingAtMysteriousNoteInputComponent"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNoteDesc
// 0x0000 (0x0120 - 0x0120)
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


// Class MysteriousNotes.MysteriousNoteSettings
// 0x0048 (0x0070 - 0x0028)
class UMysteriousNoteSettings : public UObject
{
public:
	int                                                LookAheadInMinutes;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RequestTimeout;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       MysteriousNotesCompletionStringsAsset;                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       WieldableNoteDataAsset;                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       Image;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       NotificationBackground;                                   // 0x0060(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNoteSettings"));
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
// 0x0150 (0x0178 - 0x0028)
class UWieldableMysteriousNoteLayout : public UDataAsset
{
public:
	struct FText                                       DefaultTitle;                                             // 0x0028(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       DefaultBody;                                              // 0x0060(0x0038) (Edit, DisableEditOnInstance)
	struct FWieldableMysteriousNoteLayoutItem          DefaultNoteLayoutItem;                                    // 0x0098(0x00D0) (Edit, DisableEditOnInstance)
	TArray<struct FWieldableMysteriousNoteLayoutItem>  NoteLayoutItems;                                          // 0x0168(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
// 0x00C8 (0x0490 - 0x03C8)
class AMysteriousNotesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03C8(0x0028) MISSED OFFSET
	class UMysteriousNoteSettings*                     CachedNoteSettings;                                       // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWieldableMysteriousNoteDataAsset*           WieldableNoteDataAsset;                                   // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMysteriousNotesCompletionEventsModelDataAsset* CompletionEventsModelData;                                // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0408(0x0088) MISSED OFFSET

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
// 0x0188 (0x0250 - 0x00C8)
class UPlayerMysteriousNoteComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FClientNoteData                             NoteData;                                                 // 0x00D0(0x0018) (Net)
	bool                                               BeenPossessed;                                            // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               CinematicPlayed;                                          // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x166];                                     // 0x00EA(0x0166) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.PlayerMysteriousNoteComponent"));
		return ptr;
	}


	void TriggerNotesReceivedPopup(bool InCinematicSkipped);
	void Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const struct FName& InCompletionID);
	void Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId);
	void Server_MarkNoteAsDeleted(class APlayerController* InPlayerController, const struct FGuid& NoteId);
	void OnRep_NoteData();
	void OnRep_BeenPossessed();
	void CustomServerUpdateDetailNotes(TArray<struct FNotesRemoteServiceNoteDetailModel> InNotes);
	void AddFakeNote(const class FString& NoteType, const class FString& NoteTitle, const class FString& NoteBody, TArray<class FString> CompletionStrings);
};


// Class MysteriousNotes.WieldableMysteriousNote
// 0x01A0 (0x0920 - 0x0780)
class AWieldableMysteriousNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                             // 0x0790(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CanvasWidth;                                              // 0x0798(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x079C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x07A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x07A4(0x005C) MISSED OFFSET
	class UWieldableMysteriousNoteLayout*              NoteLayout;                                               // 0x0800(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0808(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x108];                                     // 0x0818(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNote"));
		return ptr;
	}


	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
	void OnRep_NoteLayout();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
