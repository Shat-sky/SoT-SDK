// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Factions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Factions.FactionFlipMeshComponent.OnRep_IsFlipping
// (Final, Native, Public)

void UFactionFlipMeshComponent::OnRep_IsFlipping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionFlipMeshComponent.OnRep_IsFlipping"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Factions.FactionService.OnRep_FactionAlignedCrews
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FCrewFactionEntry> PreviousCrews                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AFactionService::OnRep_FactionAlignedCrews(TArray<struct FCrewFactionEntry> PreviousCrews)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionService.OnRep_FactionAlignedCrews"));

	struct
	{
		TArray<struct FCrewFactionEntry> PreviousCrews;
	} params;

	params.PreviousCrews = PreviousCrews;

	UObject::ProcessEvent(fn, &params);
}


// Function Factions.FactionVoteConsumerBase.OnRep_Votes
// (Final, Native, Private)

void UFactionVoteConsumerBase::OnRep_Votes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionVoteConsumerBase.OnRep_Votes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Factions.FactionVoteValidatorBase.OnRep_CurrentCompany
// (Final, Native, Protected)

void UFactionVoteValidatorBase::OnRep_CurrentCompany()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionVoteValidatorBase.OnRep_CurrentCompany"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Factions.ShipFactionCustomisation.OnLeavingFightEndVFX
// (Final, Native, Public)

void UShipFactionCustomisation::OnLeavingFightEndVFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.ShipFactionCustomisation.OnLeavingFightEndVFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Factions.ShipFactionCustomisation.OnJoiningFightStartVFX
// (Final, Native, Public)

void UShipFactionCustomisation::OnJoiningFightStartVFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.ShipFactionCustomisation.OnJoiningFightStartVFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
