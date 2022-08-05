#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EquipAndHandInCaptainsLog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C
// 0x0160 (0x0278 - 0x0118)
class UBP_Prompt_EquipAndHandInCaptainsLog_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      EventObjectWieldedHandler;                                // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      ExpectedWieldedItem;                                      // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPrioritisedPromptWithHandle                Prompt_EquipCaptainsLog;                                  // 0x0170(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PromptPopupTime;                                          // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	struct FObjectMessagingHandle                      EventStartStowHandler;                                    // 0x01E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      TreasureChestSoldClientPredictionEventHandler;            // 0x0228(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AccessKey;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C"));
		return ptr;
	}


	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnWield(const struct FAthena_FEventObjectWielded& Event);
	void OnStowed(const struct FEventObjectStowed& Event);
	void OnCaptainsLogSold(const struct FTreasureChestSoldClientPredictionEvent& Event);
	void ExecuteUbergraph_BP_Prompt_EquipAndHandInCaptainsLog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
