#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Chandelier_ShipPartMMC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Chandelier_ShipPartMMC.BP_Chandelier_ShipPartMMC_C
// 0x0000 (0x0460 - 0x0460)
class ABP_Chandelier_ShipPartMMC_C : public ABP_Chandelier_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Chandelier_ShipPartMMC.BP_Chandelier_ShipPartMMC_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
