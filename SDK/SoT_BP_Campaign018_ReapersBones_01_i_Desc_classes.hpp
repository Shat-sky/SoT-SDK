#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign018_ReapersBones_01_i_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign018_ReapersBones_01_i_Desc.BP_Campaign018_ReapersBones_01_i_Desc_C
// 0x0000 (0x0138 - 0x0138)
class UBP_Campaign018_ReapersBones_01_i_Desc_C : public UCargoRunItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Campaign018_ReapersBones_01_i_Desc.BP_Campaign018_ReapersBones_01_i_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
