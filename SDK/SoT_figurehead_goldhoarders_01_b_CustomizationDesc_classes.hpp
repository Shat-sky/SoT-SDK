#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_figurehead_goldhoarders_01_b_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass figurehead_goldhoarders_01_b_CustomizationDesc.figurehead_goldhoarders_01_b_CustomizationDesc_C
// 0x0000 (0x00F8 - 0x00F8)
class Ufigurehead_goldhoarders_01_b_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass figurehead_goldhoarders_01_b_CustomizationDesc.figurehead_goldhoarders_01_b_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
