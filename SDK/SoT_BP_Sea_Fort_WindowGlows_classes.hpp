#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Sea_Fort_WindowGlows_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C
// 0x0040 (0x0408 - 0x03C8)
class ABP_Sea_Fort_WindowGlows_C : public ASeaFortDistantLights
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        glows;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        window_planes;                                            // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeCurve_Fade_F995538E47EE9A6B32A4C3A8CF00537A;          // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeCurve__Direction_F995538E47EE9A6B32A4C3A8CF00537A;    // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeCurve;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WindowDynamicMaterial;                                    // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GlowDynamicMaterial;                                      // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C"));
		return ptr;
	}


	void UserConstructionScript();
	void FadeCurve__FinishedFunc();
	void FadeCurve__UpdateFunc();
	void ReceiveBeginPlay();
	void Activate();
	void Deactivate();
	void SetSeaFortDistantLightsEnabled(bool InLightsEnabled);
	void ExecuteUbergraph_BP_Sea_Fort_WindowGlows(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
