#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FireworkCrate_Legends_Stocked_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FireworkCrate_Legends_Stocked.BP_FireworkCrate_Legends_Stocked_C
// 0x0000 (0x0120 - 0x0120)
class UBP_FireworkCrate_Legends_Stocked_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FireworkCrate_Legends_Stocked.BP_FireworkCrate_Legends_Stocked_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif