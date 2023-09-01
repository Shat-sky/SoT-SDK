#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryLevel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EmissaryLevel.EmissaryActionRewardBoostComponent
// 0x0010 (0x00D8 - 0x00C8)
class UEmissaryActionRewardBoostComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryActionRewardBoostComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryActiveTableVisualiserComponent
// 0x0090 (0x0158 - 0x00C8)
class UEmissaryActiveTableVisualiserComponent : public UActorComponent
{
public:
	class UClass*                                      TargetCompany;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMaterialVisualisation>              MaterialChanges;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<struct FLightVisualisation>                 LightChanges;                                             // 0x00F0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	TArray<struct FParticleVisualisation>              ParticleChanges;                                          // 0x0110(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0120(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryActiveTableVisualiserComponent"));
		return ptr;
	}


	void OnControllerEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
};


// Class EmissaryLevel.EmissaryColourSwatchSettingsAsset
// 0x0010 (0x0038 - 0x0028)
class UEmissaryColourSwatchSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryColourSwatchInformation>    ColourSwatchInformation;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryColourSwatchSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelSettingsAsset
// 0x0040 (0x0068 - 0x0028)
class UEmissaryLevelSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryLevelEntry>                 EmissaryLevelData;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryPointBoostMultipliers              BoostMultiplers;                                          // 0x0038(0x0008) (Edit, DisableEditOnInstance)
	struct FEmissaryFlagMeshReferences                 DefaultEmissaryFlagAssetReferences;                       // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	uint32_t                                           NumberOfCustomisedShipPartsToGainBoost;                   // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryLevelSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryEntitlementCategory
// 0x0000 (0x0080 - 0x0080)
class UEmissaryEntitlementCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryEntitlementCategory"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryEntitlementDesc
// 0x0000 (0x00C8 - 0x00C8)
class UEmissaryEntitlementDesc : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryEntitlementDesc"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamDuplicationInterface
// 0x0000 (0x0028 - 0x0028)
class UEmissaryFlotsamDuplicationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryFlotsamDuplicationInterface"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamItemInfo
// 0x0048 (0x0788 - 0x0740)
class AEmissaryFlotsamItemInfo : public ABootyItemInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0740(0x0008) MISSED OFFSET
	struct FCompanySpecificBootyReward                 HandInOwnFlotsamReward;                                   // 0x0748(0x0018) (Edit, DisableEditOnInstance)
	struct FCompanySpecificBootyReward                 AlternateHandInOwnFlotsamReward;                          // 0x0760(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      PermittedFlotsamPurchaseCompany;                          // 0x0778(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlotsamCanBeDuplicated;                                   // 0x0780(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0781(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryFlotsamItemInfo"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// 0x00F0 (0x0560 - 0x0470)
class UEmissaryFlotsamItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0470(0x00A8) MISSED OFFSET
	struct FVector                                     GuildSessionEndedFlotsamOffset;                           // 0x0518(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0524(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent
// 0x0028 (0x00F0 - 0x00C8)
class UEmissaryFlotsamTooltipCustomizerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	bool                                               CheckForDelivery;                                         // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckForPickup;                                           // 0x00D9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WonInBattleFlag;                                          // 0x00DA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x00DB(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelService
// 0x0358 (0x0720 - 0x03C8)
class AEmissaryLevelService : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x03C8(0x00B8) MISSED OFFSET
	class UEmissaryLevelSettingsAsset*                 Settings;                                                 // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmissaryRewardSettingsAsset*                RewardSettings;                                           // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGuildSettings*                              GuildSettings;                                            // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x288];                                     // 0x0498(0x0288) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryLevelService"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryMaxRankQuestProvider
// 0x00A8 (0x0170 - 0x00C8)
class UEmissaryMaxRankQuestProvider : public UActorComponent
{
public:
	class UClass*                                      MaxRankQuestNotificationID;                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EActionDisplayPriority>                MaxRankQuestToolTipPriority;                              // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FText                                       StartMaxRankQuestToolTipText;                             // 0x00D8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       CannotStartMaxRankQuestToolTipText;                       // 0x0110(0x0038) (Edit, DisableEditOnInstance)
	struct FStringAssetReference                       QuestDesc;                                                // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryMaxRankQuestProviderQuestOverrides> QuestDescOverrides;                                       // 0x0158(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Company;                                                  // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryMaxRankQuestProvider"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryParticipantComponent
// 0x0050 (0x0118 - 0x00C8)
class UEmissaryParticipantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	bool                                               IsAtMaxRank;                                              // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	TArray<struct FMysteriousNotesCompletionEventsModelEntry> NoteCompletionIdents;                                     // 0x00D8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET
	int                                                EmissaryLevel;                                            // 0x00F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              EmissaryLevelProgress;                                    // 0x00FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       AffiliatedCompany;                                        // 0x0100(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsEmissaryMaxRankQuestBeenActivatedThisSession;           // 0x0108(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	struct FName                                       VotedCompany;                                             // 0x010C(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryParticipantComponent"));
		return ptr;
	}


	void OnRep_EmissaryLevel();
	void OnRep_AffiliatedCompany(const struct FName& PreviousId);
};


// Class EmissaryLevel.EmissaryRepresentationMeshComponent
// 0x0000 (0x0620 - 0x0620)
class UEmissaryRepresentationMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryRepresentationMeshComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset
// 0x0010 (0x0038 - 0x0028)
class UEmissaryRewardCampaignSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryCompanyCampaignSettings>    Companies;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryRewardSettingsAsset
// 0x0020 (0x0048 - 0x0028)
class UEmissaryRewardSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryRewardEntry>                EmissaryRewardData;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              PlayerKilledExpiryTime;                                   // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UEmissaryRewardCampaignSettingsAsset*        CampaignSettings;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryRewardSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent
// 0x0070 (0x0350 - 0x02E0)
class UEmissaryShipAffiliationTrackerComponent : public USceneComponent
{
public:
	class UClass*                                      TrackedCompany;                                           // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            EmissaryRepresentationMesh;                               // 0x02E8(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FTransform>                          EmissaryRepresentationTransforms;                         // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                EmissaryRepresentationMeshes;                             // 0x0318(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UClass*                                      LoadedEmissaryRepresentationMesh;                         // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                EmissaryCount;                                            // 0x0330(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0334(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent"));
		return ptr;
	}


	void OnRep_EmissaryCount();
};


// Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
// 0x00F8 (0x0128 - 0x0030)
class UEmissaryVoyageInlineVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	class UEmissaryVoyageVoteValidatorBase*            Validator;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET
	struct FText                                       VoyageCinematicHeader;                                    // 0x0080(0x0038) (Edit, DisableEditOnInstance)
	struct FName                                       VoyageCinematicTag;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET
	TArray<struct FCrewMemberVotes>                    Votes;                                                    // 0x00E0(0x0010) (Net, ZeroConstructor)
	class UBoxedRpcDispatcherComponent*                RpcDispatcher;                                            // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET
	class AActor*                                      OwningActor;                                              // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase"));
		return ptr;
	}


	void OnRep_Votes();
};


// Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
// 0x0210 (0x0338 - 0x0128)
class UStartEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                   // 0x0128(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVote;                                   // 0x0160(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;         // 0x0198(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonNoEmissaryEntitlement;        // 0x01D0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany;// 0x0208(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonOnOpposingFaction;            // 0x0240(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonSaferSeas;                    // 0x0278(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingRemoveVote;                                 // 0x02B0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantRemoveVote;                             // 0x02E8(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0320(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer"));
		return ptr;
	}

};


// Class EmissaryLevel.StartGuildEmissaryVoyageInlineVoteConsumer
// 0x0088 (0x03C0 - 0x0338)
class UStartGuildEmissaryVoyageInlineVoteConsumer : public UStartEmissaryVoyageInlineVoteConsumer
{
public:
	struct FText                                       GuildEmissaryVotingCantVoteReasonGuildEmissaryNotUnlocked;// 0x0338(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       GuildEmissaryVotingCantVoteReasonNoGuildShip;             // 0x0370(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StartGuildEmissaryVoyageInlineVoteConsumer"));
		return ptr;
	}

};


// Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
// 0x0168 (0x0290 - 0x0128)
class UStopEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                   // 0x0128(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVote;                                   // 0x0160(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;         // 0x0198(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonActiveForDifferentCompany;    // 0x01D0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingRemoveVote;                                 // 0x0208(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantRemoveVote;                             // 0x0240(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0278(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer"));
		return ptr;
	}

};


// Class EmissaryLevel.StopGuildEmissaryVoyageInlineVoteConsumer
// 0x0018 (0x02A8 - 0x0290)
class UStopGuildEmissaryVoyageInlineVoteConsumer : public UStopEmissaryVoyageInlineVoteConsumer
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0290(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StopGuildEmissaryVoyageInlineVoteConsumer"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryVoyageVoteValidatorBase
// 0x00C0 (0x00F0 - 0x0030)
class UEmissaryVoyageVoteValidatorBase : public UVoteValidatorInlineBase
{
public:
	TEnumAsByte<EEmissaryVoyageValidatorType>          ValidatorType;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UClass*                                      RequiredEntitlement;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               BlockDuringSaferSeas;                                     // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	unsigned char                                      IsValidatorTypeEntitlement : 1;                           // 0x0044(0x0001)
	unsigned char                                      UnknownData02[0x93];                                      // 0x0045(0x0093) MISSED OFFSET
	class UClass*                                      TargetCompany;                                            // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UEmissaryVoyageInlineVoteConsumerBase*       Consumer;                                                 // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGuildSettings*                              GuildSettings;                                            // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryVoyageVoteValidatorBase"));
		return ptr;
	}

};


// Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator
// 0x0000 (0x00F0 - 0x00F0)
class UStartEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator"));
		return ptr;
	}

};


// Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator
// 0x0000 (0x00F0 - 0x00F0)
class UStopEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator"));
		return ptr;
	}

};


// Class EmissaryLevel.IncreasingAGradeWithAnEmissaryConditionalStatTrigger
// 0x0000 (0x0030 - 0x0030)
class UIncreasingAGradeWithAnEmissaryConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.IncreasingAGradeWithAnEmissaryConditionalStatTrigger"));
		return ptr;
	}

};


// Class EmissaryLevel.IsAnEmissaryStatCondition
// 0x0000 (0x0030 - 0x0030)
class UIsAnEmissaryStatCondition : public UTargetedStatCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.IsAnEmissaryStatCondition"));
		return ptr;
	}

};


// Class EmissaryLevel.IsEmissaryStatCondition
// 0x0010 (0x0038 - 0x0028)
class UIsEmissaryStatCondition : public UStatCondition
{
public:
	class UClass*                                      RequiredEmissaryCompany;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresMaxEmissaryLevel;                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.IsEmissaryStatCondition"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
