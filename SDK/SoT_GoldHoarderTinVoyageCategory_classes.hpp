#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GoldHoarderTinVoyageCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GoldHoarderTinVoyageCategory.GoldHoarderTinVoyageCategory_C
// 0x0000 (0x0080 - 0x0080)
class UGoldHoarderTinVoyageCategory_C : public UBootyCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GoldHoarderTinVoyageCategory.GoldHoarderTinVoyageCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif