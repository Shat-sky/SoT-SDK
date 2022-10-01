#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_VisitCompanyShop_GH_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_VisitCompanyShop_GH.BP_PromptActor_VisitCompanyShop_GH_C
// 0x0090 (0x0490 - 0x0400)
class ABP_PromptActor_VisitCompanyShop_GH_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_VisitCompanyShop_C*               PromptCoordinator;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Company;                                                  // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AccessKey;                                                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0420(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      CompanyRankDesc;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_VisitCompanyShop_GH.BP_PromptActor_VisitCompanyShop_GH_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_VisitCompanyShop_GH(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
