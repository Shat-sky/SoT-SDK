#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_TavernBoard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C
// 0x0031 (0x0431 - 0x0400)
class ABP_PromptActor_TavernBoard_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_TavernBoard_C*                    PromptCoordinator;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             TavernBoardLocations;                                     // 0x0410(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBP_Prompt_TavernBoard_C*>            TavernBoardPromptCoordinators;                            // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HasPromptShown;                                           // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C"));
		return ptr;
	}


	void OnRep_TavernBoardLocations();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_TavernBoard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif