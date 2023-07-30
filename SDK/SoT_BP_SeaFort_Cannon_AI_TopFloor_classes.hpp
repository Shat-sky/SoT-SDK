#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SeaFort_Cannon_AI_TopFloor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SeaFort_Cannon_AI_TopFloor.BP_SeaFort_Cannon_AI_TopFloor_C
// 0x0000 (0x0DC0 - 0x0DC0)
class ABP_SeaFort_Cannon_AI_TopFloor_C : public ABP_Cannon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SeaFort_Cannon_AI_TopFloor.BP_SeaFort_Cannon_AI_TopFloor_C"));
		return ptr;
	}


	TEnumAsByte<EProjectileFiredFrom> GetProjectileFiredFrom();
	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
