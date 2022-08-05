#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_BootyStorage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C
// 0x02E8 (0x0400 - 0x0118)
class UBP_PromptCoordinator_BootyStorage_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               ShowLootPrompt;                                           // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowMermaidPrompt;                                        // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasUsedStatue;                                            // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasRetrievedLoot;                                         // 0x0123(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                MermaidPrompt;                                            // 0x0128(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                LootPrompt;                                               // 0x0190(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CrewStorageChangedHandle;                                 // 0x01F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CrewStorageFullHandle;                                    // 0x0240(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      ItemsRetrievedHandle;                                     // 0x0288(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      RetrieveActorHandle;                                      // 0x02D0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      WieldedEventHandle;                                       // 0x0318(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      PromptKey;                                                // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AWieldableItem*                              CurrentlyWieldedItem;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      StowedEventHandle;                                        // 0x0370(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      RetrieveActorDespawnHandle;                               // 0x03B8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C"));
		return ptr;
	}


	void OnBootyRetrieveActorDespawned();
	void OnStowedFunc(const struct FEventObjectStowed& Event);
	void OnBootyRetrieveActorSpawned();
	void CrewHasLootToRetrieve(bool* HasTreasure);
	void IsInSunkenKingdom(bool* InSunkenKingdom);
	void Reset();
	void OnCrewStorageUpdateFunc(const struct FEventOnCrewStorageUpdate& Event);
	void OnCrewStorageFullFunc(const struct FEventOnCrewStorageFull& Event);
	void OnWieldedFunc(const struct FAthena_FEventObjectWielded& Object);
	void PostInitialize();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Uninitialize_Implementable();
	void SetPromptComplete();
	void ResetLootPrompt();
	void ResetMermaidPrompt();
	void OnStowed(const struct FEventObjectStowed& Event);
	void OnWielded(const struct FAthena_FEventObjectWielded& Object);
	void OnCrewStorageChange_Event(const struct FEventOnCrewStorageFull& Event);
	void OnCrewStorageFull_Event(const struct FEventOnCrewStorageUpdate& Event);
	void OnItemsRetrieved_Event(const struct FEventItemsRetrieved& Event);
	void OnBootyActorDespawned_Event(const struct FRetrieveBootyActorDespawnedEvent& Event);
	void OnBootyActorSpawned_Event(const struct FRetrieveBootyActorSpawnedEvent& Event);
	void ExecuteUbergraph_BP_PromptCoordinator_BootyStorage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif