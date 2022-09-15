#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PL_PlaceableReactionMechanism_Destruction_Rumble_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PL_PlaceableReactionMechanism_Destruction_Rumble.BP_PL_PlaceableReactionMechanism_Destruction_Rumble_C
// 0x0018 (0x0448 - 0x0430)
class ABP_PL_PlaceableReactionMechanism_Destruction_Rumble_C : public ABP_PlaceableReactionMechanismAction_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMechanismTriggerComponent*                  MechanismTrigger;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PL_PlaceableReactionMechanism_Destruction_Rumble.BP_PL_PlaceableReactionMechanism_Destruction_Rumble_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PL_PlaceableReactionMechanism_Destruction_Rumble(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
