#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tutorial_Tavern_Stranger_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C
// 0x0068 (0x08C8 - 0x0860)
class ABP_Tutorial_Tavern_Stranger_NPC_C : public ATutorialTavernStrangerNPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           SolidHits;                                                // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       MysteriousStranger;                                       // 0x0888(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ACutSceneActor*                              CutSceneActor;                                            // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C"));
		return ptr;
	}


	void UnhidePlayerPrompts();
	bool CanInteract(class AActor* InInteractor);
	void StartOnboardingCutscene();
	void UserConstructionScript();
	void QueueCutsceneActorDestruction();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void CleanTutorialCutScene();
	void ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
