#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_ScuttleShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C
// 0x017D (0x0295 - 0x0118)
class UBP_Prompt_ScuttleShip_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_CharacterDeadEvent;                                // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_WaitingToSpawnEndedEvent;                          // 0x0168(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_ArrivedOnFerry;                                    // 0x01B0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_SuggestScuttling;                                  // 0x0218(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SpawnKillTimeThreshold;                                   // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepeatDeathThreshold;                                     // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameTime                                   TimeOfLastPvPDeath;                                       // 0x0288(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                NumRecentDeaths;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DiedEnough;                                               // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_ScuttleShip.BP_Prompt_ScuttleShip_C"));
		return ptr;
	}


	void IsOnFerryOfTheDamned(bool* IsOnFerryOfTheDamned);
	void IsDeathConsideredSpawnKill(bool* SpawnKill, struct FGameTime* TimeOfDeath);
	void IsPvPDeath(const struct FEventCharacterDead& Event, bool* PvPDeath);
	void OnCharacterDead(const struct FEventCharacterDead& Event);
	void Evaluate();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnCharacterDeadEvent(const struct FEventCharacterDead& Event);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void OnWaitingToSpawnEndedEvent(const struct FEventWaitingToSpawnActionStateEndedClient& Event);
	void Start();
	void ExecuteUbergraph_BP_Prompt_ScuttleShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
