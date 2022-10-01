#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelOfTheDamned_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TunnelOfTheDamned.BP_TunnelOfTheDamned_C
// 0x0008 (0x06D8 - 0x06D0)
class ABP_TunnelOfTheDamned_C : public ATunnelOfTheDamned
{
public:
	class UChildActorComponent*                        Fog;                                                      // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TunnelOfTheDamned.BP_TunnelOfTheDamned_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
