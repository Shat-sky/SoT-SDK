#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_CaptainScott_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_CaptainScott_Base.BP_Anim_CaptainScott_Base_C
// 0x1D60 (0x23F0 - 0x0690)
class UBP_Anim_CaptainScott_Base_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2CD902C24C5DD3C39E917B945B6173A8;      // 0x0698(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_501CBE584F221B63A5C652AFAD438A7A;// 0x06E0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_61ACD28F4CA54F78F664D79BFB91AA16;// 0x0728(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7;// 0x0770(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41;// 0x07B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335;// 0x07F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C;// 0x0830(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5;// 0x0870(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFE99B244EDF78E44038A687CE9DACD7;// 0x08B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB;// 0x08F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A25DCAC47B44029B70F88AF3F5A5C54;// 0x0930(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D19FCA04904447F6C076589A599394B;// 0x0970(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4610264341D118917106CD823FFFF791;// 0x09B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A746724D4C0CD8B52E10F1BB04DFF69C;// 0x09F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68;// 0x0A30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F168FA1B49B5E9B7C45EA2AB87EB52C5;// 0x0A70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA;// 0x0AB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84433A844303C3523C9CB18CF185EA51;// 0x0AF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B26560374147BD1FF497FA98EFD1F5EF;// 0x0B30(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BC6BB45B4E7D2C0D8723258D745E8F6B;// 0x0B70(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_05BE548B4AB21BE8EC9899B205D19AAF;// 0x0BD0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3258A6E475175DA5E5D5EAEB7FA8DD2;// 0x0C18(0x0040)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_994E3755478BD24BF35FA29984048D95;// 0x0C58(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4EA1D06D42AADA9624806CB41C54169F;// 0x0CA0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_269309D3407497D6420FD886C69BE95B;// 0x0D00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1BF85A6D4F34291B0796AA924E39C764;// 0x0D48(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B18FE85B4ADCBEAB2174A7857612C92D;// 0x0DA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_341236BF4A81EBAA5A49EDB86EC42020;// 0x0DF0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_674A6619431A6BBD4596DABD67671419;// 0x0E98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DFB56E349429EAE648DCB8577FE7359;// 0x0EE0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86A6275B4A5BA192F44B0FA218DF6A6A;// 0x0F40(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615;// 0x0F88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942;// 0x0FC8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C847221C47174F2EB5537E830D340172;// 0x1008(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6673CFE14C2EE62CCE3294A742F35812;// 0x1068(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9BDDC1784A786667F076899525374D5B;// 0x10B0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F05CBB143B076B163966AA6906E1FB9;// 0x1110(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D238362B487C43917B613DBA962EEC64;// 0x1158(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B40EA37F4A864F9446DE8997ECE0B8F5;// 0x1200(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A16BCAE43C41D8BAFB0BF8D05B0ABF1;// 0x1248(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC3CBAAC4C827FD479924A86438256D2;// 0x12A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F;// 0x12F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B;// 0x1330(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39CF6ACE4B49135D300212AF6CD8574C;// 0x1370(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D77106F5421C70FDBB57609104AB457F;// 0x13D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_09547AC4474E920370C08B9CCA7EDEFA;// 0x1418(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBBA67C647C2061BFA1797AFE9BF99E0;// 0x1478(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4015BE5C46E0BF7E41E53C9658B209E1;// 0x14C0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8354546645EA8B119354CEA64CC8BDC0;// 0x1568(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1C81DEF947DCD048E856BA89D9EB2426;// 0x15B0(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_24991954444F19A213E58B8DC6CF9505;// 0x1658(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_54B77A6F494C7E192928C6A04D63A294;      // 0x1708(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_782FC44A4BA050844B1E08A3CF584C1D;// 0x1768(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_82B1100244DADFF3445C41BD2C2627EC;// 0x1818(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C87D1D604B3866AD395251BB86701BC1;      // 0x1888(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_B0BB37374633BDD4F923679649B531B4;// 0x18E8(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D301208C468DE0860DE1BD931CA2CCEB;// 0x1920(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_943177854BEF4E336470CCAA758E8367;// 0x19B0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_860F348747CFCD9E6CD7D8AD530A6BA6;// 0x1A60(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4458DC0C4876AFE7F47F01A4B3EE64F9;// 0x1AA8(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F84B4D74ADE646FBD60DD91B35E43A5;// 0x1B38(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D5AF0BA4B2BF4691EAFAB9A1FEDBE19;// 0x1B80(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_EE9EBDFC4FAF4489CC6414907A29A0C7;// 0x1BC8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5539331E4F2F8789177120BC4298A37E;      // 0x1C00(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_40EE09364CBF9F1B6514C2BF3C74DDA5;// 0x1C60(0x0070)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_96FB33B943BE924F22D4CE91913E09BA;    // 0x1CD0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8D47F06140EF28269D342693F64D5138;      // 0x1D90(0x0060)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_DC8E73264068DAAC4BA234B87217505B;// 0x1DF0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8D29F36546937AF8ECE06C9A73649AB5;// 0x1E60(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C38A3C1E41471AD7EA3E3B96276A997B;// 0x1EA8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15168AEB4BF9E41F3C75318CF6C11682;      // 0x1EF0(0x0060)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_E4A556274698A1BD643F508807EE1643;// 0x1F50(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D5E19CB94C98D23F96F595B9C04E6A92;// 0x1FC0(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F2AAB046408E6CA0AA0B29936B85516A;      // 0x2060(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E52554C84B10A6449FBB97850C2BE50C;// 0x20C0(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D963207499A7822FBB178A026D624AE;// 0x2150(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3161F6C345092E9E40FC94A517E831D7;// 0x2198(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_313BE00E4C71172584AA9A923DED4166;// 0x21F8(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_987640204F2F7E4373BF48A0ED95F6F6;// 0x2258(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D617ED194736E8F11C6FAA810C498F5E;// 0x22A8(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4DCAA68C4014B93486B393A06B88E875;// 0x2338(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0EE933D14C69F43ABE6B2189B20B6EAE;// 0x2380(0x0048)
	bool                                               AnimgraphStarted;                                         // 0x23C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPhased;                                                 // 0x23C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ManualHeadLookAt;                                         // 0x23CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Playing_Sequencer_Anim;                                // 0x23CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SequencerBlendWeight;                                     // 0x23CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimationBlendWeight;                                     // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacialOverride;                                           // 0x23D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtActivationSpeed;                                    // 0x23D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtTargetPositionSpeed;                                // 0x23DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Look_At_Clamp;                                            // 0x23E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadRotationX;                                            // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadRotationY;                                            // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadRotationZ;                                            // 0x23EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_CaptainScott_Base.BP_Anim_CaptainScott_Base_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_3D19FCA04904447F6C076589A599394B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_A746724D4C0CD8B52E10F1BB04DFF69C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_F168FA1B49B5E9B7C45EA2AB87EB52C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_84433A844303C3523C9CB18CF185EA51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_BlendListByBool_943177854BEF4E336470CCAA758E8367();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_CaptainScott_Base_AnimGraphNode_ModifyBone_D617ED194736E8F11C6FAA810C498F5E();
	void AnimNotify_StartLookat();
	void AnimNotify_StopLookAt();
	void AnimNotify_IdleVariantChange();
	void AnimNotify_InactiveVariantChange();
	void AnimNotify_InteractVariantChange();
	void BlueprintInitializeAnimation();
	void AnimNotify_NPCLookAtOn();
	void AnimNotify_NPCLookAtOff();
	void AnimNotify_EnteredNull();
	void AnimNotify_EnteredOneShot();
	void AnimNotify_EnteredContinuousOut();
	void AnimNotify_EnteredContinuousLoopB();
	void AnimNotify_EnteredContinuousLoopA();
	void AnimNotify_EnteredContinuousIn();
	void AnimNotify_NPCSelectNewCustomAnim_B();
	void AnimNotify_NPCSelectNewCustomAnim_A();
	void AnimNotify_NPCDeactivateCustomAnimSequence();
	void AnimNotify_RH_DetachSocketB();
	void AnimNotify_LH_DetachSocketB();
	void AnimNotify_RH_DetachSocketA();
	void AnimNotify_LH_DetachSocketA();
	void AnimNotify_LH_UseItem_11();
	void AnimNotify_LH_UseItem_10();
	void AnimNotify_LH_UseItem_9();
	void AnimNotify_LH_UseItem_8();
	void AnimNotify_LH_UseItem_7();
	void AnimNotify_LH_UseItem_6();
	void AnimNotify_RH_UseItem_11();
	void AnimNotify_RH_UseItem_10();
	void AnimNotify_RH_UseItem_9();
	void AnimNotify_RH_UseItem_8();
	void AnimNotify_RH_UseItem_7();
	void AnimNotify_RH_UseItem_6();
	void AnimNotify_RH_AttachItem();
	void AnimNotify_LH_AttachItem();
	void AnimNotify_LH_DetachItem();
	void AnimNotify_RH_DetachItem();
	void AnimNotify_RH_DestroyItem();
	void AnimNotify_RH_UseItem_5();
	void AnimNotify_RH_UseItem_4();
	void AnimNotify_RH_UseItem_3();
	void AnimNotify_RH_UseItem_2();
	void AnimNotify_LH_DestroyItem();
	void AnimNotify_LH_UseItem_5();
	void AnimNotify_LH_UseItem_4();
	void AnimNotify_LH_UseItem_3();
	void AnimNotify_LH_UseItem_2();
	void ExecuteUbergraph_BP_Anim_CaptainScott_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
