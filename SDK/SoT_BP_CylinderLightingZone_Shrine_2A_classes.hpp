#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CylinderLightingZone_Shrine_2A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CylinderLightingZone_Shrine_2A.BP_CylinderLightingZone_Shrine_2A_C
// 0x0000 (0x040D - 0x040D)
class ABP_CylinderLightingZone_Shrine_2A_C : public ABP_CylinderLightingZone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CylinderLightingZone_Shrine_2A.BP_CylinderLightingZone_Shrine_2A_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
