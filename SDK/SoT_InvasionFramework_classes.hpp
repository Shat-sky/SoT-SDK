#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_InvasionFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class InvasionFramework.InvasionServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UInvasionServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionServiceInterface"));
		return ptr;
	}

};


// Class InvasionFramework.InvasionBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UInvasionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionBlueprintFunctionLibrary"));
		return ptr;
	}


	static bool ShouldAggressivePassiveTeleportUseEQS();
	static float GetAggressivePassiveTeleportOffsetDistance();
};


// Class InvasionFramework.InvasionServiceDataAsset
// 0x0030 (0x0058 - 0x0028)
class UInvasionServiceDataAsset : public UDataAsset
{
public:
	class UVoyageDescDataAsset*                        Matchmaking_VoyageDescDataAsset;                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        Invasion_AggressivePassive_VoyageDescDataAsset;           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        Invasion_AggressiveAggressive_VoyageDescDataAsset;        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   AggressivePassive_EnvQueryTemplate;                       // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   AggressiveAggressive_EnvQueryTemplate;                    // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        Invasion_Debug_VoyageDescDataAsset;                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionServiceDataAsset"));
		return ptr;
	}

};


// Class InvasionFramework.InvasionService
// 0x0100 (0x04C8 - 0x03C8)
class AInvasionService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03C8(0x0040) MISSED OFFSET
	class UInvasionServiceDataAsset*                   InvasionServiceDataAsset;                                 // 0x0408(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0410(0x0098) MISSED OFFSET
	TArray<struct FInvasionParticipatingCrewData>      MatchmakingCrews;                                         // 0x04A8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FInvasionParticipatingCrewData>      InvadingCrews;                                            // 0x04B8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionService"));
		return ptr;
	}

};


// Class InvasionFramework.TaleQuestInvasionMatchmakingService
// 0x00B0 (0x0110 - 0x0060)
class UTaleQuestInvasionMatchmakingService : public UTaleQuestService
{
public:
	class UTaleQuestInvasionMatchmakingServiceDesc*    ServiceDesc;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0068(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionMatchmakingService"));
		return ptr;
	}

};


// Class InvasionFramework.TaleQuestInvasionMatchmakingServiceDesc
// 0x0070 (0x0098 - 0x0028)
class UTaleQuestInvasionMatchmakingServiceDesc : public UTaleQuestServiceDesc
{
public:
	struct FText                                       OnCrewLeftServerMessage;                                  // 0x0028(0x0038) (Edit)
	struct FText                                       OnCrewLeftFightMessage;                                   // 0x0060(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionMatchmakingServiceDesc"));
		return ptr;
	}

};


// Class InvasionFramework.TaleQuestInvasionService
// 0x00D0 (0x0130 - 0x0060)
class UTaleQuestInvasionService : public UTaleQuestService
{
public:
	class UTaleQuestInvasionServiceDesc*               ServiceDesc;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0068(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionService"));
		return ptr;
	}


	class AActor* GetPassiveShip();
	struct FGuid GetPassiveCrewId();
	TArray<class AActor*> GetAggressiveShips();
	TArray<struct FGuid> GetAggressiveCrewIds();
};


// Class InvasionFramework.TaleQuestInvasionServiceDesc
// 0x0070 (0x0098 - 0x0028)
class UTaleQuestInvasionServiceDesc : public UTaleQuestServiceDesc
{
public:
	struct FText                                       OnCrewLeftServerMessage;                                  // 0x0028(0x0038) (Edit)
	struct FText                                       OnCrewLeftFightMessage;                                   // 0x0060(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionServiceDesc"));
		return ptr;
	}

};


// Class InvasionFramework.WaitForShipToBeDefeatedStep
// 0x0030 (0x00C8 - 0x0098)
class UWaitForShipToBeDefeatedStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.WaitForShipToBeDefeatedStep"));
		return ptr;
	}

};


// Class InvasionFramework.WaitForShipToBeDefeatedStepDesc
// 0x00C8 (0x0148 - 0x0080)
class UWaitForShipToBeDefeatedStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         WinningShip;                                              // 0x0080(0x0020) (Edit)
	struct FQuestVariableActor                         DefeatedShip;                                             // 0x00A0(0x0020) (Edit)
	struct FQuestVariableGuid                          WinningCrewId;                                            // 0x00C0(0x0020) (Edit)
	struct FQuestVariableGuid                          DefeatedCrewId;                                           // 0x00E0(0x0020) (Edit)
	float                                              CheckProximityTimerInterval;                              // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckProximityDistanceInMetres;                           // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeoutTimerIntervalInMinutes;                            // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FText                                       FailMessage;                                              // 0x0110(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.WaitForShipToBeDefeatedStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
