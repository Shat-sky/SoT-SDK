#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ship_surface_wet_decal_galleon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ship_surface_wet_decal_galleon.BP_ship_surface_wet_decal_galleon_C
// 0x0000 (0x03FC - 0x03FC)
class ABP_ship_surface_wet_decal_galleon_C : public ABP_ship_surface_wet_decal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ship_surface_wet_decal_galleon.BP_ship_surface_wet_decal_galleon_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
