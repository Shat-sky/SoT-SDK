#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MountableType_Trinket_Standing_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MountableType_Trinket_Standing_Large.MountableType_Trinket_Standing_Large_C
// 0x0000 (0x0028 - 0x0028)
class UMountableType_Trinket_Standing_Large_C : public UMountableType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MountableType_Trinket_Standing_Large.MountableType_Trinket_Standing_Large_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
