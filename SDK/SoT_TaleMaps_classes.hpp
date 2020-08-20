#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleMaps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

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
// 0x0040 (0x00A8 - 0x0068)
class UTaleQuestAddTornMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleMaps.TaleQuestAddTornMapStep"));
		return ptr;
	}

};


// Class TaleMaps.TaleQuestAddTornMapStepDesc
// 0x0040 (0x0070 - 0x0030)
class UTaleQuestAddTornMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           NumberOfPieces;                                           // 0x0040(0x0010) (Edit)
	struct FQuestVariableVector                        MarkLocation;                                             // 0x0050(0x0010)
	struct FQuestVariableDataAsset                     MapParams;                                                // 0x0060(0x0010) (Edit)

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
