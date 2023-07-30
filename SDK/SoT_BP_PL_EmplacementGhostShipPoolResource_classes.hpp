#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PL_EmplacementGhostShipPoolResource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PL_EmplacementGhostShipPoolResource.BP_PL_EmplacementGhostShipPoolResource_C
// 0x0000 (0x0450 - 0x0450)
class ABP_PL_EmplacementGhostShipPoolResource_C : public ABP_AggressiveGhostShipPoolResource_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PL_EmplacementGhostShipPoolResource.BP_PL_EmplacementGhostShipPoolResource_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
