#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_VoyageTableShipCustomizationCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VoyageTableShipCustomizationCategory.VoyageTableShipCustomizationCategory_C
// 0x0000 (0x0078 - 0x0078)
class UVoyageTableShipCustomizationCategory_C : public UShipCustomizationCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass VoyageTableShipCustomizationCategory.VoyageTableShipCustomizationCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
