#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Factions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

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


// Class Factions.FactionInterationInterface
// 0x0000 (0x0028 - 0x0028)
class UFactionInterationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionInterationInterface"));
		return ptr;
	}

};


// Class Factions.FactionInteractionVoteComponent
// 0x0020 (0x0160 - 0x0140)
class UFactionInteractionVoteComponent : public UInlineVotingInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET
	float                                              TurnHourglassInteractionHoldTime;                         // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x014C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionInteractionVoteComponent"));
		return ptr;
	}

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


// Class Factions.FactionSettingsAsset
// 0x0040 (0x0068 - 0x0028)
class UFactionSettingsAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              PossibleFactions;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              FactionsRewardingFriendlyFire;                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSandsOfFateData>                    SandsOfFateRewards;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionStreakLevelData>             FactionStreakLevelData;                                   // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionSettingsAsset"));
		return ptr;
	}

};


// Class Factions.FactionService
// 0x00E0 (0x04A8 - 0x03C8)
class AFactionService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET
	class UFactionSettingsAsset*                       Settings;                                                 // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x03E0(0x0068) MISSED OFFSET
	TArray<struct FCrewFactionEntryData>               FactionAlignedCrewData;                                   // 0x0448(0x0010) (ZeroConstructor)
	TArray<struct FCrewFactionEntry>                   FactionAlignedCrews;                                      // 0x0458(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0468(0x0030) MISSED OFFSET
	class AFactionServiceDebugRepActor*                DebugRepActor;                                            // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionService"));
		return ptr;
	}

};


// Class Factions.FactionVoteConsumerBase
// 0x0090 (0x00C0 - 0x0030)
class UFactionVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UFactionVoteValidatorBase*                   Validator;                                                // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	class AActor*                                      OwningActor;                                              // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCinematicFactionEvent>              FactionBannerData;                                        // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCrewMemberVotes>                    Votes;                                                    // 0x00A8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionVoteConsumerBase"));
		return ptr;
	}


	void OnRep_Votes();
};


// Class Factions.StartFactionVoyageVoteConsumer
// 0x0150 (0x0210 - 0x00C0)
class UStartFactionVoyageVoteConsumer : public UFactionVoteConsumerBase
{
public:
	struct FText                                       FactionVotingCastVote;                                    // 0x00C0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVote;                                    // 0x00F8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingRemoveVote;                                  // 0x0130(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantRemoveVote;                              // 0x0168(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonVoterNotOnOwnShip;             // 0x01A0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingSwitchVote;                                  // 0x01D8(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.StartFactionVoyageVoteConsumer"));
		return ptr;
	}

};


// Class Factions.StopFactionVoyageVoteConsumer
// 0x0150 (0x0210 - 0x00C0)
class UStopFactionVoyageVoteConsumer : public UFactionVoteConsumerBase
{
public:
	struct FText                                       FactionVotingCastVote;                                    // 0x00C0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVote;                                    // 0x00F8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingRemoveVote;                                  // 0x0130(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantRemoveVote;                              // 0x0168(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonGoToOutpost;                   // 0x01A0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FactionVotingCantVoteReasonActiveForDifferentCompany;     // 0x01D8(0x0038) (Edit, DisableEditOnInstance)

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
// 0x0060 (0x0090 - 0x0030)
class UFactionVoteValidatorBase : public UVoteValidatorInlineBase
{
public:
	TArray<class UClass*>                              TargetCompanies;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
	class UFactionVoteConsumerBase*                    Consumer;                                                 // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentCompany;                                           // 0x0078(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x007C(0x000C) MISSED OFFSET
	class AActor*                                      OwningActor;                                              // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.FactionVoteValidatorBase"));
		return ptr;
	}


	void OnRep_CurrentCompany();
};


// Class Factions.StartFactionVoyageVoteValidator
// 0x0000 (0x0090 - 0x0090)
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
// 0x0000 (0x0090 - 0x0090)
class UStopFactionVoyageVoteValidator : public UFactionVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.StopFactionVoyageVoteValidator"));
		return ptr;
	}

};


// Class Factions.ShipFactionCustomisation
// 0x0050 (0x0330 - 0x02E0)
class UShipFactionCustomisation : public USceneComponent
{
public:
	struct FFigureheadFactionVFXParams                 FigureheadFactionVFX;                                     // 0x02E0(0x0030) (Edit, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    GetBPFactionHourglass;                                    // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UChildActorComponent*                        BPFactionHourglass;                                       // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedFigureheadParticles;                               // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Factions.ShipFactionCustomisation"));
		return ptr;
	}


	void OnLeavingFightEndVFX();
	void OnJoiningFightStartVFX();
};


// Class Factions.ShipSunkTrackingComponent
// 0x0018 (0x00E0 - 0x00C8)
class UShipSunkTrackingComponent : public UActorComponent
{
public:
	float                                              CrewRange;                                                // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

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
