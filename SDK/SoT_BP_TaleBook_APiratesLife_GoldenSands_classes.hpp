#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleBook_APiratesLife_GoldenSands_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TaleBook_APiratesLife_GoldenSands.BP_TaleBook_APiratesLife_GoldenSands_C
// 0x0000 (0x07C8 - 0x07C8)
class ABP_TaleBook_APiratesLife_GoldenSands_C : public ABP_TaleBook_APiratesLife_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TaleBook_APiratesLife_GoldenSands.BP_TaleBook_APiratesLife_GoldenSands_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
