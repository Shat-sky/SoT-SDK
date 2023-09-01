#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Seagulls_Barrels_BarrelsOfPlenty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Seagulls_Barrels_BarrelsOfPlenty.BP_Seagulls_Barrels_BarrelsOfPlenty_C
// 0x0000 (0x0488 - 0x0488)
class ABP_Seagulls_Barrels_BarrelsOfPlenty_C : public ABP_Seagull01_8POI_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Seagulls_Barrels_BarrelsOfPlenty.BP_Seagulls_Barrels_BarrelsOfPlenty_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
