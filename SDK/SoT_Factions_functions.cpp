// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Factions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Factions.FactionFlipMeshComponent.OnRep_Streak
// (Final, Native, Public)

void UFactionFlipMeshComponent::OnRep_Streak()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionFlipMeshComponent.OnRep_Streak"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Factions.FactionFlipMeshComponent.OnRep_ServerTargetFlipped
// (Final, Native, Public)

void UFactionFlipMeshComponent::OnRep_ServerTargetFlipped()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionFlipMeshComponent.OnRep_ServerTargetFlipped"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Factions.FactionParticleComponent.OnRep_Streak
// (Final, Native, Public)

void UFactionParticleComponent::OnRep_Streak()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionParticleComponent.OnRep_Streak"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Factions.FactionParticleComponent.OnRep_ServerMigrationEnded
// (Final, Native, Public)

void UFactionParticleComponent::OnRep_ServerMigrationEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionParticleComponent.OnRep_ServerMigrationEnded"));

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
// (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FCrewMemberVotes> PreviousVotes                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFactionVoteConsumerBase::OnRep_Votes(TArray<struct FCrewMemberVotes> PreviousVotes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.FactionVoteConsumerBase.OnRep_Votes"));

	struct
	{
		TArray<struct FCrewMemberVotes> PreviousVotes;
	} params;

	params.PreviousVotes = PreviousVotes;

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


// Function Factions.ShipFactionCustomisation.OnRep_FactionStreakData
// (Final, Native, Private)

void UShipFactionCustomisation::OnRep_FactionStreakData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Factions.ShipFactionCustomisation.OnRep_FactionStreakData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
