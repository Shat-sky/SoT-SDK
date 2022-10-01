#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sailslivery_sirensprize_01_customisationdesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sailslivery_sirensprize_01_customisationdesc.sailslivery_sirensprize_01_customisationdesc_C
// 0x0000 (0x00F8 - 0x00F8)
class Usailslivery_sirensprize_01_customisationdesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass sailslivery_sirensprize_01_customisationdesc.sailslivery_sirensprize_01_customisationdesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
