#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueVariants_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAbandonedNoteClueTextSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ClueDestinationContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UClueDestinationContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ClueDestinationContainerInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent
// 0x00A0 (0x0168 - 0x00C8)
class UAbandonedNoteClueDestinationContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class UClueDestinationDescriptor*                  CurrentDestination;                                       // 0x00D8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x00E0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent"));
		return ptr;
	}


	void OnRep_CurrentDestination();
};


// Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent
// 0x0068 (0x0130 - 0x00C8)
class UAbandonedNoteWieldableRenderingComponent : public UActorComponent
{
public:
	int                                                CanvasWidth;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontLineSpacing;                                          // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTreasureMapWidgetText                      TextBodyLayout;                                           // 0x00E0(0x0020) (Edit, DisableEditOnInstance)
	TScriptInterface<class UWieldableItemCanvasRenderingInterface> WieldableRenderingInterface;                              // 0x0100(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteWieldable
// 0x0020 (0x0820 - 0x0800)
class AAbandonedNoteWieldable : public ASkeletalMeshWieldableItem
{
public:
	class UWieldableItemCanvasRenderingComponent*      WieldableItemCanvasRenderingComponent;                    // 0x0800(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAbandonedNoteWieldableRenderingComponent*   AbandonedNoteRenderingComponent;                          // 0x0808(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteWieldable"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor
// 0x0008 (0x0030 - 0x0028)
class UIslandByNameClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FName                                       IslandIdentifier;                                         // 0x0028(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
