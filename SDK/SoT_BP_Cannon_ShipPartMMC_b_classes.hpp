#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cannon_ShipPartMMC_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cannon_ShipPartMMC_b.BP_Cannon_ShipPartMMC_b_C
// 0x0000 (0x0DC0 - 0x0DC0)
class ABP_Cannon_ShipPartMMC_b_C : public ABP_Cannon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Cannon_ShipPartMMC_b.BP_Cannon_ShipPartMMC_b_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
