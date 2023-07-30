#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CompanyVoyage_GH_Proposal_Wayfinder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompanyVoyage_GH_Proposal_Wayfinder.CompanyVoyage_GH_Proposal_Wayfinder_C
// 0x0000 (0x0128 - 0x0128)
class UCompanyVoyage_GH_Proposal_Wayfinder_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CompanyVoyage_GH_Proposal_Wayfinder.CompanyVoyage_GH_Proposal_Wayfinder_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
