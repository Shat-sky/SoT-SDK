#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MapBundle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_MapBundle.BP_Prompt_MapBundle_C
// 0x0140 (0x0258 - 0x0118)
class UBP_Prompt_MapBundle_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      MapBundlePromptAccessKey;                                 // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0128(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               MapBundleBecameVisible;                                   // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      MapBundleAppearedHandle;                                  // 0x0198(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                      // 0x01E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasShown;                                                 // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                StealPrompt;                                              // 0x01F0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_MapBundle.BP_Prompt_MapBundle_C"));
		return ptr;
	}


	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void OnMapBundleBecameVisible(const struct FPlayerBuriedItemsMapBundleBecameVisible& Event);
	void ExecuteUbergraph_BP_Prompt_MapBundle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
