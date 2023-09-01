#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mojo_CaptainScott_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mojo_CaptainScott.BP_Mojo_CaptainScott_C
// 0x0018 (0x0708 - 0x06F0)
class ABP_Mojo_CaptainScott_C : public ABP_SoleTrader_C
{
public:
	class USceneComponent*                             InteractionPromptOverride;                                // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DialogueLookAtOverride;                                   // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorOfInterestComponent*                   ActorOfInterest;                                          // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Mojo_CaptainScott.BP_Mojo_CaptainScott_C"));
		return ptr;
	}


	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	struct FNPCDialogCustomLookAtInfo GetCustomLookAtInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
