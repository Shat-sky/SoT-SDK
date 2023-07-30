#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Adv12_Voyages_Voyage3Complete_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Adv12_Voyages_Voyage3Complete.Adv12_Voyages_Voyage3Complete_C
// 0x0000 (0x00C8 - 0x00C8)
class UAdv12_Voyages_Voyage3Complete_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Adv12_Voyages_Voyage3Complete.Adv12_Voyages_Voyage3Complete_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
