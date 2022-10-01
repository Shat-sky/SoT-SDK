#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ChecklistMaps_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChecklistMaps.ChecklistItem
// 0x0050
struct FChecklistItem
{
	struct FText                                       Description;                                              // 0x0000(0x0038) (Edit)
	int                                                NumRequiredActionCompletions;                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<class UChecklistActionData*>                ActionData;                                               // 0x0040(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct ChecklistMaps.ChecklistMapItemData
// 0x0050
struct FChecklistMapItemData
{
	struct FTreasureMapTextDesc                        Description;                                              // 0x0000(0x0048)
	bool                                               IsComplete;                                               // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ChecklistMaps.ChecklistMapContents
// 0x00E8
struct FChecklistMapContents
{
	struct FTreasureMapTextDesc                        Title;                                                    // 0x0000(0x0048)
	struct FTreasureMapTextDesc                        Description;                                              // 0x0048(0x0048)
	TArray<struct FChecklistMapItemData>               ChecklistItems;                                           // 0x0090(0x0010) (ZeroConstructor)
	struct FTreasureMapTextDesc                        Afternote;                                                // 0x00A0(0x0048)
};

// ScriptStruct ChecklistMaps.CompleteEntireChecklistEvent
// 0x0001
struct FCompleteEntireChecklistEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ChecklistMaps.ChecklistBootyDeliveredEvent
// 0x0010
struct FChecklistBootyDeliveredEvent
{
	class AActor*                                      Seller;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuyingNPC;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ChecklistMaps.ChecklistCompletionEvent
// 0x0008
struct FChecklistCompletionEvent
{
	class UChecklistActionData*                        ActionData;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ChecklistMaps.ChecklistItemCompletedTelemetryEvent
// 0x0028
struct FChecklistItemCompletedTelemetryEvent
{
	struct FGuid                                       ChecklistMapId;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EChecklistActionType>                  ReceivedActionType;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class FString                                      ActionDescryption;                                        // 0x0018(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
