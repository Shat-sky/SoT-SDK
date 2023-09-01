#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PocketWatch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PocketWatch.BP_Anim_PocketWatch_C
// 0x02B0 (0x0930 - 0x0680)
class UBP_Anim_PocketWatch_C : public UPocketWatchAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_145781B74CB981C0702ED8B9251958AA;      // 0x0688(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_162C0B904DCC64AAAA8A9388874E4F8E;      // 0x06D0(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_583A8DB8444EA710DDE27BAC368CF160;// 0x0730(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0502387A43E8E456FE203EB459BF8B6F;// 0x0780(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A5445CFC40F4EA80BBEF01BDB9FF4FF3;// 0x0810(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0D092AFC452D6A23AF085F862B4C1F69;// 0x0858(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5DDE63DE437F4BA5BA226F98CBE4548E;// 0x08A0(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PocketWatch.BP_Anim_PocketWatch_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_PocketWatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
