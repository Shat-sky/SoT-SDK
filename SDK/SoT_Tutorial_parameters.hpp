#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage
struct UCompanyTutorialVoyageProgress_IsSameVoyage_Params
{
	struct FText                                       VoyageName;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage
struct UCompanyTutorialVoyageProgress_AssignVoyage_Params
{
	class UClass*                                      VoyageProposalDescClass;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TaleRankDescClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer
struct UTutorial2019Component_ReceiveTutorial2019BeginPlayOnServer_Params
{
};

// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient
struct UTutorial2019Component_ReceiveTutorial2019BeginPlayOnClient_Params
{
};

// Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer
struct UTutorial2019Component_OnRep_IsEnabledByServer_Params
{
	bool                                               OldIsEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint
struct UTutorial2019Component_ForceDisableComponent_Blueprint_Params
{
};

// Function Tutorial.Tutorial2019Component.BeginOnServer
struct UTutorial2019Component_BeginOnServer_Params
{
};

// Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint
struct UTutorial2019FunctionLibrary_GetNearestOnboardingSpawnPoint_Params
{
	class AActor*                                      CharacterToTeleport;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTeleportLocation                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted
struct UTutorialHelpersBlueprintLibrary_FirePromptCompleted_Params
{
	class UClass*                                      AccessKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass
struct UTutorialManager_OnRep_SelectedTutorialClass_Params
{
};

// Function Tutorial.CompanyOnboardingStarter.HasPrerequisites
struct UCompanyOnboardingStarter_HasPrerequisites_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
