#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_AdventureOnDemand_DarkBrethren_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_AdventureOnDemand_DarkBrethren.Proposal_AdventureOnDemand_DarkBrethren_C
// 0x0000 (0x0130 - 0x0130)
class UProposal_AdventureOnDemand_DarkBrethren_C : public UVoyageCheckpointProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_AdventureOnDemand_DarkBrethren.Proposal_AdventureOnDemand_DarkBrethren_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif