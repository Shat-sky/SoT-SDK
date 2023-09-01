#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ship_surface_wet_decal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C
// 0x0034 (0x03FC - 0x03C8)
class ABP_ship_surface_wet_decal_C : public AShipResurfaceWetnessActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             WetDecalStarboard;                                        // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             WetDecalPort;                                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetEffectDuration;                                        // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    WetDynamicMaterial;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                WetTimerHandle;                                           // 0x03F8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C"));
		return ptr;
	}


	void UserConstructionScript();
	void HideWetDecals();
	void ReceiveBeginPlay();
	void StartResurfaceEffect(float InServerStartTime);
	void ExecuteUbergraph_BP_ship_surface_wet_decal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
