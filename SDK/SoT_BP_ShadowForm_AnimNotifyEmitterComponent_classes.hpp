#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShadowForm_AnimNotifyEmitterComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShadowForm_AnimNotifyEmitterComponent.BP_ShadowForm_AnimNotifyEmitterComponent_C
// 0x0000 (0x02D0 - 0x02D0)
class UBP_ShadowForm_AnimNotifyEmitterComponent_C : public UAnimNotifyAdditionalEventsWwiseEmitterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShadowForm_AnimNotifyEmitterComponent.BP_ShadowForm_AnimNotifyEmitterComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
