#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptaincyTutorial_CompletedShipChestAndShipwright_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaptaincyTutorial_CompletedShipChestAndShipwright.BP_CaptaincyTutorial_CompletedShipChestAndShipwright_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_CaptaincyTutorial_CompletedShipChestAndShipwright_C : public UCaptaincyTutorialDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CaptaincyTutorial_CompletedShipChestAndShipwright.BP_CaptaincyTutorial_CompletedShipChestAndShipwright_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
