#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wheel_ros_01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wheel_ros_01_CustomizationDesc.wheel_ros_01_CustomizationDesc_C
// 0x0000 (0x0108 - 0x0108)
class Uwheel_ros_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wheel_ros_01_CustomizationDesc.wheel_ros_01_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
