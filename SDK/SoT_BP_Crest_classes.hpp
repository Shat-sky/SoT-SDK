#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Crest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Crest.BP_Crest_C
// 0x00F4 (0x0554 - 0x0460)
class ABP_Crest_C : public ACrest
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Back;                                                 // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_Front;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        TextCanvasRenderTarget;                                   // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        BlurCanvasRenderTarget;                                   // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        BevelCanvasRenderTarget;                                  // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   BlurCanvasMaterial;                                       // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   BevelCanvasMaterial;                                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicBlurCanvasMaterial;                                // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicBevelCanvasMaterial;                               // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CrestDynamicMaterial;                                     // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasWidth;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     NameplatePool;                                            // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWwiseEmitterCreationParams                 EmitterCreationParams;                                    // 0x04D0(0x0028) (Edit, BlueprintVisible)
	float                                              Cooldown;                                                 // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0500(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UParticleSystem*>                     VFXSizeVariants;                                          // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NameSizeIndex;                                            // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Crest.BP_Crest_C"));
		return ptr;
	}


	void SetupCrestMaterials();
	void GetTextScale(const struct FVector2D& TextSize, float* Scale);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateTextCanvas(class UCanvas* Canvas, int Width, int Height);
	void UpdateBlurredCanvas(class UCanvas* Canvas, int Width, int Height);
	void UpdateBevelCanvas(class UCanvas* Canvas, int Width, int Height);
	void ReceiveMeshLoaded();
	void RefreshShipNameRender();
	void HideShipName();
	void InscribeShipName();
	void UpdateShipNameRender(float FadeInTime);
	void ExecuteUbergraph_BP_Crest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif