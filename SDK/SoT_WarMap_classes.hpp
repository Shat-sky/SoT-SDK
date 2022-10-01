#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WarMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WarMap.WarMapStateInterface
// 0x0000 (0x0028 - 0x0028)
class UWarMapStateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.WarMapStateInterface"));
		return ptr;
	}

};


// Class WarMap.WarMapInteractionComponent
// 0x00A0 (0x01C8 - 0x0128)
class UWarMapInteractionComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FText                                       OpenMapInteractionText;                                   // 0x0130(0x0038) (Edit)
	struct FText                                       CannotOpenMapInteractionText;                             // 0x0168(0x0038) (Edit)
	class UClass*                                      OpenMapInputId;                                           // 0x01A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.WarMapInteractionComponent"));
		return ptr;
	}

};


// Class WarMap.WarMapInteractionVoteComponent
// 0x0000 (0x0150 - 0x0150)
class UWarMapInteractionVoteComponent : public UInlineVotingInteractionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.WarMapInteractionVoteComponent"));
		return ptr;
	}

};


// Class WarMap.WarMapVoteConsumerBase
// 0x00D0 (0x0100 - 0x0030)
class UWarMapVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	class UWarMapVoteValidatorBase*                    Validator;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      OwningActor;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET
	TArray<class APlayerState*>                        Votes;                                                    // 0x00A0(0x0010) (Net, ZeroConstructor)
	class UBoxedRpcDispatcherComponent*                RpcDispatcher;                                            // 0x00B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.WarMapVoteConsumerBase"));
		return ptr;
	}


	void OnRep_Votes();
};


// Class WarMap.StartWarMapVoyageVoteConsumer
// 0x0188 (0x0288 - 0x0100)
class UStartWarMapVoyageVoteConsumer : public UWarMapVoteConsumerBase
{
public:
	struct FText                                       WarMapVotingCastVote;                                     // 0x0100(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingCantVote;                                     // 0x0138(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingRemoveVote;                                   // 0x0170(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingCantRemoveVote;                               // 0x01A8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingCantVoteReasonCrewOnInvasion;                 // 0x01E0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingCantVoteReasonNearbyEnemyFactionShip;         // 0x0218(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingCantVoteReasonCrewIsInPVEEncounter;           // 0x0250(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.StartWarMapVoyageVoteConsumer"));
		return ptr;
	}

};


// Class WarMap.StopWarMapVoyageVoteConsumer
// 0x00E0 (0x01E0 - 0x0100)
class UStopWarMapVoyageVoteConsumer : public UWarMapVoteConsumerBase
{
public:
	struct FText                                       WarMapVotingCastVote;                                     // 0x0100(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingCantVote;                                     // 0x0138(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingRemoveVote;                                   // 0x0170(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WarMapVotingCantRemoveVote;                               // 0x01A8(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.StopWarMapVoyageVoteConsumer"));
		return ptr;
	}

};


// Class WarMap.WarMapVoteInteractionActor
// 0x00E0 (0x04A8 - 0x03C8)
class AWarMapVoteInteractionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET
	float                                              TooltipUIFadeDuration;                                    // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TooltipUIScreenSpaceOffsetRatio;                          // 0x03DC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	TArray<struct FFactionDisplayInfo>                 FactionInfos;                                             // 0x03E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFactionRequest>                     FactionInfoPtrs;                                          // 0x03F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0408(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.WarMapVoteInteractionActor"));
		return ptr;
	}

};


// Class WarMap.WarMapVoteValidatorBase
// 0x00E8 (0x0118 - 0x0030)
class UWarMapVoteValidatorBase : public UVoteValidatorInlineBase
{
public:
	class UWarMapVoteConsumerBase*                     Consumer;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwningActor;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpdateIsCrewInPVEEncounterInterval;                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCrewInPVEEncounterCached;                               // 0x0044(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD3];                                      // 0x0045(0x00D3) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.WarMapVoteValidatorBase"));
		return ptr;
	}

};


// Class WarMap.StartWarMapVoyageVoteValidator
// 0x0000 (0x0118 - 0x0118)
class UStartWarMapVoyageVoteValidator : public UWarMapVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.StartWarMapVoyageVoteValidator"));
		return ptr;
	}

};


// Class WarMap.StopWarMapVoyageVoteValidator
// 0x0000 (0x0118 - 0x0118)
class UStopWarMapVoyageVoteValidator : public UWarMapVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.StopWarMapVoyageVoteValidator"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
