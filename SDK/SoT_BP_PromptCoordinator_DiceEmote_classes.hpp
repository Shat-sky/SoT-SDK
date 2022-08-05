#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_DiceEmote_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C
// 0x00D1 (0x01E9 - 0x0118)
class UBP_PromptCoordinator_DiceEmote_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      DiceEmotePromptAccessKey;                                 // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      EmoteStartedEvent;                                        // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0170(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               StartedDiceEmote;                                         // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                      // 0x01E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasShown;                                                 // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C"));
		return ptr;
	}


	void OnEmoteStartedFunc(const struct FEventEmoteStarted& EventEmoteStarted);
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void OnEmoteStarted(const struct FEventEmoteStarted& EmoteStartedEvent);
	void ExecuteUbergraph_BP_PromptCoordinator_DiceEmote(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
