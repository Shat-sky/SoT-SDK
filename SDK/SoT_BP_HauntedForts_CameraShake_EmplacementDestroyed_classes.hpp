#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HauntedForts_CameraShake_EmplacementDestroyed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HauntedForts_CameraShake_EmplacementDestroyed.BP_HauntedForts_CameraShake_EmplacementDestroyed_C
// 0x0018 (0x0448 - 0x0430)
class ABP_HauntedForts_CameraShake_EmplacementDestroyed_C : public ABP_PlaceableReactionMechanismAction_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMechanismTriggerComponent*                  MechanismTrigger;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HauntedForts_CameraShake_EmplacementDestroyed.BP_HauntedForts_CameraShake_EmplacementDestroyed_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HauntedForts_CameraShake_EmplacementDestroyed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
