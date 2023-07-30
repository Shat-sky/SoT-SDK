#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CharacterVFXComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C
// 0x02CC (0x03AC - 0x00E0)
class UBP_CharacterVFXComponent_C : public UCharacterVfxComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      EnterWaterEvent;                                          // 0x00E8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      UnderwaterStateChanged;                                   // 0x0140(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    Splash_Emitter;                                           // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Large_Foot_Splash;                                        // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Small_Foot_Splash;                                        // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Threshold_for_run;                                        // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Threshold_for_large_foot_impact;                          // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      FallingIntoWaterHandle;                                   // 0x01B8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             Large_Falling_Splash;                                     // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      PlayerViewUnderWaterHandle;                               // 0x0218(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      EnterShipEventHandle;                                     // 0x0270(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      ExitShipEventHandle;                                      // 0x02C8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     WindOffsetFromShip;                                       // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DEBUG_WindActive;                                         // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	float                                              DEBUG_WindToggleTimer;                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	struct FObjectMessagingHandle                      WindDirectionChangedHandle;                               // 0x0338(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    vfx_particle_underwater_ambient;                          // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_player_underwater_ambient;                            // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFeatureFlag                                FeatureName;                                              // 0x03A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C"));
		return ptr;
	}


	void GetWindService(class UObject** WindInterface);
	void WindVFX_DebugTick();
	void WindVFX_Destroy();
	void WindVFX_Create();
	void WindVFX_Deactivate();
	void Play_View_Under_Water_FX(const struct FEventPlayerViewUnderWaterStateChanged& Event);
	void Play_Falling_Splash(float FallingSpeed);
	void Play_Foot_Splash(const struct FVector& Location);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void PlayerViewUnderWaterEvent(const struct FEventPlayerViewUnderWaterStateChanged& Event);
	void FallingIntoWaterEvent(const struct FAthena_FFallingIntoWaterEvent& Event);
	void WaterStateChanged(const struct FEventPlayerViewUnderWaterStateChanged& Under_water_state_changed);
	void On_Foot_Enter_Water(const struct FEventCharacterFootEnterWater& Enter_Water);
	void ExecuteUbergraph_BP_CharacterVFXComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
