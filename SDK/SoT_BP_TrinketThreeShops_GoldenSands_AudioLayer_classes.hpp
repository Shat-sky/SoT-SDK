#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TrinketThreeShops_GoldenSands_AudioLayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TrinketThreeShops_GoldenSands_AudioLayer.BP_TrinketThreeShops_GoldenSands_AudioLayer_C
// 0x0030 (0x03F8 - 0x03C8)
class ABP_TrinketThreeShops_GoldenSands_AudioLayer_C : public AActor
{
public:
	class UTritonComponent*                            Triton;                                                   // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       AudioPortal2;                                             // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       AudioPortal1;                                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       AudioPortal;                                              // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceComponent*                        AudioSpace;                                               // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TrinketThreeShops_GoldenSands_AudioLayer.BP_TrinketThreeShops_GoldenSands_AudioLayer_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif