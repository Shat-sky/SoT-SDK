#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AlmondAncientscalePlaque_01_d_TrinketDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AlmondAncientscalePlaque_01_d_TrinketDesc.BP_AlmondAncientscalePlaque_01_d_TrinketDesc_C
// 0x0000 (0x00F8 - 0x00F8)
class UBP_AlmondAncientscalePlaque_01_d_TrinketDesc_C : public UTrinketDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AlmondAncientscalePlaque_01_d_TrinketDesc.BP_AlmondAncientscalePlaque_01_d_TrinketDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
