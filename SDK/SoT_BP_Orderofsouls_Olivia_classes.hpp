#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Orderofsouls_Olivia_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Orderofsouls_Olivia.BP_Orderofsouls_Olivia_C
// 0x0000 (0x0610 - 0x0610)
class ABP_Orderofsouls_Olivia_C : public ABP_Orderofsouls_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Orderofsouls_Olivia.BP_Orderofsouls_Olivia_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
