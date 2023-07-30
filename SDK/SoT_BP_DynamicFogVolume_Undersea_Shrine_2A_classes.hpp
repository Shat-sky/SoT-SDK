#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicFogVolume_Undersea_Shrine_2A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicFogVolume_Undersea_Shrine_2A.BP_DynamicFogVolume_Undersea_Shrine_2A_C
// 0x0000 (0x03EC - 0x03EC)
class ABP_DynamicFogVolume_Undersea_Shrine_2A_C : public ABP_FogVolume_Undersea_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DynamicFogVolume_Undersea_Shrine_2A.BP_DynamicFogVolume_Undersea_Shrine_2A_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
