#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AnimationStateID_Sitting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AnimationStateID_Sitting.BP_AnimationStateID_Sitting_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AnimationStateID_Sitting_C : public UAnimationStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AnimationStateID_Sitting.BP_AnimationStateID_Sitting_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
