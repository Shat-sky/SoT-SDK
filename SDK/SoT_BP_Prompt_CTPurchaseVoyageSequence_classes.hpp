#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CTPurchaseVoyageSequence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C
// 0x0734 (0x084C - 0x0118)
class UBP_Prompt_CTPurchaseVoyageSequence_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TriggerVolumeRadius;                                      // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InsideGoldHoardersRadius;                                 // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AOverlapTriggerActor*>                GoldHoarderOverlapActors;                                 // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AOverlapTriggerActor*>                OutpostOverlapActors;                                     // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              OutpostRadiusReduction;                                   // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_GoToVendors;                                       // 0x0150(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToGoldhoarders;                                  // 0x01B8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToOrderOfSouls;                                  // 0x0220(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GoToMerchantAlliance;                              // 0x0288(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_ProposeVoyage;                                     // 0x02F0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VoteOnVoyage;                                      // 0x0358(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_BoardShip;                                         // 0x03C0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VisitSignpost_GH;                                  // 0x0428(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VisitSignpost_MA;                                  // 0x0490(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VisitSignpost_OOS;                                 // 0x04F8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_OfferPurchased;                                    // 0x0560(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageProposalDiscarded;                           // 0x05A8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageProposed;                                    // 0x05F0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageBegun;                                       // 0x0638(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageComplete;                                    // 0x0680(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerEnteredShip;                                 // 0x06C8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerExitedShip;                                  // 0x0710(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerWithdrewVoyage;                              // 0x0758(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_VoyageCancelled;                                   // 0x07A0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_InsideOutpostRadius;                                // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_InsideGoldhoardersRadius;                           // 0x07E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_InsideOrderOfSouls;                                 // 0x07EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_InsideMerchantAllianceRadius;                       // 0x07EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_OnShip;                                             // 0x07EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_IsHidden;                                           // 0x07ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_IsTutorialForceDisabled;                            // 0x07EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_SeenSignpostPrompt;                                 // 0x07EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_CT_TutorialProgress_C*                   CompanyTutorialProgress;                                  // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      Handle_CompanyRankPurchased;                              // 0x07F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFeatureFlag                                FeatureName;                                              // 0x0840(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C"));
		return ptr;
	}


	void ShowAppropriateSignpostPrompt();
	void ShowAppropriateMerchantPrompt();
	void SetIsHidden(bool NewHidden);
	void PlayerLeftGoldhoarderRadiusFunc(class AActor* Actor);
	void PlayerEnteredGoldhoarderRadiusFunc(class AActor* Actor);
	void PlayerLeftOutpostRadiusFunc(class AActor* Actor);
	void PlayerEnteredOutpostRadiusFunc(class AActor* Actor);
	void OnCompanyRankPurchasedFunc(const struct FEventCompanyRankProgressUpdateNotification& InputPin);
	void OnPlayerWithdrewVoyageFunc(const struct FEventPlayerWithdrewVoyage& EventPlayerWithdrewVoyage);
	void OnVoyageDiscardFromInventoryFunc(const struct FVoyageProposalDiscardEvent& VoyageProposalDiscardEvent);
	void OnPlayerProposedVoyageFunc(const struct FVoyageProposalSelectedEvent& VoyageProposalSelectedEvent);
	void OnOfferPurchasedFunc(const struct FAthena_FOfferPurchasedEvent& OfferPurchasedEvent);
	void OnPlayerCancelledVoyageFunc(const struct FVoyageCancelled& VoyageCancelled);
	void OnPlayerExitedShipFunc();
	void OnSomethingEnteredShipFunc(const struct FEventEnteredShip& EventEnteredShip);
	void OnVoyageCompletedFunc(const struct FVoyageComplete& VoyageComplete);
	void OnVoyageBegunFunc(const struct FVoyageBegun& VoyageBegun);
	void IsNearAnyShopkeeper(bool* Result);
	void AreTutorialsForceDisabled(bool* Result);
	void IsCurrentlyControlledCharacter(class AActor* Actor, bool* Result);
	void ShouldShowMerchantAllianceCompanyPrompts(bool* Result);
	void ShouldShowOrderOfSoulsCompanyPrompts(bool* Result);
	void ClearAllOutpostOverlapActors();
	void ShouldShowGoldHoarderCompanyPrompts(bool* Result);
	void ClearAllGoldHoarderOverlapActors();
	void SetGoldHoardersLocations(TArray<struct FVector>* GoldHoarderLocations);
	void Evaluate();
	void Complete();
	void SetOutposts(TArray<struct FName>* OutpostNames);
	void UninitializeImplementable();
	void PostInitialize();
	void SetOrderOfSoulsLocations(TArray<struct FVector>* Order_of_Souls_Locations);
	void SetMerchantAllianceLocations(TArray<struct FVector>* Merchant_Alliance_Locations);
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterOtherEvents_Implementable();
	void RegisterOtherEvents_Implementable();
	void ForceDisableTutorials();
	void Unregister_HUD_Events();
	void OnOfferPurchased(const struct FAthena_FOfferPurchasedEvent& Event);
	void OnPlayerProposedVoyage(const struct FVoyageProposalSelectedEvent& Event);
	void OnVoyageDiscardFromInventory(const struct FVoyageProposalDiscardEvent& Event);
	void OnVoyageBegun(const struct FVoyageBegun& Event);
	void OnVoyageCompleted(const struct FVoyageComplete& Event);
	void OnSomethingEnteredShip(const struct FEventEnteredShip& Event);
	void OnPlayerExitedShip(const struct FEventExitedShip& Event);
	void PlayerLeftOutpostRadius(class AActor* ActorInZone);
	void PlayerEnteredOutpostRadius(class AActor* ActorInZone);
	void PlayerLeftGoldhoarderRadius(class AActor* ActorInZone);
	void PlayerEnteredGoldhoarderRadius(class AActor* ActorInZone);
	void OnPlayerWithdrewVoyage(const struct FEventPlayerWithdrewVoyage& Event);
	void OnPlayerCancelledVoyage(const struct FVoyageCancelled& Event);
	void OnCompanyRankPurchased(const struct FEventCompanyRankProgressUpdateNotification& Event);
	void OnEndPlay_HUD(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
