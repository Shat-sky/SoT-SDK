#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleMaps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TaleMaps.AddMarkToTornMapStep
// 0x0028 (0x00C0 - 0x0098)
class UAddMarkToTornMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET
	class UClass*                                      MapMark;                                                  // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.AddMarkToTornMapStep"));
		return ptr;
	}

};


// Class TaleMaps.AddMarkToTornMapStepDescBase
// 0x0060 (0x00E0 - 0x0080)
class UAddMarkToTornMapStepDescBase : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuid                          MapId;                                                    // 0x0080(0x0030) (Edit)
	struct FTaleQuestVariableMapMarkType               MapMark;                                                  // 0x00B0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.AddMarkToTornMapStepDescBase"));
		return ptr;
	}

};


// Class TaleMaps.AddMarkToTornMapAtLocationStepDesc
// 0x0030 (0x0110 - 0x00E0)
class UAddMarkToTornMapAtLocationStepDesc : public UAddMarkToTornMapStepDescBase
{
public:
	struct FQuestVariableVector                        MarkLocation;                                             // 0x00E0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.AddMarkToTornMapAtLocationStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.AddMarkToTornMapAtActorLocationStepDesc
// 0x0030 (0x0110 - 0x00E0)
class UAddMarkToTornMapAtActorLocationStepDesc : public UAddMarkToTornMapStepDescBase
{
public:
	struct FQuestVariableActor                         MarkLocation;                                             // 0x00E0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.AddMarkToTornMapAtActorLocationStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep
// 0x0040 (0x00D8 - 0x0098)
class UGetNumberOfCollectedTornMapPiecesStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep"));
		return ptr;
	}

};


// Class TaleMaps.GetNumberOfCollectedTornMapPiecesStepDesc
// 0x0060 (0x00E0 - 0x0080)
class UGetNumberOfCollectedTornMapPiecesStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuid                          MapId;                                                    // 0x0080(0x0030) (Edit)
	struct FQuestVariableInt                           NumPieces;                                                // 0x00B0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.GetNumberOfCollectedTornMapPiecesStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.RegionIslandSelectionStrategyBase
// 0x0000 (0x0028 - 0x0028)
class URegionIslandSelectionStrategyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.RegionIslandSelectionStrategyBase"));
		return ptr;
	}

};


// Class TaleMaps.RegionIslandFilteredSelectionStrategy
// 0x0018 (0x0040 - 0x0028)
class URegionIslandFilteredSelectionStrategy : public URegionIslandSelectionStrategyBase
{
public:
	TArray<TEnumAsByte<EIslandType>>                   IslandTypes;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	bool                                               UseMaxDistance;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              MaxDistanceFromStartingIsland;                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.RegionIslandFilteredSelectionStrategy"));
		return ptr;
	}

};


// Class TaleMaps.RegionIslandRandomSelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class URegionIslandRandomSelectionStrategy : public URegionIslandSelectionStrategyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.RegionIslandRandomSelectionStrategy"));
		return ptr;
	}

};


// Class TaleMaps.SelectIslandsFromRegionStep
// 0x0060 (0x00F8 - 0x0098)
class USelectIslandsFromRegionStep : public UTaleQuestStep
{
public:
	class URegionMapDataAsset*                         RegionData;                                               // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URegionIslandSelectionStrategyBase*          SelectionStrategy;                                        // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.SelectIslandsFromRegionStep"));
		return ptr;
	}

};


// Class TaleMaps.SelectIslandsFromRegionStepDesc
// 0x00D0 (0x0150 - 0x0080)
class USelectIslandsFromRegionStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableDataAsset                     Region;                                                   // 0x0080(0x0030) (Edit)
	struct FQuestVariableInt                           NumIslands;                                               // 0x00B0(0x0030) (Edit)
	struct FQuestVariableInt                           MaxDifferentIslands;                                      // 0x00E0(0x0030) (Edit)
	struct FQuestVariableNameArray                     SelectedIslands;                                          // 0x0110(0x0030) (Edit)
	class URegionIslandSelectionStrategyBase*          SelectionStrategy;                                        // 0x0140(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                DefaultNumIslands;                                        // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultMaxDifferentIslands;                               // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.SelectIslandsFromRegionStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddLocationMapStep
// 0x00C0 (0x0158 - 0x0098)
class UTaleQuestAddLocationMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0098(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddLocationMapStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddTornMapStep
// 0x00D8 (0x0170 - 0x0098)
class UTaleQuestAddTornMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0098(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddTornMapStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddTradeRouteMapStep
// 0x0090 (0x0128 - 0x0098)
class UTaleQuestAddTradeRouteMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0098(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddTradeRouteMapStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestCustomMapFunctionLibrary
// 0x0018 (0x0198 - 0x0180)
class UTaleQuestCustomMapFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0180(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestCustomMapFunctionLibrary"));
		return ptr;
	}


	void UpdateStrikeThoughTextElement(const struct FGuid& MapGuid, const struct FGuid& ElementGuid, bool StrikeThroughEnabled);
	void AddCustomMap(TAssetPtr<class UCustomMapData> Data, struct FGuid* MapGuid);
};


// Class TaleMaps.TaleQuestLocationMapChestFoundStep
// 0x0008 (0x00A0 - 0x0098)
class UTaleQuestLocationMapChestFoundStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestLocationMapChestFoundStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestMapStepDescBase
// 0x0000 (0x0080 - 0x0080)
class UTaleQuestMapStepDescBase : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestMapStepDescBase"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddLocationMapStepDesc
// 0x00C8 (0x0148 - 0x0080)
class UTaleQuestAddLocationMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableInt                           NumberOfChests;                                           // 0x0088(0x0030) (Edit)
	struct FQuestVariableDataAsset                     RegionMapData;                                            // 0x00B8(0x0030) (Edit)
	struct FQuestVariableDataAsset                     VaultData;                                                // 0x00E8(0x0030) (Edit)
	struct FQuestVariableDataAsset                     MapParams;                                                // 0x0118(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddLocationMapStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddTornMapStepDesc
// 0x00C0 (0x0140 - 0x0080)
class UTaleQuestAddTornMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0080(0x0030) (Edit)
	struct FQuestVariableInt                           NumberOfPieces;                                           // 0x00B0(0x0030) (Edit)
	struct FQuestVariableDataAsset                     MapParams;                                                // 0x00E0(0x0030) (Edit)
	struct FQuestVariableGuid                          MapId;                                                    // 0x0110(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddTornMapStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddTradeRouteMapStepDesc
// 0x0098 (0x0118 - 0x0080)
class UTaleQuestAddTradeRouteMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FQuestVariableDataAsset                     TradeRouteData;                                           // 0x0080(0x0030) (Edit)
	struct FQuestVariableText                          VesselName;                                               // 0x00B0(0x0030) (Edit)
	struct FQuestVariableGuid                          MapId;                                                    // 0x00E0(0x0030) (Edit)
	class UClueSiteTypeToMapMarkIdDataAsset*           ClueSiteToMapMarkIdMap;                                   // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddTradeRouteMapStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestLocationMapChestFoundStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestWaitForChecklistMapCompletionStep
// 0x0008 (0x00A0 - 0x0098)
class UTaleQuestWaitForChecklistMapCompletionStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestWaitForChecklistMapCompletionStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestTornMapFunctionLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleQuestTornMapFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestTornMapFunctionLibrary"));
		return ptr;
	}


	void AddTornMap(const struct FName& IslandName, int NumPieces, class UTornMapParams* MapParams, float MaskRotation, struct FGuid* OutMapId);
};


// Class TaleMaps.TaleQuestTriggerNamedChecklistEventStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestTriggerNamedChecklistEventStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestTriggerNamedChecklistEventStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestTriggerNamedChecklistEventStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       Event;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc"));
		return ptr;
	}


	TArray<class FString> EventsSource();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
