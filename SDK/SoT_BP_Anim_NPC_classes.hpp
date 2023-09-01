#pragma once

// Sea of Thieves (2) SDK

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
// 0x269C (0x2D2C - 0x0690)
class UBP_Anim_NPC_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CC0F517F411B725672C89F97D055CD8C;      // 0x0698(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DB4CA2A8483081005AE969A53CAC797B;// 0x06E0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F15BC1CD4F69693D74DF68BD1C006469;// 0x0728(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7;// 0x0770(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41;// 0x07B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335;// 0x07F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C;// 0x0830(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5;// 0x0870(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFE99B244EDF78E44038A687CE9DACD7;// 0x08B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB;// 0x08F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A25DCAC47B44029B70F88AF3F5A5C54;// 0x0930(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_675DEA224ECE4ACEFF2CD7ABF821CC09;// 0x0970(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C46244E8427204CD971229B144F2AF76;// 0x09B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1EF443394F6694B17EAA6696267E41CF;// 0x09F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD576A534C483A283A935D80FFA30FAA;// 0x0A30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E762889E42FF3893B5EC47AC0F83B559;// 0x0A70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C233A5254D84C1FBAE3AB58DF644A6B9;// 0x0AB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D110FA9C4F48AD499E63039810EAEEF4;// 0x0AF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E2162FF4AC6F423929D6981B69ADC57;// 0x0B30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6DA47D5148C4CDFCB5E5628102D25583;// 0x0B70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E6868B14E79AB141FB4FEA63DCAB5EB;// 0x0BB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AB75B0A4E5B13BBA897D583D0DF7A50;// 0x0BF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C57525264E32B0A0AAF5EE9ECB93E2A5;// 0x0C30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_636ED5134330EA5E472DE491FF206203;// 0x0C70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4610264341D118917106CD823FFFF791;// 0x0CB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC7433414659B5D645BE6EB79C759B84;// 0x0CF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68;// 0x0D30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C6AEFC1748605049CF2BA7A6574A2F07;// 0x0D70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA;// 0x0DB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84433A844303C3523C9CB18CF185EA51;// 0x0DF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B26560374147BD1FF497FA98EFD1F5EF;// 0x0E30(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4C1DF8C4F4A4462DAC584B029243881;// 0x0E70(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA023A294811C9D278D08F92910F646B;// 0x0ED0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E92615EC4011AF68B14CACBECCD3CD36;// 0x0F18(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_43F7188D491C4A05C484A6BB1454208C;// 0x0F78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17EBDD364BF99C0EA8C018BB2BF12B41;// 0x0FC0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CF0CE82B43ED02B5D4DE33B127034E18;// 0x1020(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_07D2E30146FDA2259F26F3B39F1221BC;// 0x1068(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3258A6E475175DA5E5D5EAEB7FA8DD2;// 0x10A8(0x0040)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_994E3755478BD24BF35FA29984048D95;// 0x10E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1A96C8F4FA0C88004FEA9B193BBC6D7;// 0x1130(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_269309D3407497D6420FD886C69BE95B;// 0x1190(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0502F6954CD4F84885DE03B203FAA8F6;// 0x11D8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B18FE85B4ADCBEAB2174A7857612C92D;// 0x1238(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_341236BF4A81EBAA5A49EDB86EC42020;// 0x1280(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_674A6619431A6BBD4596DABD67671419;// 0x1328(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF69FE604FFB8ACD4F7C6A8525896858;// 0x1370(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86A6275B4A5BA192F44B0FA218DF6A6A;// 0x13D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615;// 0x1418(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942;// 0x1458(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9927E3AE4B82AE003E8B6681B2E08309;// 0x1498(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6673CFE14C2EE62CCE3294A742F35812;// 0x14F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_029EE12A4EF80CF396A5BA8003D57382;// 0x1540(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F05CBB143B076B163966AA6906E1FB9;// 0x15A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D238362B487C43917B613DBA962EEC64;// 0x15E8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B40EA37F4A864F9446DE8997ECE0B8F5;// 0x1690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_398B14A14CE7DAC59E4F638FF1F7E2B9;// 0x16D8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC3CBAAC4C827FD479924A86438256D2;// 0x1738(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F;// 0x1780(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B;// 0x17C0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E02885E41EFF57B50C89389FF9A70BC;// 0x1800(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D77106F5421C70FDBB57609104AB457F;// 0x1860(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_09547AC4474E920370C08B9CCA7EDEFA;// 0x18A8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBBA67C647C2061BFA1797AFE9BF99E0;// 0x1908(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4015BE5C46E0BF7E41E53C9658B209E1;// 0x1950(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8354546645EA8B119354CEA64CC8BDC0;// 0x19F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C763590A483F16E9BD14DBB536CFD110;// 0x1A40(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B01736E249D02A7A50013BA31AE82AEC;// 0x1AE8(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FF79273E485B4C8A75CFCDB0E540C69E;      // 0x1B98(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C348971345D740C3F82C24BFD13DDA32;// 0x1BF8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3605DB2347D87DAB07D71689DAED9555;// 0x1C58(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_703687174F6C196F2901F8BAA40C82DD;// 0x1D08(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5E45BFF44F839400DAA435B59106C66D;// 0x1D68(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7C162ECF4702D2CE39493CA7608F24D0;      // 0x1DD8(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_D4AF3AA84E5F259FD5772B88A723568C;// 0x1E38(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_705E0F60499C6D0BAE87BE8D0087F8D2;// 0x1E70(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38A355404EEEE5988EB14899B8FB3045;// 0x1F00(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18AEA2AD4F158A8E398DEAAC6159E79E;// 0x1FB0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FF9F244A42EF749107F65C9141FF19E2;// 0x1FF8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3FB73333442254CF3E647297B442A16A;// 0x20A8(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9FA7439E42A411590479CDAB19464071;// 0x2138(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EFB05AEE4D8E1C17D6047FA396129830;// 0x2180(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_5EE7533F425E2DFA7F2F558B7CAEB50E;// 0x21C8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DCCF4EB04FDD34507DD0BBB448559B7B;      // 0x2200(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3D9B5DDE40D2FDE6447ED696604352C6;// 0x2260(0x0070)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_13811D2548C7C738C99252B987D3FEA2;    // 0x22D0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A3540FCC449ED4AAB0CC35BDA5CCDF47;      // 0x2390(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19EA5C084C2AEAF50E64748A67BADB2A;// 0x23F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EDD4330443560D0673BD84AA1D990CEB;      // 0x2438(0x0060)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_E696D0D546FDF2507811E296D8BE2B20;// 0x2498(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16533A254AD77BDBF800A094871EAA46;// 0x2508(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B9902A3344E24EB66E68AC8A1A932B3C;// 0x2550(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_82CD0E0640515F0593CE71ACB0D99445;      // 0x2598(0x0060)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_E419C33B4AC3358D589293A0C38A35D5;// 0x25F8(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DA05FBB04F2EF2BC6D0B1E9DC0803A80;// 0x2668(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C64B77DB48A6BF510CA4CC91D39D000B;      // 0x2708(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_44886E69456064337B591C91521B7085;// 0x2768(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_652FAB764D849C5724506598AFE546AA;// 0x27F8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5D029C224624BD4340B5569482C9F3C5;// 0x2840(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_493028E843E3C45C7ED90F9AB93D4EDC;// 0x2890(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0C52C9BC4B460CA07F71F4B974C83295;// 0x2920(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_27EF6921461329726514F59861EE4F37;// 0x2968(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E64CDAA149582E30D9111899565C7034;// 0x29B0(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F9237B3942D5CDEFC29C228DC0AF3296;// 0x2A40(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3F6DF3FA4A151EE39C0C9882C258D195;// 0x2A88(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CA8623514DB21CF34BB444B8F35BB495;// 0x2AF8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4A0812C641988E9005D387B16E262363;// 0x2B58(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E48FC9BF4C15CF55D5F4A89FAB16D22B;// 0x2C08(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1E371D884419BED000AEAC90C94C86D1;// 0x2CA8(0x0048)
	struct FVector2D                                   LookAtAngleClamp;                                         // 0x2CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AnimgraphStarted;                                         // 0x2CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2CF9(0x0003) MISSED OFFSET
	float                                              LookAtActivationSpeed;                                    // 0x2CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtTargetPositionSpeed;                                // 0x2D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPhased;                                                 // 0x2D04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2D05(0x0003) MISSED OFFSET
	float                                              Look_At_Clamp;                                            // 0x2D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Playing_Sequencer_Anim;                                // 0x2D0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2D0D(0x0003) MISSED OFFSET
	float                                              SequencerBlendWeight;                                     // 0x2D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideHeadLookAtOnOff;                                  // 0x2D14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2D15(0x0003) MISSED OFFSET
	float                                              AnimationBlendWeight;                                     // 0x2D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacialOverride;                                           // 0x2D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadRotationX;                                            // 0x2D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadRotationY;                                            // 0x2D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadRotationZ;                                            // 0x2D28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_AFE99B244EDF78E44038A687CE9DACD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_675DEA224ECE4ACEFF2CD7ABF821CC09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_C46244E8427204CD971229B144F2AF76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_1EF443394F6694B17EAA6696267E41CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_DD576A534C483A283A935D80FFA30FAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_E762889E42FF3893B5EC47AC0F83B559();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_C233A5254D84C1FBAE3AB58DF644A6B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_D110FA9C4F48AD499E63039810EAEEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_6E2162FF4AC6F423929D6981B69ADC57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_6DA47D5148C4CDFCB5E5628102D25583();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_8AB75B0A4E5B13BBA897D583D0DF7A50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_C57525264E32B0A0AAF5EE9ECB93E2A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_636ED5134330EA5E472DE491FF206203();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_BC7433414659B5D645BE6EB79C759B84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_C6AEFC1748605049CF2BA7A6574A2F07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_84433A844303C3523C9CB18CF185EA51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_BlendListByBool_38A355404EEEE5988EB14899B8FB3045();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_ModifyBone_493028E843E3C45C7ED90F9AB93D4EDC();
	void AnimNotify_StartLookat();
	void AnimNotify_StopLookAt();
	void AnimNotify_IdleVariantChange();
	void AnimNotify_InactiveVariantChange();
	void AnimNotify_InteractVariantChange();
	void BlueprintInitializeAnimation();
	void AnimNotify_NPCLookAtOn();
	void AnimNotify_NPCLookAtOff();
	void AnimNotify_CompletedDefaultReactionResponse();
	void AnimNotify_CompletedPositiveReactionResponse();
	void AnimNotify_CompletedNegativeReactionResponse();
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
