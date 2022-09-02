// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Mysteries_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_TitleText
// (Final, Native, Private)

void UAbandonedNoteWeightedTextSourceComponent::OnRep_TitleText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_TitleText"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_ClueText
// (Final, Native, Private)

void UAbandonedNoteWeightedTextSourceComponent::OnRep_ClueText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_ClueText"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Mysteries.SirenPuzzleContext.Unlock
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   LockId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGuid                   CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ASirenPuzzleContext::Unlock(const struct FGuid& LockId, const struct FGuid& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Mysteries.SirenPuzzleContext.Unlock"));

	struct
	{
		struct FGuid                   LockId;
		struct FGuid                   CrewId;
	} params;

	params.LockId = LockId;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function Mysteries.SirenPuzzleContext.ResetUnlock
// (Final, RequiredAPI, Native, Public, BlueprintCallable)

void ASirenPuzzleContext::ResetUnlock()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Mysteries.SirenPuzzleContext.ResetUnlock"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Mysteries.SirenPuzzleContext.OnRep_LockStates
// (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
// TArray<unsigned char>          OldStates                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASirenPuzzleContext::OnRep_LockStates(TArray<unsigned char> OldStates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Mysteries.SirenPuzzleContext.OnRep_LockStates"));

	struct
	{
		TArray<unsigned char>          OldStates;
	} params;

	params.OldStates = OldStates;

	UObject::ProcessEvent(fn, &params);
}


// Function Mysteries.SirenPuzzleContext.DeactivateLock
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   LockId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ASirenPuzzleContext::DeactivateLock(const struct FGuid& LockId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Mysteries.SirenPuzzleContext.DeactivateLock"));

	struct
	{
		struct FGuid                   LockId;
	} params;

	params.LockId = LockId;

	UObject::ProcessEvent(fn, &params);
}


// Function Mysteries.SirenPuzzleContext.ActivateLock
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   LockId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ASirenPuzzleContext::ActivateLock(const struct FGuid& LockId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Mysteries.SirenPuzzleContext.ActivateLock"));

	struct
	{
		struct FGuid                   LockId;
	} params;

	params.LockId = LockId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
