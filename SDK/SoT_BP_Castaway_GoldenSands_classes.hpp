#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Castaway_GoldenSands_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Castaway_GoldenSands.BP_Castaway_GoldenSands_C
// 0x0000 (0x06D8 - 0x06D8)
class ABP_Castaway_GoldenSands_C : public ABP_Castaway_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Castaway_GoldenSands.BP_Castaway_GoldenSands_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif