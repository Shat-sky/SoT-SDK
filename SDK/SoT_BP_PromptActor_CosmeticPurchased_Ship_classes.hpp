#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_CosmeticPurchased_Ship_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_CosmeticPurchased_Ship.BP_PromptActor_CosmeticPurchased_Ship_C
// 0x00F8 (0x04F8 - 0x0400)
class ABP_PromptActor_CosmeticPurchased_Ship_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_CosmeticPurchased_C*              PromptCoordinator;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AccessKey;                                                // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              CategoryTypes;                                            // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_CosmeticPurchased;                                 // 0x0428(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VisitCustomizationChest;                           // 0x0490(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_CosmeticPurchased_Ship.BP_PromptActor_CosmeticPurchased_Ship_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Ship(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
