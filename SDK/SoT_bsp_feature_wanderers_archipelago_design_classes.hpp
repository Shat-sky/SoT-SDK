#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_feature_wanderers_archipelago_design_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_feature_wanderers_archipelago_design.bsp_feature_wanderers_archipelago_design_C
// 0x0000 (0x03D0 - 0x03D0)
class Absp_feature_wanderers_archipelago_design_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass bsp_feature_wanderers_archipelago_design.bsp_feature_wanderers_archipelago_design_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
