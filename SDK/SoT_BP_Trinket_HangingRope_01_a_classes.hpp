#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Trinket_HangingRope_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trinket_HangingRope_01_a.BP_Trinket_HangingRope_01_a_C
// 0x0010 (0x0408 - 0x03F8)
class ABP_Trinket_HangingRope_01_a_C : public ABP_Trinket_HangingSinglePoint_C
{
public:
	class UStaticMeshComponent*                        shp_rope_coil_02_a;                                       // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_sail_controls_cleat_01_a_vertical;                    // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Trinket_HangingRope_01_a.BP_Trinket_HangingRope_01_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
