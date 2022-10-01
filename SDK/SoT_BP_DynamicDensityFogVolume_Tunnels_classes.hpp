#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicDensityFogVolume_Tunnels_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C
// 0x0068 (0x04A0 - 0x0438)
class ABP_DynamicDensityFogVolume_Tunnels_C : public ABP_DynamicDensityFogVolume_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UObjectMessagingDispatcherComponent*         ObjectMessagingDispatcher;                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               TriggerVolume;                                            // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // 0x0450(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      TransitionDynamicFogHandle;                               // 0x0458(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DynamicDensityFogVolume_Tunnels.BP_DynamicDensityFogVolume_Tunnels_C"));
		return ptr;
	}


	void OnRep_Visible();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SetFogVisibility();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnTransitionDynamicFog(const struct FTunnelOfTheDamnedTransitionDynamicFogEvent& Event);
	void ExecuteUbergraph_BP_DynamicDensityFogVolume_Tunnels(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
