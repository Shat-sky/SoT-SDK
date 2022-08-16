#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_PigCrateProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_PigCrateProxy.BP_MerchantCrate_PigCrateProxy_C
// 0x0008 (0x07F8 - 0x07F0)
class ABP_MerchantCrate_PigCrateProxy_C : public ABP_MerchantCrate_Static_Proxy_Base_C
{
public:
	class UFeedingComponent*                           Feeding;                                                  // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_PigCrateProxy.BP_MerchantCrate_PigCrateProxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
