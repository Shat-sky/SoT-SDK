#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Adv12_Hideout_AudioLayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Adv12_Hideout_AudioLayer.BP_Adv12_Hideout_AudioLayer_C
// 0x0030 (0x03F8 - 0x03C8)
class ABP_Adv12_Hideout_AudioLayer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioSpaceComponent*                        AudioSpace;                                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       AudioPortal;                                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TavernFire_Play;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TavernFire_Stop;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Adv12_Hideout_AudioLayer.BP_Adv12_Hideout_AudioLayer_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Adv12_Hideout_AudioLayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif