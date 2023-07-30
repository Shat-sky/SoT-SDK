#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C
// 0x00E8 (0x0220 - 0x0138)
class UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_CrewEnteredTunnelOfTheDamnedPortalProximity;       // 0x0140(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_BootyWillBeLost;                                   // 0x0198(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PromptDisplayDuration;                                    // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CrewInRadius;                                             // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptOnCooldown;                                         // 0x020D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x020E(0x0002) MISSED OFFSET
	float                                              PromptDisplayCooldown;                                    // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	class UTunnelsOfTheDamnedLootFilterDataAsset*      LootFilterDataAsset;                                      // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C"));
		return ptr;
	}


	void On_Crew_Entered_Radius(const struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void Crew_Entered_Tunnel_of_The_Damned_Portal_Proximity(const struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event);
	void ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
