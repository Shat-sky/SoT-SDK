#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_cma_bush_02_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_cma_bush_02_b.bsp_cma_bush_02_b_C
// 0x0000 (0x03E0 - 0x03E0)
class Absp_cma_bush_02_b_C : public ACoveredMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass bsp_cma_bush_02_b.bsp_cma_bush_02_b_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
