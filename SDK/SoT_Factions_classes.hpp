#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Factions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Factions.FactionSettingsAsset
// 0x0170 (0x0198 - 0x0028)
class UFactionSettingsAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              PossibleFactions;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              FactionsRewardingFriendlyFire;                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSandsOfFateData>                    SandsOfFateRewards;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionStreakLevelData>             FactionStreakLevelData;                                   // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDefenderLootLevelThreshold>         DefenderLootLevelThresholds;                              // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              EnemyFactionShipEmergentRange;                            // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnemyFactionShipInvasionRange;                            // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrewShipRangeStatesUpdateInterval;                        // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateWaitTimesRate;                                      // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCompanyFactionAlignment>            AlignedFactionsAndCompanies;                              // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanyFactionAlignment>            OpposingFactionsAndCompanies;                             // 0x0098(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionServicePopUpData>            JoiningFactionPopUp;                                      // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionServicePopUpData>            LeavingFactionPopUp;                                      // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionServicePopUpData>            DefeatedFactionPopUp;                                     // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionServicePopUpData>            EnteredTunnelOfTheDamnedFactionPopUp;                     // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionServicePopUpData>            LeavingBattleBoundsPopUp;                                 // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionServicePopUpData>            SentToSinBinPopUp;                                        // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionServicePopUpData>            MaxRankAchievedForSloopOrBrigantinePopUp;                 // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionServicePopUpData>            MaxRankAchievedForGalleonPopUp;                           // 0x0118(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       LosingBattleHeaderText;                                   // 0x0128(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       LosingBattleMessageText;                                  // 0x0160(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionSettingsAsset"));
		return ptr;
	}

};


// Class Factions.CrewFactionOwnershipInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewFactionOwnershipInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.CrewFactionOwnershipInterface"));
		return ptr;
	}

};


// Class Factions.FactionFlipMeshComponent
// 0x0270 (0x0890 - 0x0620)
class UFactionFlipMeshComponent : public UStaticMeshComponent
{
public:
	class UCurveFloat*                                 FlipCurve;                                                // 0x0620(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlippedFaction;                                           // 0x0628(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FactionJoinedLerpDuration;                                // 0x0630(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x244];                                     // 0x0634(0x0244) MISSED OFFSET
	struct FGuid                                       OwningShipCrewId;                                         // 0x0878(0x0010) (Net, ZeroConstructor, IsPlainOldData)
	int                                                OwningShipCrewStreak;                                     // 0x0888(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               ServerTargetFlipped;                                      // 0x088C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x088D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionFlipMeshComponent"));
		return ptr;
	}


	void OnRep_Streak();
	void OnRep_ServerTargetFlipped();
};


// Class Factions.FactionInteractionVoteComponent
// 0x0008 (0x0158 - 0x0150)
class UFactionInteractionVoteComponent : public UInlineVotingInteractionComponent
{
public:
	float                                              TurnHourglassInteractionHoldTime;                         // 0x0150(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WaitTimeSimilarityThresholdSeconds;                       // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionInteractionVoteComponent"));
		return ptr;
	}

};


// Class Factions.FactionIntervoteServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UFactionIntervoteServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionIntervoteServiceInterface"));
		return ptr;
	}

};


// Class Factions.FactionIntervoteService
// 0x0048 (0x0410 - 0x03C8)
class AFactionIntervoteService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	TArray<class UFactionVoteConsumerBase*>            FactionVoteConsumers;                                     // 0x03D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionIntervoteService"));
		return ptr;
	}

};


// Class Factions.FactionLootLevelRewardsAsset
// 0x0010 (0x0038 - 0x0028)
class UFactionLootLevelRewardsAsset : public UDataAsset
{
public:
	TArray<struct FLootLevelReward>                    LootLevelRewards;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionLootLevelRewardsAsset"));
		return ptr;
	}

};


// Class Factions.FactionOutpostVoteInteractionActor
// 0x0230 (0x05F8 - 0x03C8)
class AFactionOutpostVoteInteractionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET
	float                                              FadeDuration;                                             // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FFactionDisplayInfo                         FactionInactiveInfo;                                      // 0x03E0(0x00A0) (Edit, DisableEditOnInstance)
	struct FFactionDisplayInfo                         FactionActiveInfo;                                        // 0x0480(0x00A0) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0520(0x0018) MISSED OFFSET
	struct FFactionRequest                             FactionActiveInfoPtr;                                     // 0x0538(0x0020)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x0558(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionOutpostVoteInteractionActor"));
		return ptr;
	}

};


// Class Factions.FactionParticleComponent
// 0x01A0 (0x0A50 - 0x08B0)
class UFactionParticleComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x08B0(0x0178) MISSED OFFSET
	class UClass*                                      Faction;                                                  // 0x0A28(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      JoinedFaction;                                            // 0x0A30(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       OwningShipCrewId;                                         // 0x0A38(0x0010) (Net, ZeroConstructor, IsPlainOldData)
	int                                                OwningShipCrewStreak;                                     // 0x0A48(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               ServerMigrationEnded;                                     // 0x0A4C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A4D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionParticleComponent"));
		return ptr;
	}


	void OnRep_Streak();
	void OnRep_ServerMigrationEnded();
};


// Class Factions.FactionServiceDebugRepActor
// 0x0020 (0x03E8 - 0x03C8)
class AFactionServiceDebugRepActor : public AActor
{
public:
	bool                                               bDebugEnabled;                                            // 0x03C8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	TArray<struct FCrewFactionEntryData>               FactionAlignedCrewData;                                   // 0x03D0(0x0010) (Net, ZeroConstructor)
	class AFactionService*                             FactionService;                                           // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionServiceDebugRepActor"));
		return ptr;
	}

};


// Class Factions.FactionService
// 0x0290 (0x0658 - 0x03C8)
class AFactionService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET
	class UFactionSettingsAsset*                       Settings;                                                 // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFactionLootLevelRewardsAsset*               LootLevelRewardsAsset;                                    // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x03E8(0x00C0) MISSED OFFSET
	TArray<struct FCompanyFactionAlignment>            OpposingFactionsAndCompanies;                             // 0x04A8(0x0010) (Net, ZeroConstructor)
	TArray<struct FDefenderLootLevelThreshold>         DefenderLootLevelThresholds;                              // 0x04B8(0x0010) (Net, ZeroConstructor)
	TArray<struct FCrewFactionEntryData>               FactionAlignedCrewData;                                   // 0x04C8(0x0010) (ZeroConstructor)
	TArray<struct FCrewFactionEntry>                   FactionAlignedCrews;                                      // 0x04D8(0x0010) (Net, ZeroConstructor)
	TArray<struct FFactionWaitTimesData>               MatchmakingWaitTimes;                                     // 0x04E8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x138];                                     // 0x04F8(0x0138) MISSED OFFSET
	class AFactionServiceDebugRepActor*                DebugRepActor;                                            // 0x0630(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0638(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionService"));
		return ptr;
	}


	void OnRep_FactionAlignedCrews(TArray<struct FCrewFactionEntry> PreviousCrews);
};


// Class Factions.FactionShipStreakDataAsset
// 0x0010 (0x0038 - 0x0028)
class UFactionShipStreakDataAsset : public UDataAsset
{
public:
	TArray<struct FStreakMesh>                         StreakMeshes;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionShipStreakDataAsset"));
		return ptr;
	}

};


// Class Factions.FactionVoteAudioComponent
// 0x0130 (0x0218 - 0x00E8)
class UFactionVoteAudioComponent : public UVoteAudioComponent
{
public:
	class UWwiseEvent*                                 FactionStart;                                             // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Flip;                                                     // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Levelup;                                                  // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LevelupSwitchGroup;                                       // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               LevelupSwitchValues;                                      // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x100];                                     // 0x0118(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionVoteAudioComponent"));
		return ptr;
	}

};


// Class Factions.FactionVoteConsumerBase
// 0x00A0 (0x00D0 - 0x0030)
class UFactionVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UFactionVoteValidatorBase*                   Validator;                                                // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	class AActor*                                      OwningActor;                                              // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCinematicFactionEvent>              FactionBannerData;                                        // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCrewMemberVotes>                    Votes;                                                    // 0x00A8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionVoteConsumerBase"));
		return ptr;
	}


	void OnRep_Votes(TArray<struct FCrewMemberVotes> PreviousVotes);
};


// Class Factions.StartFactionVoyageVoteConsumer
// 0x02F0 (0x03C0 - 0x00D0)
class UStartFactionVoyageVoteConsumer : public UFactionVoteConsumerBase
{
public:
	struct FText                                       FactionVotingCastVote;                                    // 0x00D0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVote;                                    // 0x0108(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingRemoveVote;                                  // 0x0140(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantRemoveVote;                              // 0x0178(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonVoterNotOnOwnShip;             // 0x01B0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonIsOpposingEmissary;            // 0x01E8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonIsOnFactionBlockedTale;        // 0x0220(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonIsInInvalidWorldRegion;        // 0x0258(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonIsNotOnNormalPlayMode;         // 0x0290(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonShroudbreakerIsActive;         // 0x02C8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingSwitchVote;                                  // 0x0300(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonIsDivingToAdventure;           // 0x0338(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonIsInTunnelOfTheDamned;         // 0x0370(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.StartFactionVoyageVoteConsumer"));
		return ptr;
	}

};


// Class Factions.StopFactionVoyageVoteConsumer
// 0x0230 (0x0300 - 0x00D0)
class UStopFactionVoyageVoteConsumer : public UFactionVoteConsumerBase
{
public:
	struct FText                                       FactionVotingCastVote;                                    // 0x00D0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVote;                                    // 0x0108(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingRemoveVote;                                  // 0x0140(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantRemoveVote;                              // 0x0178(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonGoToOutpost;                   // 0x01B0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonActiveForDifferentCompany;     // 0x01E8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonEnemyShipNearby;               // 0x0220(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonShipNotInHarbour;              // 0x0258(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonCrewInBattle;                  // 0x0290(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonLeaveFactionCooldownIsActive;  // 0x02C8(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.StopFactionVoyageVoteConsumer"));
		return ptr;
	}

};


// Class Factions.FactionVoteInteractionActor
// 0x00F8 (0x04C0 - 0x03C8)
class AFactionVoteInteractionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET
	float                                              FadeDuration;                                             // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	TArray<struct FFactionDisplayInfo>                 NoFactionInfos;                                           // 0x03E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionDisplayInfo>                 FactionInfos;                                             // 0x03F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionRequest>                     NoFactionInfoPtrs;                                        // 0x0400(0x0010) (ZeroConstructor)
	TArray<struct FFactionRequest>                     FactionInfoPtrs;                                          // 0x0410(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0420(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionVoteInteractionActor"));
		return ptr;
	}

};


// Class Factions.FactionVoteValidatorBase
// 0x00D8 (0x0108 - 0x0030)
class UFactionVoteValidatorBase : public UVoteValidatorInlineBase
{
public:
	TArray<class UClass*>                              TargetCompanies;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              EdgeOfWorldWarningWeightForFactionLock;                   // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x0044(0x00A4) MISSED OFFSET
	class UFactionVoteConsumerBase*                    Consumer;                                                 // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentCompany;                                           // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              FlipTime;                                                 // 0x00F4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	class AActor*                                      OwningActor;                                              // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionVoteValidatorBase"));
		return ptr;
	}


	void OnRep_CurrentCompany();
};


// Class Factions.StartFactionVoyageVoteValidator
// 0x0000 (0x0108 - 0x0108)
class UStartFactionVoyageVoteValidator : public UFactionVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.StartFactionVoyageVoteValidator"));
		return ptr;
	}

};


// Class Factions.StopFactionVoyageVoteValidator
// 0x0000 (0x0108 - 0x0108)
class UStopFactionVoyageVoteValidator : public UFactionVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.StopFactionVoyageVoteValidator"));
		return ptr;
	}

};


// Class Factions.IsInFactionStatCondition
// 0x0020 (0x0050 - 0x0030)
class UIsInFactionStatCondition : public UTargetedStatCondition
{
public:
	bool                                               CheckOwnerFaction;                                        // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresOwnerMaxStreakLevel;                              // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UClass*                                      RequiredOwnerFaction;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CheckTargetFaction;                                       // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresTargetMaxStreakLevel;                             // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	class UClass*                                      RequiredTargetFaction;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.IsInFactionStatCondition"));
		return ptr;
	}

};


// Class Factions.IsWearingCursePrerequisite
// 0x0008 (0x0088 - 0x0080)
class UIsWearingCursePrerequisite : public UInteractionPrerequisiteBase
{
public:
	bool                                               AnyCurse;                                                 // 0x0080(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkeletonCurse;                                            // 0x0081(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GhostCurse;                                               // 0x0082(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0083(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.IsWearingCursePrerequisite"));
		return ptr;
	}

};


// Class Factions.StreakMaterialDataAsset
// 0x0020 (0x0048 - 0x0028)
class UStreakMaterialDataAsset : public UDataAsset
{
public:
	TArray<struct FStreakMaterialValue>                MaterialValues;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStreakCompanyMaterials>             StreakMaterials;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.StreakMaterialDataAsset"));
		return ptr;
	}

};


// Class Factions.ShipFactionCustomisation
// 0x0088 (0x0150 - 0x00C8)
class UShipFactionCustomisation : public UActorComponent
{
public:
	class UStreakMaterialDataAsset*                    StreakMaterialData;                                       // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFactionShipStreakDataAsset*                 ShipStreakData;                                           // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UActorComponent*>                     CachedStaticMeshComponents;                               // 0x00D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<struct FStreakDynamicMaterials>             CachedDynamicMaterials;                                   // 0x00E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F8(0x0048) MISSED OFFSET
	struct FFactionStreakData                          FactionStreakData;                                        // 0x0140(0x0010) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.ShipFactionCustomisation"));
		return ptr;
	}


	void OnRep_FactionStreakData();
};


// Class Factions.ShipSunkTrackingComponent
// 0x0030 (0x00F8 - 0x00C8)
class UShipSunkTrackingComponent : public UActorComponent
{
public:
	float                                              CrewRange;                                                // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00CC(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.ShipSunkTrackingComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
