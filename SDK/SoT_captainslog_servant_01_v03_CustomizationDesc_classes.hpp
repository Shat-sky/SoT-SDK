#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_captainslog_servant_01_v03_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass captainslog_servant_01_v03_CustomizationDesc.captainslog_servant_01_v03_CustomizationDesc_C
// 0x0000 (0x00F8 - 0x00F8)
class Ucaptainslog_servant_01_v03_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass captainslog_servant_01_v03_CustomizationDesc.captainslog_servant_01_v03_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
