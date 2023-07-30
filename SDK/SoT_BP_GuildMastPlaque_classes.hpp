#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GuildMastPlaque_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GuildMastPlaque.BP_GuildMastPlaque_C
// 0x00AC (0x04AC - 0x0400)
class ABP_GuildMastPlaque_C : public AGuildPlaque
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaybeCompressedCanvasRenderTarget2D*        TextCanvasRenderTarget;                                   // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0410(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    guildPlaqueMesh_MID;                                      // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   BevelMaterial;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    bevelMat_MID;                                             // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        BevelCanvasRenderTarget;                                  // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasWidth;                                              // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCanvasWorldMapComponent*                    Canvas;                                                   // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              guildRank;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              bevelIntensity;                                           // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxRank;                                                  // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    guildIconInput;                                           // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFeatureFlag                                FeatureToggle;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GuildMastPlaque.BP_GuildMastPlaque_C"));
		return ptr;
	}


	void UpdateBevelMaterials(class UCanvas* Canvas, int Width, int Height);
	void UpdateTextAndIcons(class UCanvas* Canvas);
	void ApplyRenderTargetToMIDs();
	void GetMedallionColour(float Gold_Threshold, float Silver_Threshold, int Rank_Index, struct FLinearColor* Medallion_Colour);
	void AssignMedallionColour(const struct FLinearColor& Medallion_Colour);
	void CreateMIDs();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnCanvasUpdate_Text(class UCanvas* Canvas, int Width, int Height);
	void OnCanvasUpdate_Bevel(class UCanvas* Canvas, int Width, int Height);
	void RefreshGuildPlaqueRender();
	void ExecuteUbergraph_BP_GuildMastPlaque(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
