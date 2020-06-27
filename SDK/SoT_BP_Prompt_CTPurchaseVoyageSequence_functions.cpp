// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CTPurchaseVoyageSequence_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShowAppropriateMerchantPrompt
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ShowAppropriateMerchantPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShowAppropriateMerchantPrompt");

	UBP_Prompt_CTPurchaseVoyageSequence_C_ShowAppropriateMerchantPrompt_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetIsHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetIsHidden(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetIsHidden");

	UBP_Prompt_CTPurchaseVoyageSequence_C_SetIsHidden_Params params;
	params.NewHidden = NewHidden;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadiusFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftGoldhoarderRadiusFunc(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadiusFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerLeftGoldhoarderRadiusFunc_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadiusFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredGoldhoarderRadiusFunc(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadiusFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerEnteredGoldhoarderRadiusFunc_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadiusFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftOutpostRadiusFunc(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadiusFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerLeftOutpostRadiusFunc_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadiusFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredOutpostRadiusFunc(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadiusFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerEnteredOutpostRadiusFunc_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchasedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCompanyRankProgressUpdateNotification InputPin                       (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnCompanyRankPurchasedFunc(const struct FEventCompanyRankProgressUpdateNotification& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchasedFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnCompanyRankPurchasedFunc_Params params;
	params.InputPin = InputPin;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyageFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerWithdrewVoyage EventPlayerWithdrewVoyage      (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerWithdrewVoyageFunc(const struct FEventPlayerWithdrewVoyage& EventPlayerWithdrewVoyage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyageFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerWithdrewVoyageFunc_Params params;
	params.EventPlayerWithdrewVoyage = EventPlayerWithdrewVoyage;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventoryFunc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageProposalDiscardEvent VoyageProposalDiscardEvent     (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageDiscardFromInventoryFunc(const struct FVoyageProposalDiscardEvent& VoyageProposalDiscardEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventoryFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageDiscardFromInventoryFunc_Params params;
	params.VoyageProposalDiscardEvent = VoyageProposalDiscardEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyageFunc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageProposalSelectedEvent VoyageProposalSelectedEvent    (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerProposedVoyageFunc(const struct FVoyageProposalSelectedEvent& VoyageProposalSelectedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyageFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerProposedVoyageFunc_Params params;
	params.VoyageProposalSelectedEvent = VoyageProposalSelectedEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchasedFunc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOfferPurchasedEvent    OfferPurchasedEvent            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnOfferPurchasedFunc(const struct FOfferPurchasedEvent& OfferPurchasedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchasedFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnOfferPurchasedFunc_Params params;
	params.OfferPurchasedEvent = OfferPurchasedEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyageFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageCancelled        VoyageCancelled                (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerCancelledVoyageFunc(const struct FVoyageCancelled& VoyageCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyageFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerCancelledVoyageFunc_Params params;
	params.VoyageCancelled = VoyageCancelled;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShipFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerExitedShipFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShipFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerExitedShipFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShipFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventEnteredShip       EventEnteredShip               (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnSomethingEnteredShipFunc(const struct FEventEnteredShip& EventEnteredShip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShipFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnSomethingEnteredShipFunc_Params params;
	params.EventEnteredShip = EventEnteredShip;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompletedFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageComplete         VoyageComplete                 (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageCompletedFunc(const struct FVoyageComplete& VoyageComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompletedFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageCompletedFunc_Params params;
	params.VoyageComplete = VoyageComplete;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegunFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageBegun            VoyageBegun                    (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageBegunFunc(const struct FVoyageBegun& VoyageBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegunFunc");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageBegunFunc_Params params;
	params.VoyageBegun = VoyageBegun;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsNearAnyShopkeeper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::IsNearAnyShopkeeper(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsNearAnyShopkeeper");

	UBP_Prompt_CTPurchaseVoyageSequence_C_IsNearAnyShopkeeper_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.AreTutorialsForceDisabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::AreTutorialsForceDisabled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.AreTutorialsForceDisabled");

	UBP_Prompt_CTPurchaseVoyageSequence_C_AreTutorialsForceDisabled_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsCurrentlyControlledCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::IsCurrentlyControlledCharacter(class AActor* Actor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsCurrentlyControlledCharacter");

	UBP_Prompt_CTPurchaseVoyageSequence_C_IsCurrentlyControlledCharacter_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowMerchantAllianceCompanyPrompts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowMerchantAllianceCompanyPrompts(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowMerchantAllianceCompanyPrompts");

	UBP_Prompt_CTPurchaseVoyageSequence_C_ShouldShowMerchantAllianceCompanyPrompts_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowOrderOfSoulsCompanyPrompts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowOrderOfSoulsCompanyPrompts(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowOrderOfSoulsCompanyPrompts");

	UBP_Prompt_CTPurchaseVoyageSequence_C_ShouldShowOrderOfSoulsCompanyPrompts_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllOutpostOverlapActors
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ClearAllOutpostOverlapActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllOutpostOverlapActors");

	UBP_Prompt_CTPurchaseVoyageSequence_C_ClearAllOutpostOverlapActors_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowGoldHoarderCompanyPrompts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowGoldHoarderCompanyPrompts(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowGoldHoarderCompanyPrompts");

	UBP_Prompt_CTPurchaseVoyageSequence_C_ShouldShowGoldHoarderCompanyPrompts_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllGoldHoarderOverlapActors
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ClearAllGoldHoarderOverlapActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllGoldHoarderOverlapActors");

	UBP_Prompt_CTPurchaseVoyageSequence_C_ClearAllGoldHoarderOverlapActors_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetGoldHoardersLocations
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         GoldHoarderLocations           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetGoldHoardersLocations(TArray<struct FVector>* GoldHoarderLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetGoldHoardersLocations");

	UBP_Prompt_CTPurchaseVoyageSequence_C_SetGoldHoardersLocations_Params params;

	UObject::ProcessEvent(fn, &params);

	if (GoldHoarderLocations != nullptr)
		*GoldHoarderLocations = params.GoldHoarderLocations;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Evaluate");

	UBP_Prompt_CTPurchaseVoyageSequence_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Complete");

	UBP_Prompt_CTPurchaseVoyageSequence_C_Complete_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOutposts
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           OutpostNames                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetOutposts(TArray<struct FName>* OutpostNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOutposts");

	UBP_Prompt_CTPurchaseVoyageSequence_C_SetOutposts_Params params;

	UObject::ProcessEvent(fn, &params);

	if (OutpostNames != nullptr)
		*OutpostNames = params.OutpostNames;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UninitializeImplementable
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::UninitializeImplementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UninitializeImplementable");

	UBP_Prompt_CTPurchaseVoyageSequence_C_UninitializeImplementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PostInitialize");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PostInitialize_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOrderOfSoulsLocations
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Order_of_Souls_Locations       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetOrderOfSoulsLocations(TArray<struct FVector>* Order_of_Souls_Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOrderOfSoulsLocations");

	UBP_Prompt_CTPurchaseVoyageSequence_C_SetOrderOfSoulsLocations_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Order_of_Souls_Locations != nullptr)
		*Order_of_Souls_Locations = params.Order_of_Souls_Locations;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetMerchantAllianceLocations
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Merchant_Alliance_Locations    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetMerchantAllianceLocations(TArray<struct FVector>* Merchant_Alliance_Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetMerchantAllianceLocations");

	UBP_Prompt_CTPurchaseVoyageSequence_C_SetMerchantAllianceLocations_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Merchant_Alliance_Locations != nullptr)
		*Merchant_Alliance_Locations = params.Merchant_Alliance_Locations;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_CTPurchaseVoyageSequence_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_CTPurchaseVoyageSequence_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_CTPurchaseVoyageSequence_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_CTPurchaseVoyageSequence_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ForceDisableTutorials
// (BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ForceDisableTutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ForceDisableTutorials");

	UBP_Prompt_CTPurchaseVoyageSequence_C_ForceDisableTutorials_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Unregister HUD Events
// (BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::Unregister_HUD_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Unregister HUD Events");

	UBP_Prompt_CTPurchaseVoyageSequence_C_Unregister_HUD_Events_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOfferPurchasedEvent    Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnOfferPurchased(const struct FOfferPurchasedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchased");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnOfferPurchased_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageProposalSelectedEvent Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerProposedVoyage(const struct FVoyageProposalSelectedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyage");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerProposedVoyage_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageProposalDiscardEvent Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageDiscardFromInventory(const struct FVoyageProposalDiscardEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventory");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageDiscardFromInventory_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageBegun            Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageBegun(const struct FVoyageBegun& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegun");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageBegun_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageComplete         Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageCompleted(const struct FVoyageComplete& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompleted");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnVoyageCompleted_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventEnteredShip       Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnSomethingEnteredShip(const struct FEventEnteredShip& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShip");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnSomethingEnteredShip_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventExitedShip        Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerExitedShip(const struct FEventExitedShip& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShip");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerExitedShip_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInZone                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftOutpostRadius(class AActor* ActorInZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadius");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerLeftOutpostRadius_Params params;
	params.ActorInZone = ActorInZone;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInZone                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredOutpostRadius(class AActor* ActorInZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadius");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerEnteredOutpostRadius_Params params;
	params.ActorInZone = ActorInZone;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInZone                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftGoldhoarderRadius(class AActor* ActorInZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadius");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerLeftGoldhoarderRadius_Params params;
	params.ActorInZone = ActorInZone;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInZone                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredGoldhoarderRadius(class AActor* ActorInZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadius");

	UBP_Prompt_CTPurchaseVoyageSequence_C_PlayerEnteredGoldhoarderRadius_Params params;
	params.ActorInZone = ActorInZone;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerWithdrewVoyage Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerWithdrewVoyage(const struct FEventPlayerWithdrewVoyage& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyage");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerWithdrewVoyage_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageCancelled        Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerCancelledVoyage(const struct FVoyageCancelled& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyage");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnPlayerCancelledVoyage_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCompanyRankProgressUpdateNotification Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnCompanyRankPurchased(const struct FEventCompanyRankProgressUpdateNotification& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchased");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnCompanyRankPurchased_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnEndPlay_HUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnEndPlay_HUD(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnEndPlay_HUD");

	UBP_Prompt_CTPurchaseVoyageSequence_C_OnEndPlay_HUD_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence");

	UBP_Prompt_CTPurchaseVoyageSequence_C_ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
