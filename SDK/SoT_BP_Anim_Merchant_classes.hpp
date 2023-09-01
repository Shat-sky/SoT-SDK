#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Merchant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Merchant.BP_Anim_Merchant_C
// 0x000C (0x2D38 - 0x2D2C)
class UBP_Anim_Merchant_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2D2C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2D30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_Merchant.BP_Anim_Merchant_C"));
		return ptr;
	}


	void AnimNotify_NPCItemAnimation();
	void ExecuteUbergraph_BP_Anim_Merchant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
