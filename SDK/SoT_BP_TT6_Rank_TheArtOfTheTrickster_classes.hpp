#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT6_Rank_TheArtOfTheTrickster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT6_Rank_TheArtOfTheTrickster.BP_TT6_Rank_TheArtOfTheTrickster_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_TT6_Rank_TheArtOfTheTrickster_C : public UTaleRankDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT6_Rank_TheArtOfTheTrickster.BP_TT6_Rank_TheArtOfTheTrickster_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
