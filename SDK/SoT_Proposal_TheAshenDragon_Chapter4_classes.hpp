#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_TheAshenDragon_Chapter4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_TheAshenDragon_Chapter4.Proposal_TheAshenDragon_Chapter4_C
// 0x0000 (0x0130 - 0x0130)
class UProposal_TheAshenDragon_Chapter4_C : public UVoyageCheckpointProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_TheAshenDragon_Chapter4.Proposal_TheAshenDragon_Chapter4_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
