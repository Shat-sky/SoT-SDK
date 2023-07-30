#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_HuntersCallAtTheSovereign_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C
// 0x00E0 (0x0218 - 0x0138)
class UBP_Prompt_HuntersCallAtTheSovereign_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_ItemWielded;                                        // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_OnWield;                                           // 0x0148(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CaptainedSession;                                         // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x01A8(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_HuntersCallAtTheSovereign.BP_Prompt_HuntersCallAtTheSovereign_C"));
		return ptr;
	}


	void OnItemWieldedFunc(const struct FEventObjectWielded& Object);
	void Evaluate();
	void InitializeAndStart(class AAthenaPlayerController* PlayerController);
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnWielded(const struct FEventObjectWielded& Object);
	void ExecuteUbergraph_BP_Prompt_HuntersCallAtTheSovereign(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
