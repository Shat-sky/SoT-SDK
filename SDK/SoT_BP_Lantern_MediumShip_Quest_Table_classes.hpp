#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_MediumShip_Quest_Table_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_MediumShip_Quest_Table.BP_Lantern_MediumShip_Quest_Table_C
// 0x0000 (0x077D - 0x077D)
class ABP_Lantern_MediumShip_Quest_Table_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Lantern_MediumShip_Quest_Table.BP_Lantern_MediumShip_Quest_Table_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
