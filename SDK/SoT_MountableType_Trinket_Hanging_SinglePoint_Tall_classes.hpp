#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MountableType_Trinket_Hanging_SinglePoint_Tall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MountableType_Trinket_Hanging_SinglePoint_Tall.MountableType_Trinket_Hanging_SinglePoint_Tall_C
// 0x0000 (0x0028 - 0x0028)
class UMountableType_Trinket_Hanging_SinglePoint_Tall_C : public UMountableType_Trinket_Hanging_SinglePoints_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MountableType_Trinket_Hanging_SinglePoint_Tall.MountableType_Trinket_Hanging_SinglePoint_Tall_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
