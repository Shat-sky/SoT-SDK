#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AdventureOnDemandFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AdventureOnDemandFramework.AdventureOnDemandAreCrewNearQuestTargetStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandAreCrewNearQuestTargetStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandAreCrewNearQuestTargetStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandAreCrewNearQuestTargetStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UAdventureOnDemandAreCrewNearQuestTargetStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableBool                          AreCrewNearQuestTarget;                                   // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandAreCrewNearQuestTargetStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelDependencies
// 0x0020 (0x00F8 - 0x00D8)
class UAdventureOnDemandArrivalTunnelDependencies : public UArrivalTunnelDependencies
{
public:
	TScriptInterface<class UAdventureOnDemandServiceInterface> AdventureOnDemandService;                                 // 0x00D8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UGameEventSchedulerServiceInterface> GameEventSchedulerService;                                // 0x00E8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelDependencies"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelWorkerBase
// 0x0008 (0x0030 - 0x0028)
class UAdventureOnDemandArrivalTunnelWorkerBase : public UObject
{
public:
	class UWorld*                                      WorldPtr;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelWorkerBase"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelDesc
// 0x0028 (0x00D0 - 0x00A8)
class UAdventureOnDemandArrivalTunnelDesc : public UClientDestinationPreLoadingArrivalTunnelDesc
{
public:
	struct FVector                                     ResurfaceLocationOffset;                                  // 0x00A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UAdventureOnDemandArrivalTunnelWorkerBase*   DefaultArrivalLocationWorkerClass;                        // 0x00B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UEnvQuery*                                   ResurfaceLocationEQ;                                      // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldExcludeCrewFromBeingTargetedForGameEvents;          // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              ExclusionTimerFromBeingTargetedForGameEvents;             // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelOfTheDamned
// 0x0060 (0x0700 - 0x06A0)
class AAdventureOnDemandArrivalTunnelOfTheDamned : public AClientDestinationPreLoadingArrivalTunnelOfTheDamned
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x06A0(0x0028) MISSED OFFSET
	class UAdventureOnDemandArrivalTunnelDesc*         AdventureOnDemandArrivalTunnelDesc;                       // 0x06C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAdventureOnDemandArrivalTunnelWorkerBase*   ArrivalLocationWorker;                                    // 0x06D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UAdventureOnDemandServiceInterface> AdventureOnDemandServiceWeakPtr;                          // 0x06D8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UGameEventSchedulerServiceInterface> GameEventSchedulerServiceWeakPtr;                         // 0x06E8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelOfTheDamned"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.VoyageOnDemandArrivalTunnelWorker
// 0x0000 (0x0030 - 0x0030)
class UVoyageOnDemandArrivalTunnelWorker : public UAdventureOnDemandArrivalTunnelWorkerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.VoyageOnDemandArrivalTunnelWorker"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelDependencies
// 0x0010 (0x0148 - 0x0138)
class UAdventureOnDemandDepartureTunnelDependencies : public UDepartureTunnelDependencies
{
public:
	TScriptInterface<class UAdventureOnDemandServiceInterface> AdventureOnDemandService;                                 // 0x0138(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelDependencies"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelDependencies
// 0x0000 (0x0148 - 0x0148)
class UGameEventOnDemandDepartureTunnelDependencies : public UAdventureOnDemandDepartureTunnelDependencies
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelDependencies"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelDependencies
// 0x0000 (0x0148 - 0x0148)
class UVoyageOnDemandDepartureTunnelDependencies : public UAdventureOnDemandDepartureTunnelDependencies
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelDependencies"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelDesc
// 0x0000 (0x0100 - 0x0100)
class UAdventureOnDemandDepartureTunnelDesc : public UDepartureTunnelDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelDesc
// 0x0020 (0x0120 - 0x0100)
class UGameEventOnDemandDepartureTunnelDesc : public UAdventureOnDemandDepartureTunnelDesc
{
public:
	TAssetPtr<class UClass>                            GameEventType;                                            // 0x0100(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelDesc
// 0x0000 (0x0100 - 0x0100)
class UVoyageOnDemandDepartureTunnelDesc : public UAdventureOnDemandDepartureTunnelDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelOfTheDamned
// 0x0020 (0x08C0 - 0x08A0)
class AAdventureOnDemandDepartureTunnelOfTheDamned : public ADepartureTunnelOfTheDamned
{
public:
	class UAdventureOnDemandDepartureTunnelDesc*       AdventureOnDemandDepartureTunnelDesc;                     // 0x08A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UAdventureOnDemandServiceInterface> AdventureOnDemandService;                                 // 0x08A8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelOfTheDamned"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelOfTheDamned
// 0x0000 (0x08C0 - 0x08C0)
class AGameEventOnDemandDepartureTunnelOfTheDamned : public AAdventureOnDemandDepartureTunnelOfTheDamned
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelOfTheDamned"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelOfTheDamned
// 0x0000 (0x08C0 - 0x08C0)
class AVoyageOnDemandDepartureTunnelOfTheDamned : public AAdventureOnDemandDepartureTunnelOfTheDamned
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelOfTheDamned"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandDisplayHintPopUpStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandDisplayHintPopUpStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandDisplayHintPopUpStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandDisplayHintPopUpStepDesc
// 0x0000 (0x0080 - 0x0080)
class UAdventureOnDemandDisplayHintPopUpStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandDisplayHintPopUpStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandForceIslandBannerStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandForceIslandBannerStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandForceIslandBannerStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandForceIslandBannerStepDesc
// 0x0000 (0x0080 - 0x0080)
class UAdventureOnDemandForceIslandBannerStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandForceIslandBannerStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandGetIsDivingToTunnelStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandGetIsDivingToTunnelStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandGetIsDivingToTunnelStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandGetIsDivingToTunnelStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UAdventureOnDemandGetIsDivingToTunnelStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableBool                          IsCrewDivingToTunnel;                                     // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandGetIsDivingToTunnelStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandGetTunnelDescStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandGetTunnelDescStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandGetTunnelDescStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandGetTunnelDescStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UAdventureOnDemandGetTunnelDescStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableDataAsset                     TunnelDesc;                                               // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandGetTunnelDescStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandLocationRequestDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAdventureOnDemandLocationRequestDataAsset : public UDataAsset
{
public:
	TArray<struct FVector2D>                           SeaBasedGameEventLocations;                               // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnvQuery*                                   SeaBasedGameEventQuery;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandLocationRequestDataAsset"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAdventureOnDemandServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandServiceInterface"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandServiceParams
// 0x0038 (0x0060 - 0x0028)
class UAdventureOnDemandServiceParams : public UDataAsset
{
public:
	class UVoyageDescDataAsset*                        DiveToTunnelVoyageDesc;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTunnelDesc*                                 VoyageTunnelDesc;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        LeaveTunnelVoyageDesc;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FExtraSpawnDistanceFromIsland>       ExtraSpawnDistanceFromIsland;                             // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              WorldEventsCooldown;                                      // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UAdventureOnDemandLocationRequestDataAsset*  LocationRequestDataAsset;                                 // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandServiceParams"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSetDirectionToApproachTargetFromStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandSetDirectionToApproachTargetFromStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSetDirectionToApproachTargetFromStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSetDirectionToApproachTargetFromStepDesc
// 0x0090 (0x0110 - 0x0080)
class UAdventureOnDemandSetDirectionToApproachTargetFromStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        DirectionToApproachTargetFrom;                            // 0x0080(0x0030) (Edit)
	struct FQuestVariableVector                        PointOfInterestToGetDirectionToTargetFrom;                // 0x00B0(0x0030) (Edit)
	struct FQuestVariableActor                         ActorToGetDirectionToTargetFrom;                          // 0x00E0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSetDirectionToApproachTargetFromStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSetHintPopUpStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandSetHintPopUpStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSetHintPopUpStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSetHintPopUpStepDesc
// 0x0008 (0x0088 - 0x0080)
class UAdventureOnDemandSetHintPopUpStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EVoyagesPrioritisedPromptTutorialHintTypes> HintType;                                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSetHintPopUpStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSetTargetLocationStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandSetTargetLocationStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSetTargetLocationStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSetTargetLocationStepDesc
// 0x00C0 (0x0140 - 0x0080)
class UAdventureOnDemandSetTargetLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0080(0x0030) (Edit)
	struct FQuestVariableActor                         IslandData;                                               // 0x00B0(0x0030) (Edit)
	struct FQuestVariableVector                        TargetLocation;                                           // 0x00E0(0x0030) (Edit)
	struct FQuestVariableFloat                         RadiusFromTarget;                                         // 0x0110(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSetTargetLocationStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSetTunnelDescStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandSetTunnelDescStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSetTunnelDescStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSetTunnelDescStepDesc
// 0x0008 (0x0088 - 0x0080)
class UAdventureOnDemandSetTunnelDescStepDesc : public UTaleQuestStepDesc
{
public:
	class UTunnelDesc*                                 TunnelDesc;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSetTunnelDescStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSuppressIslandBannerStep
// 0x0000 (0x0098 - 0x0098)
class UAdventureOnDemandSuppressIslandBannerStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSuppressIslandBannerStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandSuppressIslandBannerStepDesc
// 0x0000 (0x0080 - 0x0080)
class UAdventureOnDemandSuppressIslandBannerStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandSuppressIslandBannerStepDesc"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandYieldQuestResumeOnConditionsTaleStep
// 0x0010 (0x00A8 - 0x0098)
class UAdventureOnDemandYieldQuestResumeOnConditionsTaleStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandYieldQuestResumeOnConditionsTaleStep"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandTaleFunctionLibrary
// 0x0000 (0x0180 - 0x0180)
class UAdventureOnDemandTaleFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandTaleFunctionLibrary"));
		return ptr;
	}


	static bool CompareOnDemandQuestResumeConditionMetReason(TEnumAsByte<EOnDemandQuestResumeConditionMetReason> Left, TEnumAsByte<EOnDemandQuestResumeConditionMetReason> Right);
};


// Class AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionCompanyDataAsset
// 0x0038 (0x0060 - 0x0028)
class UAdventureOnDemandVoyageSelectionCompanyDataAsset : public UDataAsset
{
public:
	struct FName                                       CompanyName;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UInteractionPrerequisiteBase*>        Prerequisites;                                            // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FAdventureOnDemandVoyageSelectionVoyageProposalGroup> VoyageGroups;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAdventureOnDemandVoyageSelectionVoyageProposalGroup> WorldEventGroups;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionCompanyDataAsset"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAdventureOnDemandVoyageSelectionDataAsset : public UDataAsset
{
public:
	TArray<class UAdventureOnDemandVoyageSelectionCompanyDataAsset*> CompanyEntries;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UAdventureOnDemandVoyageSelectionCompanyDataAsset*> TallTaleChapters;                                         // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionDataAsset"));
		return ptr;
	}

};


// Class AdventureOnDemandFramework.AdventureOnDemandYieldQuestResumeOnConditionsStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UAdventureOnDemandYieldQuestResumeOnConditionsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FOnDemandQuestResumeConditionMetReasonQuestVariable OutConditionsMetReason;                                   // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemandFramework.AdventureOnDemandYieldQuestResumeOnConditionsStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
