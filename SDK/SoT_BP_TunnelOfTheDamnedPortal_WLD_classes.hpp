#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelOfTheDamnedPortal_WLD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TunnelOfTheDamnedPortal_WLD.BP_TunnelOfTheDamnedPortal_WLD_C
// 0x0008 (0x0650 - 0x0648)
class ABP_TunnelOfTheDamnedPortal_WLD_C : public ABP_TunnelOfTheDamnedPortal_Ship_C
{
public:
	class UChildActorComponent*                        PortalEffects;                                            // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TunnelOfTheDamnedPortal_WLD.BP_TunnelOfTheDamnedPortal_WLD_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif