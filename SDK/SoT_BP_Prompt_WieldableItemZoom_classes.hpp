#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_WieldableItemZoom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C
// 0x00E0 (0x01F8 - 0x0118)
class UBP_Prompt_WieldableItemZoom_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      PromptAccessKey;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      WieldableItemEquipEvent;                                  // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WieldingZoomableWieldable;                                // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StatCompleted;                                            // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0172(0x0006) MISSED OFFSET
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                      // 0x0178(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasShown;                                                 // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0188(0x0068) (Edit, BlueprintVisible)
	class UClass*                                      ShowForItemCategory;                                      // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C"));
		return ptr;
	}


	void OnWieldFunc(const struct FAthena_FEventObjectWielded& EventObjectWielded);
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void OnWieldEvent(const struct FAthena_FEventObjectWielded& OnWieldEvent);
	void ExecuteUbergraph_BP_Prompt_WieldableItemZoom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
