#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Trinket_FerrySkeleton_01_d_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trinket_FerrySkeleton_01_d.BP_Trinket_FerrySkeleton_01_d_C
// 0x0010 (0x0418 - 0x0408)
class ABP_Trinket_FerrySkeleton_01_d_C : public ABP_Trinket_StandingSmall_C
{
public:
	class UStaticMeshComponent*                        cap_desk_model_fod_01_a;                                  // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        cap_plinth_01_a;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Trinket_FerrySkeleton_01_d.BP_Trinket_FerrySkeleton_01_d_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
