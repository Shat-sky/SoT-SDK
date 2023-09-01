// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WarMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WarMap.WarMapVoteConsumerBase.OnRep_Votes
// (Final, Native, Private)

void UWarMapVoteConsumerBase::OnRep_Votes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WarMap.WarMapVoteConsumerBase.OnRep_Votes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
