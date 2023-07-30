#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OnDemandVoyage_OOS_Bounty_01_Proposal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OnDemandVoyage_OOS_Bounty_01_Proposal.OnDemandVoyage_OOS_Bounty_01_Proposal_C
// 0x0000 (0x0128 - 0x0128)
class UOnDemandVoyage_OOS_Bounty_01_Proposal_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OnDemandVoyage_OOS_Bounty_01_Proposal.OnDemandVoyage_OOS_Bounty_01_Proposal_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
