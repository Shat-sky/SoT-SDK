#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_RevengeOfTheMornignstar_Chapter3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_RevengeOfTheMornignstar_Chapter3.Proposal_RevengeOfTheMornignstar_Chapter3_C
// 0x0000 (0x0130 - 0x0130)
class UProposal_RevengeOfTheMornignstar_Chapter3_C : public UVoyageCheckpointProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_RevengeOfTheMornignstar_Chapter3.Proposal_RevengeOfTheMornignstar_Chapter3_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
