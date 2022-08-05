// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_VisitCompanyShop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.HasAlreadyVisitedCompanyShop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasVistedCompanyShop           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_VisitCompanyShop_C::HasAlreadyVisitedCompanyShop(bool* HasVistedCompanyShop)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.HasAlreadyVisitedCompanyShop"));

	struct
	{
		bool                           HasVistedCompanyShop;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasVistedCompanyShop != nullptr)
		*HasVistedCompanyShop = params.HasVistedCompanyShop;
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.SetCompanyPromptInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Company                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AccessKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FPrioritisedPromptWithHandle Prompt                         (Parm)
// class UClass*                  CompanyRankDesc                (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_VisitCompanyShop_C::SetCompanyPromptInfo(class UClass* Company, class UClass* AccessKey, const struct FPrioritisedPromptWithHandle& Prompt, class UClass* CompanyRankDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.SetCompanyPromptInfo"));

	struct
	{
		class UClass*                  Company;
		class UClass*                  AccessKey;
		struct FPrioritisedPromptWithHandle Prompt;
		class UClass*                  CompanyRankDesc;
	} params;

	params.Company = Company;
	params.AccessKey = AccessKey;
	params.Prompt = Prompt;
	params.CompanyRankDesc = CompanyRankDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.OnTreasureChestSold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTreasureChestSoldClientPredictionEvent Event                          (Parm)

void UBP_Prompt_VisitCompanyShop_C::OnTreasureChestSold(const struct FTreasureChestSoldClientPredictionEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.OnTreasureChestSold"));

	struct
	{
		struct FTreasureChestSoldClientPredictionEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_VisitCompanyShop_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_VisitCompanyShop_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_VisitCompanyShop_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.TreasureChestSoldPredictedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTreasureChestSoldClientPredictionEvent Event                          (Parm)

void UBP_Prompt_VisitCompanyShop_C::TreasureChestSoldPredictedEvent(const struct FTreasureChestSoldClientPredictionEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.TreasureChestSoldPredictedEvent"));

	struct
	{
		struct FTreasureChestSoldClientPredictionEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.ExecuteUbergraph_BP_Prompt_VisitCompanyShop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_VisitCompanyShop_C::ExecuteUbergraph_BP_Prompt_VisitCompanyShop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.ExecuteUbergraph_BP_Prompt_VisitCompanyShop"));

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
