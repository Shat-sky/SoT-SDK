#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OnDemandVoyage_AF_LegendaryVoyage_01_MainWorld_Proposal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OnDemandVoyage_AF_LegendaryVoyage_01_MainWorld_Proposal.OnDemandVoyage_AF_LegendaryVoyage_01_MainWorld_Proposal_C
// 0x0000 (0x0128 - 0x0128)
class UOnDemandVoyage_AF_LegendaryVoyage_01_MainWorld_Proposal_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OnDemandVoyage_AF_LegendaryVoyage_01_MainWorld_Proposal.OnDemandVoyage_AF_LegendaryVoyage_01_MainWorld_Proposal_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
