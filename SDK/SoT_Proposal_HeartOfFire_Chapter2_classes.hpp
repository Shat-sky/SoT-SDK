#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_HeartOfFire_Chapter2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_HeartOfFire_Chapter2.Proposal_HeartOfFire_Chapter2_C
// 0x0000 (0x0130 - 0x0130)
class UProposal_HeartOfFire_Chapter2_C : public UVoyageCheckpointProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_HeartOfFire_Chapter2.Proposal_HeartOfFire_Chapter2_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
