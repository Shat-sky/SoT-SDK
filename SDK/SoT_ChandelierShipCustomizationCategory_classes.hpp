#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ChandelierShipCustomizationCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChandelierShipCustomizationCategory.ChandelierShipCustomizationCategory_C
// 0x0000 (0x0078 - 0x0078)
class UChandelierShipCustomizationCategory_C : public UShipCustomizationCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ChandelierShipCustomizationCategory.ChandelierShipCustomizationCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
