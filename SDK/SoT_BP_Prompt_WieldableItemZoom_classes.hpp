#pragma once

// Sea of Thieves (2.8.4) SDK

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
// 0x00F8 (0x0230 - 0x0138)
class UBP_Prompt_WieldableItemZoom_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      PromptAccessKey;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      WieldableItemEquipEvent;                                  // 0x0148(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WieldingZoomableWieldable;                                // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StatCompleted;                                            // 0x01A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01A2(0x0006) MISSED OFFSET
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                      // 0x01A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasShown;                                                 // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x01B8(0x0070) (Edit, BlueprintVisible)
	class UClass*                                      ShowForItemCategory;                                      // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C"));
		return ptr;
	}


	void OnWieldFunc(const struct FEventObjectWielded& EventObjectWielded);
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void OnWieldEvent(const struct FEventObjectWielded& OnWieldEvent);
	void ExecuteUbergraph_BP_Prompt_WieldableItemZoom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
