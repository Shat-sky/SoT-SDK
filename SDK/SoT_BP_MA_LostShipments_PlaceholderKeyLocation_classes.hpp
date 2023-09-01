#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MA_LostShipments_PlaceholderKeyLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MA_LostShipments_PlaceholderKeyLocation.BP_MA_LostShipments_PlaceholderKeyLocation_C
// 0x0000 (0x02E0 - 0x02E0)
class UBP_MA_LostShipments_PlaceholderKeyLocation_C : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MA_LostShipments_PlaceholderKeyLocation.BP_MA_LostShipments_PlaceholderKeyLocation_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
