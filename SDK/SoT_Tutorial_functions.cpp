// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tutorial_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   VoyageName                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompanyTutorialVoyageProgress::IsSameVoyage(const struct FText& VoyageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage");

	UCompanyTutorialVoyageProgress_IsSameVoyage_Params params;
	params.VoyageName = VoyageName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  VoyageProposalDescClass        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TaleRankDescClass              (Parm, ZeroConstructor, IsPlainOldData)

void UCompanyTutorialVoyageProgress::AssignVoyage(class UClass* VoyageProposalDescClass, class UClass* TaleRankDescClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage");

	UCompanyTutorialVoyageProgress_AssignVoyage_Params params;
	params.VoyageProposalDescClass = VoyageProposalDescClass;
	params.TaleRankDescClass = TaleRankDescClass;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer");

	UTutorial2019Component_ReceiveTutorial2019BeginPlayOnServer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient");

	UTutorial2019Component_ReceiveTutorial2019BeginPlayOnClient_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer
// (Final, Native, Private)
// Parameters:
// bool                           OldIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UTutorial2019Component::OnRep_IsEnabledByServer(bool OldIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer");

	UTutorial2019Component_OnRep_IsEnabledByServer_Params params;
	params.OldIsEnabled = OldIsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ForceDisableComponent_Blueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint");

	UTutorial2019Component_ForceDisableComponent_Blueprint_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.BeginOnServer
// (Final, Native, Public, BlueprintCallable)

void UTutorial2019Component::BeginOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.BeginOnServer");

	UTutorial2019Component_BeginOnServer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  CharacterToTeleport            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTeleportLocation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTeleportLocation UTutorial2019FunctionLibrary::STATIC_GetNearestOnboardingSpawnPoint(class AActor* CharacterToTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint");

	UTutorial2019FunctionLibrary_GetNearestOnboardingSpawnPoint_Params params;
	params.CharacterToTeleport = CharacterToTeleport;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AccessKey                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UTutorialHelpersBlueprintLibrary::STATIC_FirePromptCompleted(class UClass* AccessKey, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted");

	UTutorialHelpersBlueprintLibrary_FirePromptCompleted_Params params;
	params.AccessKey = AccessKey;
	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass
// (Final, Native, Private)

void UTutorialManager::OnRep_SelectedTutorialClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass");

	UTutorialManager_OnRep_SelectedTutorialClass_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.CompanyOnboardingStarter.HasPrerequisites
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompanyOnboardingStarter::HasPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyOnboardingStarter.HasPrerequisites");

	UCompanyOnboardingStarter_HasPrerequisites_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
