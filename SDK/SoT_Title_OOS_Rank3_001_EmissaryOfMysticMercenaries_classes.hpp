#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_OOS_Rank3_001_EmissaryOfMysticMercenaries_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_OOS_Rank3_001_EmissaryOfMysticMercenaries.Title_OOS_Rank3_001_EmissaryOfMysticMercenaries_C
// 0x0000 (0x00D0 - 0x00D0)
class UTitle_OOS_Rank3_001_EmissaryOfMysticMercenaries_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_OOS_Rank3_001_EmissaryOfMysticMercenaries.Title_OOS_Rank3_001_EmissaryOfMysticMercenaries_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
