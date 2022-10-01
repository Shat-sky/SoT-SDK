#pragma once

// Sea of Thieves (2.6.2) SDK

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


	struct FName GetCachedFactionIdentifierForMatchmakingCrew(const struct FGuid& InCrewId);
	struct FName GetCachedFactionIdentifierForInvadingCrew(const struct FGuid& InCrewId);
};


// Class InvasionFramework.EnvQueryGenerator_AggressiveAggressiveSpawnLocations
// 0x0000 (0x0050 - 0x0050)
class UEnvQueryGenerator_AggressiveAggressiveSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.EnvQueryGenerator_AggressiveAggressiveSpawnLocations"));
		return ptr;
	}

};


// Class InvasionFramework.GetInvasionBattleLocationStep
// 0x0000 (0x0098 - 0x0098)
class UGetInvasionBattleLocationStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.GetInvasionBattleLocationStep"));
		return ptr;
	}

};


// Class InvasionFramework.TaleQuestInvasionService
// 0x00C8 (0x0128 - 0x0060)
class UTaleQuestInvasionService : public UTaleQuestService
{
public:
	class UTaleQuestInvasionServiceDesc*               ServiceDesc;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0068(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionService"));
		return ptr;
	}

};


// Class InvasionFramework.TaleQuestInvasionServiceDesc
// 0x00E0 (0x0108 - 0x0028)
class UTaleQuestInvasionServiceDesc : public UTaleQuestServiceDesc
{
public:
	struct FText                                       OnCrewLeftServerMessage;                                  // 0x0028(0x0038) (Edit)
	struct FText                                       OnCrewLeftFightMessage;                                   // 0x0060(0x0038) (Edit)
	struct FText                                       FactionGBannerTag;                                        // 0x0098(0x0038) (Edit)
	struct FText                                       FactionBBannerTag;                                        // 0x00D0(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionServiceDesc"));
		return ptr;
	}

};


// Class InvasionFramework.GetInvasionBattleLocationStepDesc
// 0x0060 (0x00E0 - 0x0080)
class UGetInvasionBattleLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        Location;                                                 // 0x0080(0x0030) (Edit)
	struct FQuestVariableFloat                         Radius;                                                   // 0x00B0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.GetInvasionBattleLocationStepDesc"));
		return ptr;
	}

};


// Class InvasionFramework.GetInvasionShipsStep
// 0x0000 (0x0098 - 0x0098)
class UGetInvasionShipsStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.GetInvasionShipsStep"));
		return ptr;
	}

};


// Class InvasionFramework.GetInvasionShipsStepDesc
// 0x01B0 (0x0230 - 0x0080)
class UGetInvasionShipsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         AggressiveShip_1;                                         // 0x0080(0x0030) (Edit)
	struct FQuestVariableActor                         AggressiveShip_2;                                         // 0x00B0(0x0030) (Edit)
	struct FQuestVariableActor                         PassiveShip;                                              // 0x00E0(0x0030) (Edit)
	struct FQuestVariableGuid                          AggressiveCrewId_1;                                       // 0x0110(0x0030) (Edit)
	struct FQuestVariableGuid                          AggressiveCrewId_2;                                       // 0x0140(0x0030) (Edit)
	struct FQuestVariableGuid                          PassiveCrewId;                                            // 0x0170(0x0030) (Edit)
	struct FQuestVariableName                          AggressiveFaction_1;                                      // 0x01A0(0x0030) (Edit)
	struct FQuestVariableName                          AggressiveFaction_2;                                      // 0x01D0(0x0030) (Edit)
	struct FQuestVariableName                          PassiveFaction;                                           // 0x0200(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.GetInvasionShipsStepDesc"));
		return ptr;
	}

};


// Class InvasionFramework.InvasionBattleBounds
// 0x0028 (0x03F0 - 0x03C8)
class AInvasionBattleBounds : public AActor
{
public:
	class USceneComponent*                             Root;                                                     // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ShipToTrack1;                                             // 0x03D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ShipToTrack2;                                             // 0x03D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x03E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x03E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionBattleBounds"));
		return ptr;
	}


	void OnRep_InnerRadius();
	void Multicast_ExplodeShip(class AActor* Ship);
};


// Class InvasionFramework.InvasionBattleBoundsShipComponentInterface
// 0x0000 (0x0028 - 0x0028)
class UInvasionBattleBoundsShipComponentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionBattleBoundsShipComponentInterface"));
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


// Class InvasionFramework.InvasionLocationsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UInvasionLocationsDataAsset : public UDataAsset
{
public:
	TArray<struct FVector2D>                           AggressiveAggressiveLocations;                            // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionLocationsDataAsset"));
		return ptr;
	}

};


// Class InvasionFramework.InvasionLocationsDataAssetGetterInterface
// 0x0000 (0x0028 - 0x0028)
class UInvasionLocationsDataAssetGetterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionLocationsDataAssetGetterInterface"));
		return ptr;
	}

};


// Class InvasionFramework.InvasionServiceDataAsset
// 0x0068 (0x0090 - 0x0028)
class UInvasionServiceDataAsset : public UDataAsset
{
public:
	class UVoyageDescDataAsset*                        Matchmaking_VoyageDescDataAsset;                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        Invasion_AggressivePassive_VoyageDescDataAsset;           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        Invasion_AggressiveAggressive_VoyageDescDataAsset;        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        Invasion_LosingCrew_VoyageDescDataAsset;                  // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   AggressivePassive_EnvQueryTemplate;                       // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   AggressiveAggressive_InvasionLocation_EnvQueryTemplate;   // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   AggressiveAggressive_PrimaryShipLocation_EnvQueryTemplate;// 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   AggressiveAggressive_SecondaryShipLocation_EnvQueryTemplate;// 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AggressivePassive_EQSQueryParamData_SailingTargetDistance_Min;// 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AggressivePassive_EQSQueryParamData_SailingTargetDistance_Max;// 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AggressivePassive_EQSQueryParamData_StationaryTargetDistance_Min;// 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AggressivePassive_EQSQueryParamData_StationaryTargetDistance_Max;// 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        Invasion_Debug_AggressivePassive_VoyageDescDataAsset;     // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        Invasion_Debug_AggressiveAggressive_VoyageDescDataAsset;  // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopPlayingEmergeMusicAfterSeconds;                       // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionServiceDataAsset"));
		return ptr;
	}

};


// Class InvasionFramework.InvasionService
// 0x01D8 (0x05A0 - 0x03C8)
class AInvasionService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03C8(0x0040) MISSED OFFSET
	class UInvasionServiceDataAsset*                   InvasionServiceDataAsset;                                 // 0x0408(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInvasionLocationsDataAsset*                 InvasionLocationsDataAsset;                               // 0x0410(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0418(0x00D8) MISSED OFFSET
	TArray<struct FInvasionParticipatingCrewData>      MatchmakingCrews;                                         // 0x04F0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FInvasionParticipatingCrewData>      InvadingCrews;                                            // 0x0500(0x0010) (ZeroConstructor, Transient)
	TArray<struct FReplicatedInvasionCrewMusicState>   ReplicatedInvasionCrewMusicStates;                        // 0x0510(0x0010) (Net, ZeroConstructor)
	TArray<struct FGuid>                               MatchmakingCrewsReplicated;                               // 0x0520(0x0010) (Net, ZeroConstructor)
	TArray<struct FGuid>                               InvadingCrewsReplicated;                                  // 0x0530(0x0010) (Net, ZeroConstructor)
	TArray<class AInvasionBattleBounds*>               InvasionBattleBoundsList;                                 // 0x0540(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0550(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.InvasionService"));
		return ptr;
	}


	void OnRep_ReplicatedInvasionCrewMusicStates(TArray<struct FReplicatedInvasionCrewMusicState> StaleMusicStates);
};


// Class InvasionFramework.SetInvasionMusicStateForCrewStep
// 0x0000 (0x0098 - 0x0098)
class USetInvasionMusicStateForCrewStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.SetInvasionMusicStateForCrewStep"));
		return ptr;
	}

};


// Class InvasionFramework.SetInvasionMusicStateForCrewStepDesc
// 0x0008 (0x0088 - 0x0080)
class USetInvasionMusicStateForCrewStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EInvasionMusicState>                   MusicState;                                               // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.SetInvasionMusicStateForCrewStepDesc"));
		return ptr;
	}

};


// Class InvasionFramework.TaleQuestInvasionCreateBattleBoundsStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestInvasionCreateBattleBoundsStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionCreateBattleBoundsStep"));
		return ptr;
	}

};


// Class InvasionFramework.TaleQuestInvasionCreateBattleBoundsStepDesc
// 0x0060 (0x00E0 - 0x0080)
class UTaleQuestInvasionCreateBattleBoundsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Ship1;                                                    // 0x0080(0x0030) (Edit)
	struct FQuestVariableActor                         Ship2;                                                    // 0x00B0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionCreateBattleBoundsStepDesc"));
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


// Class InvasionFramework.TaleQuestInvasionRemoveBattleBoundsStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestInvasionRemoveBattleBoundsStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionRemoveBattleBoundsStep"));
		return ptr;
	}

};


// Class InvasionFramework.TaleQuestInvasionRemoveBattleBoundsStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UTaleQuestInvasionRemoveBattleBoundsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ShipInBattleBounds;                                       // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InvasionFramework.TaleQuestInvasionRemoveBattleBoundsStepDesc"));
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
// 0x0168 (0x01E8 - 0x0080)
class UWaitForShipToBeDefeatedStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         WinningShip;                                              // 0x0080(0x0030) (Edit)
	struct FQuestVariableActor                         DefeatedShip;                                             // 0x00B0(0x0030) (Edit)
	struct FQuestVariableGuid                          WinningCrewId;                                            // 0x00E0(0x0030) (Edit)
	struct FQuestVariableGuid                          DefeatedCrewId;                                           // 0x0110(0x0030) (Edit)
	struct FQuestVariableName                          WinningFaction;                                           // 0x0140(0x0030) (Edit)
	struct FQuestVariableName                          DefeatedFaction;                                          // 0x0170(0x0030) (Edit)
	float                                              CheckProximityTimerInterval;                              // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckProximityDistanceInMetres;                           // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeoutTimerIntervalInMinutes;                            // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	struct FText                                       FailMessage;                                              // 0x01B0(0x0038) (Edit)

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
