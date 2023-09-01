#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_QuestTable_ShipPartMMC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_QuestTable_ShipPartMMC.BP_LargeShip_QuestTable_ShipPartMMC_C
// 0x0000 (0x0948 - 0x0948)
class ABP_LargeShip_QuestTable_ShipPartMMC_C : public ABP_LargeShip_QuestTable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LargeShip_QuestTable_ShipPartMMC.BP_LargeShip_QuestTable_ShipPartMMC_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
