#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PhantomTornado_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PhantomTornado.BP_PhantomTornado_C
// 0x0268 (0x0630 - 0x03C8)
class ABP_PhantomTornado_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_BigRocks;                                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Vfx_TornadoTopSwirl;                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_EmplacementIntro3;                                      // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_EmplacementIntro2;                                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_EmplacementIntro1;                                      // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VFX_TornadoSmokeDish;                                     // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_DebrisField;                                            // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VFX_TornadoSwirl;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cloud;                                                    // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LiveWire03;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LiveWire02;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LiveWire01;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VFX_TornadoTube;                                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeCloudTimeline_FadeOutAlpha_310A9781422F48C589351884CF741612;// 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeCloudTimeline_FadeINAlpha_310A9781422F48C589351884CF741612;// 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeCloudTimeline__Direction_310A9781422F48C589351884CF741612;// 0x0448(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FadeCloudTimeline;                                        // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlowUpTimeline_ErodeAlpha_1DAB983A4D9906A6C459858A888145C3;// 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlowUpTimeline_BlowUpAlpha_1DAB983A4D9906A6C459858A888145C3;// 0x045C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BlowUpTimeline__Direction_1DAB983A4D9906A6C459858A888145C3;// 0x0460(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UTimelineComponent*                          BlowUpTimeline;                                           // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TornadoAlpha_BottomAlpha_436128F646820FE474AED5BAE1BCF5C4;// 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TornadoAlpha_TopSwirlAlpha_436128F646820FE474AED5BAE1BCF5C4;// 0x0474(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TornadoAlpha_MainAlpha_436128F646820FE474AED5BAE1BCF5C4;  // 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TornadoAlpha__Direction_436128F646820FE474AED5BAE1BCF5C4; // 0x047C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TornadoAlpha;                                             // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             EmplacementLocations;                                     // 0x0488(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    TornadoMat;                                               // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UChildActorComponent*>                LiveWireArray;                                            // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              Emplacements;                                             // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FName>                               TornadoEnergyPointsNames;                                 // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowInEditor;                                             // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    TopSwirlMat;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DebrisMat;                                                // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BottomMat;                                                // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceShowLightning;                                       // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    OuterSwirlMat;                                            // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugLineDuration;                                        // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    TornadoVFXFinished;                                       // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EmplacementVFXFinished;                                   // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVfxSpawner                                 EmplacementSpawnVFX;                                      // 0x0528(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwiseEmitter                               TornadoEmitter;                                           // 0x05B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwiseEmitterCreationParams                 EmitterCreationParams;                                    // 0x05D8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                                 PlayTornadoSFX;                                           // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopTornadoSFX;                                           // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     WWisePool;                                                // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TornadoPhase;                                             // 0x0618(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Emplacement1Index;                                        // 0x061C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Emplacement2Index;                                        // 0x0620(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Emplacement3Index;                                        // 0x0624(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CloudMat;                                                 // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PhantomTornado.BP_PhantomTornado_C"));
		return ptr;
	}


	void ActivateCloud();
	void Initialise_Emplacement_Lightning();
	void OnRep_TornadoPhase();
	void OnRep_Emplacement3Index();
	void OnRep_Emplacement2Index();
	void OnRep_Emplacement1Index();
	void GetEmitter(class UWwiseEvent* EventToPlay, bool IsPlayEvent);
	void ForceGetEmplacementLocations();
	void ActivateEmplacementVFX();
	void FadeOutLiveWires(int Index);
	void PassInEmplacementReferences(TArray<class AActor*>* Emplacements);
	void SetAlphaOnAllTornadoParts(float NewAlpha);
	void PlaceGlowingPointsOnTornadoMaterial(int Index);
	void PlaceLiveWiresInLineWithEmplacements(int Index);
	void FadeInLiveWires(int Index);
	void IntializeLiveWires();
	void ForceHideTornado();
	void UpdateLiveWires(int Index);
	void IntializeTornadoMaterials();
	void UserConstructionScript();
	void TornadoAlpha__FinishedFunc();
	void TornadoAlpha__UpdateFunc();
	void TornadoAlpha__SpawnParticles__EventFunc();
	void BlowUpTimeline__FinishedFunc();
	void BlowUpTimeline__UpdateFunc();
	void FadeCloudTimeline__FinishedFunc();
	void FadeCloudTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void FadeInTornado();
	void BlowUpTornado();
	void EmplacementReady();
	void EmplacementVFX();
	void FadeInCloud();
	void FadeOutCloud();
	void BeginPlayFade();
	void ExecuteUbergraph_BP_PhantomTornado(int EntryPoint);
	void EmplacementVFXFinished__DelegateSignature();
	void TornadoVFXFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
