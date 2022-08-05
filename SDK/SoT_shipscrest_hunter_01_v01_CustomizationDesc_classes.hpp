#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_shipscrest_hunter_01_v01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass shipscrest_hunter_01_v01_CustomizationDesc.shipscrest_hunter_01_v01_CustomizationDesc_C
// 0x0000 (0x00F8 - 0x00F8)
class Ushipscrest_hunter_01_v01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass shipscrest_hunter_01_v01_CustomizationDesc.shipscrest_hunter_01_v01_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
