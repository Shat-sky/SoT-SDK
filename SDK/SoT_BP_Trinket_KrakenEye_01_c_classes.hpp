#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Trinket_KrakenEye_01_c_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trinket_KrakenEye_01_c.BP_Trinket_KrakenEye_01_c_C
// 0x0010 (0x0408 - 0x03F8)
class ABP_Trinket_KrakenEye_01_c_C : public ABP_Trinket_StandingSmall_C
{
public:
	class UStaticMeshComponent*                        cap_desk_model_kra_01_a;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        cap_plinth_01_a;                                          // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Trinket_KrakenEye_01_c.BP_Trinket_KrakenEye_01_c_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
