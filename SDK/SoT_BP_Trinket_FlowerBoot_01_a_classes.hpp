#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Trinket_FlowerBoot_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trinket_FlowerBoot_01_a.BP_Trinket_FlowerBoot_01_a_C
// 0x0010 (0x0418 - 0x0408)
class ABP_Trinket_FlowerBoot_01_a_C : public ABP_Trinket_StandingSmall_C
{
public:
	class UStaticMeshComponent*                        tri_com_wsp_flower_04_a;                                  // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        cmn_boots_03_a_R;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Trinket_FlowerBoot_01_a.BP_Trinket_FlowerBoot_01_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
