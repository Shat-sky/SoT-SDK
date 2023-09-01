#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_OnDemand_SunkenKingdomVoyage_CurseVoyage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_OnDemand_SunkenKingdomVoyage_CurseVoyage.Proposal_OnDemand_SunkenKingdomVoyage_CurseVoyage_C
// 0x0000 (0x0128 - 0x0128)
class UProposal_OnDemand_SunkenKingdomVoyage_CurseVoyage_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_OnDemand_SunkenKingdomVoyage_CurseVoyage.Proposal_OnDemand_SunkenKingdomVoyage_CurseVoyage_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
