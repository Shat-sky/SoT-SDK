#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomDeath.SetShouldUseRevivalFlowGameServerRequestModel
// 0x0008
struct FSetShouldUseRevivalFlowGameServerRequestModel
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldUseRevivalFlow;                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct CustomDeath.SetShouldSkipFerryOfTheDamnedGameServerRequestModel
// 0x0008
struct FSetShouldSkipFerryOfTheDamnedGameServerRequestModel
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSkipFerryOfTheDamned;                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct CustomDeath.GameModeDeathPenaltyRespawnTimerGameServerRequestModel
// 0x0004
struct FGameModeDeathPenaltyRespawnTimerGameServerRequestModel
{
	float                                              SpawnTimer;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.SetCustomPlayerStartGameServerRequestModel
// 0x0008
struct FSetCustomPlayerStartGameServerRequestModel
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerStartActorNetID;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.CustomDeathConfiguration
// 0x0018
struct FCustomDeathConfiguration
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct CustomDeath.ResetCustomConfigForPlayerGameServerRequestModel
// 0x0004
struct FResetCustomConfigForPlayerGameServerRequestModel
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.KillPlayerGameServerRequestModel
// 0x0004
struct FKillPlayerGameServerRequestModel
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.KillCrewGameServerRequestModel
// 0x0010
struct FKillCrewGameServerRequestModel
{
	struct FGuid                                       CrewNetGUID;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.ForcePlayerRespawnGameServerRequestModel
// 0x0008
struct FForcePlayerRespawnGameServerRequestModel
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRespawnAsGhost;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct CustomDeath.DestroyCustomPlayerStartGameServerRequestModel
// 0x0018
struct FDestroyCustomPlayerStartGameServerRequestModel
{
	int                                                PlayerStartActorNetID;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      Tag;                                                      // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomDeath.CustomPlayerStartConfigGameServerRequestModel
// 0x0030
struct FCustomPlayerStartConfigGameServerRequestModel
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (IsPlainOldData)
	TArray<class FString>                              Tags;                                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomDeath.CustomPlayerStartConfigResponseGameServerRequestModel
// 0x0008
struct FCustomPlayerStartConfigResponseGameServerRequestModel
{
	bool                                               Success;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlayerStartId;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
