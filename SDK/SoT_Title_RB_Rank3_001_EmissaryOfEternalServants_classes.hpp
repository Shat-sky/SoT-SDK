#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_RB_Rank3_001_EmissaryOfEternalServants_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_RB_Rank3_001_EmissaryOfEternalServants.Title_RB_Rank3_001_EmissaryOfEternalServants_C
// 0x0000 (0x00D0 - 0x00D0)
class UTitle_RB_Rank3_001_EmissaryOfEternalServants_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_RB_Rank3_001_EmissaryOfEternalServants.Title_RB_Rank3_001_EmissaryOfEternalServants_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
