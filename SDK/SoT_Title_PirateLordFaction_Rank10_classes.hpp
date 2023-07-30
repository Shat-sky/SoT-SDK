#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_PirateLordFaction_Rank10_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_PirateLordFaction_Rank10.Title_PirateLordFaction_Rank10_C
// 0x0000 (0x00D0 - 0x00D0)
class UTitle_PirateLordFaction_Rank10_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_PirateLordFaction_Rank10.Title_PirateLordFaction_Rank10_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
