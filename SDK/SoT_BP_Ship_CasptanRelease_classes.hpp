#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Ship_CasptanRelease_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ship_CasptanRelease.BP_Ship_CasptanRelease_C
// 0x0000 (0x04D0 - 0x04D0)
class ABP_Ship_CasptanRelease_C : public ABP_CapstanRelease_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Ship_CasptanRelease.BP_Ship_CasptanRelease_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
