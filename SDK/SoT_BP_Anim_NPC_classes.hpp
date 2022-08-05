#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_NPC.BP_Anim_NPC_C
// 0x17A4 (0x1DC4 - 0x0620)
class UBP_Anim_NPC_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CC0F517F411B725672C89F97D055CD8C;      // 0x0628(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DB4CA2A8483081005AE969A53CAC797B;// 0x0670(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F15BC1CD4F69693D74DF68BD1C006469;// 0x06B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7;// 0x0700(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41;// 0x0740(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335;// 0x0780(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C;// 0x07C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5;// 0x0800(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFE99B244EDF78E44038A687CE9DACD7;// 0x0840(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB;// 0x0880(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A25DCAC47B44029B70F88AF3F5A5C54;// 0x08C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68;// 0x0900(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA;// 0x0940(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1A96C8F4FA0C88004FEA9B193BBC6D7;// 0x0980(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_269309D3407497D6420FD886C69BE95B;// 0x09E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0502F6954CD4F84885DE03B203FAA8F6;// 0x0A28(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B18FE85B4ADCBEAB2174A7857612C92D;// 0x0A88(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_341236BF4A81EBAA5A49EDB86EC42020;// 0x0AD0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_674A6619431A6BBD4596DABD67671419;// 0x0B78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF69FE604FFB8ACD4F7C6A8525896858;// 0x0BC0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86A6275B4A5BA192F44B0FA218DF6A6A;// 0x0C20(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615;// 0x0C68(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942;// 0x0CA8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9927E3AE4B82AE003E8B6681B2E08309;// 0x0CE8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6673CFE14C2EE62CCE3294A742F35812;// 0x0D48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_029EE12A4EF80CF396A5BA8003D57382;// 0x0D90(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F05CBB143B076B163966AA6906E1FB9;// 0x0DF0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D238362B487C43917B613DBA962EEC64;// 0x0E38(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B40EA37F4A864F9446DE8997ECE0B8F5;// 0x0EE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_398B14A14CE7DAC59E4F638FF1F7E2B9;// 0x0F28(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC3CBAAC4C827FD479924A86438256D2;// 0x0F88(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F;// 0x0FD0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B;// 0x1010(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E02885E41EFF57B50C89389FF9A70BC;// 0x1050(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D77106F5421C70FDBB57609104AB457F;// 0x10B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_09547AC4474E920370C08B9CCA7EDEFA;// 0x10F8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBBA67C647C2061BFA1797AFE9BF99E0;// 0x1158(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4015BE5C46E0BF7E41E53C9658B209E1;// 0x11A0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8354546645EA8B119354CEA64CC8BDC0;// 0x1248(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C763590A483F16E9BD14DBB536CFD110;// 0x1290(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B01736E249D02A7A50013BA31AE82AEC;// 0x1338(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FF79273E485B4C8A75CFCDB0E540C69E;      // 0x13E8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C348971345D740C3F82C24BFD13DDA32;// 0x1448(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3605DB2347D87DAB07D71689DAED9555;// 0x14A8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_703687174F6C196F2901F8BAA40C82DD;// 0x1558(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5E45BFF44F839400DAA435B59106C66D;// 0x15B8(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7C162ECF4702D2CE39493CA7608F24D0;      // 0x1628(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_D4AF3AA84E5F259FD5772B88A723568C;// 0x1688(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_705E0F60499C6D0BAE87BE8D0087F8D2;// 0x16C0(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38A355404EEEE5988EB14899B8FB3045;// 0x1750(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18AEA2AD4F158A8E398DEAAC6159E79E;// 0x1800(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FF9F244A42EF749107F65C9141FF19E2;// 0x1848(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3FB73333442254CF3E647297B442A16A;// 0x18F8(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9FA7439E42A411590479CDAB19464071;// 0x1988(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EFB05AEE4D8E1C17D6047FA396129830;// 0x19D0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_5EE7533F425E2DFA7F2F558B7CAEB50E;// 0x1A18(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DCCF4EB04FDD34507DD0BBB448559B7B;      // 0x1A50(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3D9B5DDE40D2FDE6447ED696604352C6;// 0x1AB0(0x0070)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_13811D2548C7C738C99252B987D3FEA2;    // 0x1B20(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A3540FCC449ED4AAB0CC35BDA5CCDF47;      // 0x1BE0(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19EA5C084C2AEAF50E64748A67BADB2A;// 0x1C40(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EDD4330443560D0673BD84AA1D990CEB;      // 0x1C88(0x0060)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_E696D0D546FDF2507811E296D8BE2B20;// 0x1CE8(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16533A254AD77BDBF800A094871EAA46;// 0x1D58(0x0048)
	struct FVector2D                                   LookAtAngleClamp;                                         // 0x1DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AnimgraphStarted;                                         // 0x1DA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1DA9(0x0003) MISSED OFFSET
	float                                              LookAtActivationSpeed;                                    // 0x1DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtTargetPositionSpeed;                                // 0x1DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPhased;                                                 // 0x1DB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1DB5(0x0003) MISSED OFFSET
	float                                              Look_At_Clamp;                                            // 0x1DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Playing_Sequencer_Anim;                                // 0x1DBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1DBD(0x0003) MISSED OFFSET
	float                                              SequencerBlendWeight;                                     // 0x1DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_NPC.BP_Anim_NPC_C"));
		return ptr;
	}


	void PlayItemAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B();
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
	void ExecuteUbergraph_BP_Anim_NPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
