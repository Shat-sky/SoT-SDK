#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_TradeRouteFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TradeRouteFramework.QuestVariableTradeRouteData
// 0x0000 (0x0030 - 0x0030)
struct FQuestVariableTradeRouteData : public FQuestVariable
{

};

// ScriptStruct TradeRouteFramework.TradeRouteMapping
// 0x0028
struct FTradeRouteMapping
{
	TEnumAsByte<ETradeRouteMappingFilter>              Filter;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FIslandSelectionType                        StartIsland;                                              // 0x0004(0x0008) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      DifficultyBand;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TradeRouteReference;                                      // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct TradeRouteFramework.TradeRouteMappingFilterQuestVariable
// 0x0000 (0x0030 - 0x0030)
struct FTradeRouteMappingFilterQuestVariable : public FQuestVariable
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
