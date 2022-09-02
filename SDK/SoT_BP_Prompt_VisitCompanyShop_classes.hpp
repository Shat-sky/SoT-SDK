#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_VisitCompanyShop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C
// 0x00DA (0x01F2 - 0x0118)
class UBP_Prompt_VisitCompanyShop_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_TreasureChestSoldPredictedEvent;                   // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_VisitCompanyShop;                                  // 0x0168(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Company;                                                  // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AccessKey;                                                // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CompanyRankDesc;                                          // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PromptDelayUntilDisplay;                                  // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PromptDisplayDuration;                                    // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCorrectCompany;                                         // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptInfoSet;                                            // 0x01F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C"));
		return ptr;
	}


	void HasAlreadyVisitedCompanyShop(bool* HasVistedCompanyShop);
	void SetCompanyPromptInfo(class UClass* Company, class UClass* AccessKey, const struct FPrioritisedPromptWithHandle& Prompt, class UClass* CompanyRankDesc);
	void OnTreasureChestSold(const struct FTreasureChestSoldClientPredictionEvent& Event);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void TreasureChestSoldPredictedEvent(const struct FTreasureChestSoldClientPredictionEvent& Event);
	void ExecuteUbergraph_BP_Prompt_VisitCompanyShop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
