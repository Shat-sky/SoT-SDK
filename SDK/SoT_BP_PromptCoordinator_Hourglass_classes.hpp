#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_Hourglass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C
// 0x0139 (0x0271 - 0x0138)
class UBP_PromptCoordinator_Hourglass_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      HandlePlayerApproachesHourglass;                          // 0x0140(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerInRange;                                            // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptEvaluated;                                          // 0x0199(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x019A(0x0002) MISSED OFFSET
	float                                              Prompt_Delay;                                             // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPrioritisedPromptWithHandle                PromptHourglassTutorial1;                                 // 0x01A0(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PromptDisplayDuration;                                    // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FObjectMessagingHandle                      HandleChoseFaction;                                       // 0x0218(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FactionChosen;                                            // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptCoordinator_Hourglass.BP_PromptCoordinator_Hourglass_C"));
		return ptr;
	}


	void UnregisterOtherEvents_Implementable();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void CustomEvent_1(const struct FEventLocalPlayerApproachedHourglass& Ev);
	void CrewJoinedFaction(const struct FFactionsFramework_FCrewJoinedFaction& Event);
	void ExecuteUbergraph_BP_PromptCoordinator_Hourglass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
