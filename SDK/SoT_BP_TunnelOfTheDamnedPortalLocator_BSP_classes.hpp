#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelOfTheDamnedPortalLocator_BSP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TunnelOfTheDamnedPortalLocator_BSP.BP_TunnelOfTheDamnedPortalLocator_BSP_C
// 0x0020 (0x0420 - 0x0400)
class ABP_TunnelOfTheDamnedPortalLocator_BSP_C : public APortalLocatorActor
{
public:
	class USphereComponent*                            SeaRockBounds;                                            // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        SignalAnchor;                                             // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CalmWater;                                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Visuals;                                                  // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TunnelOfTheDamnedPortalLocator_BSP.BP_TunnelOfTheDamnedPortalLocator_BSP_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
