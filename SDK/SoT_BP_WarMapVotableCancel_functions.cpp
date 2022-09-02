// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WarMapVotableCancel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.GetVoteCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WarMapVotableCancel_C::GetVoteCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.GetVoteCount"));

	struct
	{
		int                            Count;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.IsWarMapOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsWarMapOpen                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WarMapVotableCancel_C::IsWarMapOpen(bool* IsWarMapOpen)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.IsWarMapOpen"));

	struct
	{
		bool                           IsWarMapOpen;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsWarMapOpen != nullptr)
		*IsWarMapOpen = params.IsWarMapOpen;
}


// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.PlayShowTokenAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Token                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WarMapVotableCancel_C::PlayShowTokenAnimation(class UPrimitiveComponent* Token)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.PlayShowTokenAnimation"));

	struct
	{
		class UPrimitiveComponent*     Token;
	} params;

	params.Token = Token;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.Is Session Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WarMapVotableCancel_C::Is_Session_Locked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.Is Session Locked"));

	struct
	{
		bool                           IsLocked;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WarMapVotableCancel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.OnVoteAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_WarMapVotableCancel_C::OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.OnVoteAdded"));

	struct
	{
		TScriptInterface<class UVoterInterface> Voter;
	} params;

	params.Voter = Voter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.OnVoteRemoved
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_WarMapVotableCancel_C::OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.OnVoteRemoved"));

	struct
	{
		TScriptInterface<class UVoterInterface> Voter;
	} params;

	params.Voter = Voter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_WarMapVotableCancel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.ExecuteUbergraph_BP_WarMapVotableCancel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WarMapVotableCancel_C::ExecuteUbergraph_BP_WarMapVotableCancel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WarMapVotableCancel.BP_WarMapVotableCancel_C.ExecuteUbergraph_BP_WarMapVotableCancel"));

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
