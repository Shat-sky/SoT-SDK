// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CT_TutorialProgress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetCompanyTutorials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CompanyName                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBP_CT_VoyageProgress_C*> CompanyTutorials               (Parm, OutParm, ZeroConstructor)

void UBP_CT_TutorialProgress_C::GetCompanyTutorials(const struct FName& CompanyName, TArray<class UBP_CT_VoyageProgress_C*>* CompanyTutorials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetCompanyTutorials");

	UBP_CT_TutorialProgress_C_GetCompanyTutorials_Params params;
	params.CompanyName = CompanyName;

	UObject::ProcessEvent(fn, &params);

	if (CompanyTutorials != nullptr)
		*CompanyTutorials = params.CompanyTutorials;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetOrderOfSoulsTutorials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_CT_VoyageProgress_C*> Result                         (Parm, OutParm, ZeroConstructor)

void UBP_CT_TutorialProgress_C::GetOrderOfSoulsTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetOrderOfSoulsTutorials");

	UBP_CT_TutorialProgress_C_GetOrderOfSoulsTutorials_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetMerchantAllianceTutorials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_CT_VoyageProgress_C*> Result                         (Parm, OutParm, ZeroConstructor)

void UBP_CT_TutorialProgress_C::GetMerchantAllianceTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetMerchantAllianceTutorials");

	UBP_CT_TutorialProgress_C_GetMerchantAllianceTutorials_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetGoldhoarderTutorials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_CT_VoyageProgress_C*> Result                         (Parm, OutParm, ZeroConstructor)

void UBP_CT_TutorialProgress_C::GetGoldhoarderTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetGoldhoarderTutorials");

	UBP_CT_TutorialProgress_C_GetGoldhoarderTutorials_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.AreAllTutorialsOnState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::AreAllTutorialsOnState(TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.AreAllTutorialsOnState");

	UBP_CT_TutorialProgress_C_AreAllTutorialsOnState_Params params;
	params.QueryVoyageState = QueryVoyageState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.IsAnyTutorialOnState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::IsAnyTutorialOnState(TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.IsAnyTutorialOnState");

	UBP_CT_TutorialProgress_C_IsAnyTutorialOnState_Params params;
	params.QueryVoyageState = QueryVoyageState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.FindTutorialProgressObject
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   VoyageName                     (Parm)
// class UBP_CT_VoyageProgress_C* Voyage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::FindTutorialProgressObject(const struct FText& VoyageName, class UBP_CT_VoyageProgress_C** Voyage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.FindTutorialProgressObject");

	UBP_CT_TutorialProgress_C_FindTutorialProgressObject_Params params;
	params.VoyageName = VoyageName;

	UObject::ProcessEvent(fn, &params);

	if (Voyage != nullptr)
		*Voyage = params.Voyage;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.CreateTutorialProgressTracker
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  VoyageProposalDesc             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TaleRankDesc                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ExclusionRank                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBP_CT_VoyageProgress_C* Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::CreateTutorialProgressTracker(class UClass* VoyageProposalDesc, class UClass* TaleRankDesc, class UClass* ExclusionRank, bool Disable, class UBP_CT_VoyageProgress_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.CreateTutorialProgressTracker");

	UBP_CT_TutorialProgress_C_CreateTutorialProgressTracker_Params params;
	params.VoyageProposalDesc = VoyageProposalDesc;
	params.TaleRankDesc = TaleRankDesc;
	params.ExclusionRank = ExclusionRank;
	params.Disable = Disable;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Start
// (BlueprintCallable, BlueprintEvent)

void UBP_CT_TutorialProgress_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Start");

	UBP_CT_TutorialProgress_C_Start_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Change Voyage Progress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   VoyageName                     (Parm)
// TEnumAsByte<ETutorialVoyageInternalState> New_Progress_State             (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::Change_Voyage_Progress(const struct FText& VoyageName, TEnumAsByte<ETutorialVoyageInternalState> New_Progress_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Change Voyage Progress");

	UBP_CT_TutorialProgress_C_Change_Voyage_Progress_Params params;
	params.VoyageName = VoyageName;
	params.New_Progress_State = New_Progress_State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.ExecuteUbergraph_BP_CT_TutorialProgress
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::ExecuteUbergraph_BP_CT_TutorialProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.ExecuteUbergraph_BP_CT_TutorialProgress");

	UBP_CT_TutorialProgress_C_ExecuteUbergraph_BP_CT_TutorialProgress_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
