#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DialogueAudioTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DialogueAudioTarget.BP_DialogueAudioTarget_C
// 0x0028 (0x03F0 - 0x03C8)
class ABP_DialogueAudioTarget_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         AudioEvents;                                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DialogueAudioTarget.BP_DialogueAudioTarget_C"));
		return ptr;
	}


	void UserConstructionScript();
	void TriggerAudioEvent(class UWwiseEvent* AudioEvent);
	void Multicast_TriggerAudioEvent(int Event_Idx);
	void StopCurrentAudioEvent();
	void ExecuteUbergraph_BP_DialogueAudioTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
