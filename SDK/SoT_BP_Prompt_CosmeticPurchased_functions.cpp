// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CosmeticPurchased_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::OnPlayerEntitlementUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AccessKey                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          CategoryType                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPrioritisedPromptWithHandle PromptCosmeticPurchased        (Parm)
// struct FPrioritisedPromptWithHandle PromptVisitCustomizationChest  (Parm)

void UBP_Prompt_CosmeticPurchased_C::SetCosmeticPromptInfo(class UClass* AccessKey, const struct FPrioritisedPromptWithHandle& PromptCosmeticPurchased, const struct FPrioritisedPromptWithHandle& PromptVisitCustomizationChest, TArray<class UClass*>* CategoryType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo"));

	struct
	{
		class UClass*                  AccessKey;
		TArray<class UClass*>          CategoryType;
		struct FPrioritisedPromptWithHandle PromptCosmeticPurchased;
		struct FPrioritisedPromptWithHandle PromptVisitCustomizationChest;
	} params;

	params.AccessKey = AccessKey;
	params.PromptCosmeticPurchased = PromptCosmeticPurchased;
	params.PromptVisitCustomizationChest = PromptVisitCustomizationChest;

	UObject::ProcessEvent(fn, &params);

	if (CategoryType != nullptr)
		*CategoryType = params.CategoryType;
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FOfferPurchasedEvent Event                          (Parm)

void UBP_Prompt_CosmeticPurchased_C::OnOfferPurchased(const struct FAthena_FOfferPurchasedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased"));

	struct
	{
		struct FAthena_FOfferPurchasedEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FOfferPurchasedEvent Event                          (Parm)

void UBP_Prompt_CosmeticPurchased_C::OfferPurchasedEvent(const struct FAthena_FOfferPurchasedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent"));

	struct
	{
		struct FAthena_FOfferPurchasedEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FShopClosedEvent Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CosmeticPurchased_C::ShopClosedEvent(const struct FAthena_FShopClosedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent"));

	struct
	{
		struct FAthena_FShopClosedEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events
// (BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::Unregister_HUD_Events()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CosmeticPurchased_C::OnEndPlay_HUD(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerEntitlementUpdatedEvent Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CosmeticPurchased_C::PlayerEntitlementUpdated(const struct FPlayerEntitlementUpdatedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated"));

	struct
	{
		struct FPlayerEntitlementUpdatedEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CosmeticPurchased_C::ExecuteUbergraph_BP_Prompt_CosmeticPurchased(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
