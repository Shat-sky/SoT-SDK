#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_OOS_GhostShipVoyage_DVR_OnDemand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_OOS_GhostShipVoyage_DVR_OnDemand.Proposal_OOS_GhostShipVoyage_DVR_OnDemand_C
// 0x0000 (0x0128 - 0x0128)
class UProposal_OOS_GhostShipVoyage_DVR_OnDemand_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_OOS_GhostShipVoyage_DVR_OnDemand.Proposal_OOS_GhostShipVoyage_DVR_OnDemand_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
