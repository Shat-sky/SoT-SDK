#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_OOS_05_MysticMercenary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_OOS_05_MysticMercenary.Title_OOS_05_MysticMercenary_C
// 0x0000 (0x00D0 - 0x00D0)
class UTitle_OOS_05_MysticMercenary_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_OOS_05_MysticMercenary.Title_OOS_05_MysticMercenary_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
