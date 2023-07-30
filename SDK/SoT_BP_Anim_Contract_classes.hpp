#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Contract_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Contract.BP_Anim_Contract_C
// 0x0101 (0x0761 - 0x0660)
class UBP_Anim_Contract_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_73F950E44B1E95BA84B91BB03A11132A;      // 0x0668(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16366ACD4549E27332E3A7914E57741F;      // 0x06B0(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CC5EC8B44857E42A21C742BEDAF53F84;// 0x0710(0x0050)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_Contract.BP_Anim_Contract_C"));
		return ptr;
	}


	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(class UClass* InputID);
	void ExecuteUbergraph_BP_Anim_Contract(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
