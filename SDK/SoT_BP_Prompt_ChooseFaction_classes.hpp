#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_ChooseFaction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C
// 0x023A (0x0372 - 0x0138)
class UBP_Prompt_ChooseFaction_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      HandleChoseFaction;                                       // 0x0140(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                PromptPirateLord1;                                        // 0x0198(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                PromptFlameheart1;                                        // 0x0208(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                PromptFlameheart2;                                        // 0x0278(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                PromptPirateLord2;                                        // 0x02E8(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PromptDelay;                                              // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PromptDisplayDuration;                                    // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FactionPromptFinished;                                    // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FactionChosen;                                            // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0362(0x0006) MISSED OFFSET
	class UClass*                                      CurrentFaction;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WarmapOpen;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WarMapPromptFinished;                                     // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_ChooseFaction.BP_Prompt_ChooseFaction_C"));
		return ptr;
	}


	void GetPrompt2FromCurrentFaction(struct FPrioritisedPromptWithHandle* Prompt);
	void GetPrompt1FromCurrentFaction(struct FPrioritisedPromptWithHandle* Prompt);
	void Evaluate();
	void UnregisterOtherEvents_Implementable();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void CrewJoinedFaction(const struct FFactionsFramework_FCrewJoinedFaction& Event);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void ExecuteUbergraph_BP_Prompt_ChooseFaction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
