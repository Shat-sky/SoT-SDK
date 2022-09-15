#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PL_HauntedFort_Ladder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PL_HauntedFort_Ladder.BP_PL_HauntedFort_Ladder_C
// 0x0000 (0x0648 - 0x0648)
class ABP_PL_HauntedFort_Ladder_C : public ABP_CustomisableLadder_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PL_HauntedFort_Ladder.BP_PL_HauntedFort_Ladder_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
