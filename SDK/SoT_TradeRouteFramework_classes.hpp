#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TradeRouteFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TradeRouteFramework.TradeRouteDifficultyBand
// 0x0000 (0x0028 - 0x0028)
class UTradeRouteDifficultyBand : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TradeRouteDifficultyBand"));
		return ptr;
	}

};


// Class TradeRouteFramework.TradeRouteData
// 0x0040 (0x0068 - 0x0028)
class UTradeRouteData : public UDataAsset
{
public:
	struct FInterpCurveVector2D                        TradeRoutePath;                                           // 0x0028(0x0018) (ZeroConstructor)
	struct FIslandSelectionType                        StartIsland;                                              // 0x0040(0x0008) (Edit, DisableEditOnInstance)
	struct FIslandSelectionType                        EndIsland;                                                // 0x0048(0x0008) (Edit, DisableEditOnInstance)
	class UClass*                                      DifficultyBand;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FIslandSelectionType>                CandidateClueIslands;                                     // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TradeRouteData"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
