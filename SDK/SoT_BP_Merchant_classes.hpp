#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Merchant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Merchant.BP_Merchant_C
// 0x0058 (0x06F0 - 0x0698)
class ABP_Merchant_C : public ACompanyShopkeeper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommodityRedemptionComponent*               CommodityRedemption;                                      // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEmissaryMaxRankQuestProvider*               EmissaryMaxRankQuestProvider;                             // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCargoRunParticipantComponent*               CargoRunParticipant;                                      // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialogSellCrate;                                       // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMerchantCrateProviderComponent*             MerchantCrateProvider;                                    // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      cmp_pocket_watch_mrh_01_e;                                // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Merchant.BP_Merchant_C"));
		return ptr;
	}


	void UserConstructionScript();
	void PlayItemAnimation();
	void ExecuteUbergraph_BP_Merchant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
