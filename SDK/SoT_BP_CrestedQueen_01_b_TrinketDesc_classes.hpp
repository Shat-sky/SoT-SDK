#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CrestedQueen_01_b_TrinketDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrestedQueen_01_b_TrinketDesc.BP_CrestedQueen_01_b_TrinketDesc_C
// 0x0000 (0x00F8 - 0x00F8)
class UBP_CrestedQueen_01_b_TrinketDesc_C : public UTrinketDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrestedQueen_01_b_TrinketDesc.BP_CrestedQueen_01_b_TrinketDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
