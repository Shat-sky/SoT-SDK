#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EnemyAIOnShipFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EnemyAIOnShipFramework.EnemyAIOnShipEncounterDesc
// 0x0028 (0x0050 - 0x0028)
class UEnemyAIOnShipEncounterDesc : public UDataAsset
{
public:
	class UAIFixedWavesSpawner*                        SpawnerCrewSize1;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIFixedWavesSpawner*                        SpawnerCrewSize2;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIFixedWavesSpawner*                        SpawnerCrewSize3;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIFixedWavesSpawner*                        SpawnerCrewSize4;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MigrationPreventionRadius;                                // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnemyAIOnShipFramework.EnemyAIOnShipEncounterDesc"));
		return ptr;
	}

};


// Class EnemyAIOnShipFramework.EnemyAIOnShipServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UEnemyAIOnShipServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnemyAIOnShipFramework.EnemyAIOnShipServiceInterface"));
		return ptr;
	}

};


// Class EnemyAIOnShipFramework.EnemyAIOnShipService
// 0x00A8 (0x0470 - 0x03C8)
class AEnemyAIOnShipService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C8(0x0020) MISSED OFFSET
	class UEnemyAIOnShipServiceDataAsset*              Params;                                                   // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEnemyAIOnShipActiveEncounters>      ReplicatedEncounters;                                     // 0x03F0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0400(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnemyAIOnShipFramework.EnemyAIOnShipService"));
		return ptr;
	}

};


// Class EnemyAIOnShipFramework.EnemyAIOnShipServiceDataAsset
// 0x0008 (0x0030 - 0x0028)
class UEnemyAIOnShipServiceDataAsset : public UDataAsset
{
public:
	class UEnemyAIOnShipEncounterDesc*                 OceanCrawlersOnShipEncounterParams;                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnemyAIOnShipFramework.EnemyAIOnShipServiceDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
