#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_AdventureOnDemand_APiratesLife_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_AdventureOnDemand_APiratesLife.Proposal_AdventureOnDemand_APiratesLife_C
// 0x0000 (0x0130 - 0x0130)
class UProposal_AdventureOnDemand_APiratesLife_C : public UVoyageCheckpointProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_AdventureOnDemand_APiratesLife.Proposal_AdventureOnDemand_APiratesLife_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
