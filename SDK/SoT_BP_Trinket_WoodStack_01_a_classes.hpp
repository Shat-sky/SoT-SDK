#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Trinket_WoodStack_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trinket_WoodStack_01_a.BP_Trinket_WoodStack_01_a_C
// 0x0008 (0x0400 - 0x03F8)
class ABP_Trinket_WoodStack_01_a_C : public ABP_Trinket_StandingLarge_C
{
public:
	class UStaticMeshComponent*                        bld_tvn_wood_holder_01_a;                                 // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Trinket_WoodStack_01_a.BP_Trinket_WoodStack_01_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
