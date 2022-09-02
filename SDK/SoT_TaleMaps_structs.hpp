#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TaleMaps.TaleQuestVariableMapMarkType
// 0x0000 (0x0020 - 0x0020)
struct FTaleQuestVariableMapMarkType : public FQuestVariable
{

};

// ScriptStruct TaleMaps.ChecklistActionProgressTracker
// 0x0010
struct FChecklistActionProgressTracker
{
	class UChecklistActionData*                        ActionData;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct TaleMaps.TaleQuestChecklistItem
// 0x0050
struct FTaleQuestChecklistItem
{
	TArray<struct FChecklistActionProgressTracker>     ChecklistActions;                                         // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct TaleMaps.TaleQuestVariableTreasureMapItemDescType
// 0x0000 (0x0020 - 0x0020)
struct FTaleQuestVariableTreasureMapItemDescType : public FQuestVariable
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
