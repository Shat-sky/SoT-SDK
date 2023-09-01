#pragma once

// Sea of Thieves (2) SDK

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
// 0x0170 (0x0588 - 0x0418)
class ABP_GuildMastPlaque_C : public AGuildPlaque
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSlateFontInfo                              Font;                                                     // 0x0420(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    GuildPlaque_MID;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   Bevel_Material;                                           // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    bevelMat_MID;                                             // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TextCanvasWidth;                                          // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TextCanvasHeight;                                         // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCanvasWorldMapComponent*                    Canvas;                                                   // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              guildRank;                                                // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              bevelIntensity;                                           // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFeatureFlag                                FeatureToggle;                                            // 0x049C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  BronzeMRMap;                                              // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  SilverMRMap;                                              // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  GoldMRMap;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  BronzeNormalMap;                                          // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  SilverNormalMap;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  GoldNormalMap;                                            // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TextBevel_MID;                                            // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    IconBevel_MID;                                            // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RankBevel_MID;                                            // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        RankRenderTarget;                                         // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        TextRenderTarget;                                         // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RankTextWidth;                                            // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RankTextHeight;                                           // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        BevelTextRenderTarget;                                    // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        IconRenderTarget;                                         // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        BevelRankRenderTarget;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaybeCompressedCanvasRenderTarget2D*        BevelIconRenderTarget;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Gold_Colour;                                              // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Silver_Colour;                                            // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Bronze_Colour;                                            // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TextColour;                                               // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IconColourFollowsMedallion;                               // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class UTexture2D*                                  DefaultDiffuseMap;                                        // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DefaultNormalMap;                                         // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DefaultMRMap;                                             // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GuildMastPlaque.BP_GuildMastPlaque_C"));
		return ptr;
	}


	void ApplyRenderTargetOutputsToMIDs();
	void UpdateBevelIcon(class UCanvas* Canvas);
	void UpdateBevelRank(class UCanvas* Canvas);
	void UpdateBevelText(class UCanvas* Canvas);
	void UpdateIcon(class UCanvas* Canvas);
	void UpdateRank(class UCanvas* Canvas);
	void GetTextScale(const struct FVector2D& FontSizeInScreenSpace, float* AdjustedFontScalar);
	void UpdateBevelMaterials(class UCanvas* Canvas, int Width, int Height);
	void UpdateText(class UCanvas* Canvas);
	void ApplyRenderTargetToMIDs();
	void GetMedallionColour(float Gold_Threshold, float Silver_Threshold, int Rank_Index, struct FLinearColor* Medallion_Colour);
	void AssignMedallionColour(const struct FLinearColor& Medallion_Colour);
	void Create_MIDs();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnCanvasUpdate_Text(class UCanvas* Canvas, int Width, int Height);
	void RefreshGuildPlaqueRender();
	void OnCanvasUpdate_Rank(class UCanvas* Canvas, int Width, int Height);
	void OnCanvasUpdate_Icon(class UCanvas* Canvas, int Width, int Height);
	void OnCanvasUpdate_Text_Bevel(class UCanvas* Canvas, int Width, int Height);
	void OnCanvasUpdate_Rank_Bevel(class UCanvas* Canvas, int Width, int Height);
	void OnCanvasUpdate_Icon_Bevel(class UCanvas* Canvas, int Width, int Height);
	void ExecuteUbergraph_BP_GuildMastPlaque(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
