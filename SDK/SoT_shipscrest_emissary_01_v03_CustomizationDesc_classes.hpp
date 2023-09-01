#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_shipscrest_emissary_01_v03_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass shipscrest_emissary_01_v03_CustomizationDesc.shipscrest_emissary_01_v03_CustomizationDesc_C
// 0x0000 (0x00F8 - 0x00F8)
class Ushipscrest_emissary_01_v03_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass shipscrest_emissary_01_v03_CustomizationDesc.shipscrest_emissary_01_v03_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
