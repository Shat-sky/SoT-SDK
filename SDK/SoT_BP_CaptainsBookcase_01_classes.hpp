#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptainsBookcase_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaptainsBookcase_01.BP_CaptainsBookcase_01_C
// 0x0060 (0x06C8 - 0x0668)
class ABP_CaptainsBookcase_01_C : public ACaptainsBookcase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0668(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        OrderOfSouls_ScrollStack;                                 // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MerchantsAliance_ScrollStack;                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mercenary_ScrollStack;                                    // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Legendary_ScrollStack;                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GoldHoarder_ScrollStack;                                  // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MergedBookcaseAndDressing;                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Company_GH;                                               // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Company_MA;                                               // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Company_OoS;                                              // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Company_Leg;                                              // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Company_Merc;                                             // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CaptainsBookcase_01.BP_CaptainsBookcase_01_C"));
		return ptr;
	}


	void UserConstructionScript();
	void GatherIndicators();
	void ExecuteUbergraph_BP_CaptainsBookcase_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
