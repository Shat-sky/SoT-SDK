#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Castaway_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Castaway.BP_Castaway_C
// 0x0028 (0x06C8 - 0x06A0)
class ABP_Castaway_C : public ABP_Orderofsouls_TallTales_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter_1;                                 // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         AudioEvents;                                              // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Castaway.BP_Castaway_C"));
		return ptr;
	}


	void UserConstructionScript();
	void TriggerAudioEvent(class UWwiseEvent* AudioEvent);
	void StopCurrentAudioEvent();
	void Multicast_TriggerAudioEvent(int EventIdx);
	void ResetVisibility();
	void ExecuteUbergraph_BP_Castaway(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
