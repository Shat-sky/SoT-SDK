#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GH_WayfinderVoyage_Proposal_Rank15_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GH_WayfinderVoyage_Proposal_Rank15_03.GH_WayfinderVoyage_Proposal_Rank15_03_C
// 0x0000 (0x0128 - 0x0128)
class UGH_WayfinderVoyage_Proposal_Rank15_03_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GH_WayfinderVoyage_Proposal_Rank15_03.GH_WayfinderVoyage_Proposal_Rank15_03_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
