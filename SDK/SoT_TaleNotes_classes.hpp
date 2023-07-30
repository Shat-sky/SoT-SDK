#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleNotes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TaleNotes.TaleNote
// 0x0270 (0x0A50 - 0x07E0)
class ATaleNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07E0(0x0010) MISSED OFFSET
	int                                                CanvasWidth;                                              // 0x07F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x07F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x07F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0800(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTreasureMapWidgetStreamedTexture           Image;                                                    // 0x0808(0x0038) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      TitleWidgetText;                                          // 0x0840(0x003C) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      BodyWidgetText;                                           // 0x087C(0x003C) (Edit, DisableEditOnInstance)
	TArray<struct FTreasureMapWidgetText>              AdditionalBodyWidgetText;                                 // 0x08B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x08C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoteLineSpacingMultiplier;                                // 0x08CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x08D0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       Body;                                                     // 0x0908(0x0038) (Edit, DisableEditOnInstance)
	TArray<struct FText>                               AdditionalBody;                                           // 0x0940(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                             // 0x0950(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0958(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0960(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UZoomInOnWieldableItemComponent*             ZoomInOnWieldableComponent;                               // 0x0968(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE0];                                      // 0x0970(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleNotes.TaleNote"));
		return ptr;
	}


	void OnTextCanvasUpdate(class UCanvas* InCanvas, int InWidth, int InHeight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
