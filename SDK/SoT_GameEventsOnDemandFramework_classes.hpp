#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameEventsOnDemandFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameEventsOnDemandFramework.GameEventAvailabilityParamsDataAsset
// 0x0068 (0x0090 - 0x0028)
class UGameEventAvailabilityParamsDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           MatchmakingCooldownRanges;                                // 0x0028(0x0030) (Edit)
	struct FWeightedProbabilityRange                   CrewsJoinedOnDemandLimitRange;                            // 0x0058(0x0020) (Edit)
	float                                              InitialCooldown;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ProgressStateLimit;                                       // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldApplyShipTypeLimit;                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FFeatureFlag                                SendCrewToLoserTunnelFeature;                             // 0x0084(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemandFramework.GameEventAvailabilityParamsDataAsset"));
		return ptr;
	}

};


// Class GameEventsOnDemandFramework.GameEventOnDemandAnnouncementComponent
// 0x00B8 (0x0180 - 0x00C8)
class UGameEventOnDemandAnnouncementComponent : public UActorComponent
{
public:
	struct FFeatureFlag                                FeatureFlag;                                              // 0x00C8(0x000C) (Edit)
	bool                                               ShouldFireBannerForAnyCrewEnteringIslandVicinity;         // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	struct FName                                       IslandName;                                               // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<TWeakObjectPtr<class APawn>>                CurrentTrackedPawns;                                      // 0x00E0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGuid>                               OnDemandParticipatingCrewIds;                             // 0x00F0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGuid>                               TrackedShipCrewIds;                                       // 0x0100(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      GameEventType;                                            // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x0118(0x005C) MISSED OFFSET
	struct FName                                       TemporaryBannerTag;                                       // 0x0174(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemandFramework.GameEventOnDemandAnnouncementComponent"));
		return ptr;
	}

};


// Class GameEventsOnDemandFramework.GameEventOnDemandAvailabilityStateTracker
// 0x0128 (0x0150 - 0x0028)
class UGameEventOnDemandAvailabilityStateTracker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET
	class UClass*                                      ShipTypeLimit;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FGuid>                               ParticipatingCrewIds;                                     // 0x00B8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGuid>                               PreparingToJoinCrewIds;                                   // 0x00C8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00D8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemandFramework.GameEventOnDemandAvailabilityStateTracker"));
		return ptr;
	}

};


// Class GameEventsOnDemandFramework.GameEventOnDemandVoyageProposalDesc
// 0x0000 (0x0128 - 0x0128)
class UGameEventOnDemandVoyageProposalDesc : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemandFramework.GameEventOnDemandVoyageProposalDesc"));
		return ptr;
	}

};


// Class GameEventsOnDemandFramework.GameEventsOnDemandAvailabilityServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UGameEventsOnDemandAvailabilityServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemandFramework.GameEventsOnDemandAvailabilityServiceInterface"));
		return ptr;
	}

};


// Class GameEventsOnDemandFramework.GameEventsOnDemandInterface
// 0x0000 (0x0028 - 0x0028)
class UGameEventsOnDemandInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemandFramework.GameEventsOnDemandInterface"));
		return ptr;
	}

};


// Class GameEventsOnDemandFramework.GameEventsOnDemandLoserTunnelServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UGameEventsOnDemandLoserTunnelServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemandFramework.GameEventsOnDemandLoserTunnelServiceInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
