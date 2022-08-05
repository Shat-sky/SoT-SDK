#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SKD_ShrineShimmer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C
// 0x0049 (0x04B9 - 0x0470)
class ABP_SKD_ShrineShimmer_C : public AShimmerActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        surface_bio_lum;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        volume_glow;                                              // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shimmer_water_00;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shimmer_air_01;                                           // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shimmer_air_00;                                           // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeCurve_Opacity_D7ECDDBE4184BCE83B3BD58190CD98C7;       // 0x04A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeCurve__Direction_D7ECDDBE4184BCE83B3BD58190CD98C7;    // 0x04AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeCurve;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShimmerIsVisible;                                         // 0x04B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C"));
		return ptr;
	}


	void OnRep_ShimmerIsVisible();
	void UserConstructionScript();
	void FadeCurve__FinishedFunc();
	void FadeCurve__UpdateFunc();
	void OnActivateShimmer();
	void OnDeactivateShimmer();
	void Shimmer_FadeIn();
	void Shimmer_FadeOut();
	void ExecuteUbergraph_BP_SKD_ShrineShimmer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif