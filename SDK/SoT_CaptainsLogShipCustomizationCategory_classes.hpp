#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CaptainsLogShipCustomizationCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaptainsLogShipCustomizationCategory.CaptainsLogShipCustomizationCategory_C
// 0x0000 (0x0078 - 0x0078)
class UCaptainsLogShipCustomizationCategory_C : public UShipCustomizationCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CaptainsLogShipCustomizationCategory.CaptainsLogShipCustomizationCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
