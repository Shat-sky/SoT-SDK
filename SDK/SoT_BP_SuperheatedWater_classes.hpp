#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SuperheatedWater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SuperheatedWater.BP_SuperheatedWater_C
// 0x0000 (0x05B8 - 0x05B8)
class ABP_SuperheatedWater_C : public ASuperheatedWater
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SuperheatedWater.BP_SuperheatedWater_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
