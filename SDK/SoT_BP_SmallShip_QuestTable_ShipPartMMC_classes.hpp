#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_QuestTable_ShipPartMMC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_QuestTable_ShipPartMMC.BP_SmallShip_QuestTable_ShipPartMMC_C
// 0x0000 (0x08B8 - 0x08B8)
class ABP_SmallShip_QuestTable_ShipPartMMC_C : public ABP_SmallShip_QuestTable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShip_QuestTable_ShipPartMMC.BP_SmallShip_QuestTable_ShipPartMMC_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
