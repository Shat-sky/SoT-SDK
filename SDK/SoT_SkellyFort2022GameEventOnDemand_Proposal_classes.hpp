#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SkellyFort2022GameEventOnDemand_Proposal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SkellyFort2022GameEventOnDemand_Proposal.SkellyFort2022GameEventOnDemand_Proposal_C
// 0x0000 (0x0128 - 0x0128)
class USkellyFort2022GameEventOnDemand_Proposal_C : public UGameEventOnDemandVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SkellyFort2022GameEventOnDemand_Proposal.SkellyFort2022GameEventOnDemand_Proposal_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
