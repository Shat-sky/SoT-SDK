#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_WieldableBook_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_WieldableBook.BP_Anim_WieldableBook_C
// 0x0211 (0x0851 - 0x0640)
class UBP_Anim_WieldableBook_C : public UWieldableBookAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9DA73FBF469DE080019EF5AEE95414B8;      // 0x0648(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_30EEA8E24FEE3416F196879DBC397AA7;// 0x0690(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F7E7AD6247F59FA0201700BF0C6C7332;// 0x06E0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BF089CED4BC8360E4461AE9F440BFB57;// 0x0740(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9569AB4A4CF84C50A07CEE8011AC1064;      // 0x07F0(0x0060)
	bool                                               InUse;                                                    // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_WieldableBook.BP_Anim_WieldableBook_C"));
		return ptr;
	}


	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(class UClass* InputID);
	void ExecuteUbergraph_BP_Anim_WieldableBook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
