#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Tales.TaleQuestStep
// 0x0070 (0x0098 - 0x0028)
class UTaleQuestStep : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	class UTaleQuestStepDesc*                          TaleStepDesc;                                             // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestService
// 0x0038 (0x0060 - 0x0028)
class UTaleQuestService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestService"));
		return ptr;
	}

};


// Class Tales.TaleQuestServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestServiceDesc : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestStepDesc
// 0x0058 (0x0080 - 0x0028)
class UTaleQuestStepDesc : public UObject
{
public:
	bool                                               Fork;                                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TMap<struct FName, struct FQuestVariableAny>       PromotedPropertyVariables;                                // 0x0030(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleMigrationAction
// 0x0000 (0x0028 - 0x0028)
class UTaleMigrationAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleMigrationAction"));
		return ptr;
	}

};


// Class Tales.TaleQuestFramedStep
// 0x0040 (0x00D8 - 0x0098)
class UTaleQuestFramedStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	TArray<class UTaleQuestService*>                   Services;                                                 // 0x00A0(0x0010) (ZeroConstructor)
	class UTaleQuestFramedStepDesc*                    FrameDesc;                                                // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
	class UScriptStruct*                               StructForCollector;                                       // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UScriptStruct*                               LocalStructForCollector;                                  // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFramedStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestFramedStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UTaleQuestFramedStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<class UTaleQuestServiceDesc*>               Services;                                                 // 0x0080(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UScriptStruct*                               Variables;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInlineUserDefinedStructDetails             GeneratedVariables;                                       // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFramedStepDesc"));
		return ptr;
	}

};


// Class Tales.ContendedResourceComponent
// 0x0040 (0x0108 - 0x00C8)
class UContendedResourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00C8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ContendedResourceComponent"));
		return ptr;
	}

};


// Class Tales.EnvQueryContext_TaleContextBase
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TaleContextBase : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.EnvQueryContext_TaleContextBase"));
		return ptr;
	}

};


// Class Tales.IslandTypeWeightsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UIslandTypeWeightsDataAsset : public UDataAsset
{
public:
	TArray<struct FIslandTypeWeights>                  IslandTypeWeightsForDifficultyRanks;                      // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.IslandTypeWeightsDataAsset"));
		return ptr;
	}

};


// Class Tales.TaleQuestStepInterface
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestStepInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStepInterface"));
		return ptr;
	}


	void Signal();
};


// Class Tales.SplineFootprintPathComponent
// 0x0020 (0x0660 - 0x0640)
class USplineFootprintPathComponent : public USplineComponent
{
public:
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0640(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSplineFootprintPathTool                    PathTool;                                                 // 0x0648(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0649(0x0003) MISSED OFFSET
	float                                              DecalYaw;                                                 // 0x064C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalUniformScale;                                        // 0x0650(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x065C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SplineFootprintPathComponent"));
		return ptr;
	}

};


// Class Tales.StartTallTaleConditionalStatTrigger
// 0x0000 (0x0030 - 0x0030)
class UStartTallTaleConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StartTallTaleConditionalStatTrigger"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayEntrySelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestArrayEntrySelectionStrategy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayEntrySelectionStrategy"));
		return ptr;
	}

};


// Class Tales.FixedArrayEntrySelectionStrategy
// 0x0008 (0x0030 - 0x0028)
class UFixedArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:
	int                                                IndexToSelect;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FixedArrayEntrySelectionStrategy"));
		return ptr;
	}

};


// Class Tales.RandomArrayEntrySelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class URandomArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RandomArrayEntrySelectionStrategy"));
		return ptr;
	}

};


// Class Tales.SequentialArrayEntrySelectionStrategy
// 0x0008 (0x0030 - 0x0028)
class USequentialArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SequentialArrayEntrySelectionStrategy"));
		return ptr;
	}

};


// Class Tales.TaleQuestCargoRunContract
// 0x0088 (0x00B0 - 0x0028)
class UTaleQuestCargoRunContract : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDelivered;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollected;                                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FTaleQuestCargoRunContractItem>      ItemsToCollect;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	class AActor*                                      DeliverToNPC;                                             // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CollectFromNPC;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCargoRunContract"));
		return ptr;
	}

};


// Class Tales.TaleQuestCargoRunContractsService
// 0x0048 (0x00A8 - 0x0060)
class UTaleQuestCargoRunContractsService : public UTaleQuestService
{
public:
	TArray<class UTaleQuestCargoRunContract*>          Contracts;                                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCargoRunContractsService"));
		return ptr;
	}


	class UTaleQuestCargoRunContract* GetContract(const struct FGuid& Guid);
	struct FGuid AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes);
};


// Class Tales.TaleQuestCompoundStepInterface
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestCompoundStepInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCompoundStepInterface"));
		return ptr;
	}

};


// Class Tales.TaleQuestIndexedFrame
// 0x0060 (0x0088 - 0x0028)
class UTaleQuestIndexedFrame : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UTaleQuestForEachStepDescBase*               Desc;                                                     // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Index;                                                    // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x003C(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestIndexedFrame"));
		return ptr;
	}

};


// Class Tales.TaleQuestMerchantContract
// 0x0060 (0x0088 - 0x0028)
class UTaleQuestMerchantContract : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExpired;                                                // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDelivered;                                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollected;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllocated;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMerchantContract"));
		return ptr;
	}

};


// Class Tales.TaleQuestMerchantContractsService
// 0x0010 (0x0070 - 0x0060)
class UTaleQuestMerchantContractsService : public UTaleQuestService
{
public:
	TArray<class UTaleQuestMerchantContract*>          Contracts;                                                // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMerchantContractsService"));
		return ptr;
	}


	class UTaleQuestMerchantContract* GetContract(const struct FGuid& Guid);
	struct FGuid AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit);
};


// Class Tales.TaleQuestImportFrame
// 0x0088 (0x00C0 - 0x0038)
class UTaleQuestImportFrame : public UTaleQuestRootFrame
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestImportFrame"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestSelectorServiceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary"));
		return ptr;
	}


	static void SetDebugVoyageSeed(int Seed);
	static void ResetVoyageDebugSeed();
};


// Class Tales.CutsceneResponsesTaleService
// 0x0030 (0x0090 - 0x0060)
class UCutsceneResponsesTaleService : public UTaleQuestService
{
public:
	TArray<class UCutsceneResponseCoordinator*>        TrackedResponseCoordinators;                              // 0x0060(0x0010) (ZeroConstructor)
	TArray<class UCutsceneResponseComponent*>          TrackedResponseComponents;                                // 0x0070(0x0010) (ExportObject, ZeroConstructor)
	TArray<class AActor*>                              ResponseRelevantActors;                                   // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.CutsceneResponsesTaleService"));
		return ptr;
	}


	void TrackResponseCoordinator(class UCutsceneResponseCoordinator* Coordinator);
	class UCutsceneResponseSheet* StartCutsceneResponseSheet(class AActor* TargetActor, const TScriptInterface<class UCutsceneResponsePlayerInterface>& CutsceneResponsePlayer, class UClass* ResponseSheetClass);
	void ClearAllActiveResponseSheets();
	void AddResponseSheetRelevantActor(class AActor* Actor);
};


// Class Tales.GameEventExclusionZoneTaleService
// 0x0028 (0x0088 - 0x0060)
class UGameEventExclusionZoneTaleService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GameEventExclusionZoneTaleService"));
		return ptr;
	}

};


// Class Tales.RewardGenTaleQuestService
// 0x0030 (0x0090 - 0x0060)
class URewardGenTaleQuestService : public UTaleQuestService
{
public:
	class UTaleQuestWeightedItemDescSpawnDataAsset*    GlobalSpawnData;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ValidSpawnData;                                           // 0x0068(0x0010) (ZeroConstructor)
	TArray<class UItemSpawnData*>                      ItemsToSpawn;                                             // 0x0078(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RewardGenTaleQuestService"));
		return ptr;
	}

};


// Class Tales.TaleQuestActorService
// 0x0310 (0x0370 - 0x0060)
class UTaleQuestActorService : public UTaleQuestService
{
public:
	TArray<struct FTrackedActorData>                   TrackedActors;                                            // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FCriticalActorDelegateData>          CriticalActors;                                           // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FSnapshottedActorData>               SnapshottedActors;                                        // 0x0080(0x0010) (ZeroConstructor)
	class UTaleQuestActorServiceDesc*                  Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class APhasedClusterRoot*                          PhasedClusterRoot;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPhasedActor>                        PhasedActors;                                             // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FPhasedItem>                         PhasedItems;                                              // 0x00B0(0x0010) (ZeroConstructor)
	struct FText                                       CriticalActorHandedInByAnotherCrewFailureMessage;         // 0x00C0(0x0038)
	unsigned char                                      UnknownData00[0x278];                                     // 0x00F8(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestActorService"));
		return ptr;
	}

};


// Class Tales.TaleQuestCheckpointService
// 0x0048 (0x00A8 - 0x0060)
class UTaleQuestCheckpointService : public UTaleQuestService
{
public:
	class UTaleQuestCheckpointServiceDesc*             Desc;                                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCheckpointService"));
		return ptr;
	}

};


// Class Tales.TaleQuestEQSService
// 0x00C8 (0x0128 - 0x0060)
class UTaleQuestEQSService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0060(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEQSService"));
		return ptr;
	}

};


// Class Tales.TaleQuestInteractionPreventionService
// 0x0018 (0x0078 - 0x0060)
class UTaleQuestInteractionPreventionService : public UTaleQuestService
{
public:
	TArray<class AActor*>                              TrackedInteractionActors;                                 // 0x0060(0x0010) (ZeroConstructor)
	class UTaleQuestInteractionPreventionServiceDesc*  Desc;                                                     // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestInteractionPreventionService"));
		return ptr;
	}


	void PreventInteractionWithTargetActor(class AActor* Actor);
	void EnableInteractionWithTargetActor(class AActor* Actor);
};


// Class Tales.TaleQuestSelectorService
// 0x0028 (0x0088 - 0x0060)
class UTaleQuestSelectorService : public UTaleQuestService
{
public:
	class UTaleQuestSelectorServiceDesc*               Desc;                                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectorService"));
		return ptr;
	}


	int GetRandomIntegerInRange(int Minimum, int Maximum);
	float GetRandomFloatInRange(float Minimum, float Maximum);
};


// Class Tales.TaleQuestToggleInteractionDescriptionService
// 0x0058 (0x00B8 - 0x0060)
class UTaleQuestToggleInteractionDescriptionService : public UTaleQuestService
{
public:
	TMap<class AActor*, TEnumAsByte<ETaleInteractionState>> TrackedInteractionActors;                                 // 0x0060(0x0050) (ZeroConstructor)
	class UTaleQuestToggleInteractionDescriptionServiceDesc* Desc;                                                     // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestToggleInteractionDescriptionService"));
		return ptr;
	}


	void TargetActorInteractionToEnable(class AActor* Actor);
	void TargetActorInteractionToDisable(class AActor* Actor);
};


// Class Tales.TaleResourceBrokerService
// 0x0048 (0x00A8 - 0x0060)
class UTaleResourceBrokerService : public UTaleQuestService
{
public:
	TScriptInterface<class UContendedResourceServiceInterface> ContendedResourceService;                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UWorldResourceRegistryInterface> ResourceRegistry;                                         // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMigrationActionPair>                MigrationActions;                                         // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleResourceBrokerService"));
		return ptr;
	}

};


// Class Tales.CutsceneResponsesTaleServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UCutsceneResponsesTaleServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.CutsceneResponsesTaleServiceDesc"));
		return ptr;
	}

};


// Class Tales.GameEventExclusionZoneTaleServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UGameEventExclusionZoneTaleServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GameEventExclusionZoneTaleServiceDesc"));
		return ptr;
	}

};


// Class Tales.RewardGenTaleQuestServiceDesc
// 0x0008 (0x0030 - 0x0028)
class URewardGenTaleQuestServiceDesc : public UTaleQuestServiceDesc
{
public:
	class UTaleQuestWeightedItemDescSpawnDataAsset*    SpawnData;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RewardGenTaleQuestServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestActorServiceDesc
// 0x0008 (0x0030 - 0x0028)
class UTaleQuestActorServiceDesc : public UTaleQuestServiceDesc
{
public:
	class UClass*                                      ItemLostFailureRunnable;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestActorServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestCargoRunContractsServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestCargoRunContractsServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCargoRunContractsServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestEQSServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestEQSServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEQSServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestInteractionPreventionServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestInteractionPreventionServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestInteractionPreventionServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestMerchantContractsServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestMerchantContractsServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMerchantContractsServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectorServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestSelectorServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectorServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestToggleInteractionDescriptionServiceDesc
// 0x0008 (0x0030 - 0x0028)
class UTaleQuestToggleInteractionDescriptionServiceDesc : public UTaleQuestServiceDesc
{
public:
	bool                                               ResetDisabledInteractsOnEnd;                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ResetEnabledInteractsOnEnd;                               // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestToggleInteractionDescriptionServiceDesc"));
		return ptr;
	}

};


// Class Tales.ActorRadiusTrackerStep
// 0x0038 (0x00D0 - 0x0098)
class UActorRadiusTrackerStep : public UTaleQuestStep
{
public:
	class UActorRadiusTrackerStepDesc*                 Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ActorRadiusTrackerStep"));
		return ptr;
	}

};


// Class Tales.AddGameEventExclusionZoneStep
// 0x0008 (0x00A0 - 0x0098)
class UAddGameEventExclusionZoneStep : public UTaleQuestStep
{
public:
	class UAddGameEventExclusionZoneStepDesc*          Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.AddGameEventExclusionZoneStep"));
		return ptr;
	}

};


// Class Tales.CallObjectFunctionStep
// 0x0000 (0x0098 - 0x0098)
class UCallObjectFunctionStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.CallObjectFunctionStep"));
		return ptr;
	}

};


// Class Tales.DebugTaleAddInstancedLevelStep
// 0x0038 (0x00D0 - 0x0098)
class UDebugTaleAddInstancedLevelStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class UDebugTaleAddInstancedLevelStepDesc*         StepDesc;                                                 // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      InstancedLevelPath;                                       // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DebugTaleAddInstancedLevelStep"));
		return ptr;
	}

};


// Class Tales.DebugTaleAddInstancedLevelStepDesc
// 0x0040 (0x00C0 - 0x0080)
class UDebugTaleAddInstancedLevelStepDesc : public UTaleQuestStepDesc
{
public:
	struct FText                                       InstancedLevelKeyword;                                    // 0x0080(0x0038) (Edit)
	uint32_t                                           InstancedLevelIndex;                                      // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DebugTaleAddInstancedLevelStepDesc"));
		return ptr;
	}

};


// Class Tales.DestroySpawnedActorStep
// 0x0000 (0x0098 - 0x0098)
class UDestroySpawnedActorStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DestroySpawnedActorStep"));
		return ptr;
	}

};


// Class Tales.DoEQSQueryStep
// 0x0010 (0x00A8 - 0x0098)
class UDoEQSQueryStep : public UTaleQuestStep
{
public:
	class UDoEQSQueryStepDesc*                         Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTaleQuestEQSService*                        CachedTaleEQSService;                                     // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DoEQSQueryStep"));
		return ptr;
	}

};


// Class Tales.EnableInteractionWithActorStep
// 0x0000 (0x0098 - 0x0098)
class UEnableInteractionWithActorStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.EnableInteractionWithActorStep"));
		return ptr;
	}

};


// Class Tales.FindItemInCollectorsChestStep
// 0x0000 (0x0098 - 0x0098)
class UFindItemInCollectorsChestStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindItemInCollectorsChestStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStep
// 0x0000 (0x0098 - 0x0098)
class UFindNamedPointStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsVectorStep
// 0x0000 (0x0098 - 0x0098)
class UFindNamedPointAsVectorStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsVectorStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsTransformStep
// 0x0000 (0x0098 - 0x0098)
class UFindNamedPointAsTransformStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsTransformStep"));
		return ptr;
	}

};


// Class Tales.ForceCannonLoadStep
// 0x0040 (0x00D8 - 0x0098)
class UForceCannonLoadStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ForceCannonLoadStep"));
		return ptr;
	}

};


// Class Tales.GenerateDigLocationInRadiusStep
// 0x0080 (0x0118 - 0x0098)
class UGenerateDigLocationInRadiusStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0098(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GenerateDigLocationInRadiusStep"));
		return ptr;
	}

};


// Class Tales.GetActorOfInterestStep
// 0x0000 (0x0098 - 0x0098)
class UGetActorOfInterestStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GetActorOfInterestStep"));
		return ptr;
	}

};


// Class Tales.GetVoyageDifficultyFromRankStep
// 0x0028 (0x00C0 - 0x0098)
class UGetVoyageDifficultyFromRankStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0098(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GetVoyageDifficultyFromRankStep"));
		return ptr;
	}

};


// Class Tales.InvokeDamageStep
// 0x0000 (0x0098 - 0x0098)
class UInvokeDamageStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.InvokeDamageStep"));
		return ptr;
	}

};


// Class Tales.LinkEQSContextWithVariableStep
// 0x0008 (0x00A0 - 0x0098)
class ULinkEQSContextWithVariableStep : public UTaleQuestStep
{
public:
	class ULinkEQSContextWithVariableStepDesc*         Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LinkEQSContextWithVariableStep"));
		return ptr;
	}

};


// Class Tales.LoadSequencerAnimationStep
// 0x0018 (0x00B0 - 0x0098)
class ULoadSequencerAnimationStep : public UTaleQuestStep
{
public:
	class ULoadSequencerAnimationStepDesc*             StepDesc;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                   // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      TargetToSpawnActor;                                       // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LoadSequencerAnimationStep"));
		return ptr;
	}

};


// Class Tales.OverrideManagedActorStateStep
// 0x0000 (0x0098 - 0x0098)
class UOverrideManagedActorStateStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.OverrideManagedActorStateStep"));
		return ptr;
	}

};


// Class Tales.ParticipantRadiusTrackerStep
// 0x0020 (0x00B8 - 0x0098)
class UParticipantRadiusTrackerStep : public UTaleQuestStep
{
public:
	class UParticipantRadiusTrackerStepDesc*           Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ParticipantRadiusTrackerStep"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationOnCutsceneActorStep
// 0x0030 (0x00C8 - 0x0098)
class UPlaySequencerAnimationOnCutsceneActorStep : public UTaleQuestStep
{
public:
	class UPlaySequencerAnimationOnCutsceneActorStepDesc* StepDesc;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                   // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FPossessableSequence>                PossessableSequences;                                     // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationOnCutsceneActorStep"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationStep
// 0x0038 (0x00D0 - 0x0098)
class UPlaySequencerAnimationStep : public UTaleQuestStep
{
public:
	class UPlaySequencerAnimationStepDesc*             StepDesc;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                   // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationStep"));
		return ptr;
	}

};


// Class Tales.PreventInteractionWithActorStep
// 0x0000 (0x0098 - 0x0098)
class UPreventInteractionWithActorStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PreventInteractionWithActorStep"));
		return ptr;
	}

};


// Class Tales.ProvokeHitReactionStep
// 0x0000 (0x0098 - 0x0098)
class UProvokeHitReactionStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ProvokeHitReactionStep"));
		return ptr;
	}

};


// Class Tales.RemoveGameEventExclusionZoneStep
// 0x0008 (0x00A0 - 0x0098)
class URemoveGameEventExclusionZoneStep : public UTaleQuestStep
{
public:
	class URemoveGameEventExclusionZoneStepDesc*       Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RemoveGameEventExclusionZoneStep"));
		return ptr;
	}

};


// Class Tales.SelectNamedPointStep
// 0x0000 (0x0098 - 0x0098)
class USelectNamedPointStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SelectNamedPointStep"));
		return ptr;
	}

};


// Class Tales.SetEQSNamedContextStep
// 0x0008 (0x00A0 - 0x0098)
class USetEQSNamedContextStep : public UTaleQuestStep
{
public:
	class USetEQSNamedContextStepDesc*                 Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SetEQSNamedContextStep"));
		return ptr;
	}

};


// Class Tales.SpawnLayerStep
// 0x0018 (0x00B0 - 0x0098)
class USpawnLayerStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnLayerStep"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorWithTransformStep
// 0x0058 (0x00F0 - 0x0098)
class USpawnPhasedActorWithTransformStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0098(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorWithTransformStep"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedItemStep
// 0x0000 (0x0098 - 0x0098)
class USpawnPhasedItemStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedItemStep"));
		return ptr;
	}

};


// Class Tales.StartSuppressingCutsceneResponsesStep
// 0x0000 (0x0098 - 0x0098)
class UStartSuppressingCutsceneResponsesStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StartSuppressingCutsceneResponsesStep"));
		return ptr;
	}

};


// Class Tales.StopSuppressingCutsceneResponsesStep
// 0x0000 (0x0098 - 0x0098)
class UStopSuppressingCutsceneResponsesStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StopSuppressingCutsceneResponsesStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddToArrayStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAddToArrayStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddToArrayStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayAppendStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestArrayAppendStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayAppendStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayContainsStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestArrayContainsStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayContainsStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayUnionStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestArrayUnionStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayUnionStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAwaitEventStep
// 0x0048 (0x00E0 - 0x0098)
class UTaleQuestAwaitEventStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0098(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAwaitEventStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestChooseIslandFromWeightsStep
// 0x0068 (0x0100 - 0x0098)
class UTaleQuestChooseIslandFromWeightsStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0098(0x0060) MISSED OFFSET
	class UIslandTypeWeightsDataAsset*                 IslandTypeWeights;                                        // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestChooseIslandFromWeightsStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestClearTaleProposalsStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestClearTaleProposalsStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestClearTaleProposalsStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestCrewTaskStep
// 0x0038 (0x00D0 - 0x0098)
class UTaleQuestCrewTaskStep : public UTaleQuestStep
{
public:
	TScriptInterface<class UTaleQuestStepInterface>    Task;                                                     // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCrewTaskStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestDisableInteractionStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestDisableInteractionStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestDisableInteractionStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep
// 0x0008 (0x00A0 - 0x0098)
class UTaleQuestEmissaryCompanyActionRewardBoostStep : public UTaleQuestStep
{
public:
	class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc* Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestEnableInteractionStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestEnableInteractionStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEnableInteractionStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestFireEventStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestFireEventStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFireEventStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestForEachStepBase
// 0x0010 (0x00A8 - 0x0098)
class UTaleQuestForEachStepBase : public UTaleQuestStep
{
public:
	TArray<struct FBodyFramePair>                      Bodies;                                                   // 0x0098(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestForEachStepBase"));
		return ptr;
	}

};


// Class Tales.TaleQuestForEachAnyStep
// 0x0000 (0x00A8 - 0x00A8)
class UTaleQuestForEachAnyStep : public UTaleQuestForEachStepBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestForEachAnyStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestForEachSequential
// 0x0040 (0x00E8 - 0x00A8)
class UTaleQuestForEachSequential : public UTaleQuestForEachStepBase
{
public:
	class UTaleQuestIndexedFrame*                      Frame;                                                    // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestForEachSequential"));
		return ptr;
	}

};


// Class Tales.TaleQuestForEachUnionStep
// 0x0000 (0x00A8 - 0x00A8)
class UTaleQuestForEachUnionStep : public UTaleQuestForEachStepBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestForEachUnionStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestGetCollectionItemCountStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestGetCollectionItemCountStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGetCollectionItemCountStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestGetParticipatingCrewsStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestGetParticipatingCrewsStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGetParticipatingCrewsStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestGrantRewardStep
// 0x0040 (0x00D8 - 0x0098)
class UTaleQuestGrantRewardStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGrantRewardStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestPermanentPromptStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestPermanentPromptStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestPermanentPromptStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestPersistentForEachCrewTaskStep
// 0x0058 (0x00F0 - 0x0098)
class UTaleQuestPersistentForEachCrewTaskStep : public UTaleQuestStep
{
public:
	class UTaleQuestPersistentForEachCrewTaskStepDesc* StepDesc;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00A0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestPersistentForEachCrewTaskStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectEntryFromArrayStep
// 0x0040 (0x00D8 - 0x0098)
class UTaleQuestSelectEntryFromArrayStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectEntryFromArrayStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestShipDiveStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestShipDiveStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestShipDiveStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestShipSurfaceStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestShipSurfaceStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestShipSurfaceStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestStartCameraFadeStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestStartCameraFadeStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStartCameraFadeStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestStructStepBase
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestStructStepBase : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStructStepBase"));
		return ptr;
	}

};


// Class Tales.TaleQuestBreakStructStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestBreakStructStep : public UTaleQuestStructStepBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestBreakStructStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestMakeStructStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestMakeStructStep : public UTaleQuestStructStepBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMakeStructStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestToggleAmbientMigrationForServerStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestToggleAmbientMigrationForServerStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestToggleAmbientMigrationForServerStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateCheckpointStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestUpdateCheckpointStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateCheckpointStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForHandInStep
// 0x0010 (0x00A8 - 0x0098)
class UTaleQuestWaitForHandInStep : public UTaleQuestStep
{
public:
	class UTaleQuestWaitForHandInStepDesc*             Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForHandInStep"));
		return ptr;
	}

};


// Class Tales.TrackResponseCoordinatorStep
// 0x0008 (0x00A0 - 0x0098)
class UTrackResponseCoordinatorStep : public UTaleQuestStep
{
public:
	class UTrackResponseCoordinatorStepDesc*           StepDesc;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TrackResponseCoordinatorStep"));
		return ptr;
	}

};


// Class Tales.VisualiseLoggerEQSResultsTaleStep
// 0x0000 (0x0098 - 0x0098)
class UVisualiseLoggerEQSResultsTaleStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.VisualiseLoggerEQSResultsTaleStep"));
		return ptr;
	}

};


// Class Tales.WaitForActorOfInterestToUnregisterStep
// 0x0078 (0x0110 - 0x0098)
class UWaitForActorOfInterestToUnregisterStep : public UTaleQuestStep
{
public:
	class UWaitForActorOfInterestToUnregisterStepDesc* Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00A0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForActorOfInterestToUnregisterStep"));
		return ptr;
	}

};


// Class Tales.WaitForHealthToReachFractionStep
// 0x0070 (0x0108 - 0x0098)
class UWaitForHealthToReachFractionStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0098(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForHealthToReachFractionStep"));
		return ptr;
	}

};


// Class Tales.WaitForItemPickupStep
// 0x00B0 (0x0148 - 0x0098)
class UWaitForItemPickupStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0098(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForItemPickupStep"));
		return ptr;
	}

};


// Class Tales.ActorRadiusTrackerStepDesc
// 0x0070 (0x00F0 - 0x0080)
class UActorRadiusTrackerStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         TargetActor;                                              // 0x0080(0x0020) (Edit)
	float                                              DurationBetweenChecks;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        Location;                                                 // 0x00A8(0x0020) (Edit)
	float                                              Radius;                                                   // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FQuestVariableBool                          ActorInsideRadius;                                        // 0x00D0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ActorRadiusTrackerStepDesc"));
		return ptr;
	}

};


// Class Tales.AddGameEventExclusionZoneStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UAddGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              Radius;                                                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        Location;                                                 // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.AddGameEventExclusionZoneStepDesc"));
		return ptr;
	}

};


// Class Tales.CallObjectFunctionStepDesc
// 0x0068 (0x00E8 - 0x0080)
class UCallObjectFunctionStepDesc : public UTaleQuestStepDesc
{
public:
	class UObject*                                     Target;                                                   // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FClassFunctionSelectionType                 Function;                                                 // 0x0088(0x0010) (Edit)
	TMap<struct FName, struct FName>                   ParameterMappings;                                        // 0x0098(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.CallObjectFunctionStepDesc"));
		return ptr;
	}

};


// Class Tales.DestroySpawnedActorStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UDestroySpawnedActorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ActorVar;                                                 // 0x0080(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DestroySpawnedActorStepDesc"));
		return ptr;
	}

};


// Class Tales.DoEQSQueryStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UDoEQSQueryStepDesc : public UTaleQuestStepDesc
{
public:
	class UEnvQuery*                                   EQSQuery;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableArray                         OutPoints;                                                // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DoEQSQueryStepDesc"));
		return ptr;
	}

};


// Class Tales.EnableInteractionWithActorStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UEnableInteractionWithActorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         TargetActor;                                              // 0x0080(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.EnableInteractionWithActorStepDesc"));
		return ptr;
	}

};


// Class Tales.FindItemInCollectorsChestStepDesc
// 0x0048 (0x00C8 - 0x0080)
class UFindItemInCollectorsChestStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         CollectorsChest;                                          // 0x0080(0x0020) (Edit)
	struct FQuestVariableActor                         ItemInChest;                                              // 0x00A0(0x0020) (Edit)
	class UClass*                                      ItemToFind;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindItemInCollectorsChestStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStepDescBase
// 0x0070 (0x00F0 - 0x0080)
class UFindNamedPointStepDescBase : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET
	struct FQuestVariableActor                         ActorToSearch;                                            // 0x00A0(0x0020) (Edit)
	struct FQuestVariableName                          GroupNamePin;                                             // 0x00C0(0x0020) (Edit)
	struct FName                                       PointGroupName;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPointSelectionMethod>                 SearchMethod;                                             // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpaceType>                            ReturnInSpace;                                            // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStepDescBase"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStepDesc
// 0x0020 (0x0110 - 0x00F0)
class UFindNamedPointStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableOrientedPoint                 OutputOrientedPoint;                                      // 0x00F0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsVectorStepDesc
// 0x0020 (0x0110 - 0x00F0)
class UFindNamedPointAsVectorStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableVector                        OutputVectorLocation;                                     // 0x00F0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsVectorStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsTransformStepDesc
// 0x0028 (0x0118 - 0x00F0)
class UFindNamedPointAsTransformStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableTransform                     OutputTransform;                                          // 0x00F0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsTransformStepDesc"));
		return ptr;
	}

};


// Class Tales.ForceCannonLoadStepDesc
// 0x0040 (0x00C0 - 0x0080)
class UForceCannonLoadStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Cannon;                                                   // 0x0080(0x0020) (Edit)
	struct FQuestVariableActor                         Projectile;                                               // 0x00A0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ForceCannonLoadStepDesc"));
		return ptr;
	}

};


// Class Tales.GenerateDigLocationInRadiusStepDesc
// 0x0068 (0x00E8 - 0x0080)
class UGenerateDigLocationInRadiusStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0080(0x0020) (Edit)
	struct FQuestVariableVector                        Center;                                                   // 0x00A0(0x0020) (Edit)
	float                                              RadiusInCm;                                               // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        DigLocation;                                              // 0x00C8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GenerateDigLocationInRadiusStepDesc"));
		return ptr;
	}

};


// Class Tales.GetActorOfInterestStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UGetActorOfInterestStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      ActorOfInterestId;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableActor                         ActorOfInterest;                                          // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GetActorOfInterestStepDesc"));
		return ptr;
	}

};


// Class Tales.InvokeDamageDesc
// 0x0030 (0x00B0 - 0x0080)
class UInvokeDamageDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ActorToDamage;                                            // 0x0080(0x0020) (Edit)
	class UClass*                                      DamageType;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  DamageReason;                                             // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.InvokeDamageDesc"));
		return ptr;
	}

};


// Class Tales.LinkEQSContextWithVariableStepDesc
// 0x0028 (0x00A8 - 0x0080)
class ULinkEQSContextWithVariableStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      Context;                                                  // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableSetEQSTaleContextValue        Variable;                                                 // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LinkEQSContextWithVariableStepDesc"));
		return ptr;
	}

};


// Class Tales.LoadSequencerAnimationStepDesc
// 0x0080 (0x0100 - 0x0080)
class ULoadSequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<class ULevelSequence*>                      LevelSequencesToLoad;                                     // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FQuestVariableActor                         TargetActorToSpawn;                                       // 0x0090(0x0020) (Edit)
	struct FQuestVariableActor                         LevelSequenceActorSpawnLocation;                          // 0x00B0(0x0020) (Edit)
	struct FQuestVariableActor                         SequencerCutSceneActor;                                   // 0x00D0(0x0020) (Edit)
	bool                                               AttachToTargetActor;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FName                                       AttachSocketName;                                         // 0x00F4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayGlobally;                                             // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LoadSequencerAnimationStepDesc"));
		return ptr;
	}

};


// Class Tales.OverrideManagedActorStateStepDesc
// 0x0060 (0x00E0 - 0x0080)
class UOverrideManagedActorStateStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ActorVar;                                                 // 0x0080(0x0020) (Edit)
	bool                                               TrackActor;                                               // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MarkAsCritical;                                           // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
	struct FText                                       CriticalActorLostMessage;                                 // 0x00A8(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.OverrideManagedActorStateStepDesc"));
		return ptr;
	}

};


// Class Tales.ParticipantRadiusTrackerStepDesc
// 0x0048 (0x00C8 - 0x0080)
class UParticipantRadiusTrackerStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              DurationBetweenChecks;                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        Location;                                                 // 0x0088(0x0020) (Edit)
	struct FQuestVariableFloat                         Radius;                                                   // 0x00A8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ParticipantRadiusTrackerStepDesc"));
		return ptr;
	}

};


// Class Tales.WaitUntilAllParticipantsEnterRadiusStep
// 0x0000 (0x00C8 - 0x00C8)
class UWaitUntilAllParticipantsEnterRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitUntilAllParticipantsEnterRadiusStep"));
		return ptr;
	}

};


// Class Tales.WaitUntilAllParticipantsLeaveRadiusStep
// 0x0000 (0x00C8 - 0x00C8)
class UWaitUntilAllParticipantsLeaveRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitUntilAllParticipantsLeaveRadiusStep"));
		return ptr;
	}

};


// Class Tales.WaitUntilAnyParticipantEntersRadiusStep
// 0x0000 (0x00C8 - 0x00C8)
class UWaitUntilAnyParticipantEntersRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitUntilAnyParticipantEntersRadiusStep"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc
// 0x00E8 (0x0168 - 0x0080)
class UPlaySequencerAnimationOnCutsceneActorStepDesc : public UTaleQuestStepDesc
{
public:
	class ULevelSequence*                              LevelSequence;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FQuestVariableActor                         DockableBaseActor;                                        // 0x0090(0x0020) (Edit)
	struct FQuestVariableActor                         SequencerCutSceneActor;                                   // 0x00B0(0x0020) (Edit)
	struct FQuestVariableActor                         ActorToPossess;                                           // 0x00D0(0x0020) (Edit)
	struct FQuestVariableArray                         AdditionalPossessables;                                   // 0x00F0(0x0020) (Edit)
	struct FQuestVariableActor                         InteractingActor;                                         // 0x0110(0x0020) (Edit)
	class FString                                      PossessableName;                                          // 0x0130(0x0010) (Edit, ZeroConstructor)
	class USceneDialogueData*                          DialogueData;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               LocalisableNames;                                         // 0x0148(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLevelSequenceActorAlwaysRelevant;                       // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsLooping;                                                // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x015A(0x0002) MISSED OFFSET
	float                                              SubtitleSphereRadiusInCm;                                 // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              FemaleLevelSequence;                                      // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationStepDesc
// 0x00B8 (0x0138 - 0x0080)
class UPlaySequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	class ULevelSequence*                              LevelSequenceToPlay;                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableActor                         TargetActorToSpawn;                                       // 0x0088(0x0020) (Edit)
	struct FQuestVariableActor                         LevelSequenceActorSpawnLocation;                          // 0x00A8(0x0020) (Edit)
	struct FQuestVariableActor                         DockableBaseActor;                                        // 0x00C8(0x0020) (Edit)
	struct FQuestVariableActor                         InteractingActor;                                         // 0x00E8(0x0020) (Edit)
	bool                                               PlayGlobally;                                             // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsLevelSequenceActorAlawaysRelevant;                      // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	class USceneDialogueData*                          DialogueData;                                             // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               LocalisableNames;                                         // 0x0118(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLooping;                                                // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              SubtitleSphereRadiusInCm;                                 // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              FemaleLevelSequenceToPlay;                                // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationStepDesc"));
		return ptr;
	}

};


// Class Tales.PreventInteractionWithActorStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UPreventInteractionWithActorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         TargetActor;                                              // 0x0080(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PreventInteractionWithActorStepDesc"));
		return ptr;
	}

};


// Class Tales.ProvokeHitReactionDesc
// 0x0030 (0x00B0 - 0x0080)
class UProvokeHitReactionDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ActorToProvoke;                                           // 0x0080(0x0020) (Edit)
	class UClass*                                      DamageType;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  DamageReason;                                             // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ProvokeHitReactionDesc"));
		return ptr;
	}

};


// Class Tales.RemoveGameEventExclusionZoneStepDesc
// 0x0028 (0x00A8 - 0x0080)
class URemoveGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              Radius;                                                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        Location;                                                 // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RemoveGameEventExclusionZoneStepDesc"));
		return ptr;
	}

};


// Class Tales.SelectNamedPointStepDesc
// 0x0050 (0x00D0 - 0x0080)
class USelectNamedPointStepDesc : public UTaleQuestStepDesc
{
public:
	TAssetPtr<class AActor>                            PointsContainer;                                          // 0x0080(0x0020) (Edit)
	struct FName                                       GroupName;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PointIndex;                                               // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpaceType>                            ReturnInSpace;                                            // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	struct FQuestVariableOrientedPoint                 Point;                                                    // 0x00B0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SelectNamedPointStepDesc"));
		return ptr;
	}


	TArray<class FString> GetNamedPointsGroups();
};


// Class Tales.SetEQSNamedContextStepDesc
// 0x0028 (0x00A8 - 0x0080)
class USetEQSNamedContextStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       Name;                                                     // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableLinkEQSContext                Value;                                                    // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SetEQSNamedContextStepDesc"));
		return ptr;
	}

};


// Class Tales.SpawnLayerStepDesc
// 0x0040 (0x00C0 - 0x0080)
class USpawnLayerStepDesc : public UTaleQuestStepDesc
{
public:
	class ULayerActorsDataAsset*                       LayerAsset;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnPhased;                                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FQuestVariableActor                         ActorWithLayers;                                          // 0x0090(0x0020) (Edit)
	TArray<struct FQuestVariableActor>                 SpawnedActors;                                            // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnLayerStepDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorWithTransformStepBaseDesc
// 0x0080 (0x0100 - 0x0080)
class USpawnPhasedActorWithTransformStepBaseDesc : public UTaleQuestStepDesc
{
public:
	TAssetPtr<class UClass>                            Actor;                                                    // 0x0080(0x0020) (Edit)
	bool                                               MarkAsCritical;                                           // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FText                                       CriticalActorLostMessage;                                 // 0x00A8(0x0038) (Edit)
	struct FQuestVariableActor                         ActorVar;                                                 // 0x00E0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorWithTransformStepBaseDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorAtLocationStepDesc
// 0x0028 (0x0128 - 0x0100)
class USpawnPhasedActorAtLocationStepDesc : public USpawnPhasedActorWithTransformStepBaseDesc
{
public:
	struct FQuestVariableTransform                     Location;                                                 // 0x0100(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorAtLocationStepDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedItemStepDesc
// 0x00A8 (0x0128 - 0x0080)
class USpawnPhasedItemStepDesc : public UTaleQuestStepDesc
{
public:
	bool                                               TrackItem;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MarkItemAsCritical;                                       // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	struct FText                                       CriticalActorLostMessage;                                 // 0x0088(0x0038) (Edit)
	struct FName                                       SocketName;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableItemDescType                  Item;                                                     // 0x00C8(0x0020) (Edit)
	struct FQuestVariableActor                         LocatorVar;                                               // 0x00E8(0x0020) (Edit)
	struct FQuestVariableItemInfo                      SpawnedItemVar;                                           // 0x0108(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedItemStepDesc"));
		return ptr;
	}

};


// Class Tales.StartSuppressingCutsceneResponsesStepDesc
// 0x0000 (0x0080 - 0x0080)
class UStartSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StartSuppressingCutsceneResponsesStepDesc"));
		return ptr;
	}

};


// Class Tales.StopSuppressingCutsceneResponsesStepDesc
// 0x0000 (0x0080 - 0x0080)
class UStopSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StopSuppressingCutsceneResponsesStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayItemStepBaseDesc
// 0x0010 (0x0090 - 0x0080)
class UTaleQuestArrayItemStepBaseDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       ArrayVar;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ItemVar;                                                  // 0x0088(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayItemStepBaseDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddToArrayStepDesc
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestAddToArrayStepDesc : public UTaleQuestArrayItemStepBaseDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddToArrayStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayContainsStepDesc
// 0x0020 (0x00B0 - 0x0090)
class UTaleQuestArrayContainsStepDesc : public UTaleQuestArrayItemStepBaseDesc
{
public:
	struct FQuestVariableBool                          Result;                                                   // 0x0090(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayContainsStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayOperationStepBaseDesc
// 0x0018 (0x0098 - 0x0080)
class UTaleQuestArrayOperationStepBaseDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       Array1;                                                   // 0x0080(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Array2;                                                   // 0x0088(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Result;                                                   // 0x0090(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayOperationStepBaseDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayAppendStepDesc
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestArrayAppendStepDesc : public UTaleQuestArrayOperationStepBaseDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayAppendStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayUnionStepDesc
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestArrayUnionStepDesc : public UTaleQuestArrayOperationStepBaseDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayUnionStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestChooseIslandFromWeightsStepDesc
// 0x0068 (0x00E8 - 0x0080)
class UTaleQuestChooseIslandFromWeightsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableNameArray                     IslandsToChooseFrom;                                      // 0x0080(0x0020) (Edit)
	struct FQuestVariableInt                           DifficultyRank;                                           // 0x00A0(0x0020) (Edit)
	struct FQuestVariableName                          ChosenIsland;                                             // 0x00C0(0x0020) (Edit)
	class UIslandTypeWeightsDataAsset*                 IslandTypeWeights;                                        // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestChooseIslandFromWeightsStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestClearTaleProposalsStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestClearTaleProposalsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       CampaignId;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestClearTaleProposalsStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestDisableInteractionStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UTaleQuestDisableInteractionStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         TargetActor;                                              // 0x0080(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestDisableInteractionStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestEnableInteractionStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UTaleQuestEnableInteractionStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         TargetActor;                                              // 0x0080(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEnableInteractionStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestEventStepDescBase
// 0x0060 (0x00E0 - 0x0080)
class UTaleQuestEventStepDescBase : public UTaleQuestStepDesc
{
public:
	class UObject*                                     Dispatcher;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNativeAndUserDefinedStructSelector         EventType;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FName>                   ArgumentMappings;                                         // 0x0090(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEventStepDescBase"));
		return ptr;
	}

};


// Class Tales.TaleQuestAwaitEventStepDesc
// 0x0000 (0x00E0 - 0x00E0)
class UTaleQuestAwaitEventStepDesc : public UTaleQuestEventStepDescBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAwaitEventStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestFireEventStepDesc
// 0x0000 (0x00E0 - 0x00E0)
class UTaleQuestFireEventStepDesc : public UTaleQuestEventStepDescBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFireEventStepDesc"));
		return ptr;
	}

};


// Class Tales.ValueProviderStepInterface
// 0x0000 (0x0028 - 0x0028)
class UValueProviderStepInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ValueProviderStepInterface"));
		return ptr;
	}

};


// Class Tales.TaleQuestForEachStepDescBase
// 0x0028 (0x00A8 - 0x0080)
class UTaleQuestForEachStepDescBase : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	struct FName                                       Collection;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UTaleQuestStepDesc*                          Body;                                                     // 0x0090(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       KeyPinName;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ItemPinName;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestForEachStepDescBase"));
		return ptr;
	}

};


// Class Tales.TaleQuestForEachAnyStepDesc
// 0x0000 (0x00A8 - 0x00A8)
class UTaleQuestForEachAnyStepDesc : public UTaleQuestForEachStepDescBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestForEachAnyStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestForEachSequentialDesc
// 0x0000 (0x00A8 - 0x00A8)
class UTaleQuestForEachSequentialDesc : public UTaleQuestForEachStepDescBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestForEachSequentialDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestForEachUnionStepDesc
// 0x0000 (0x00A8 - 0x00A8)
class UTaleQuestForEachUnionStepDesc : public UTaleQuestForEachStepDescBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestForEachUnionStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestGetCollectionItemCountStepDesc
// 0x0040 (0x00C0 - 0x0080)
class UTaleQuestGetCollectionItemCountStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableCollection                    Collection;                                               // 0x0080(0x0020) (Edit)
	struct FQuestVariableInt                           Num;                                                      // 0x00A0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGetCollectionItemCountStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestGetParticipatingCrewsStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UTaleQuestGetParticipatingCrewsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuidArray                     CrewIds;                                                  // 0x0080(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGetParticipatingCrewsStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestGrantRewardStepDesc
// 0x0050 (0x00D0 - 0x0080)
class UTaleQuestGrantRewardStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardId;                                                 // 0x0080(0x0008) (Edit)
	class UClass*                                      Company;                                                  // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Id;                                                       // 0x0090(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldGrantToAlliedCrews;                                 // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FQuestVariablePlayerActor                   SpecificPlayerToAward;                                    // 0x00A8(0x0020) (Edit)
	struct FName                                       Feature;                                                  // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGrantRewardStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestPermanentPromptStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UTaleQuestPermanentPromptStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariablePrioritisedPrompt             Prompt;                                                   // 0x0080(0x0020) (Edit)
	TEnumAsByte<EPromptStartStop>                      StartOrStop;                                              // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestPermanentPromptStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestRunnableStepDesc
// 0x0068 (0x00E8 - 0x0080)
class UTaleQuestRunnableStepDesc : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0080(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestRunnableStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestFunctionStepLibrary
// 0x0090 (0x0178 - 0x00E8)
class UTaleQuestFunctionStepLibrary : public UTaleQuestRunnableStepDesc
{
public:
	class UFunction*                                   Function;                                                 // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FQuestVariable>          ParameterMappings;                                        // 0x00F0(0x0050) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0140(0x0030) MISSED OFFSET
	unsigned char                                      FunctionStepFlags;                                        // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0171(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFunctionStepLibrary"));
		return ptr;
	}

};


// Class Tales.TaleQuestActorFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestActorFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestActorFunctionLibrary"));
		return ptr;
	}


	class AActor* SpawnActor(class UClass* What, const struct FTransform& Where, bool TrackActor, bool AutomaticallyGatherForMigration);
	class AActor* ResolveActor(TAssetPtr<class AActor> ActorReference);
	static TScriptInterface<class UInterface> GetInterface(class AActor* Actor, class UClass* InterfaceClass);
	static struct FTransform GetActorTransform(class AActor* Actor);
};


// Class Tales.TaleQuestAnimationStepFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestAnimationStepFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAnimationStepFunctionLibrary"));
		return ptr;
	}


	static struct FPossessableSequence MakePosseableSequence(class AActor* ActorToPossess, const class FString& TrackNameToPossess);
};


// Class Tales.TaleQuestIntMathsFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestIntMathsFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestIntMathsFunctionLibrary"));
		return ptr;
	}


	static int Subtract_Int(int Left, int Right);
	static bool NotEquals(int Left, int Right);
	static int Multiply_Int(int Left, int Right);
	static int Modulus_Int(int Left, int Right);
	static bool LessThanOrEqual(int Left, int Right);
	static bool LessThan(int Left, int Right);
	static void Increment_Int(int* Value);
	static bool GreaterThanOrEqual(int Left, int Right);
	static bool GreaterThan(int Left, int Right);
	static bool Equals(int Left, int Right);
	static int Divide_Int(int Left, int Right);
	static void Decrement_Int(int* Value);
	static int Add_Int(int Left, int Right);
};


// Class Tales.TaleQuestNamedPointsFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestNamedPointsFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestNamedPointsFunctionLibrary"));
		return ptr;
	}


	static void GetNamedPointsFromGroup(TAssetPtr<class AActor> PointsContainer, const struct FName& GroupName, TEnumAsByte<ESpaceType> ReturnSpace, TArray<struct FOrientedPoint>* Points);
};


// Class Tales.TaleQuestNPCHideFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestNPCHideFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestNPCHideFunctionLibrary"));
		return ptr;
	}


	void FadeOut(class AActor* InActor);
	void FadeIn(class AActor* InActor);
};


// Class Tales.TaleQuestStoryFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestStoryFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStoryFunctionLibrary"));
		return ptr;
	}


	void WaitForStory(const struct FName& StoryName, bool ShouldBeActive);
	bool IsStoryActive(const struct FName& StoryName);
};


// Class Tales.TaleQuestStoryBranchFunctionLibrary
// 0x0048 (0x01C0 - 0x0178)
class UTaleQuestStoryBranchFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	class UTaleQuestStepDesc*                          Active;                                                   // 0x0180(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UTaleQuestStepDesc*                          Inactive;                                                 // 0x0188(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TScriptInterface<class UTaleQuestStepInterface>    Step;                                                     // 0x0190(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStoryBranchFunctionLibrary"));
		return ptr;
	}


	void BranchOnStory(const struct FName& StoryName);
};


// Class Tales.TaleQuestTransformMathsFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestTransformMathsFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestTransformMathsFunctionLibrary"));
		return ptr;
	}


	static struct FTransform ToWorld_Transform(const struct FTransform& RootTransform, const struct FTransform& RelativeTransform);
};


// Class Tales.TaleQuestTransfromConversionFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestTransfromConversionFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestTransfromConversionFunctionLibrary"));
		return ptr;
	}


	static struct FTransform FromVector(const struct FVector& InTranslation);
	static struct FTransform FromOrientedPoint(const struct FOrientedPoint& InOrientedPoint);
};


// Class Tales.TaleQuestUObjectFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestUObjectFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUObjectFunctionLibrary"));
		return ptr;
	}


	static bool IsValid(class UObject* Object);
};


// Class Tales.TaleQuestUtilityFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestUtilityFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUtilityFunctionLibrary"));
		return ptr;
	}


	void FailTale(const struct FText& FailureMessage);
};


// Class Tales.TaleQuestWaterVolumeFunctionLibrary
// 0x0000 (0x0178 - 0x0178)
class UTaleQuestWaterVolumeFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaterVolumeFunctionLibrary"));
		return ptr;
	}


	void SetExactWaterLevel(class AWaterVolume* WaterVolume, float WaterLevel);
	bool IsWaterVolumeFull(class AWaterVolume* WaterVolume);
	void EmptyWaterVolume(class AWaterVolume* WaterVolume);
	void AddWaterAmount(class AWaterVolume* WaterVolume, float AmountToAdd, float LerpRate);
};


// Class Tales.TaleQuestSelectEntryFromArrayStepDesc
// 0x0048 (0x00C8 - 0x0080)
class UTaleQuestSelectEntryFromArrayStepDesc : public UTaleQuestStepDesc
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                        // 0x0080(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FQuestVariableArray                         InputArray;                                               // 0x0088(0x0020) (Edit)
	struct FQuestVariableAny                           OutputEntry;                                              // 0x00A8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectEntryFromArrayStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestShipDiveStepDesc
// 0x0000 (0x0080 - 0x0080)
class UTaleQuestShipDiveStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestShipDiveStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestShipSurfaceStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestShipSurfaceStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              TimeToSurface;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestShipSurfaceStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestStartCameraFadeStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UTaleQuestStartCameraFadeStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              FromAlpha;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ToAlpha;                                                  // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeTimeInSeconds;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColour;                                               // 0x008C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFadeAudio;                                          // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HoldFadeWhenFinished;                                     // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStartCameraFadeStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestStructStepDescBase
// 0x0058 (0x00D8 - 0x0080)
class UTaleQuestStructStepDescBase : public UTaleQuestStepDesc
{
public:
	class UScriptStruct*                               Struct;                                                   // 0x0080(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TMap<struct FName, struct FName>                   PropertyMappings;                                         // 0x0088(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStructStepDescBase"));
		return ptr;
	}

};


// Class Tales.TaleQuestBreakStructStepDesc
// 0x0000 (0x00D8 - 0x00D8)
class UTaleQuestBreakStructStepDesc : public UTaleQuestStructStepDescBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestBreakStructStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestMakeStructStepDesc
// 0x0000 (0x00D8 - 0x00D8)
class UTaleQuestMakeStructStepDesc : public UTaleQuestStructStepDescBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMakeStructStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestTaskStepDescBase
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestTaskStepDescBase : public UTaleQuestStepDesc
{
public:
	class UTaleQuestStepDesc*                          Task;                                                     // 0x0080(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestTaskStepDescBase"));
		return ptr;
	}

};


// Class Tales.TaleQuestCrewTaskStepDesc
// 0x0020 (0x00A8 - 0x0088)
class UTaleQuestCrewTaskStepDesc : public UTaleQuestTaskStepDescBase
{
public:
	struct FQuestVariableGuid                          CrewId;                                                   // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCrewTaskStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestPersistentForEachCrewTaskStepDesc
// 0x0000 (0x0088 - 0x0088)
class UTaleQuestPersistentForEachCrewTaskStepDesc : public UTaleQuestTaskStepDescBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestPersistentForEachCrewTaskStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestToggleAmbientMigrationForServerStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestToggleAmbientMigrationForServerStepDesc : public UTaleQuestStepDesc
{
public:
	bool                                               AmbientMigrationAvailable;                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestToggleAmbientMigrationForServerStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateCheckpointStepDesc
// 0x0018 (0x0098 - 0x0080)
class UTaleQuestUpdateCheckpointStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardIdToAward;                                          // 0x0080(0x0008) (Edit)
	struct FName                                       CampaignIdToRemove;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Feature;                                                  // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateCheckpointStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForHandInStepDesc
// 0x0048 (0x00C8 - 0x0080)
class UTaleQuestWaitForHandInStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         HandInActor;                                              // 0x0080(0x0020) (Edit)
	class UClass*                                      SpecificItem;                                             // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableItemDescType                  HandInItem;                                               // 0x00A8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForHandInStepDesc"));
		return ptr;
	}

};


// Class Tales.TrackResponseCoordinatorStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UTrackResponseCoordinatorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableUObject                       CutsceneResponseCoordinator;                              // 0x0080(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TrackResponseCoordinatorStepDesc"));
		return ptr;
	}

};


// Class Tales.VisualiseLoggerEQSResultsTaleStepDesc
// 0x0040 (0x00C0 - 0x0080)
class UVisualiseLoggerEQSResultsTaleStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableArray                         ResultsArray;                                             // 0x0080(0x0020) (Edit)
	struct FQuestVariableVector                        SelectedResult;                                           // 0x00A0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.VisualiseLoggerEQSResultsTaleStepDesc"));
		return ptr;
	}

};


// Class Tales.WaitForActorOfInterestToUnregisterStepDesc
// 0x0040 (0x00C0 - 0x0080)
class UWaitForActorOfInterestToUnregisterStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      ActorOfInterestId;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       ActorOfInterestUnregisteredFailureMessage;                // 0x0088(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForActorOfInterestToUnregisterStepDesc"));
		return ptr;
	}

};


// Class Tales.WaitForHealthToReachFractionStepDesc
// 0x0010 (0x0090 - 0x0080)
class UWaitForHealthToReachFractionStepDesc : public UTaleQuestStepDesc
{
public:
	class AActor*                                      HealthOwner;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthFraction;                                           // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForHealthToReachFractionStepDesc"));
		return ptr;
	}

};


// Class Tales.WaitForItemPickupStepDesc
// 0x0040 (0x00C0 - 0x0080)
class UWaitForItemPickupStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Item;                                                     // 0x0080(0x0020) (Edit)
	struct FQuestVariableActor                         PickerUpper;                                              // 0x00A0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForItemPickupStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep
// 0x0178 (0x0210 - 0x0098)
class UTaleQuestSelectShipwreckLocationFromValidCandidatesStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0098(0x0058) MISSED OFFSET
	class UTaleQuestSelectorService*                   CachedSelectorService;                                    // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x118];                                     // 0x00F8(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc
// 0x0068 (0x00E8 - 0x0080)
class UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc : public UTaleQuestStepDesc
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                        // 0x0080(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FQuestVariableVectorArray                   InputArray;                                               // 0x0088(0x0020) (Edit)
	struct FQuestVariableVector                        OutputEntry;                                              // 0x00A8(0x0020) (Edit)
	struct FQuestVariableBool                          ShuffleLists;                                             // 0x00C8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc"));
		return ptr;
	}

};


// Class Tales.RemoveFlameOfFateTypeStepDesc
// 0x0010 (0x0090 - 0x0080)
class URemoveFlameOfFateTypeStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EFlameOfFateType>                      FlameOfFateTypeToRemove;                                  // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	class UClass*                                      LanternItemCategory;                                      // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RemoveFlameOfFateTypeStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestFlameOfFateService
// 0x0060 (0x00C0 - 0x0060)
class UTaleQuestFlameOfFateService : public UTaleQuestService
{
public:
	class UTaleQuestFlameOfFateServiceDesc*            ServiceDesc;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0068(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFlameOfFateService"));
		return ptr;
	}

};


// Class Tales.TaleQuestFlameOfFateServiceDesc
// 0x0010 (0x0038 - 0x0028)
class UTaleQuestFlameOfFateServiceDesc : public UTaleQuestServiceDesc
{
public:
	class UClass*                                      LanternItemCategory;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFlameOfFateType>                      FlameOfFateTypeToSet;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetFlameOnStart;                                          // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFlameOfFateServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddBountyMapStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAddBountyMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddBountyMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddBountyMapStepDesc
// 0x00B8 (0x0138 - 0x0080)
class UTaleQuestAddBountyMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0088(0x0020) (Edit)
	struct FQuestVariableText                          Location;                                                 // 0x00A8(0x0020) (Edit)
	struct FQuestVariableTextArray                     Description;                                              // 0x00C8(0x0020) (Edit)
	struct FQuestVariableBountyTargetArray             CaptainTargets;                                           // 0x00E8(0x0020) (Edit)
	struct FQuestVariableBountyTargetArray             CrewTargets;                                              // 0x0108(0x0020) (Edit)
	class UBountyMapLayout*                            CustomLayout;                                             // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideTreasureMapItemDesc;                              // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddBountyMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCargoRunMapStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAddCargoRunMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCargoRunMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddChecklistMapStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAddChecklistMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddChecklistMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCircleMapStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAddCircleMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCircleMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddMerchantMapStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAddMerchantMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddMerchantMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAddRiddleMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddXMarksMapStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAddXMarksMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddXMarksMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAdvanceRiddleMapStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestAdvanceRiddleMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAdvanceRiddleMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestMapService
// 0x00B0 (0x0110 - 0x0060)
class UTaleQuestMapService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0060(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMapService"));
		return ptr;
	}


	void UpdateMerchantMap(const struct FName& MapID, int Index, const struct FTaleQuestDeliverableItem& Deliverable);
	void AdvanceRiddleMap(const struct FName& MapID);
};


// Class Tales.TaleQuestMapServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestMapServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMapServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCargoRunMapStepDesc
// 0x0070 (0x00F0 - 0x0080)
class UTaleQuestAddCargoRunMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0088(0x0020) (Edit)
	struct FQuestVariableInt                           NumItems;                                                 // 0x00A8(0x0020) (Edit)
	struct FQuestVariableGuid                          NPCId;                                                    // 0x00C8(0x0020) (Edit)
	class UCargoRunMapLayout*                          Layout;                                                   // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCargoRunMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddChecklistMapStepDesc
// 0x00C0 (0x0140 - 0x0080)
class UTaleQuestAddChecklistMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       OverrideTreasureMapItemDesc;                              // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FQuestVariableText                          Title;                                                    // 0x0098(0x0020) (Edit)
	struct FQuestVariableText                          Description;                                              // 0x00B8(0x0020) (Edit)
	struct FQuestVariableDataAsset                     ChecklistItemsData;                                       // 0x00D8(0x0020) (Edit)
	struct FQuestVariableText                          Afternote;                                                // 0x00F8(0x0020) (Edit)
	struct FQuestVariableDataAsset                     Layout;                                                   // 0x0118(0x0020) (Edit)
	TEnumAsByte<EQuestMapIcon>                         RadialMiniIcon;                                           // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddChecklistMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCircleMapStepDesc
// 0x0050 (0x00D0 - 0x0080)
class UTaleQuestAddCircleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0088(0x0020) (Edit)
	struct FQuestVariableVector                        Location;                                                 // 0x00A8(0x0020) (Edit)
	float                                              CircleScale;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestMapIcon>                         RadialMiniIcon;                                           // 0x00CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCircleMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddMerchantMapStepDesc
// 0x0090 (0x0110 - 0x0080)
class UTaleQuestAddMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0088(0x0020) (Edit)
	struct FQuestVariableText                          DeliveryLocation;                                         // 0x00A8(0x0020) (Edit)
	struct FQuestVariableText                          DeliverByTime;                                            // 0x00C8(0x0020) (Edit)
	struct FQuestVariableMerchantItemArray             Items;                                                    // 0x00E8(0x0020) (Edit)
	class UMerchantMapLayout*                          Layout;                                                   // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddMerchantMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapBaseStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UTaleQuestAddRiddleMapBaseStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapBaseStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapStepDesc
// 0x0010 (0x00B8 - 0x00A8)
class UTaleQuestAddRiddleMapStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	TArray<struct FText>                               Text;                                                     // 0x00A8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc
// 0x0020 (0x00C8 - 0x00A8)
class UTaleQuestAddRiddleMapUsingVariableStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	struct FQuestVariableTextArray                     TextVariable;                                             // 0x00A8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddXMarksMapStepDesc
// 0x0088 (0x0108 - 0x0080)
class UTaleQuestAddXMarksMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0088(0x0020) (Edit)
	struct FQuestVariableVector                        Location;                                                 // 0x00A8(0x0020) (Edit)
	struct FQuestVariableBool                          IsUnderground;                                            // 0x00C8(0x0020) (Edit)
	struct FTaleQuestVariableTreasureMapItemDescType   TreasureMapOverride;                                      // 0x00E8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddXMarksMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAdvanceRiddleMapStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestAdvanceRiddleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAdvanceRiddleMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestRemoveMapStep
// 0x0008 (0x00A0 - 0x0098)
class UTaleQuestRemoveMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestRemoveMapStepDesc*                 StepDesc;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestRemoveMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestRemoveMapStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UTaleQuestRemoveMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableVector                        Location;                                                 // 0x0088(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestRemoveMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateMerchantMapStep
// 0x0008 (0x00A0 - 0x0098)
class UTaleQuestUpdateMerchantMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestUpdateMerchantMapStepDesc*         Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateMerchantMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateMerchantMapStepDesc
// 0x0048 (0x00C8 - 0x0080)
class UTaleQuestUpdateMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableMerchantItem                  Item;                                                     // 0x0088(0x0020) (Edit)
	struct FQuestVariableInt                           Index;                                                    // 0x00A8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateMerchantMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForChecklistMapCompletionStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestWaitForChecklistMapCompletionStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapID;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForChecklistMapCompletionStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
