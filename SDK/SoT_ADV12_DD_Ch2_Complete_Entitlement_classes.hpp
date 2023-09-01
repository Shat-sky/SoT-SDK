#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ADV12_DD_Ch2_Complete_Entitlement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ADV12_DD_Ch2_Complete_Entitlement.ADV12_DD_Ch2_Complete_Entitlement_C
// 0x0000 (0x00C8 - 0x00C8)
class UADV12_DD_Ch2_Complete_Entitlement_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ADV12_DD_Ch2_Complete_Entitlement.ADV12_DD_Ch2_Complete_Entitlement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
