#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelOfTheDamned_LargeShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TunnelOfTheDamned_LargeShip.BP_TunnelOfTheDamned_LargeShip_C
// 0x0008 (0x06E0 - 0x06D8)
class ABP_TunnelOfTheDamned_LargeShip_C : public ABP_TunnelOfTheDamned_C
{
public:
	class UStaticMeshComponent*                        ReferenceShip;                                            // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TunnelOfTheDamned_LargeShip.BP_TunnelOfTheDamned_LargeShip_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
