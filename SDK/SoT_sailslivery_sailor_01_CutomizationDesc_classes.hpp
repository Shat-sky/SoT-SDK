#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sailslivery_sailor_01_CutomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sailslivery_sailor_01_CutomizationDesc.sailslivery_sailor_01_CutomizationDesc_C
// 0x0000 (0x00F8 - 0x00F8)
class Usailslivery_sailor_01_CutomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass sailslivery_sailor_01_CutomizationDesc.sailslivery_sailor_01_CutomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
