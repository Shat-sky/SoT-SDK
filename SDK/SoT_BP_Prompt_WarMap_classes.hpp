#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_WarMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_WarMap.BP_Prompt_WarMap_C
// 0x0138 (0x0250 - 0x0118)
class UBP_Prompt_WarMap_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      HandleWarMapStateChanged;                                 // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                PromptFlameheart;                                         // 0x0168(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                PromptPirateLord;                                         // 0x01D0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PromptDelay;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PromptDisplayDuration;                                    // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptEvaluated;                                          // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WarMapOpened;                                             // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	class UClass*                                      CurrentFaction;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_WarMap.BP_Prompt_WarMap_C"));
		return ptr;
	}


	void GetPromptFromCurrentFaction(struct FPrioritisedPromptWithHandle* Prompt);
	void Evaluate();
	void UnregisterOtherEvents_Implementable();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void LocalPlayerOpenedWarMap(const struct FEventLocalPlayerOpenedWarMap& Event);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void ExecuteUbergraph_BP_Prompt_WarMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
