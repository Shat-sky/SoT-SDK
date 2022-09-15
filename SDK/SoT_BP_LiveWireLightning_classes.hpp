#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LiveWireLightning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LiveWireLightning.BP_LiveWireLightning_C
// 0x0090 (0x0458 - 0x03C8)
class ABP_LiveWireLightning_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RareLightning;                                            // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        End;                                                      // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Start;                                                    // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MainWire;                                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTimeline_GlowAlpha_B427430B41E555CC451F21941C6F0CEF;// 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTimeline_Alpha_B427430B41E555CC451F21941C6F0CEF;   // 0x0404(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeOutTimeline__Direction_B427430B41E555CC451F21941C6F0CEF;// 0x0408(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FadeOutTimeline;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeTimeline_GlowAlpha_DE5F6C9D4CB04708B34889A38E0AF141;// 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StrikeTimeline_Alpha_DE5F6C9D4CB04708B34889A38E0AF141;    // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StrikeTimeline__Direction_DE5F6C9D4CB04708B34889A38E0AF141;// 0x0420(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UTimelineComponent*                          StrikeTimeline;                                           // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightningMat;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetVector;                                             // 0x0438(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartVector;                                              // 0x0444(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RareLightningMat;                                         // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LiveWireLightning.BP_LiveWireLightning_C"));
		return ptr;
	}


	void ForceShowWire();
	void HideWire();
	void UpdateWire(const struct FVector& TargetVector);
	void UserConstructionScript();
	void StrikeTimeline__FinishedFunc();
	void StrikeTimeline__UpdateFunc();
	void FadeOutTimeline__FinishedFunc();
	void FadeOutTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void LightningShooter();
	void FadeInWire();
	void FadeOutWire();
	void ExecuteUbergraph_BP_LiveWireLightning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
