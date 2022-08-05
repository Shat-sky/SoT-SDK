#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ChecklistMaps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ChecklistMaps.ChecklistActionData
// 0x0008 (0x0030 - 0x0028)
class UChecklistActionData : public UObject
{
public:
	int                                                NumRequiredActions;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EChecklistActionType>                  ActionType;                                               // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.ChecklistActionData"));
		return ptr;
	}

};


// Class ChecklistMaps.DeliverBootyChecklistActionData
// 0x0020 (0x0050 - 0x0030)
class UDeliverBootyChecklistActionData : public UChecklistActionData
{
public:
	TArray<TAssetPtr<class UClass>>                    TargetBootyTypes;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              TargetCompanies;                                          // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.DeliverBootyChecklistActionData"));
		return ptr;
	}

};


// Class ChecklistMaps.KillActorChecklistActionData
// 0x0010 (0x0040 - 0x0030)
class UKillActorChecklistActionData : public UChecklistActionData
{
public:
	TArray<class UClass*>                              TargetAIClasses;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.KillActorChecklistActionData"));
		return ptr;
	}

};


// Class ChecklistMaps.NamedChecklistEventActionData
// 0x0008 (0x0038 - 0x0030)
class UNamedChecklistEventActionData : public UChecklistActionData
{
public:
	struct FName                                       Event;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.NamedChecklistEventActionData"));
		return ptr;
	}


	TArray<class FString> EventsSource();
};


// Class ChecklistMaps.NPCInteractionChecklistActionData
// 0x0010 (0x0040 - 0x0030)
class UNPCInteractionChecklistActionData : public UChecklistActionData
{
public:
	TArray<struct FGuid>                               TargetNPCIds;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.NPCInteractionChecklistActionData"));
		return ptr;
	}

};


// Class ChecklistMaps.ChecklistItemsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UChecklistItemsDataAsset : public UDataAsset
{
public:
	TArray<struct FChecklistItem>                      ChecklistItems;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.ChecklistItemsDataAsset"));
		return ptr;
	}

};


// Class ChecklistMaps.ChecklistMap
// 0x0150 (0x0920 - 0x07D0)
class AChecklistMap : public ATreasureMap
{
public:
	class UFont*                                       Font;                                                     // 0x07D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FontScale;                                                // 0x07D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FontLineSpacingScale;                                     // 0x07DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E0(0x0008) MISSED OFFSET
	class UChecklistMapLayout*                         ChecklistMapLayout;                                       // 0x07E8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FChecklistMapContents                       Contents;                                                 // 0x07F0(0x00E8) (Net)
	unsigned char                                      UnknownData01[0x48];                                      // 0x08D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.ChecklistMap"));
		return ptr;
	}


	void RefreshContents();
	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
	void OnRep_Contents(const struct FChecklistMapContents& InPreviousContents);
};


// Class ChecklistMaps.ChecklistMapCollectionInterface
// 0x0000 (0x0028 - 0x0028)
class UChecklistMapCollectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.ChecklistMapCollectionInterface"));
		return ptr;
	}

};


// Class ChecklistMaps.ChecklistMapCompletionComponent
// 0x0078 (0x0140 - 0x00C8)
class UChecklistMapCompletionComponent : public UActorComponent
{
public:
	class UChecklistActionData*                        ActionData;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.ChecklistMapCompletionComponent"));
		return ptr;
	}

};


// Class ChecklistMaps.ChecklistMapSettings
// 0x0020 (0x0058 - 0x0038)
class UChecklistMapSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       ChecklistMapItemDescClass;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	TArray<struct FName>                               ChecklistEvents;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChecklistMaps.ChecklistMapSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
