#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_UnsortedCommodity_Stone_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnsortedCommodity_Stone_Desc.BP_UnsortedCommodity_Stone_Desc_C
// 0x0000 (0x0130 - 0x0130)
class UBP_UnsortedCommodity_Stone_Desc_C : public UCommodityItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_UnsortedCommodity_Stone_Desc.BP_UnsortedCommodity_Stone_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
