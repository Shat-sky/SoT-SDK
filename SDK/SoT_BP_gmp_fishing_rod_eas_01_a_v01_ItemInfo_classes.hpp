#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_gmp_fishing_rod_eas_01_a_v01_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_gmp_fishing_rod_eas_01_a_v01_ItemInfo.BP_gmp_fishing_rod_eas_01_a_v01_ItemInfo_C
// 0x0008 (0x0518 - 0x0510)
class ABP_gmp_fishing_rod_eas_01_a_v01_ItemInfo_C : public AItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_gmp_fishing_rod_eas_01_a_v01_ItemInfo.BP_gmp_fishing_rod_eas_01_a_v01_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
