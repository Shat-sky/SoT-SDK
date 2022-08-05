// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Factions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

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
