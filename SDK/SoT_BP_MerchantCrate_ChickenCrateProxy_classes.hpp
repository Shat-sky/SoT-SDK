#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_ChickenCrateProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_ChickenCrateProxy.BP_MerchantCrate_ChickenCrateProxy_C
// 0x0000 (0x07F0 - 0x07F0)
class ABP_MerchantCrate_ChickenCrateProxy_C : public ABP_MerchantCrate_Static_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_ChickenCrateProxy.BP_MerchantCrate_ChickenCrateProxy_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
