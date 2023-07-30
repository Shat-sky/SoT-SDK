#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CosmeticPurchased_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C
// 0x0228 (0x0360 - 0x0138)
class UBP_Prompt_CosmeticPurchased_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_OfferPurchasedEvent;                               // 0x0140(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_ShopClosedEvent;                                   // 0x0198(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_PlayerEntitlementUpdatedEvent;                     // 0x01F0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_CosmeticPurchased;                                 // 0x0248(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VisitCustomizationChest;                           // 0x02B8(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AccessKey;                                                // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              CategoryTypes;                                            // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              PurchasedEntitlementIds;                                  // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DelayUntilPromptDisplays;                                 // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenPrompts;                                      // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PromptDisplayDuration;                                    // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CosmeticPurchased;                                        // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptInfoSet;                                            // 0x035D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisplayingPrompts;                                        // 0x035E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProcessingPurchase;                                       // 0x035F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C"));
		return ptr;
	}


	void OnPlayerEntitlementUpdated();
	void SetCosmeticPromptInfo(class UClass* AccessKey, const struct FPrioritisedPromptWithHandle& PromptCosmeticPurchased, const struct FPrioritisedPromptWithHandle& PromptVisitCustomizationChest, TArray<class UClass*>* CategoryType);
	void OnOfferPurchased(const struct FAthena_FOfferPurchasedEvent& Event);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void OfferPurchasedEvent(const struct FAthena_FOfferPurchasedEvent& Event);
	void ShopClosedEvent(const struct FAthena_FShopClosedEvent& Event);
	void PostInitialize();
	void Unregister_HUD_Events();
	void OnEndPlay_HUD(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PlayerEntitlementUpdated(const struct FPlayerEntitlementUpdatedEvent& Event);
	void ExecuteUbergraph_BP_Prompt_CosmeticPurchased(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
