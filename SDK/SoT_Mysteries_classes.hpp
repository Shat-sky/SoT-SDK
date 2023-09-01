#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Mysteries_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Mysteries.AbandonedNoteWeightedTextDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAbandonedNoteWeightedTextDataAsset : public UDataAsset
{
public:
	TArray<struct FAbandonedNoteWeightedTextEntry>     Entries;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Mysteries.AbandonedNoteWeightedTextDataAsset"));
		return ptr;
	}

};


// Class Mysteries.AbandonedNoteWeightedTextSourceComponent
// 0x00E0 (0x01A8 - 0x00C8)
class UAbandonedNoteWeightedTextSourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
	TAssetPtr<class UAbandonedNoteWeightedTextDataAsset> WeightedText;                                             // 0x00E8(0x0020) (Edit, DisableEditOnInstance)
	struct FText                                       ClueText;                                                 // 0x0108(0x0038) (Net)
	struct FText                                       TitleText;                                                // 0x0140(0x0038) (Net)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0178(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Mysteries.AbandonedNoteWeightedTextSourceComponent"));
		return ptr;
	}


	void OnRep_TitleText();
	void OnRep_ClueText();
};


// Class Mysteries.OneShotRewardableObjectBase
// 0x0080 (0x04E8 - 0x0468)
class AOneShotRewardableObjectBase : public AInteractableObject
{
public:
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0468(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FRewardId                                   Reward;                                                   // 0x0478(0x0008) (Edit, DisableEditOnInstance)
	class UClass*                                      RewardEntitlement;                                        // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractionHoldTime;                                      // 0x0488(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractionRadius;                                        // 0x048C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0490(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x04C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Mysteries.OneShotRewardableObjectBase"));
		return ptr;
	}

};


// Class Mysteries.PopUpNotificationOnItemWieldedComponent
// 0x0020 (0x0168 - 0x0148)
class UPopUpNotificationOnItemWieldedComponent : public UOnItemWieldedComponent
{
public:
	class UPopUpMessageDesc*                           PopUpDesc;                                                // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0150(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Mysteries.PopUpNotificationOnItemWieldedComponent"));
		return ptr;
	}

};


// Class Mysteries.SirenPuzzleContext
// 0x00F0 (0x04B8 - 0x03C8)
class ASirenPuzzleContext : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSirenPuzzleLockState>               PuzzleLocks;                                              // 0x03D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLandmarkReactionKeyFrame>           UnlockCompleteReactions;                                  // 0x03E8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLandmarkReactionKeyFrame>           ResetLocksReactions;                                      // 0x03F8(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              LockStates;                                               // 0x0408(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0418(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Mysteries.SirenPuzzleContext"));
		return ptr;
	}


	void Unlock(const struct FGuid& LockId, const struct FGuid& CrewId);
	void ResetUnlock();
	void OnRep_LockStates(TArray<unsigned char> OldStates);
	void DeactivateLock(const struct FGuid& LockId);
	void ActivateLock(const struct FGuid& LockId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
