#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShantyPuzzle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShantyPuzzle.ShantyPuzzleCompletionComponent
// 0x0040 (0x0108 - 0x00C8)
class UShantyPuzzleCompletionComponent : public UActorComponent
{
public:
	float                                              CompletionTime;                                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FLandmarkReactionKeyFrame>           StartCompletionReaction;                                  // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLandmarkReactionKeyFrame>           AbortCompletionReaction;                                  // 0x00E0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLandmarkReactionKeyFrame>           PuzzleCompletedReaction;                                  // 0x00F0(0x0010) (Edit, ZeroConstructor)
	class ALandmarkReactionPlayer*                     ReactionPlayer;                                           // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShantyPuzzle.ShantyPuzzleCompletionComponent"));
		return ptr;
	}


	void PlayReactions_Net(TEnumAsByte<EShantyPuzzleCompletionReactionState> State);
};


// Class ShantyPuzzle.ShantyPuzzleInterface
// 0x0000 (0x0028 - 0x0028)
class UShantyPuzzleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShantyPuzzle.ShantyPuzzleInterface"));
		return ptr;
	}

};


// Class ShantyPuzzle.ShantyPuzzleComponent
// 0x0110 (0x03F0 - 0x02E0)
class UShantyPuzzleComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class UClass*                                      RequiredShantyItemDesc;                                   // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FShantyPuzzleInteractionZoneDefinition> ShantyPuzzleInteractionZoneDefinitions;                   // 0x02F0(0x0010) (Edit, ZeroConstructor)
	bool                                               TimeLimited;                                              // 0x0300(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldMoveEnsembleToActorPosition;                        // 0x0301(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0302(0x0006) MISSED OFFSET
	struct FGameTimeRange                              ActiveTimeRange;                                          // 0x0308(0x0010) (Edit)
	TArray<class UShantyPuzzleInteractionZoneComponent*> ShantyPuzzleInteractionZones;                             // 0x0318(0x0010) (ExportObject, ZeroConstructor)
	class AEnsemble*                                   CurrentlyPlayingShantyPuzzleEnsemble;                     // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x0330(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShantyPuzzle.ShantyPuzzleComponent"));
		return ptr;
	}


	void OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex);
	void OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent
// 0x0020 (0x0600 - 0x05E0)
class UShantyPuzzleInteractionZoneComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
