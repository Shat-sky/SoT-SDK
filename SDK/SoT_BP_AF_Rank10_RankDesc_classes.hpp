#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AF_Rank10_RankDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AF_Rank10_RankDesc.BP_AF_Rank10_RankDesc_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_AF_Rank10_RankDesc_C : public URankDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AF_Rank10_RankDesc.BP_AF_Rank10_RankDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
