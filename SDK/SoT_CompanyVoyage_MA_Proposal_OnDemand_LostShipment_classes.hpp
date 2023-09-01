#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CompanyVoyage_MA_Proposal_OnDemand_LostShipment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompanyVoyage_MA_Proposal_OnDemand_LostShipment.CompanyVoyage_MA_Proposal_OnDemand_LostShipment_C
// 0x0000 (0x0128 - 0x0128)
class UCompanyVoyage_MA_Proposal_OnDemand_LostShipment_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CompanyVoyage_MA_Proposal_OnDemand_LostShipment.CompanyVoyage_MA_Proposal_OnDemand_LostShipment_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
