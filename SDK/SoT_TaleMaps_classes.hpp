#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleMaps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep
// 0x0020 (0x0088 - 0x0068)
class UGetNumberOfCollectedTornMapPiecesStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep"));
		return ptr;
	}

};


// Class TaleMaps.GetNumberOfCollectedTornMapPiecesStepDesc
// 0x0020 (0x0050 - 0x0030)
class UGetNumberOfCollectedTornMapPiecesStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuid                          MapId;                                                    // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           NumPieces;                                                // 0x0040(0x0010) (Edit)

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
// 0x0040 (0x00A8 - 0x0068)
class USelectIslandsFromRegionStep : public UTaleQuestStep
{
public:
	class URegionMapDataAsset*                         RegionData;                                               // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URegionIslandSelectionStrategyBase*          SelectionStrategy;                                        // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.SelectIslandsFromRegionStep"));
		return ptr;
	}

};


// Class TaleMaps.SelectIslandsFromRegionStepDesc
// 0x0050 (0x0080 - 0x0030)
class USelectIslandsFromRegionStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableDataAsset                     Region;                                                   // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           NumIslands;                                               // 0x0040(0x0010) (Edit)
	struct FQuestVariableInt                           MaxDifferentIslands;                                      // 0x0050(0x0010) (Edit)
	struct FQuestVariableNameArray                     SelectedIslands;                                          // 0x0060(0x0010) (Edit)
	class URegionIslandSelectionStrategyBase*          SelectionStrategy;                                        // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                DefaultNumIslands;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultMaxDifferentIslands;                               // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.SelectIslandsFromRegionStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddLocationMapStep
// 0x0048 (0x00B0 - 0x0068)
class UTaleQuestAddLocationMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddLocationMapStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddLocationMapStepDesc
// 0x0048 (0x0078 - 0x0030)
class UTaleQuestAddLocationMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableInt                           NumberOfChests;                                           // 0x0038(0x0010) (Edit)
	struct FQuestVariableDataAsset                     RegionMapData;                                            // 0x0048(0x0010) (Edit)
	struct FQuestVariableDataAsset                     VaultData;                                                // 0x0058(0x0010) (Edit)
	struct FQuestVariableDataAsset                     MapParams;                                                // 0x0068(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddLocationMapStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddTornMapStep
// 0x0050 (0x00B8 - 0x0068)
class UTaleQuestAddTornMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddTornMapStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddTornMapStepDesc
// 0x0050 (0x0080 - 0x0030)
class UTaleQuestAddTornMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           NumberOfPieces;                                           // 0x0040(0x0010) (Edit)
	struct FQuestVariableVector                        MarkLocation;                                             // 0x0050(0x0010)
	struct FQuestVariableDataAsset                     MapParams;                                                // 0x0060(0x0010) (Edit)
	struct FQuestVariableGuid                          MapId;                                                    // 0x0070(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddTornMapStepDesc"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestLocationMapChestFoundStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestLocationMapChestFoundStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestLocationMapChestFoundStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc
// 0x0008 (0x0038 - 0x0030)
class UTaleQuestLocationMapChestFoundStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
