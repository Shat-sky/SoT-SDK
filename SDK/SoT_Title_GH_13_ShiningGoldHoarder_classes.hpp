#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_GH_13_ShiningGoldHoarder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_GH_13_ShiningGoldHoarder.Title_GH_13_ShiningGoldHoarder_C
// 0x0000 (0x00D0 - 0x00D0)
class UTitle_GH_13_ShiningGoldHoarder_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_GH_13_ShiningGoldHoarder.Title_GH_13_ShiningGoldHoarder_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
