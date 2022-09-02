#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Trinket_BrokenPot_02_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trinket_BrokenPot_02_a.BP_Trinket_BrokenPot_02_a_C
// 0x0008 (0x0410 - 0x0408)
class ABP_Trinket_BrokenPot_02_a_C : public ABP_Trinket_StandingLarge_C
{
public:
	class UStaticMeshComponent*                        cmn_clay_pot_01_b;                                        // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Trinket_BrokenPot_02_a.BP_Trinket_BrokenPot_02_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
