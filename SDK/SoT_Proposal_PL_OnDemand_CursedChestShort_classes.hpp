#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_PL_OnDemand_CursedChestShort_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_PL_OnDemand_CursedChestShort.Proposal_PL_OnDemand_CursedChestShort_C
// 0x0000 (0x0128 - 0x0128)
class UProposal_PL_OnDemand_CursedChestShort_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_PL_OnDemand_CursedChestShort.Proposal_PL_OnDemand_CursedChestShort_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
