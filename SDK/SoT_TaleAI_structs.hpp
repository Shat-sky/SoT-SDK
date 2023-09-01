#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_TaleCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TaleAI.SpawnAICustomOnDespawnTaskData
// 0x0020
struct FSpawnAICustomOnDespawnTaskData
{
	int                                                Despawn_Index;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APawn*                                       Despawn_Pawn;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   Despawn_Reason;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UTaleQuestStepDesc*                          Body;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct TaleAI.SpawnAICustomOnSpawnTaskData
// 0x0018
struct FSpawnAICustomOnSpawnTaskData
{
	int                                                Spawn_Index;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APawn*                                       Spawn_Pawn;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTaleQuestStepDesc*                          Body;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct TaleAI.SpawnAICustomSetupTaskData
// 0x0018
struct FSpawnAICustomSetupTaskData
{
	int                                                MaxAI;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTaleAIRegionBase*                           Region;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTaleQuestStepDesc*                          Body;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct TaleAI.SpawnActorCustomOnTriggerWaveTaskData
// 0x0010
struct FSpawnActorCustomOnTriggerWaveTaskData
{
	int                                                NumAIToSpawn;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTaleQuestStepDesc*                          Body;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct TaleAI.SpawnActorCustomOnCompleteWaveTaskData
// 0x0008
struct FSpawnActorCustomOnCompleteWaveTaskData
{
	class UTaleQuestStepDesc*                          Body;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct TaleAI.SpawnAICustomPreSpawnTaskData
// 0x0078
struct FSpawnAICustomPreSpawnTaskData
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               PerceiveActor;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0020(0x0020) (Edit)
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULoadoutAsset*                               Loadout;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                     // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AIClass;                                                  // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTaleQuestStepDesc*                          Body;                                                     // 0x0070(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
