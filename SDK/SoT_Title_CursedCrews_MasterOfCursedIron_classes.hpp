#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_CursedCrews_MasterOfCursedIron_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_CursedCrews_MasterOfCursedIron.Title_CursedCrews_MasterOfCursedIron_C
// 0x0000 (0x00D0 - 0x00D0)
class UTitle_CursedCrews_MasterOfCursedIron_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_CursedCrews_MasterOfCursedIron.Title_CursedCrews_MasterOfCursedIron_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
