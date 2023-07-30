#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Spyglass_wkd_mystery_01_ItemDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spyglass_wkd_mystery_01_ItemDesc.BP_Spyglass_wkd_mystery_01_ItemDesc_C
// 0x0000 (0x0120 - 0x0120)
class UBP_Spyglass_wkd_mystery_01_ItemDesc_C : public UItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Spyglass_wkd_mystery_01_ItemDesc.BP_Spyglass_wkd_mystery_01_ItemDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
